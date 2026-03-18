/*
 * XREFs of ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x14020CB38
 * Callers:
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x14020F160 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x14021022C (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGVAILGUESTOBJECT::AddReference(DXGVAILGUESTOBJECT *this)
{
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)this + 18920LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2014;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pSessionData->GetVailGuestMutex()->IsOwner()",
      2014LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ++*((_DWORD *)this + 2);
}
