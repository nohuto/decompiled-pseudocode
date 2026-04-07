/*
 * XREFs of ?IsLauncherShownAboveRect@CImmersiveState@@QEAA_NAEBUtagRECT@@@Z @ 0x180099F6C
 * Callers:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180044E38 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180074BD4 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 */

bool __fastcall CImmersiveState::IsLauncherShownAboveRect(CImmersiveState *this, const struct tagRECT *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_BYTE *)this + 56) )
    return ContainsRect((const struct tagRECT *)((char *)this + 72), a2);
  return v2;
}
