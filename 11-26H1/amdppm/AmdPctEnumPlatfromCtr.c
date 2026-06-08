/*
 * XREFs of AmdPctEnumPlatfromCtr @ 0x1400026B0
 * Callers:
 *     AmdPctSnapPlatformCtrsEx @ 0x1400023CC (AmdPctSnapPlatformCtrsEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPctEnumPlatfromCtr(__int64 a1, int a2, __int64 a3)
{
  int v4; // r9d
  int v6; // edx
  _BYTE *v7; // rcx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r11
  _QWORD *v11; // r9
  __int64 v13; // rbp
  __int64 v14; // rbx

  v4 = a2 + *(_DWORD *)(a1 + 1248);
  if ( v4 < 3 )
  {
    v6 = 0;
    if ( v4 >= 0 )
      v6 = v4;
    if ( v6 < *(_DWORD *)(a1 + 1252) )
    {
      v9 = v6;
      v8 = v6 - 2;
      v13 = *(int *)(a1 + 1252);
      v10 = 40LL * v6;
      v11 = (_QWORD *)((char *)&unk_140015008 + 48 * v6);
      do
      {
        v7 = 0LL;
        if ( v9 >= 0 )
        {
          if ( v9 >= 2 )
          {
            if ( v9 < 3 )
            {
              v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
              if ( v14 )
                v7 = (_BYTE *)(v14 + 40LL * v8);
            }
          }
          else
          {
            v7 = (_BYTE *)((*(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL) + v10) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL) != 0LL));
          }
        }
        if ( *v7 && *v11 == a3 )
          break;
        ++v6;
        ++v8;
        ++v9;
        v10 += 40LL;
        v11 += 6;
      }
      while ( v9 < v13 );
    }
  }
  else
  {
    return 3;
  }
  return (unsigned int)v6;
}
