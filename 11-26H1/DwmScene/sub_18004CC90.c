/*
 * XREFs of sub_18004CC90 @ 0x18004CC90
 * Callers:
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18004BD58 @ 0x18004BD58 (sub_18004BD58.c)
 */

_QWORD *__fastcall sub_18004CC90(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r11

  v4 = sub_18001C514(56LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderProgram>::`vftable';
    sub_18004BD58((_QWORD *)(v4 + 16), a2);
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 16;
  return a1;
}
