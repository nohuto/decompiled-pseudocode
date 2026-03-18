/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x140017FD0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1400185B4 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x140018B30 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14002C5D8 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     McTemplateK0pqqtq_EtwWriteTransfer @ 0x140054888 (McTemplateK0pqqtq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        unsigned int a6)
{
  struct VIDSCH_FLIP_QUEUE *v6; // r13
  enum _VIDSCH_FLIP_STATUS *v7; // r14
  __int64 v9; // r12
  LARGE_INTEGER *v10; // rbx
  struct _VIDSCH_CALL_EXECUTE_FLIP *v11; // rdi
  __int64 v12; // r15
  LARGE_INTEGER v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // ecx
  unsigned int v20; // r11d
  unsigned int v21; // r10d
  __int64 v22; // r14
  char v23; // cl
  bool v24; // zf
  int v25; // eax
  int v26; // r12d
  unsigned int v27; // r13d
  char v28; // cl
  int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // rax
  char v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rcx
  _QWORD *v39; // rdx
  char v40; // cl
  int v41; // eax
  int v42; // eax
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  char v47[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+44h] [rbp-BCh]
  unsigned int v49; // [rsp+48h] [rbp-B8h]
  struct _VIDSCH_GLOBAL *v50; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+5Ch] [rbp-A4h]
  struct VIDSCH_FLIP_QUEUE *v53; // [rsp+60h] [rbp-A0h]
  char v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+69h] [rbp-97h]
  __int16 v56; // [rsp+6Dh] [rbp-93h]
  char v57; // [rsp+6Fh] [rbp-91h]
  struct VIDSCH_FLIP_QUEUE *v58; // [rsp+70h] [rbp-90h]
  struct _VIDSCH_CALL_EXECUTE_FLIP *v59; // [rsp+78h] [rbp-88h]
  enum _VIDSCH_FLIP_STATUS *v60; // [rsp+80h] [rbp-80h]
  __int64 v61[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  __int64 v65[10]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a5;
  v9 = a2;
  v58 = a3;
  v10 = (LARGE_INTEGER *)((char *)a3 + 1400 * a6);
  v59 = a4;
  v49 = a2;
  v11 = a4;
  v60 = a5;
  v48 = a6;
  v12 = a6;
  memset(v65, 0, sizeof(v65));
  v13 = v10[148];
  v64 = 0LL;
  *(_OWORD *)v61 = 0LL;
  *(_OWORD *)v62 = 0LL;
  v63 = 0LL;
  if ( v13.QuadPart && v13.QuadPart < *((_QWORD *)v6 + 12) )
  {
    v44 = *((int *)v6 + 21);
    g_DxgMmsBugcheckExportIndex = 1;
    v16 = WdLogSingleEntry5(0LL, 281LL, 36864LL, v9, v44, a6);
    WdLogGlobalForLineNumber = 916;
LABEL_64:
    v45 = *((_QWORD *)a1 + 2);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, v16, v11, v45);
    WdLogGlobalForLineNumber = 916;
LABEL_65:
    v46 = v12;
    LOBYTE(v46) = *((_BYTE *)a1 + 67) != (unsigned __int8)v12;
    *((_DWORD *)v11 + 4) = v46 + 1;
LABEL_57:
    v42 = *((_DWORD *)v11 + 4);
    if ( (v42 & 2) == 0 )
    {
      if ( (v42 & 1) != 0 )
      {
        v53 = v58;
        v51 = v48;
        v55 = v12;
        v56 = v12;
        v57 = v12;
        v50 = a1;
        v52 = v9;
        v54 = (char)v6;
        VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v50);
        if ( (v10[159].LowPart & 0x10) != 0 )
          v43 = ((unsigned __int16)*(_DWORD *)v10[164].QuadPart | (unsigned __int16)(*(_DWORD *)v10[164].QuadPart >> 10)) & 0x3FF;
        else
          v43 = (1 << *((_DWORD *)a1 + 40)) - 1;
        *(_DWORD *)(*((_QWORD *)a1 + v9 + 431) + 3252LL) |= v43;
        return;
      }
      goto LABEL_8;
    }
LABEL_45:
    if ( Microsoft_Windows_DxgKrnlEnableBits < (char)v12 )
      McTemplateK0pqqtq_EtwWriteTransfer(
        v19,
        v17,
        v18,
        *((_QWORD *)a1 + 2),
        v9,
        v10[146].LowPart,
        (*((_DWORD *)v11 + 4) & 2) != 0,
        v19);
    return;
  }
  *((LARGE_INTEGER *)v6 + 12) = v13;
  LOBYTE(v6) = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(a1, (char)v6, (__int64)v65, (__int64)v61, (__int64)v62);
  if ( !*((_DWORD *)v11 + 5) )
  {
    v12 = 0LL;
    *((_DWORD *)v11 + 530) = 0;
    WdLogSingleEntry2(4LL, v9, (*(_DWORD *)v10[164].QuadPart >> 10) & 0x3FF);
    WdLogGlobalForLineNumber = 21574;
    goto LABEL_31;
  }
  if ( (v10[159].LowPart & 0x1000) != 0 )
  {
    v12 = 0LL;
    *((_DWORD *)v11 + 530) = 0;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 21581;
    goto LABEL_31;
  }
  v14 = *((unsigned int *)a1 + 10);
  v15 = *((_QWORD *)a1 + 4);
  v47[0] = 0;
  v16 = DpSynchronizeExecution(v15, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, v11, v14, v47);
  if ( v16 < 0 )
    goto LABEL_64;
  v19 = *((_DWORD *)v11 + 530);
  v12 = 0LL;
  if ( v19 == -1073741267 )
  {
    if ( *((_DWORD *)v11 + 4) )
      goto LABEL_57;
    goto LABEL_65;
  }
  if ( v19 == -2147483631 )
    goto LABEL_45;
