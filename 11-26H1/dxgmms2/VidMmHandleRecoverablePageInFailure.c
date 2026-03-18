/*
 * XREFs of VidMmHandleRecoverablePageInFailure @ 0x14010048C
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     VidMmFlushDeferredEvictions @ 0x14010065C (VidMmFlushDeferredEvictions.c)
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 */

__int64 VidMmHandleRecoverablePageInFailure(__int64 *a1, int a2, __int64 a3, ...)
{
  __int64 v3; // r15
  int v7; // r9d
  unsigned int v8; // ebx
  char v9; // r13
  _DWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v19; // [rsp+90h] [rbp+28h]
  __int64 v20; // [rsp+98h] [rbp+30h]
  __int64 v21; // [rsp+A0h] [rbp+38h]
  _DWORD *v22; // [rsp+A8h] [rbp+40h]
  _QWORD *v23; // [rsp+B0h] [rbp+48h]
  va_list va1; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _DWORD *);
  v23 = va_arg(va1, _QWORD *);
  v3 = *a1;
  v8 = 0;
  if ( (unsigned __int8)VidMmFlushDeferredEvictions() )
  {
    ++*((_DWORD *)a1 + 96);
    return 0LL;
  }
  v9 = v21;
  v10 = **(_DWORD ***)a3;
  v11 = (*(_DWORD *)(*(_QWORD *)v10 + 52LL) >> 2) & 0x3F;
  v12 = *(_QWORD *)(*(_QWORD *)(v3 + 40320) + 8 * v11);
  if ( *(char *)(v12 + 558) < 0
    && (*(_DWORD *)(v3 + 6984) & 0x2000) == 0
    && ((**(_DWORD **)(a3 + 96) & 0x20000) == 0 || *(char *)(v12 + 557) < 0)
    && (v10[6] & 0x10) == 0
    && (unsigned __int8)VidMmDemoteAllocationsToFitGlobalAlloc((_DWORD)a1, (_DWORD)v10, a2, v7, v21) )
  {
    ++*((_DWORD *)a1 + 97);
    return 0LL;
  }
  v14 = v20;
  v15 = 0LL;
  v17 = 0LL;
  if ( !*(_BYTE *)(v20 + 8) )
  {
    if ( v19 && *(_DWORD *)(v19 + 48) == 203 )
      v16 = *(_DWORD *)(v19 + 80);
    else
      v16 = 0;
    if ( (unsigned __int8)VidMmSuspendDevices((_DWORD)a1, **(_QWORD **)a3, a2, v20, v9, v16, (__int64)va) )
    {
      ++*((_DWORD *)a1 + 98);
      return 0LL;
    }
    v15 = v17;
  }
  if ( (**(_DWORD **)(a3 + 96) & 0x20000) != 0
    && *(char *)(*(_QWORD *)(*(_QWORD *)(v3 + 40320) + 8 * v11) + 557LL) >= 0
    && !*(_BYTE *)(v14 + 8) )
  {
    goto LABEL_15;
  }
  if ( *(_DWORD *)v14 != 2 )
  {
LABEL_12:
    result = v8;
    *v22 = *(_DWORD *)v14;
    return result;
  }
  if ( !v15 )
  {
LABEL_15:
    v8 = -1073741823;
    goto LABEL_12;
  }
  *v23 = v15;
  return 3223191812LL;
}
