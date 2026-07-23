/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492234
 * Callers:
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492348 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0xCA0uLL);
  *(_BYTE *)(a1 + 2468) = 2;
  ST_STORE<SM_TRAITS>::StInitialize(a1);
  *(_QWORD *)(a1 + 2512) = a1 + 2504;
  *(_QWORD *)(a1 + 2504) = 0LL;
  *(_QWORD *)(a1 + 2528) = a1 + 2520;
  *(_QWORD *)(a1 + 2520) = 0LL;
  *(_QWORD *)(a1 + 2544) = a1 + 2536;
  *(_QWORD *)(a1 + 2536) = 0LL;
  *(_QWORD *)(a1 + 2496) = 0LL;
  *(_WORD *)(a1 + 2584) = 0;
  *(_BYTE *)(a1 + 2586) = 6;
  *(_DWORD *)(a1 + 2588) = 0;
  *(_QWORD *)(a1 + 2600) = a1 + 2592;
  *(_QWORD *)(a1 + 2592) = a1 + 2592;
  *(_WORD *)(a1 + 2560) = 0;
  *(_BYTE *)(a1 + 2562) = 6;
  *(_DWORD *)(a1 + 2564) = 0;
  *(_QWORD *)(a1 + 2576) = a1 + 2568;
  *(_QWORD *)(a1 + 2568) = a1 + 2568;
  *(_WORD *)(a1 + 2608) = 1;
  *(_BYTE *)(a1 + 2610) = 6;
  *(_DWORD *)(a1 + 2612) = 0;
  *(_QWORD *)(a1 + 2624) = a1 + 2616;
  *(_QWORD *)(a1 + 2616) = a1 + 2616;
  memset_0((void *)(a1 + 3080), 0, 0x78uLL);
  *(_BYTE *)(a1 + 3088) = 1;
  result = a1 + 3096;
  *(_BYTE *)(a1 + 3090) = 6;
  *(_QWORD *)(a1 + 3104) = a1 + 3096;
  *(_QWORD *)(a1 + 3096) = a1 + 3096;
  *(_QWORD *)(a1 + 3112) = 0LL;
  return result;
}
