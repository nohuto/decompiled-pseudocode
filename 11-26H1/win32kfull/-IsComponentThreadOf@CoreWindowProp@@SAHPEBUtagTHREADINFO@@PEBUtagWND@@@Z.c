/*
 * XREFs of ?IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14024233C
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x14003A3D0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsComponentThreadOf(const struct tagTHREADINFO *a1, const struct tagWND *a2)
{
  __int64 v3; // rdx
  _QWORD *i; // rbx
  const struct tagWND *v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a2, &v7) )
  {
    for ( i = *(_QWORD **)(v7 + 40); i; i = (_QWORD *)*i )
    {
      v5 = (const struct tagWND *)i[1];
      if ( v5
        && (unsigned int)CoreWindowProp::IsComponent(v5, v3)
        && a1 == *(const struct tagTHREADINFO **)(i[1] + 16LL) )
      {
        return 1LL;
      }
    }
  }
  return 0LL;
}
