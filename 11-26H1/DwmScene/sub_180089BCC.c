/*
 * XREFs of sub_180089BCC @ 0x180089BCC
 * Callers:
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18008A438 @ 0x18008A438 (sub_18008A438.c)
 */

_QWORD *__fastcall sub_180089BCC(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001C514(24LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = a2;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
  }
  *a1 = a2;
  a1[1] = v4;
  v6 = 0LL;
  sub_18008A438(&v6);
  return a1;
}
