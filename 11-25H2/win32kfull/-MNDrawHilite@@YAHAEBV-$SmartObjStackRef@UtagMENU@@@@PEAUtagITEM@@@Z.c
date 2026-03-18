/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140040014
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1400406C0 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x14021F134 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 */

__int64 __fastcall MNDrawHilite(__int64 a1, struct tagITEM *a2)
{
  unsigned int v3; // ebx
  int v5; // ecx
  struct tagMENU *v7; // rcx

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( (v5 & 0x80u) != 0 && (v5 & 0xC0000000) == 0 )
  {
    v7 = *(struct tagMENU **)(a1 + 16);
    if ( !v7 )
      v7 = **(struct tagMENU ***)a1;
    if ( (unsigned int)MNIsUAHMenu(v7) || !(unsigned int)MNIsCachedBmpOnly(a2) )
      return 1;
  }
  return v3;
}
