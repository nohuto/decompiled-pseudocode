/*
 * XREFs of VidSchiLogInterrupt @ 0x140029538
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x140028AB0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x14004B920 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

char __fastcall VidSchiLogInterrupt(__int64 a1, int *a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v6; // edx
  __int64 v7; // r9
  char v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  LARGE_INTEGER *v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // cf
  __int64 v16; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v3 = &retaddr;
  v6 = *a2;
  v7 = 0xFFFFFFFFLL;
  v8 = a3;
  switch ( v6 )
  {
    case 1:
      v9 = a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + a1 + 96);
      goto LABEL_3;
    case 2:
      v9 = a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + a1 + 96);
      goto LABEL_3;
    case 9:
      v9 = a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + a1 + 96);
LABEL_3:
      v10 = *(__int64 **)(a1 + 696);
      v11 = (unsigned int)v9;
      if ( (unsigned int)v9 < *(_DWORD *)(a1 + 768) )
        v10 += v9;
LABEL_5:
      v12 = *v10;
      v13 = (LARGE_INTEGER *)(*(_QWORD *)(v12 + 200) + 96LL * *(unsigned int *)(v12 + 212));
      memset(v13, 0, 0x60uLL);
      v13[10] = KeQueryPerformanceCounter(0LL);
      BYTE3(v13[11].QuadPart) = 1;
      v14 = (*(_DWORD *)(v12 + 212) + 1) & (unsigned int)(*(_DWORD *)(v12 + 208) - 1);
      *(_DWORD *)(v12 + 212) = v14;
      LOBYTE(v13[11].LowPart) = v8;
      v15 = _bittest64(*(const signed __int64 **)(a1 + 656), v11);
LABEL_6:
      BYTE2(v13[11].u.LowPart) = !v15;
      LOBYTE(v3) = *(_DWORD *)(v12 + 16) == 1;
      BYTE1(v13[11].LowPart) = (_BYTE)v3;
      *(_OWORD *)&v13->LowPart = *(_OWORD *)a2;
      *(_OWORD *)&v13[2].LowPart = *((_OWORD *)a2 + 1);
      *(_OWORD *)&v13[4].LowPart = *((_OWORD *)a2 + 2);
      *(_OWORD *)&v13[6].LowPart = *((_OWORD *)a2 + 3);
      *(_OWORD *)&v13[8].LowPart = *((_OWORD *)a2 + 4);
      v7 = *(unsigned __int16 *)(v12 + 4);
      goto LABEL_7;
    case 11:
LABEL_12:
      v10 = *(__int64 **)(a1 + 696);
      v16 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 96);
      v11 = (unsigned int)v16;
      if ( (unsigned int)v16 < *(_DWORD *)(a1 + 768) )
        v10 += v16;
      goto LABEL_5;
    case 12:
      v9 = a2[10] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[11] + a1 + 96);
      goto LABEL_3;
    case 15:
    case 16:
      v9 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 96);
      goto LABEL_3;
  }
  v14 = (unsigned int)(v6 - 17);
  if ( v6 == 17 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 16LL);
    v13 = (LARGE_INTEGER *)(*(_QWORD *)(v12 + 200) + 96LL * *(unsigned int *)(v12 + 212));
    memset(v13, 0, 0x60uLL);
    v13[10] = KeQueryPerformanceCounter(0LL);
    BYTE3(v13[11].QuadPart) = 1;
    *(_DWORD *)(v12 + 212) = (*(_DWORD *)(v12 + 212) + 1) & (*(_DWORD *)(v12 + 208) - 1);
    LOBYTE(v13[11].LowPart) = v8;
    v14 = *(unsigned __int16 *)(v12 + 4);
    v15 = _bittest64(*(const signed __int64 **)(a1 + 656), v14);
    goto LABEL_6;
  }
  if ( v6 == 19 )
    goto LABEL_12;
LABEL_7:
  if ( (byte_14008A202 & 1) != 0 )
    LOBYTE(v3) = McTemplateK0dq_EtwWriteTransfer(v14, &NotifyInterruptCB, a3, v7, *a2);
  return (char)v3;
}
