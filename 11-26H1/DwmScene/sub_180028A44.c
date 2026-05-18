/*
 * XREFs of sub_180028A44 @ 0x180028A44
 * Callers:
 *     sub_1800283D0 @ 0x1800283D0 (sub_1800283D0.c)
 *     sub_180047350 @ 0x180047350 (sub_180047350.c)
 *     sub_18006B530 @ 0x18006B530 (sub_18006B530.c)
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 *     sub_180081B30 @ 0x180081B30 (sub_180081B30.c)
 *     sub_180083CF0 @ 0x180083CF0 (sub_180083CF0.c)
 *     sub_180084F90 @ 0x180084F90 (sub_180084F90.c)
 * Callees:
 *     sub_1800286EC @ 0x1800286EC (sub_1800286EC.c)
 */

__int64 __fastcall sub_180028A44(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_DWORD *)(v6 + 32) )
          v4 = v6;
        v2 = v6;
      }
      else
      {
        v6 += 16LL;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(_QWORD *)v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v8 = *a2;
    do
    {
      v9 = v5;
      if ( v8 >= *(_DWORD *)(v5 + 32) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *(_DWORD *)(v5 + 32) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return sub_1800286EC(a1, v11);
}
