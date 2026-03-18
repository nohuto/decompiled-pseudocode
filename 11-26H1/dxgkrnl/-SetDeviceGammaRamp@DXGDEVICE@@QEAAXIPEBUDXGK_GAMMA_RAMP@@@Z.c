/*
 * XREFs of ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14007597C
 * Callers:
 *     DxgkSetGammaRamp @ 0x1401C60B0 (DxgkSetGammaRamp.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DXGDEVICE::SetDeviceGammaRamp(DXGDEVICE *this, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v4; // rsi
  ReferenceCounted *v6; // rcx

  v4 = a2;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 614;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 614LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v6 = (ReferenceCounted *)*((_QWORD *)this + v4 + 197);
  if ( v6 )
    ReferenceCounted::Release(v6);
  *((_QWORD *)this + v4 + 197) = a3;
}
