/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1???0CallWithHangTimeout@@QEAA@W4TimeoutDuration@2@@Z@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `CallWithHangTimeout::CallWithHangTimeout'::`2'::_lambda_1_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  int Ptr; // esi
  __int64 Ptr_low; // r8
  __int64 v6; // rdx
  int Ptr_high; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  if ( !IsDebuggerPresent() )
  {
    AcquireSRWLockShared(Context + 2);
    Ptr = (int)Context[3].Ptr;
    if ( Context != (RTL_SRWLOCK *)-16LL )
      ReleaseSRWLockShared(Context + 2);
    Ptr_low = LODWORD(Context[1].Ptr);
    Ptr_high = HIDWORD(Context[1].Ptr);
    if ( Ptr )
    {
      v8 = Ptr;
      v6 = 2LL;
    }
    else
    {
      v6 = 1LL;
    }
    ReportCoreHang(&Ptr_high, v6, Ptr_low, 32808LL);
  }
}
