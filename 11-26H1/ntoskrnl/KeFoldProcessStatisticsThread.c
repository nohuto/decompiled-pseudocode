/*
 * XREFs of KeFoldProcessStatisticsThread @ 0x14047E820
 * Callers:
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFoldProcessStatisticsThread(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9

  v1 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(v1 + 312) += *(unsigned int *)(a1 + 652);
  *(_QWORD *)(v1 + 320) += *(unsigned int *)(a1 + 732);
  *(_QWORD *)(v1 + 328) += *(unsigned int *)(a1 + 132);
  *(_QWORD *)(v1 + 288) += *(_QWORD *)(a1 + 72);
  *(_QWORD *)(v1 + 376) += *(_QWORD *)(a1 + 992);
  *(_QWORD *)(v1 + 384) += *(_QWORD *)(a1 + 1000);
  *(_QWORD *)(v1 + 296) += *(unsigned int *)(a1 + 340);
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 928), *(_QWORD *)(a1 + 896));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 936), *(_QWORD *)(a1 + 904));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 944), *(_QWORD *)(a1 + 912));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 952), *(_QWORD *)(a1 + 920));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 960), *(_QWORD *)(a1 + 928));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 968), *(_QWORD *)(a1 + 936));
  v2 = *(_QWORD *)(a1 + 1672);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v1 + 1640);
    v5 = *(_DWORD *)(v2 + 192);
    v6 = *(_DWORD *)(v4 + 272);
    if ( v5 > v6 )
    {
      *(_DWORD *)(v4 + 272) = v5;
      if ( v5 - v6 < 0x20 )
        LODWORD(result) = *(_DWORD *)(v4 + 276) << (v5 - v6);
      *(_DWORD *)(v4 + 276) = result;
      *(_DWORD *)(v4 + 276) = *(_DWORD *)(v2 + 196) | result;
    }
    else
    {
      v7 = v6 - v5;
      if ( v7 < 0x20 )
        *(_DWORD *)(v4 + 276) |= *(_DWORD *)(v2 + 196) << v7;
    }
    v8 = v2 - v4;
    v9 = 4LL;
    do
    {
      v10 = 2LL;
      do
      {
        *(_QWORD *)v4 += *(_QWORD *)(v8 + v4);
        *(_QWORD *)(v4 + 144) += *(_QWORD *)(v8 + v4 + 64);
        result = *(_QWORD *)(v8 + v4 + 128);
        *(_QWORD *)(v4 + 208) += result;
        v4 += 8LL;
        --v10;
      }
      while ( v10 );
      --v9;
    }
    while ( v9 );
  }
  return result;
}
