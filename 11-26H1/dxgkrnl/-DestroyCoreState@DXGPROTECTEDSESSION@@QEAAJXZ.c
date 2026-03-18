/*
 * XREFs of ?DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401F973C
 * Callers:
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F9FE0 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z @ 0x1401AE364 (-DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::DestroyCoreState(DXGPROTECTEDSESSION *this)
{
  void *v2; // rdx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1076;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      1076LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    ADAPTER_DISPLAY::DdiDestroyProtectedSession(*((ADAPTER_DISPLAY **)this + 2), v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  return 0LL;
}
