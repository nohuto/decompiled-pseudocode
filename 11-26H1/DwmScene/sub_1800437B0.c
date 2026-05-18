/*
 * XREFs of sub_1800437B0 @ 0x1800437B0
 * Callers:
 *     sub_180043738 @ 0x180043738 (sub_180043738.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_180042664 @ 0x180042664 (sub_180042664.c)
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800437B0(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int128 v16; // [rsp+50h] [rbp-10h]
  __int16 v17; // [rsp+98h] [rbp+38h] BYREF

  v17 = a2;
  *(_DWORD *)(*(_QWORD *)sub_180042664((__int64 *)(a1 + 200), (__int64)&v14, &v17) + 32LL) = 1;
  v7 = (_QWORD *)sub_180012BF8(a1 + 96, &v14);
  v8 = sub_18001C514(56LL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
    sub_1800424DC(v8 + 16, v7);
  }
  else
  {
    v9 = 0LL;
  }
  v11[0] = v9 + 16;
  v11[1] = v9;
  v16 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, _QWORD *))sub_18006BF04)(a4, v12, a3, v11);
  if ( v13 )
    result = sub_180010EC8(v13);
  if ( v15 )
    return sub_180010EC8(v15);
  return result;
}
