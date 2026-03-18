/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401F3E20
 * Callers:
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
