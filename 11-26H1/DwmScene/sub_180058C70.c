/*
 * XREFs of sub_180058C70 @ 0x180058C70
 * Callers:
 *     sub_180086990 @ 0x180086990 (sub_180086990.c)
 *     sub_18008AA30 @ 0x18008AA30 (sub_18008AA30.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_180042B54 @ 0x180042B54 (sub_180042B54.c)
 *     sub_1800469BC @ 0x1800469BC (sub_1800469BC.c)
 *     sub_180055DB8 @ 0x180055DB8 (sub_180055DB8.c)
 *     sub_180055E5C @ 0x180055E5C (sub_180055E5C.c)
 *     sub_180055ED4 @ 0x180055ED4 (sub_180055ED4.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 *     sub_18007AB00 @ 0x18007AB00 (sub_18007AB00.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

bool __fastcall sub_180058C70(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  const void *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  const void *v9; // r8
  __int64 v10; // rdx
  const void *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  const void *v14; // r8
  float v15; // xmm6_4
  char v16; // al

  if ( !(unsigned __int8)sub_18007AB00() )
    return 0;
  v4 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         1);
  if ( !sub_180055DB8((__int64 *)(v4 + 104), (_QWORD *)(a1 + 104)) )
    return 0;
  if ( *(_DWORD *)(v4 + 128) != *(_DWORD *)(a1 + 128) )
    return 0;
  if ( *(_QWORD *)(v4 + 136) != *(_QWORD *)(a1 + 136) )
    return 0;
  if ( *(_QWORD *)(v4 + 152) != *(_QWORD *)(a1 + 152) )
    return 0;
  if ( *(_DWORD *)(v4 + 172) != *(_DWORD *)(a1 + 172) )
    return 0;
  if ( *(_DWORD *)(v4 + 176) != *(_DWORD *)(a1 + 176) )
    return 0;
  sub_1800148EC(a1 + 216);
  v6 = (const void *)sub_1800148EC(v5);
  if ( !sub_18001CFB0(v6, *(_QWORD *)(v8 + 16), v9, *(_QWORD *)(v7 + 16)) )
    return 0;
  sub_1800148EC(a1 + 248);
  v11 = (const void *)sub_1800148EC(v10);
  if ( !sub_18001CFB0(v11, *(_QWORD *)(v13 + 16), v14, *(_QWORD *)(v12 + 16)) )
    return 0;
  if ( *(_DWORD *)(v4 + 292) != *(_DWORD *)(a1 + 292) )
    return 0;
  if ( _mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 296), *(__m128 *)(a1 + 296))) )
    return 0;
  if ( *(float *)(v4 + 312) != *(float *)(a1 + 312) )
    return 0;
  if ( *(_DWORD *)(v4 + 316) != *(_DWORD *)(a1 + 316) )
    return 0;
  if ( *(float *)(v4 + 320) != *(float *)(a1 + 320) )
    return 0;
  if ( *(float *)(v4 + 324) != *(float *)(a1 + 324) )
    return 0;
  if ( *(float *)(v4 + 328) != *(float *)(a1 + 328) )
    return 0;
  sub_18005AE7C(v4);
  v15 = *(float *)(v4 + 332);
  sub_18005AE7C(a1);
  if ( v15 != *(float *)(a1 + 332)
    || *(_BYTE *)(v4 + 336) != *(_BYTE *)(a1 + 336)
    || *(float *)(v4 + 340) != *(float *)(a1 + 340)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)*(unsigned __int64 *)(v4 + 344))) & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(v4 + 352), (__m128)*(unsigned __int64 *)(a1 + 352))) & 3) != 3
    || *(_DWORD *)(v4 + 360) != *(_DWORD *)(a1 + 360)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(v4 + 364), (__m128)*(unsigned __int64 *)(a1 + 364))) & 3) != 3 )
  {
    return 0;
  }
  v16 = *(_BYTE *)(a1 + 388);
  if ( *(_BYTE *)(v4 + 388) )
  {
    if ( !v16 || !sub_180042B54((_DWORD *)(v4 + 372), (_DWORD *)(a1 + 372)) )
      return 0;
  }
  else if ( v16 )
  {
    return 0;
  }
  return *(float *)(v4 + 392) == *(float *)(a1 + 392)
      && *(float *)(v4 + 396) == *(float *)(a1 + 396)
      && *(float *)(v4 + 400) == *(float *)(a1 + 400)
      && *(float *)(v4 + 404) == *(float *)(a1 + 404)
      && *(float *)(v4 + 408) == *(float *)(a1 + 408)
      && !sub_180055ED4((__int64 *)(v4 + 416), (__int64 *)(a1 + 416))
      && *(_DWORD *)(v4 + 440) == *(_DWORD *)(a1 + 440)
      && *(_BYTE *)(v4 + 464) == *(_BYTE *)(a1 + 464)
      && *(_BYTE *)(v4 + 465) == *(_BYTE *)(a1 + 465)
      && *(_QWORD *)(v4 + 480) == *(_QWORD *)(a1 + 480)
      && *(_QWORD *)(v4 + 472) == *(_QWORD *)(a1 + 472)
      && *(_QWORD *)(v4 + 496) == *(_QWORD *)(a1 + 496)
      && *(_QWORD *)(v4 + 488) == *(_QWORD *)(a1 + 488)
      && *(_QWORD *)(v4 + 512) == *(_QWORD *)(a1 + 512)
      && *(_QWORD *)(v4 + 504) == *(_QWORD *)(a1 + 504)
      && *(_QWORD *)(v4 + 528) == *(_QWORD *)(a1 + 528)
      && *(_QWORD *)(v4 + 520) == *(_QWORD *)(a1 + 520)
      && *(_QWORD *)(v4 + 536) == *(_QWORD *)(a1 + 536)
      && !sub_180055E5C(v4 + 1616, a1 + 1616)
      && sub_1800469BC(*(_QWORD *)(v4 + 1696), *(_QWORD *)(a1 + 1696))
      && !*(_QWORD *)(v4 + 1760)
      && !*(_QWORD *)(a1 + 1760);
}
