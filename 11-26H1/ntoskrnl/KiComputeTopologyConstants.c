/*
 * XREFs of KiComputeTopologyConstants @ 0x1405FE4E8
 * Callers:
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 * Callees:
 *     KiComputeTopologyConstantsAmd @ 0x1405FE5CC (KiComputeTopologyConstantsAmd.c)
 *     KiComputeTopologyConstantsIntelCompatible @ 0x1405FE85C (KiComputeTopologyConstantsIntelCompatible.c)
 */

__int64 __fastcall KiComputeTopologyConstants(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        __int128 *a5,
        int *a6)
{
  __int64 result; // rax
  int *v8; // r9
  int v9; // ecx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  result = (unsigned int)(a1 - 2);
  v8 = a6;
  *(_OWORD *)a6 = 0LL;
  *((_OWORD *)a6 + 1) = 0LL;
  if ( (unsigned int)result <= 1 )
  {
    v11 = *a5;
    result = KiComputeTopologyConstantsIntelCompatible(a1, a2, &v11);
  }
  else if ( (_DWORD)a1 == 1 )
  {
    v10 = *a4;
    v11 = *a5;
    result = KiComputeTopologyConstantsAmd(a3, &v11, &v10);
  }
  v9 = *v8;
  v8[1] = *v8;
  if ( (v9 & 1) == 0 )
  {
    v9 |= 1u;
    v8[2] = 1;
    *v8 = v9;
  }
  if ( (v9 & 2) == 0 )
  {
    v9 |= 2u;
    v8[3] = 1;
    *v8 = v9;
  }
  if ( (v9 & 4) == 0 )
  {
    result = (unsigned int)v8[3];
    v9 |= 4u;
    *v8 = v9;
    v8[4] = result;
  }
  if ( (v9 & 8) == 0 )
  {
    result = (unsigned int)v8[2];
    v9 |= 8u;
    *v8 = v9;
    v8[5] = result;
  }
  if ( (v9 & 0x20) == 0 )
  {
    result = (unsigned int)(v8[4] * v8[2]);
    *v8 = v9 | 0x20;
    v8[7] = result;
  }
  return result;
}
