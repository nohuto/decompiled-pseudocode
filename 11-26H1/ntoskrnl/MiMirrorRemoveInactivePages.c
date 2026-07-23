/*
 * XREFs of MiMirrorRemoveInactivePages @ 0x1404C4D10
 * Callers:
 *     MiPurgeMirrorPacketPages @ 0x1406F4E70 (MiPurgeMirrorPacketPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x1404C5050 (MiGetBaseResidentPageForBugCheck.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiMirrorRemoveInactivePages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // ecx
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v16; // r14
  int v17; // r15d
  int PfnPageSizeIndex; // eax
  unsigned __int64 v19; // r10
  __int64 v20; // r8
  char v21; // [rsp+60h] [rbp+8h]
  _QWORD *v22; // [rsp+68h] [rbp+10h]

  v4 = *(_DWORD *)(a1 + 8);
  v21 = v4;
  v5 = a3;
  v6 = 48 * a2 - 0x220000000000LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -1LL;
  if ( !a3 )
    return v7;
  v10 = (_QWORD *)(v6 + 40);
  v22 = (_QWORD *)(v6 + 40);
  do
  {
    v11 = 1LL;
    if ( (*v10 & 0x10000000000LL) != 0 )
    {
      v16 = MiGetBaseResidentPageForBugCheck(v6, a2, 0xFFFFF68000000000uLL);
      v17 = *(_BYTE *)(v16 + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v16);
      v19 = *(_QWORD *)(v16 + 8);
      if ( v19 )
        v19 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
      v20 = (*(_QWORD *)(v16 + 40) >> 60) & 7LL;
      v14 = 0x2AAAAAAAAAAAAAABLL;
      a2 = (v6 + 0x220000000000LL) / 48;
      v11 = MiPageSizes[PfnPageSizeIndex] + (a2 & ~(MiPageSizes[PfnPageSizeIndex] - 1)) - a2;
      if ( v11 > v5 )
        v11 = v5;
      if ( (v17 & 0xFFFFFFFA) == 0 && v17 != 4 || v20 == 1 )
      {
        v10 = v22;
        goto LABEL_19;
      }
      if ( (v21 & 0x40) != 0 && v19 )
      {
        v10 = v22;
        if ( MiGetLeafVa(v19) < 0x7FFFFFFF0000LL )
          goto LABEL_19;
      }
      else
      {
        v10 = v22;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 34) & 7) != 6 )
        goto LABEL_18;
      if ( *(__int64 *)(v6 + 40) < 0 )
        goto LABEL_18;
      if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
        goto LABEL_18;
      a2 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (*(_BYTE *)(v6 + 34) & 7) == 6 )
      {
        a2 = 0x3FFFFFFFFELL;
        if ( (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
          goto LABEL_18;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v12 = *(_QWORD *)(v6 + 8);
        if ( v12 && ((*(_QWORD *)(v6 + 40) >> 60) & 7) != 1 )
          v12 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
        if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v13 = (__int64)(v12 << 25) >> 16;
          if ( (v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL) && v13 < 0x7FFFFFFF0000LL )
          {
LABEL_18:
            v14 = 0x2AAAAAAAAAAAAAABLL;
LABEL_19:
            if ( !v8 )
            {
              a2 = (unsigned __int128)((v6 + 0x220000000000LL) * (__int128)v14) >> 64;
              v9 = ((unsigned __int64)a2 >> 63) + (a2 >> 3);
            }
            v8 += v11;
            goto LABEL_22;
          }
        }
      }
    }
    if ( v8 )
    {
      v7 += v8;
      MiMirrorOmitPagesFromCopy(a1, 0LL, v9, v8);
      v8 = 0LL;
    }
LABEL_22:
    LOBYTE(v4) = v21;
    v6 += 48 * v11;
    v10 += 6 * v11;
    v22 = v10;
    v5 -= v11;
  }
  while ( v5 );
  if ( v8 )
  {
    v7 += v8;
    MiMirrorOmitPagesFromCopy(a1, 0LL, v9, v8);
  }
  return v7;
}
