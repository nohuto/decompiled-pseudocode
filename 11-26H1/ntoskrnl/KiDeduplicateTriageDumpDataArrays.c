/*
 * XREFs of KiDeduplicateTriageDumpDataArrays @ 0x1405EA7F8
 * Callers:
 *     KiGlobalDeduplicateTriageDumpData @ 0x1405EAE90 (KiGlobalDeduplicateTriageDumpData.c)
 * Callees:
 *     RtlULongSub @ 0x1404CF71C (RtlULongSub.c)
 *     KiCheckRangeOverlap @ 0x1405EA438 (KiCheckRangeOverlap.c)
 */

void __fastcall KiDeduplicateTriageDumpDataArrays(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int j; // r14d
  char v6; // al
  unsigned __int64 v7; // rcx
  int *v8; // r8
  __int64 v9; // r10
  char v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  ULONG *v15; // r8
  ULONG v16; // edx
  ULONG v17; // ecx
  unsigned __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  ULONG ulSubtrahend[2]; // [rsp+28h] [rbp-18h]
  __int128 i; // [rsp+30h] [rbp-10h] BYREF
  ULONG pulResult; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  pulResult = 0;
  for ( i = 0LL; v2 < a1[4]; ++v2 )
  {
    v18 = *(_QWORD *)&a1[4 * v2 + 12];
    *(_QWORD *)ulSubtrahend = *(_QWORD *)&a1[4 * v2 + 14];
    if ( *(_QWORD *)ulSubtrahend )
    {
      for ( j = 0; j < *(_DWORD *)(a2 + 16); ++j )
      {
        v6 = KiCheckRangeOverlap(&v18, (unsigned __int64 *)(a2 + 16 * (j + 3LL)), (unsigned __int64 *)&i);
        v7 = *(_QWORD *)&a1[4 * v2 + 14];
        if ( !*(_QWORD *)ulSubtrahend )
        {
          v15 = a1 + 6;
          v16 = -1;
          if ( v7 <= 0xFFFFFFFF )
            v16 = *(_QWORD *)&a1[4 * v2 + 14];
          v17 = *v15;
          pulResult = v16;
          RtlULongSub(v17, v16, v15);
          *(_QWORD *)&a1[4 * v2 + 12] = 0LL;
          *(_QWORD *)&a1[4 * v2 + 14] = 0LL;
          break;
        }
        if ( *(_QWORD *)ulSubtrahend != v7 )
        {
          if ( v6 && a1[4] == a1[5] )
            break;
          RtlULongSub(a1[4 * v2 + 14], ulSubtrahend[0], &pulResult);
          RtlULongSub(a1[6], pulResult, a1 + 6);
          *(_QWORD *)&a1[4 * v2 + 12] = v18;
          *(_QWORD *)&a1[4 * v2 + 14] = v9;
          if ( v10 )
          {
            v11 = *((_QWORD *)&i + 1);
            v12 = 2 * ((unsigned int)a1[4] + 3LL);
            *(_QWORD *)&a1[2 * v12] = i;
            v13 = -1;
            *(_QWORD *)&a1[2 * v12 + 2] = v11;
            LODWORD(v12) = *v8;
            ++a1[4];
            v14 = v11 + v12;
            if ( v14 >= (unsigned int)v11 )
              v13 = v14;
            *v8 = v13;
          }
        }
      }
    }
  }
}
