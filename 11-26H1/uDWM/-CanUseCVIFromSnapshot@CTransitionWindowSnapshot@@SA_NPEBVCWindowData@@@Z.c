/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180032BE0
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NAEBUtagRECT@@@Z @ 0x1800E51A0 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NAEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  char v1; // r11
  const struct tagRECT *v2; // rdx
  CWindowSnapshot *v4; // rcx

  v1 = 0;
  v2 = (const struct tagRECT *)((char *)a1 + ((*((_DWORD *)a1 + 186) & 0x1000000) != 0 ? 748LL : 48LL));
  if ( (*((_BYTE *)a1 + 740) & 8) != 0 )
  {
    v4 = (CWindowSnapshot *)*((_QWORD *)a1 + 60);
    if ( v4 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(v4, v2);
  }
  return v1;
}
