/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1403C3450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(unsigned int *a1)
{
  __int64 DxgAdapter; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  _QWORD *v5; // r12
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+90h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-60h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 183;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      183LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(*((_QWORD *)a1 + 1));
  v3 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_15;
  if ( !*(_QWORD *)(DxgAdapter + 3168) )
  {
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 199;
  }
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 136))
      && *(struct _KTHREAD **)(v4 + 152) != KeGetCurrentThread()
      && *(int *)(v4 + 160) <= 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v4, 0LL, 0LL);
      WdLogGlobalForLineNumber = 216;
    }
    v5 = (_QWORD *)*((_QWORD *)a1 + 3);
    if ( v5 )
    {
      if ( *(int *)(v3 + 2776) >= 9472 )
        v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = 0LL;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, unsigned int, _DWORD, _DWORD, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 3168) + 760LL) + 8LL) + 608LL))(
           *(_QWORD *)(*(_QWORD *)(v3 + 3168) + 768LL),
           a1[20],
           *a1,
           v4,
           v5,
           *((_QWORD *)a1 + 4),
           *((_QWORD *)a1 + 5),
           a1[12],
           *((unsigned __int16 *)a1 + 24),
           *((unsigned __int16 *)a1 + 25),
           a1[13],
           a1[14],
           a1[16],
           a1[15],
           a1[16],
           a1[17],
           a1 + 18);
    if ( v8[0] )
      KeUnstackDetachProcess(&ApcState);
    return v6;
  }
  else
  {
LABEL_15:
    if ( v8[0] )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
}
