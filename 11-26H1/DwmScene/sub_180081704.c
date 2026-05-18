/*
 * XREFs of sub_180081704 @ 0x180081704
 * Callers:
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_1800816B4 @ 0x1800816B4 (sub_1800816B4.c)
 */

_QWORD *__fastcall sub_180081704(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001C514(88LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
    sub_1800816B4(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
