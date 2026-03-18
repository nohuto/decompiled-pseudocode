/*
 * XREFs of ?SetTransform3D@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z @ 0x1801C59AC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetTransform3D(
        struct CResource **a1,
        struct CResource *a2)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)(a1 + 11);
  if ( a2 != a1[11] )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)a1, a1 + 11, a2);
    CResource::NotifyOnChanged((__int64)a1, 2u, *v2);
  }
  return 0LL;
}
