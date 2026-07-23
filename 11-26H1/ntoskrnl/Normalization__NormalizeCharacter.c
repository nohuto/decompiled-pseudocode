/*
 * XREFs of Normalization__NormalizeCharacter @ 0x14080DFB8
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x14080D080 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x14080DDE8 (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x140621DDC (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x140621E0C (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x140621E44 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x140621E7C (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x140621F3C (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x140621FDC (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x14062213C (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x140622168 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1406221E0 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x14062220C (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140622268 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1406223B8 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14062243C (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1406224B4 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x14080D080 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14080D18C (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  int v8; // edx
  char v9; // r14
  unsigned __int8 v10; // bp
  int v11; // eax
  int v12; // r9d
  unsigned __int16 *v13; // rax
  int v14; // ecx
  unsigned __int8 v15; // r15
  char v16; // cl
  char v17; // al
  unsigned __int8 v18; // r15
  int CanCombinableCharactersCombine; // eax
  char v20; // dl
  bool v21; // zf
  int StartBasePair; // eax
  int v23; // eax
  __int64 v24; // rdx
  int StartBase; // eax
  int v26; // eax
  __int64 v27; // r10
  char v28; // r9
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  char v32; // di
  char v33; // r8
  char v34; // di
  char v35; // al
  int v36; // eax
  char v37; // di
  char v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  char v43; // al
  unsigned __int16 *v44; // r10
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // r10
  int v49; // edi
  int v50; // esi
  __int64 v51; // rcx
  unsigned __int16 v52; // di
  int LastChar; // eax
  unsigned int v54; // r9d
  int v55; // r9d
  unsigned __int16 *v56; // r8
  int v57; // edx
  unsigned int v58; // eax
  __int64 v59; // r8
  unsigned __int16 *v60; // r9

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        switch ( a3 )
        {
          case 0u:
            return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
          case 0xFBu:
            if ( !*(_BYTE *)(a1 + 113) )
              return 3221227287LL;
            v43 = NormBuffer__Append(a4, a2);
LABEL_94:
            if ( v43 )
            {
              *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
              *(_DWORD *)(a4 + 88) = a2;
LABEL_110:
              *(_WORD *)(a4 + 92) = 0;
              return 0LL;
            }
            return 3221225507LL;
          case 0xFCu:
            return 3221227287LL;
          case 0xFDu:
            return Normalization__AppendDecomposedChar(a1, a2, a4);
        }
        if ( a3 != 254 )
          break;
        v13 = *(unsigned __int16 **)(a4 + 16);
        if ( v13 == *(unsigned __int16 **)(a4 + 8) )
          return 3221227287LL;
        v14 = *v13;
        *(_QWORD *)(a4 + 16) = v13 + 1;
        if ( (unsigned __int16)(v14 + 9216) > 0x3FFu )
          return 3221227287LL;
        a2 = v14 + ((a2 - 55287) << 10);
        a3 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
      }
      if ( a3 != 255 )
        break;
      if ( a2 < 44032 )
      {
        if ( (unsigned int)(a2 - 4352) <= 0x12 )
        {
          v56 = *(unsigned __int16 **)(a4 + 16);
          if ( v56 != *(unsigned __int16 **)(a4 + 8) )
          {
            v57 = *v56;
            *(_QWORD *)(a4 + 16) = v56 + 1;
            v58 = ComposeHangulLV(a2, v57);
            v45 = v58;
            if ( !v58 )
            {
              *(_QWORD *)(a4 + 16) = v59;
              return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
            }
            a2 = v58;
            if ( v44 != v60 )
            {
LABEL_100:
              v46 = *v44;
              *(_QWORD *)(a4 + 16) = v44 + 1;
              v47 = ComposeHangulLVT(v45, v46);
              if ( !v47 )
              {
                *(_QWORD *)(a4 + 16) = v48;
                return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
              }
              goto LABEL_101;
            }
          }
          return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
        }
        if ( (unsigned int)(a2 - 4449) <= 0x14 )
        {
          if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
            return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
          NormBuffer__RewindOutputCharacter(a4);
          v47 = ComposeHangulLV(v55, a2);
LABEL_101:
          a2 = v47;
          return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
        }
        if ( (unsigned int)(a2 - 4520) <= 0x1A )
        {
          LastChar = NormBuffer__GetLastChar(a4);
          if ( !IsHangulLV(LastChar) )
            return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
          NormBuffer__RewindOutputCharacter(a4);
          v47 = ComposeHangulLVT(v54, (unsigned int)a2);
          goto LABEL_101;
        }
        if ( *(_DWORD *)a1 != 269 && *(_DWORD *)a1 != 13 || (unsigned int)(a2 - 4447) > 1 )
          goto LABEL_26;
LABEL_19:
        a3 = -5;
      }
      else
      {
        if ( a2 < 55204 )
        {
          if ( *(_BYTE *)(a1 + 112) == 1 )
          {
            v49 = a2 - 44032;
            if ( !NormBuffer__AppendEx(a4, (unsigned __int16)(v49 / 588 + 4352), 0, 0) )
              return 3221225507LL;
            v50 = (unsigned __int16)(v49 % 588 / 28 + 4449);
            if ( !NormBuffer__AppendEx(a4, v50, 0, 0) )
              return 3221225507LL;
            v52 = (unsigned __int16)(v49 % 28) != 0 ? v49 % 28 + 4519 : 0;
            if ( v52 )
            {
              if ( !NormBuffer__AppendEx(v51, v52, 0, 0) )
                return 3221225507LL;
              LOWORD(v50) = v52;
            }
            *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
            *(_DWORD *)(a4 + 88) = (unsigned __int16)v50;
            goto LABEL_110;
          }
          if ( IsHangulLV(a2) )
          {
            v44 = *(unsigned __int16 **)(a4 + 16);
            if ( v44 != *(unsigned __int16 **)(a4 + 8) )
            {
              v45 = (unsigned int)a2;
              goto LABEL_100;
            }
          }
          return NormBuffer__Append(a4, a2) == 0 ? 0xC0000023 : 0;
        }
        if ( (unsigned int)(a2 - 55216) > 0x16 && (unsigned int)(a2 - 55243) > 0x30 )
          goto LABEL_19;
LABEL_26:
        a3 = 0;
      }
    }
    v8 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)a3 << 7) + *(_QWORD *)(a1 + 40) - 128);
    if ( !(_BYTE)v8 )
      goto LABEL_93;
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
    if ( (v8 & 0x3F) != 0 && v10 != 63 )
    {
      if ( (v8 & 0x80) == 0 )
      {
        if ( !NormBuffer__AppendEx(a4, a2, v8 & 0x3F, v8 & 0xC0) )
          return 3221225507LL;
        *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
        *(_DWORD *)(a4 + 88) = a2;
        *(_BYTE *)(a4 + 92) = v10;
        *(_BYTE *)(a4 + 93) = v9;
        return 0LL;
      }
      NormBuffer__GetLastChar(a4);
      v15 = *(_BYTE *)(a4 + 72);
      if ( !v15 || v15 == 63 || (v16 = *(_BYTE *)(a4 + 73)) == 0 || v16 == 64 )
      {
        v16 = *(_BYTE *)(a4 + 73);
        *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = v15;
        *(_BYTE *)(a4 + 93) = v16;
        *(_QWORD *)(a4 + 96) = 0LL;
      }
      if ( v9 == (char)0x80 || !*(_WORD *)(a4 + 92) || (*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) == -64 )
      {
        NormBuffer__IsBlocked((_QWORD *)a4);
        goto LABEL_44;
      }
      if ( !v15 || v15 == 63 )
      {
        if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
        {
          NormBuffer__RewindOutputCharacter(a4);
          a2 = v39;
          v40 = *(_QWORD *)(a1 + 40);
          v41 = (v39 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v39 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
          v9 = *(_BYTE *)(v41 + v40 - 128) & 0xC0;
          v10 = *(_BYTE *)(v41 + v40 - 128) & 0x3F;
        }
LABEL_89:
        v17 = NormBuffer__AppendEx(a4, a2, v10, v9);
LABEL_90:
        if ( !v17 )
          return 3221225507LL;
        return 0LL;
      }
      if ( v16 )
      {
        if ( v16 != 64 )
        {
          if ( NormBuffer__IsBlocked((_QWORD *)a4) )
          {
LABEL_44:
            v17 = NormBuffer__InsertAtBlockedLocation((_QWORD *)a4, a2, v10, v9);
            goto LABEL_90;
          }
          v18 = *(_BYTE *)(a4 + 92);
          if ( !v18 || v18 == 63 || *(_BYTE *)(a4 + 93) == 64 )
          {
            CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
            if ( CanCombinableCharactersCombine )
            {
              v20 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                             + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                                     + *(_QWORD *)(a1 + 32)) << 7)
                             + *(_QWORD *)(a1 + 40)
                             - 128);
              *(_WORD *)(*(_QWORD *)(a4 + 80) - 2LL) = CanCombinableCharactersCombine;
              *(_DWORD *)(a4 + 88) = CanCombinableCharactersCombine;
              *(_BYTE *)(a4 + 93) = v20 & 0xC0;
              v21 = (v20 & 0xC0) == 64;
              *(_BYTE *)(a4 + 92) = v20 & 0x3F;
              goto LABEL_79;
            }
            if ( !v18 || v18 == 63 )
              goto LABEL_44;
          }
          if ( v18 <= v10 )
            goto LABEL_44;
          if ( v18 == *(_BYTE *)(a1 + 116) )
          {
            if ( v10 >= *(_BYTE *)(a1 + 114) )
            {
              if ( v10 != *(_BYTE *)(a1 + 115) )
                goto LABEL_44;
              goto LABEL_59;
            }
          }
          else if ( v18 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
          {
LABEL_59:
            StartBasePair = NormBuffer__LastStartBasePair(a4);
            v23 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
            v24 = v23;
            if ( !v23 )
              goto LABEL_44;
            goto LABEL_74;
          }
          StartBase = NormBuffer__LastStartBase(a4);
          v26 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
          if ( !v26 )
            goto LABEL_44;
LABEL_76:
          v37 = *(_BYTE *)((v26 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v26 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                         + *(_QWORD *)(a1 + 40)
                         - 128);
          v38 = v37 & 0x3F;
          v34 = v37 & 0xC0;
          v35 = NormBuffer__ReplaceLastStartBase(a4, v26, v38, v34);
          goto LABEL_77;
        }
        if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
        {
          NormBuffer__RewindOutputCharacter(a4);
          v28 = *(_BYTE *)((v27 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)((v27 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                         + *(_QWORD *)(a1 + 40)
                         - 128);
          if ( !NormBuffer__AppendEx(a4, v27, v28 & 0x3F, v28 & 0xC0) )
            return 3221225507LL;
          v29 = *(_QWORD *)(a4 + 64);
          *(_QWORD *)(a4 + 96) = 0LL;
          *(_QWORD *)(a4 + 80) = v29 + 2;
          *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
          *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
          *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
          return 0LL;
        }
      }
      if ( v15 <= v10 )
        goto LABEL_89;
      if ( v15 == *(_BYTE *)(a1 + 116) )
      {
        if ( v10 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v10 != *(_BYTE *)(a1 + 115) )
            goto LABEL_89;
LABEL_73:
          v30 = NormBuffer__LastStartBasePair(a4);
          v31 = Normalization__CanCombinableCharactersCombine(a1, v30, a2);
          v24 = v31;
          if ( !v31 )
            goto LABEL_89;
LABEL_74:
          v32 = *(_BYTE *)((v24 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)((v24 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                         + *(_QWORD *)(a1 + 40)
                         - 128);
          v33 = v32 & 0x3F;
          v34 = v32 & 0xC0;
          v35 = NormBuffer__ReplaceLastStartBasePair(a4, v24, v33, v34);
LABEL_77:
          if ( !v35 )
            return 3221225507LL;
          v21 = v34 == 64;
LABEL_79:
          if ( v21 )
            NormBuffer__RecheckStartCombinations(a4);
          return 0LL;
        }
      }
      else if ( v15 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
      {
        goto LABEL_73;
      }
      v36 = NormBuffer__LastStartBase(a4);
      v26 = Normalization__CanCombinableCharactersCombine(a1, v36, a2);
      if ( !v26 )
        goto LABEL_89;
      goto LABEL_76;
    }
    if ( v8 == 127 )
    {
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_93:
      v43 = NormBuffer__AppendEx(a4, a2, 0, 0);
      goto LABEL_94;
    }
    if ( v8 == 191 )
      return Normalization__AppendDecomposedChar(a1, a2, a4);
    if ( v8 != 192 )
      break;
    v11 = NormBuffer__GetLastChar(a4);
    if ( !(unsigned int)Normalization__CanCombinableCharactersCombine(a1, v11, a2) )
      goto LABEL_89;
    NormBuffer__RewindOutputCharacter(a4);
    a2 = v12;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(a4 + 16) == *(_QWORD *)(a4 + 8) )
    goto LABEL_89;
  return 3221227287LL;
}
