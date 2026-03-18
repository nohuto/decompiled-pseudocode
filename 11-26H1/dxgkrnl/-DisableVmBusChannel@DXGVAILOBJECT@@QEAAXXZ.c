/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x140080674
 * Callers:
 *     NtDxgkVailDisconnect @ 0x140211380 (NtDxgkVailDisconnect.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x14020DFC8 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(DXGVAILOBJECT *this)
{
  struct DXGVMBUSCHANNEL *v2; // rcx

  if ( !DXGFASTMUTEX::IsOwner((DXGVAILOBJECT *)((char *)this + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 353;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_VailMutex.IsOwner()", 353LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
  if ( v2 )
    DisableVmBusChannel(v2);
}
