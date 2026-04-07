/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18005F0F0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18005ED94 (--0CContactManager@@QEAA@XZ.c)
 *     ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18005EE98 (-NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  bool v2; // bl
  bool v3; // zf
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  pvParam = 0;
  if ( SystemParametersInfoW(0x2018u, 0, &pvParam, 0) )
  {
    v3 = pvParam == 0;
    *((_BYTE *)this + 324) = pvParam == 2;
    v2 = v3;
  }
  else
  {
    *((_BYTE *)this + 324) = 0;
  }
  *((_BYTE *)this + 325) = v2;
  return 0LL;
}
