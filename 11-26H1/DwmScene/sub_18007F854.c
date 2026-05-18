/*
 * XREFs of sub_18007F854 @ 0x18007F854
 * Callers:
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 *     sub_18007F994 @ 0x18007F994 (sub_18007F994.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_18007F854(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-18h] BYREF

  v4 = sub_18001C514(192LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayout>::`vftable';
    sub_18007F994(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  sub_180029C50(a1 + 808, (__int64)v11);
  v6 = (_QWORD *)(a1 + 864);
  v10 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = *(_QWORD *)(a1 + 872);
  if ( v8 == *(_QWORD *)(a1 + 880) )
    sub_1800119CC(v6, v8, &v10);
  else
    sub_1800119A4((__int64)v6, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v10 + 1));
  sub_180011E54((__int64)v11);
  sub_180032FE0(a1, *a2, 1);
  return a2;
}
