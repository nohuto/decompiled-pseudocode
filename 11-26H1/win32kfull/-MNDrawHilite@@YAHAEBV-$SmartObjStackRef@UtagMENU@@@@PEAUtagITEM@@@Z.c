/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000BCD4
 * Callers:
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14000B280 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x140257344 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 */

__int64 __fastcall MNDrawHilite(__int64 a1, struct tagITEM *a2)
{
  unsigned int v2; // ebx
  struct tagMENU *v5; // rcx

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 4LL) & 0xC0000080) == 0x80 )
  {
    v5 = *(struct tagMENU **)(a1 + 16);
    if ( !v5 )
      v5 = **(struct tagMENU ***)a1;
    if ( (unsigned int)MNIsUAHMenu(v5) || !(unsigned int)MNIsCachedBmpOnly(a2) )
      return 1;
  }
  return v2;
}
