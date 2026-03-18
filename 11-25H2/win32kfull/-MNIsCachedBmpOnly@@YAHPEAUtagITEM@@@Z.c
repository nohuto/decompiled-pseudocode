/*
 * XREFs of ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x14021F134
 * Callers:
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140040014 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNIsCachedBmpOnly(struct tagITEM *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x20000000) != 0 && !*((_QWORD *)a1 + 3) )
    return 1LL;
  return result;
}
