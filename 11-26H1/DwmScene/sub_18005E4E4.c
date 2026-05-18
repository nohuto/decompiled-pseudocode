/*
 * XREFs of sub_18005E4E4 @ 0x18005E4E4
 * Callers:
 *     sub_1800433C4 @ 0x1800433C4 (sub_1800433C4.c)
 * Callees:
 *     sub_18005E3D0 @ 0x18005E3D0 (sub_18005E3D0.c)
 */

__int64 __fastcall sub_18005E4E4(__int64 *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( *(_QWORD *)(v6 + 40) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_QWORD *)(v6 + 40) )
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
    v8 = *(_QWORD *)(a2 + 8);
    do
    {
      v9 = v5;
      if ( v8 >= *(_QWORD *)(v5 + 40) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *(_QWORD *)(v5 + 40) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return sub_18005E3D0(a1, v11);
}
