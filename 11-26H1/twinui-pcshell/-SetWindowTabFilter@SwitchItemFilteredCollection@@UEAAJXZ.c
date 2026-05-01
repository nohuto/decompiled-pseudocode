/*
 * XREFs of ?SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1804B43F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804B47D0 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::SetWindowTabFilter(SwitchItemFilteredCollection *this)
{
  SwitchItemFilteredCollection *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (SwitchItemFilteredCollection *)((char *)this - 168);
  *((_BYTE *)v1 + 280) = 1;
  v2 = SwitchItemFilteredCollection::_ApplyFilterToAllItems(v1);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
