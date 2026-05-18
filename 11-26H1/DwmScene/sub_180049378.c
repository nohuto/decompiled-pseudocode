/*
 * XREFs of sub_180049378 @ 0x180049378
 * Callers:
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180049028 @ 0x180049028 (sub_180049028.c)
 */

_QWORD *__fastcall sub_180049378(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  _QWORD *result; // rax

  v6 = sub_18001C514(40LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    sub_180049028((_QWORD *)(v6 + 16), a2, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 16;
  result = a1;
  a1[1] = v7;
  return result;
}