LABEL_8:
  if ( (v10[159].LowPart & 0x1000) == 0 )
  {
    v20 = *(_DWORD *)v10[164].QuadPart & 0x3FF;
    if ( *((_BYTE *)a1 + 164) == (_BYTE)v12 )
      v21 = v12;
    else
      v21 = (*(_DWORD *)v10[164].QuadPart >> 10) & 0x3FF;
    v22 = v49;
    v23 = -1;
    v24 = !_BitScanForward((unsigned int *)&v25, v20);
    v26 = v12;
    if ( !v24 )
      v23 = v25;
    v27 = v23;
    v28 = -1;
    v24 = !_BitScanForward((unsigned int *)&v29, v21);
    if ( !v24 )
      v28 = v29;
    v30 = v28;
    while ( v20 || v21 )
    {
      v31 = v30;
      if ( v27 < v30 )
        v31 = v27;
      *(_QWORD *)(*((_QWORD *)a1 + v22 + 431) + 304 * v31 + 392) = *(_QWORD *)((unsigned int)(8
                                                                                            * v26
                                                                                            * (*(_DWORD *)(v10[164].QuadPart + 8)
                                                                                             + 28))
                                                                             + v10[164].QuadPart
                                                                             + 32);
      if ( v27 >= v30 )
      {
        v40 = -1;
        v21 &= ~(1 << v30);
        v24 = !_BitScanForward((unsigned int *)&v41, v21);
        if ( !v24 )
          v40 = v41;
        v30 = v40;
      }
      else
      {
        v32 = -1;
        v20 &= ~(1 << v27);
        v24 = !_BitScanForward((unsigned int *)&v33, v20);
        if ( !v24 )
          v32 = v33;
        v27 = v32;
      }
      ++v26;
    }
    v11 = v59;
    v7 = v60;
    LODWORD(v9) = v49;
  }
  if ( *((_BYTE *)a1 + 67) != (_BYTE)v12 )
    v10[181] = KeQueryPerformanceCounter(0LL);
  v34 = *((_QWORD *)a1 + (unsigned int)v9 + 431);
  v35 = *(_QWORD **)(v10[145].QuadPart + 48);
  v36 = *((unsigned int *)v11 + 10);
  if ( (_DWORD)v36 == -1 )
  {
    ++v35[346];
    ++*(_QWORD *)(v34 + 78896);
  }
  else if ( !(_DWORD)v36 || (_DWORD)v36 == *(_DWORD *)(v34 + 83096) )
  {
    ++v35[344];
    v35[348] += v36;
    ++*(_QWORD *)(v34 + 78880);
    *(_QWORD *)(v34 + 78912) += v36;
  }
  else if ( *(_DWORD *)(v34 + 83092) <= 1u )
  {
    ++v35[345];
    v35[349] += v36;
    ++*(_QWORD *)(v34 + 78888);
    *(_QWORD *)(v34 + 78920) += v36;
  }
  else
  {
    ++v35[347];
    v35[351] += v36;
    ++*(_QWORD *)(v34 + 78904);
    *(_QWORD *)(v34 + 78936) += v36;
  }
LABEL_31:
  *(_DWORD *)v7 = 11;
  while ( (unsigned int)v12 < *((_DWORD *)v11 + 5) )
  {
    v37 = *(_QWORD *)(*((_QWORD *)v11 + 3) + 8 * v12);
    v38 = (_DWORD *)(v37 + 20);
    if ( (*(_DWORD *)(v37 + 16) & 4) != 0 && (*v38 & 1) == 0 )
    {
      *(_DWORD *)v7 = 5;
      goto LABEL_38;
    }
    if ( (*v38 & 4) != 0 )
      *(_DWORD *)v7 = 15;
    v12 = (unsigned int)(v12 + 1);
  }
  if ( *(_DWORD *)v7 == 11 )
  {
    v39 = (_QWORD *)*((_QWORD *)a1 + (unsigned int)v9 + 431);
    *((_QWORD *)v11 + 267) = v39[5546];
    *((_QWORD *)v11 + 266) = v39[5544];
    *((_QWORD *)v11 + 269) = v39[5547];
    *((_QWORD *)v11 + 268) = v39[5545];
  }
LABEL_38:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))VidSchiLogMmIoFlipMultiPlaneOverlay3)(
    a1,
    &v10[15],
    v11,
    *(unsigned int *)v7,
    v10[149].LowPart,
    (LARGE_INTEGER)v10[179].QuadPart);
}
