/*
 * XREFs of sub_18008BB60 @ 0x18008BB60
 * Callers:
 *     sub_18008BE80 @ 0x18008BE80 (sub_18008BE80.c)
 *     sub_18008E2D0 @ 0x18008E2D0 (sub_18008E2D0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18008BC44 @ 0x18008BC44 (sub_18008BC44.c)
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18008BB60(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = sub_18001C514(400LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_18008BC44(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  v6 = a1 + 152;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v9 = *a2;
  v10 = a2[1];
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 == *(_QWORD *)(a1 + 168) )
    sub_18008BC50(v6, v7, &v9);
  else
    sub_1800119A4(v6, &v9);
  if ( v10 )
    sub_180010EC8(v10);
  return a2;
}
