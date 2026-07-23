/*
 * XREFs of MiEnumerateBadHugeRangePages @ 0x1406F0104
 * Callers:
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x14052FA68 (MiEnumerateQuarantinedBadHugeRangePages.c)
 * Callees:
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 */

__int64 __fastcall MiEnumerateBadHugeRangePages(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  _QWORD **v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *i; // rcx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int128 v17; // [rsp+60h] [rbp-10h]

  v3 = (_QWORD *)qword_140E2ECE0;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v14[0] = a1;
  v17 = 0LL;
  v14[1] = a2;
  while ( v3 )
  {
    v5 = (unsigned __int64)v3;
    v3 = (_QWORD *)*v3;
  }
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8LL * (*(_DWORD *)(v5 + 24) & 0x3FFFFF)) & 7) == 4 )
      {
        if ( (a3 & 1) != 0 )
        {
          DWORD2(v17) = 0;
          goto LABEL_10;
        }
      }
      else if ( (a3 & 2) != 0 )
      {
        DWORD2(v17) = 1;
LABEL_10:
        *((_QWORD *)&v13 + 1) = *(_QWORD *)(v5 + 32);
        *(_QWORD *)&v12 = 0x40000LL;
        v7 = *(_QWORD *)(v5 + 32);
        *(_QWORD *)&v13 = 0x40000LL;
        *((_QWORD *)&v12 + 1) = v7 + 0x8000;
        *(_QWORD *)&v17 = &v12;
        v15 = v5;
        if ( (int)MiWalkAllBitmapRanges((unsigned __int64 *)&v13, (__int64)MiHugeRangeCountBad, (__int64)v14) < 0 )
          return v16;
      }
      v8 = *(_QWORD ***)(v5 + 8);
      v9 = v5;
      if ( v8 )
      {
        v5 = *(_QWORD *)(v5 + 8);
        for ( i = *v8; i; i = (_QWORD *)*i )
          v5 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(_QWORD *)v5 == v9 )
            break;
          v9 = v5;
        }
      }
      if ( !v5 )
        return v16;
    }
  }
  return v4;
}
