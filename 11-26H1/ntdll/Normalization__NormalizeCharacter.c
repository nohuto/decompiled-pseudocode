/*
 * XREFs of Normalization__NormalizeCharacter @ 0x1800AE3FC
 * Callers:
 *     Normalization__Normalize @ 0x1800AE150 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x1800AED34 (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x1800AEC60 (NormBuffer__AppendEx.c)
 *     NormBuffer__Append @ 0x1800AECC0 (NormBuffer__Append.c)
 *     Normalization__AppendDecomposedChar @ 0x1800AED34 (Normalization__AppendDecomposedChar.c)
 *     NormBuffer__GetLastChar @ 0x1800AF40C (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1800AF5A4 (NormBuffer__IsBlocked.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1800AF630 (NormBuffer__InsertAtBlockedLocation.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800AF660 (Normalization__CanCombinableCharactersCombine.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800AF7D0 (NormBuffer__RecheckStartCombinations.c)
 *     IsHangulLV @ 0x1800AF9AC (IsHangulLV.c)
 *     NormBuffer__LastStartBasePair @ 0x1800AF9E8 (NormBuffer__LastStartBasePair.c)
 *     ComposeHangulLVT @ 0x1800AFA44 (ComposeHangulLVT.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800AFA7C (NormBuffer__RewindOutputCharacter.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800AFB0C (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800AFB94 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__LastStartBase @ 0x180120B30 (NormBuffer__LastStartBase.c)
 *     ComposeHangulLV @ 0x180121B24 (ComposeHangulLV.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  int v8; // edx
  char v9; // r14
  unsigned __int8 v10; // bp
  char v12; // al
  unsigned __int16 *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r10
  __int64 v18; // rdx
  unsigned __int8 v19; // r15
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  unsigned int StartBasePair; // eax
  int v26; // eax
  __int64 v27; // rdx
  signed int v28; // edi
  unsigned __int16 v29; // si
  unsigned __int16 v30; // di
  unsigned __int8 v31; // r15
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // r9
  unsigned __int64 v36; // r8
  char v37; // di
  char v38; // di
  char v39; // al
  int CanCombinableCharactersCombine; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int16 *v46; // rax
  int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // r9
  __int64 v51; // r8
  char v52; // di
  bool v53; // zf
  unsigned int StartBase; // eax
  char v55; // dl
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned int v60; // r8d
  unsigned int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // r10
  unsigned __int64 v66; // r8
  unsigned __int8 v67; // r9
  __int64 v68; // rax
  unsigned __int16 *v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // r8
  unsigned int LastChar; // eax
  __int64 v74; // rdx
  unsigned int v75; // r8d

  v4 = a4;
  v5 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        switch ( v5 )
        {
          case 0u:
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
          case 0xFBu:
            if ( !*(_BYTE *)(a1 + 113) )
              return 3221227287LL;
            v12 = NormBuffer__Append(v4, a2);
LABEL_14:
            if ( !v12 )
              return 3221225507LL;
            *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
            *(_DWORD *)(v4 + 88) = a2;
            goto LABEL_17;
          case 0xFCu:
            return 3221227287LL;
          case 0xFDu:
            return Normalization__AppendDecomposedChar(a1, a2, v4);
        }
        if ( v5 != 254 )
          break;
        v46 = *(unsigned __int16 **)(v4 + 16);
        if ( v46 == *(unsigned __int16 **)(v4 + 8) )
          return 3221227287LL;
        v47 = *v46;
        *(_QWORD *)(v4 + 16) = v46 + 1;
        if ( (unsigned __int16)(v47 + 9216) > 0x3FFu )
          return 3221227287LL;
        a2 = v47 + ((a2 - 55287) << 10);
        v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
      }
      if ( v5 != 255 )
        break;
      if ( (int)a2 < 44032 )
      {
        if ( a2 - 4352 <= 0x12 )
        {
          v69 = *(unsigned __int16 **)(v4 + 16);
          if ( v69 == *(unsigned __int16 **)(v4 + 8) )
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
          v70 = *v69;
          *(_QWORD *)(v4 + 16) = v69 + 1;
          v71 = ComposeHangulLV(a2, v70);
          v14 = v71;
          if ( !v71 )
          {
            *(_QWORD *)(v4 + 16) = v72;
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
          }
          a2 = v71;
          if ( v13 == *(unsigned __int16 **)(v4 + 8) )
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
LABEL_27:
          v15 = *v13;
          *(_QWORD *)(v4 + 16) = v13 + 1;
          v16 = ComposeHangulLVT(v14, v15);
          if ( !v16 )
          {
            *(_QWORD *)(v4 + 16) = v17;
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
          }
LABEL_112:
          a2 = v16;
          return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
        }
        if ( a2 - 4449 <= 0x14 )
        {
          LastChar = NormBuffer__GetLastChar(v4);
          if ( LastChar - 4352 > 0x12 )
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
          NormBuffer__RewindOutputCharacter(v4, v74, LastChar);
          v16 = ComposeHangulLV(v75, a2);
          goto LABEL_112;
        }
        if ( a2 - 4520 <= 0x1A )
        {
          v56 = NormBuffer__GetLastChar(v4);
          if ( !(unsigned __int8)IsHangulLV(v56, v57, v56) )
            return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
          NormBuffer__RewindOutputCharacter(v4, v58, v59);
          v16 = ComposeHangulLVT(v60, a2);
          goto LABEL_112;
        }
        if ( *(_DWORD *)a1 != 269 && *(_DWORD *)a1 != 13 || a2 - 4447 > 1 )
          goto LABEL_40;
LABEL_128:
        v5 = -5;
      }
      else
      {
        if ( (int)a2 < 55204 )
        {
          if ( *(_BYTE *)(a1 + 112) != 1 )
          {
            if ( !(unsigned __int8)IsHangulLV(a2, v5, a3) )
              return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
            v13 = *(unsigned __int16 **)(v4 + 16);
            if ( v13 == *(unsigned __int16 **)(v4 + 8) )
              return (unsigned __int8)NormBuffer__Append(v4, a2) == 0 ? 0xC0000023 : 0;
            v14 = a2;
            goto LABEL_27;
          }
          v28 = a2 - 44032;
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)(v28 / 588 + 4352), 0LL, 0LL) )
            return 3221225507LL;
          v29 = v28 % 588 / 28 + 4449;
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v29, 0LL, 0LL) )
            return 3221225507LL;
          v30 = (unsigned __int16)(v28 % 28) != 0 ? v28 % 28 + 4519 : 0;
          if ( v30 )
          {
            if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v30, 0LL, 0LL) )
              return 3221225507LL;
            v29 = v30;
          }
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = v29;
LABEL_17:
          *(_WORD *)(v4 + 92) = 0;
          return 0LL;
        }
        if ( a2 - 55216 > 0x16 && a2 - 55243 > 0x30 )
          goto LABEL_128;
LABEL_40:
        v5 = 0;
      }
    }
    v8 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
    if ( !(_BYTE)v8 )
      goto LABEL_13;
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
    if ( (v8 & 0x3F) != 0 && v10 != 63 )
    {
      if ( (v8 & 0x80) == 0 )
      {
        LOBYTE(a4) = v8 & 0xC0;
        LOBYTE(a3) = v8 & 0x3F;
        if ( (unsigned __int8)NormBuffer__AppendEx(v4, a2, a3, a4) )
        {
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = a2;
          *(_BYTE *)(v4 + 92) = v10;
          *(_BYTE *)(v4 + 93) = v9;
          return 0LL;
        }
        return 3221225507LL;
      }
      NormBuffer__GetLastChar(v4);
      v19 = *(_BYTE *)(v4 + 72);
      if ( !v19 || v19 == 63 || (v21 = *(_BYTE *)(v4 + 73)) == 0 || v21 == 64 )
      {
        v20 = *(_QWORD *)(v4 + 64);
        *(_BYTE *)(v4 + 92) = v19;
        *(_QWORD *)(v4 + 80) = v20 + 2;
        *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
        v21 = *(_BYTE *)(v4 + 73);
        *(_BYTE *)(v4 + 93) = v21;
        *(_QWORD *)(v4 + 96) = 0LL;
      }
      if ( v9 == (char)0x80 || !*(_WORD *)(v4 + 92) || (*(_BYTE *)(v4 + 92) | *(_BYTE *)(v4 + 93)) == -64 )
      {
        LOBYTE(v18) = v10;
        NormBuffer__IsBlocked(v4, v18);
        goto LABEL_34;
      }
      if ( !v19 || v19 == 63 )
      {
        CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                           a1,
                                           *(unsigned int *)(v4 + 88),
                                           a2);
        a3 = CanCombinableCharactersCombine;
        if ( CanCombinableCharactersCombine )
        {
          NormBuffer__RewindOutputCharacter(v4, v41, CanCombinableCharactersCombine);
          v43 = v42 >> 7;
          a2 = v42;
          a3 = v42 & 0x7F;
          v44 = *(_QWORD *)(a1 + 40);
          v45 = a3 + ((unsigned __int64)*(unsigned __int8 *)(v43 + *(_QWORD *)(a1 + 32)) << 7);
          v9 = *(_BYTE *)(v45 + v44 - 128) & 0xC0;
          v10 = *(_BYTE *)(v45 + v44 - 128) & 0x3F;
        }
        goto LABEL_51;
      }
      if ( !v21 )
        goto LABEL_46;
      if ( v21 == 64 )
      {
        if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2) )
        {
          NormBuffer__RewindOutputCharacter(v4, v64, a3);
          v66 = (v65 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v65 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
          v67 = *(_BYTE *)(v66 + *(_QWORD *)(a1 + 40) - 128);
          LOBYTE(v66) = v67 & 0x3F;
          if ( (unsigned __int8)NormBuffer__AppendEx(v4, (unsigned int)v65, v66, v67 & 0xC0) )
          {
            v68 = *(_QWORD *)(v4 + 64);
            *(_QWORD *)(v4 + 96) = 0LL;
            *(_QWORD *)(v4 + 80) = v68 + 2;
            *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
            *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
            *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
            return 0LL;
          }
          return 3221225507LL;
        }
LABEL_46:
        if ( v19 <= v10 )
          goto LABEL_51;
        if ( v19 == *(_BYTE *)(a1 + 116) )
        {
          if ( v10 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v10 == *(_BYTE *)(a1 + 115) )
              goto LABEL_50;
LABEL_51:
            LOBYTE(a4) = v9;
            LOBYTE(a3) = v10;
            v24 = NormBuffer__AppendEx(v4, a2, a3, a4);
LABEL_35:
            if ( v24 )
              return 0LL;
            return 3221225507LL;
          }
        }
        else if ( v19 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
        {
LABEL_50:
          StartBasePair = NormBuffer__LastStartBasePair(v4);
          v26 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
          v27 = v26;
          if ( !v26 )
            goto LABEL_51;
          goto LABEL_75;
        }
        StartBase = NormBuffer__LastStartBase(v4);
        v49 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
        if ( !v49 )
          goto LABEL_51;
LABEL_91:
        v50 = v49 & 0x7F;
        v51 = v50 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v49 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v52 = *(_BYTE *)(v51 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v51) = v52 & 0x3F;
        v38 = v52 & 0xC0;
        LOBYTE(v50) = v38;
        v39 = NormBuffer__ReplaceLastStartBase(v4, v49, v51, v50);
        goto LABEL_92;
      }
      LOBYTE(v18) = v10;
      if ( !(unsigned __int8)NormBuffer__IsBlocked(v4, v18) )
      {
        v31 = *(_BYTE *)(v4 + 92);
        if ( v31 )
        {
          if ( v31 != 63 && *(_BYTE *)(v4 + 93) != 64 )
            goto LABEL_70;
        }
        v32 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
        if ( v32 )
        {
          v55 = *(_BYTE *)((v32 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v32 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                         + *(_QWORD *)(a1 + 40)
                         - 128);
          *(_WORD *)(*(_QWORD *)(v4 + 80) - 2LL) = v32;
          *(_DWORD *)(v4 + 88) = v32;
          *(_BYTE *)(v4 + 93) = v55 & 0xC0;
          v53 = (v55 & 0xC0) == 64;
          *(_BYTE *)(v4 + 92) = v55 & 0x3F;
          goto LABEL_104;
        }
        if ( v31 && v31 != 63 )
        {
LABEL_70:
          if ( v31 > v10 )
          {
            if ( v31 == *(_BYTE *)(a1 + 116) )
            {
              if ( v10 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v10 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_34;
                goto LABEL_74;
              }
            }
            else if ( v31 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
            {
LABEL_74:
              v33 = NormBuffer__LastStartBasePair(v4);
              v34 = Normalization__CanCombinableCharactersCombine(a1, v33, a2);
              v27 = v34;
              if ( v34 )
              {
LABEL_75:
                v35 = v27 & 0x7F;
                v36 = v35 + ((unsigned __int64)*(unsigned __int8 *)((v27 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
                v37 = *(_BYTE *)(v36 + *(_QWORD *)(a1 + 40) - 128);
                LOBYTE(v36) = v37 & 0x3F;
                v38 = v37 & 0xC0;
                LOBYTE(v35) = v38;
                v39 = NormBuffer__ReplaceLastStartBasePair(v4, v27, v36, v35);
LABEL_92:
                if ( !v39 )
                  return 3221225507LL;
                v53 = v38 == 64;
LABEL_104:
                if ( v53 )
                  NormBuffer__RecheckStartCombinations(v4);
                return 0LL;
              }
              goto LABEL_34;
            }
            v48 = NormBuffer__LastStartBase(v4);
            v49 = Normalization__CanCombinableCharactersCombine(a1, v48, a2);
            if ( v49 )
              goto LABEL_91;
          }
        }
      }
LABEL_34:
      LOBYTE(v23) = v9;
      LOBYTE(v22) = v10;
      v24 = NormBuffer__InsertAtBlockedLocation(v4, a2, v22, v23);
      goto LABEL_35;
    }
    if ( v8 == 127 )
    {
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_13:
      v12 = NormBuffer__AppendEx(v4, a2, 0LL, 0LL);
      goto LABEL_14;
    }
    if ( v8 == 191 )
      return Normalization__AppendDecomposedChar(a1, a2, v4);
    if ( v8 != 192 )
      break;
    v61 = NormBuffer__GetLastChar(v4);
    v62 = Normalization__CanCombinableCharactersCombine(a1, v61, a2);
    a3 = v62;
    if ( !v62 )
      goto LABEL_51;
    NormBuffer__RewindOutputCharacter(v4, v63, v62);
    a2 = a3;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    goto LABEL_51;
  return 3221227287LL;
}
