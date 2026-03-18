/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401E47E0
 * Callers:
 *     xxxSetClassIcon @ 0x1402262F0 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x14005C6EC (SendDwmIconChange.c)
 *     DestroyWindowSmIcon @ 0x14006630C (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20) != 0 )
      DestroyWindowSmIcon(a1, a2);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) )
      xxxRedrawTitle(a1, 12LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
  }
  return 1LL;
}
