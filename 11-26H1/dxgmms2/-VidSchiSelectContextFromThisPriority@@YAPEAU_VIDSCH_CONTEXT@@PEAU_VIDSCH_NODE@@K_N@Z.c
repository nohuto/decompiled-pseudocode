/*
 * XREFs of ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140024900
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1400230C0 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1400252A0 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiIsQuantumLeft @ 0x14002558C (VidSchiIsQuantumLeft.c)
 *     McTemplateK0qpiixi_EtwWriteTransfer @ 0x140054938 (McTemplateK0qpiixi_EtwWriteTransfer.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContextFromThisPriority(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        char a3)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // rdi
  char v5; // r13
  int v7; // r9d
  bool v8; // r14
  __int64 v9; // r8
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // ecx
  __int64 *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  __int64 **v21; // rax
  unsigned int v23; // esi
  _QWORD **v24; // r14
  _QWORD *i; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  char v31; // [rsp+98h] [rbp+10h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0LL;
  v5 = 0;
  v30 = 0LL;
  v7 = *(_DWORD *)(v3 + 2824) & 8;
  v8 = v7 && a3;
  v9 = a2;
  v32 = a2;
  v10 = (_QWORD *)*((_QWORD *)a1 + 2 * a2 + 273);
  v11 = v10 - 1;
  v12 = *((_QWORD *)a1 + 2 * a2 + 274) - 8LL;
  if ( v10 - 1 == (_QWORD *)v12 )
  {
    if ( v8 )
    {
      if ( (unsigned int)VidSchiIsQuantumLeft(v10 - 1, &v30, a2) )
      {
        return (struct _VIDSCH_CONTEXT *)v30;
      }
      else if ( (byte_14008A201 & 1) != 0 )
      {
        v28 = v11[7];
        if ( !v28 || (v11[14] & 0x40) != 0 )
          LODWORD(v28) = (_DWORD)v10 - 8;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v28,
          v11[57],
          v11[59],
          *((unsigned __int16 *)a1 + 2),
          v28,
          v11[60],
          v11[56],
          v11[59],
          v11[57]);
      }
    }
    else
    {
      v4 = (volatile signed __int32 *)(v10 - 1);
      if ( !v7 || gulPriorityToYieldPriorityBand[*((unsigned int *)v11 + 103)] )
      {
        *((_BYTE *)v11 + 648) = 1;
      }
      else
      {
        v27 = v11[12];
        v31 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v27 + 24) + 32LL),
          VidSchiResetContextQuantumAtISR,
          v10 - 1,
          *(unsigned int *)(*(_QWORD *)(v27 + 24) + 40LL),
          &v31);
      }
    }
    return (struct _VIDSCH_CONTEXT *)v4;
  }
  while ( 1 )
  {
    v13 = v10[11];
    v14 = (volatile signed __int32 *)(v10 - 1);
    v15 = *((_DWORD *)v10 + 46);
    v16 = v10;
    v10 = (_QWORD *)*v10;
    v30 = v13;
    LODWORD(v13) = _InterlockedCompareExchange(v14 + 111, (v15 >> 1) & 1, 3);
    v17 = *((_QWORD *)v14 + 12);
    if ( (_DWORD)v13 != 2 )
      break;
    v31 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v17 + 24) + 32LL),
      VidSchiResetContextQuantumAtISR,
      v14,
      *(unsigned int *)(*(_QWORD *)(v17 + 24) + 40LL),
      &v31);
    v18 = *v16;
    if ( *(__int64 **)(*v16 + 8) != v16
      || (v19 = (__int64 **)v16[1], *v19 != v16)
      || (*v19 = (__int64 *)v18,
          *(_QWORD *)(v18 + 8) = v19,
          v20 = 16LL * *((unsigned int *)v14 + 103) + v30 + 2184,
          v21 = *(__int64 ***)(v20 + 8),
          *v21 != (__int64 *)v20) )
    {
      __fastfail(3u);
    }
    *v16 = v20;
    v16[1] = (__int64)v21;
    *v21 = v16;
    *(_QWORD *)(v20 + 8) = v16;
    if ( v8 )
    {
      v5 = 0;
      if ( (byte_14008A201 & 1) != 0 )
      {
        v29 = *((_QWORD *)v14 + 7);
        if ( !v29 || (v14[28] & 0x40) != 0 )
          LODWORD(v29) = (_DWORD)v14;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v29,
          *((_QWORD *)v14 + 57),
          *((_QWORD *)v14 + 59),
          *((unsigned __int16 *)a1 + 2),
          v29,
          *((_QWORD *)v14 + 60),
          *((_QWORD *)v14 + 56),
          *((_QWORD *)v14 + 59),
          *((_QWORD *)v14 + 57));
      }
    }
    else
    {
      v5 = 1;
    }
    if ( v14 == (volatile signed __int32 *)v12 )
      goto LABEL_21;
  }
  v23 = 0;
  v24 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 13) + 48LL) + 32LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v17 + 24) + 4LL))
                  + 216LL);
LABEL_16:
  if ( v23 >= 2 )
  {
    v4 = v14;
    goto LABEL_21;
  }
  for ( i = *v24; ; i = (_QWORD *)*i )
  {
    if ( i == v24 )
    {
      ++v23;
      goto LABEL_16;
    }
    v4 = (volatile signed __int32 *)(i - 53);
    if ( *(i - 41) == *((_QWORD *)v14 + 12) )
      break;
LABEL_25:
    ;
  }
  if ( _InterlockedCompareExchange(v4 + 111, (*((_DWORD *)v4 + 48) >> 1) & 1, 3) == 2 )
  {
    v26 = *((_QWORD *)v4 + 12);
    v31 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v26 + 24) + 32LL),
      VidSchiResetContextQuantumAtISR,
      i - 53,
      *(unsigned int *)(*(_QWORD *)(v26 + 24) + 40LL),
      &v31);
    goto LABEL_25;
  }
  if ( v4 != v14 )
  {
    LOBYTE(v9) = 1;
    VidSchiSetTransferContextRunningTime(i - 53, v14, v9);
  }
LABEL_21:
  if ( v5 && !v4 )
    return (struct _VIDSCH_CONTEXT *)(*((_QWORD *)a1 + 2 * v32 + 273) - 8LL);
  return (struct _VIDSCH_CONTEXT *)v4;
}
