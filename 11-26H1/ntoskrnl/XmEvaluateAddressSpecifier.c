/*
 * XREFs of XmEvaluateAddressSpecifier @ 0x1404A1CE8
 * Callers:
 *     XmGroup2ByByte @ 0x1404A10C0 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x1404A1540 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404A15E0 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1404A1BB0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A1C20 (XmGroup1General.c)
 *     XmBitScanGeneral @ 0x1405AE740 (XmBitScanGeneral.c)
 *     XmEffectiveOffset @ 0x1405AE7D0 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x1405AE850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1405AE900 (XmGeneralRegister.c)
 *     XmGroup2By1 @ 0x1405AE980 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405AE9E0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x1405AEA40 (XmGroup3General.c)
 *     XmGroup7General @ 0x1405AEAE0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405AEB40 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1405AEC90 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405AED10 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1405AEDE0 (XmMoveImmediate.c)
 *     XmMoveSegment @ 0x1405AEE30 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x1405AEEA0 (XmMoveXxGeneral.c)
 *     XmPopGeneral @ 0x1405AEF50 (XmPopGeneral.c)
 *     XmSetccByte @ 0x1405AF0D0 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1405AF120 (XmShiftDouble.c)
 * Callees:
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmGetRegisterAddress @ 0x1404A1E5C (XmGetRegisterAddress.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 *     XmEvaluateIndexSpecifier @ 0x1405B0F38 (XmEvaluateIndexSpecifier.c)
 */

__int64 __fastcall XmEvaluateAddressSpecifier(__int64 a1, int *a2)
{
  unsigned int v3; // esi
  unsigned __int8 CodeByte; // al
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 result; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int16 v25; // bx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int LongImmediate; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  int v39; // esi
  int v40; // esi
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned __int16 WordImmediate; // ax
  __int16 v48; // cx
  unsigned __int16 v49; // cx
  char v50; // al
  __int16 v51; // cx
  __int16 v52; // bx
  unsigned __int16 v53; // ax
  __int16 v54; // cx
  unsigned __int16 v55; // cx
  char v56; // al
  __int16 v57; // cx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  __int16 v64; // bx
  __int16 v65; // bx
  __int64 v66; // rcx
  unsigned int v67; // r8d

  v3 = 0;
  CodeByte = XmGetCodeByte(a1);
  *(_BYTE *)(a1 + 142) = 0;
  *a2 = (CodeByte >> 3) & 7;
  v6 = CodeByte & 7 | (8 * (CodeByte >> 6));
  if ( *(_BYTE *)(a1 + 137) )
  {
    if ( v6 <= 0x10 )
    {
      if ( v6 == 16 )
      {
        v39 = *(_DWORD *)(a1 + 24);
        goto LABEL_70;
      }
      if ( v6 > 8 )
      {
        v33 = v6 - 9;
        if ( !v33 )
        {
          v3 = *(_DWORD *)(a1 + 28) + (char)XmGetCodeByte(a1);
          goto LABEL_21;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
          v3 = *(_DWORD *)(a1 + 32) + (char)XmGetCodeByte(a1);
          goto LABEL_21;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
          v3 = *(_DWORD *)(a1 + 36) + (char)XmGetCodeByte(a1);
          goto LABEL_21;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              if ( v38 == 1 )
                v3 = *(_DWORD *)(a1 + 52) + (char)XmGetCodeByte(a1);
            }
            else
            {
              v3 = *(_DWORD *)(a1 + 48) + (char)XmGetCodeByte(a1);
            }
            goto LABEL_21;
          }
          v3 = *(_DWORD *)(a1 + 44) + (char)XmGetCodeByte(a1);
          goto LABEL_101;
        }
      }
      else
      {
        if ( v6 == 8 )
        {
          v3 = *(_DWORD *)(a1 + 24) + (char)XmGetCodeByte(a1);
          goto LABEL_21;
        }
        if ( !v6 )
        {
          v3 = *(_DWORD *)(a1 + 24);
          goto LABEL_21;
        }
        v26 = v6 - 1;
        if ( !v26 )
        {
          v3 = *(_DWORD *)(a1 + 28);
          goto LABEL_21;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          v3 = *(_DWORD *)(a1 + 32);
          goto LABEL_21;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          v3 = *(_DWORD *)(a1 + 36);
          goto LABEL_21;
        }
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 == 1 )
                v3 = *(_DWORD *)(a1 + 52);
            }
            else
            {
              v3 = *(_DWORD *)(a1 + 48);
            }
            goto LABEL_21;
          }
          LongImmediate = XmGetLongImmediate(a1);
          goto LABEL_49;
        }
      }
    }
    else
    {
      if ( v6 > 0x18 )
        goto LABEL_4;
      if ( v6 == 24 )
        goto LABEL_10;
      v13 = v6 - 17;
      if ( !v13 )
      {
        v39 = *(_DWORD *)(a1 + 28);
        goto LABEL_70;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v39 = *(_DWORD *)(a1 + 32);
        goto LABEL_70;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v39 = *(_DWORD *)(a1 + 36);
        goto LABEL_70;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          v40 = *(_DWORD *)(a1 + 44);
          v3 = XmGetLongImmediate(a1) + v40;
          goto LABEL_101;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_21;
          v39 = *(_DWORD *)(a1 + 52);
        }
        else
        {
          v39 = *(_DWORD *)(a1 + 48);
        }
LABEL_70:
        v3 = XmGetLongImmediate(a1) + v39;
        goto LABEL_21;
      }
    }
    LongImmediate = XmEvaluateIndexSpecifier(a1);
LABEL_49:
    v3 = LongImmediate;
    goto LABEL_21;
  }
  if ( v6 <= 0x10 )
  {
    if ( v6 == 16 )
    {
      v64 = *(_WORD *)(a1 + 48);
      goto LABEL_128;
    }
    if ( v6 > 8 )
    {
      v58 = v6 - 9;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( v60 )
          {
            v61 = v60 - 1;
            if ( !v61 )
            {
              v55 = *(_WORD *)(a1 + 48) + (char)XmGetCodeByte(a1);
              goto LABEL_107;
            }
            v62 = v61 - 1;
            if ( !v62 )
            {
              v55 = *(_WORD *)(a1 + 52) + (char)XmGetCodeByte(a1);
              goto LABEL_107;
            }
            v63 = v62 - 1;
            if ( !v63 )
            {
              v48 = (char)XmGetCodeByte(a1);
LABEL_94:
              v49 = *(_WORD *)(a1 + 44) + v48;
LABEL_97:
              v3 = v49;
              goto LABEL_101;
            }
            if ( v63 != 1 )
              goto LABEL_21;
            v54 = (char)XmGetCodeByte(a1);
LABEL_105:
            v55 = *(_WORD *)(a1 + 36) + v54;
LABEL_107:
            v3 = v55;
            goto LABEL_21;
          }
          v50 = XmGetCodeByte(a1);
          v51 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v50 = XmGetCodeByte(a1);
          v51 = *(_WORD *)(a1 + 48);
        }
        v49 = v50 + *(_WORD *)(a1 + 44) + v51;
        goto LABEL_97;
      }
      v56 = XmGetCodeByte(a1);
      v57 = *(_WORD *)(a1 + 52);
    }
    else
    {
      if ( v6 != 8 )
      {
        if ( v6 )
        {
          v41 = v6 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( !v44 )
                {
                  v3 = *(unsigned __int16 *)(a1 + 48);
                  goto LABEL_21;
                }
                v45 = v44 - 1;
                if ( !v45 )
                {
                  v3 = *(unsigned __int16 *)(a1 + 52);
                  goto LABEL_21;
                }
                v46 = v45 - 1;
                if ( v46 )
                {
                  if ( v46 == 1 )
                    v3 = *(unsigned __int16 *)(a1 + 36);
                  goto LABEL_21;
                }
                WordImmediate = XmGetWordImmediate(a1);
                goto LABEL_129;
              }
              v48 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v48 = *(_WORD *)(a1 + 48);
            }
            goto LABEL_94;
          }
          v54 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v54 = *(_WORD *)(a1 + 48);
        }
        goto LABEL_105;
      }
      v56 = XmGetCodeByte(a1);
      v57 = *(_WORD *)(a1 + 48);
    }
    v55 = v56 + *(_WORD *)(a1 + 36) + v57;
    goto LABEL_107;
  }
  if ( v6 <= 0x18 )
  {
    if ( v6 != 24 )
    {
      v19 = v6 - 17;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  if ( v24 != 1 )
                    goto LABEL_21;
                  v25 = *(_WORD *)(a1 + 36);
                  goto LABEL_125;
                }
                v65 = *(_WORD *)(a1 + 44);
                v53 = v65 + XmGetWordImmediate(a1);
                goto LABEL_100;
              }
              v25 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v25 = *(_WORD *)(a1 + 48);
            }
LABEL_125:
            WordImmediate = v25 + XmGetWordImmediate(a1);
LABEL_129:
            v3 = WordImmediate;
            goto LABEL_21;
          }
          v52 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v52 = *(_WORD *)(a1 + 48);
        }
        v53 = *(_WORD *)(a1 + 44) + v52 + XmGetWordImmediate(a1);
LABEL_100:
        v3 = v53;
LABEL_101:
        if ( !*(_BYTE *)(a1 + 140) )
          *(_DWORD *)(a1 + 116) = 2;
        goto LABEL_21;
      }
      v64 = *(_WORD *)(a1 + 52);
LABEL_128:
      WordImmediate = *(_WORD *)(a1 + 36) + v64 + XmGetWordImmediate(a1);
      goto LABEL_129;
    }
LABEL_10:
    *(_BYTE *)(a1 + 142) = 1;
    return XmGetRegisterAddress(a1, CodeByte & 7);
  }
LABEL_4:
  v7 = v6 - 25;
  if ( !v7 )
    goto LABEL_10;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_10;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_10;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_10;
  v11 = v10 - 1;
  if ( !v11 || v11 - 1 <= 1 )
    goto LABEL_10;
LABEL_21:
  if ( *(_BYTE *)(a1 + 143) )
  {
    result = (unsigned __int16)v3;
    if ( *(_DWORD *)(a1 + 120) != 1 )
      result = v3;
    *(_DWORD *)(a1 + 128) = result;
  }
  else
  {
    v66 = *(unsigned int *)(a1 + 116);
    v67 = *(unsigned __int16 *)(a1 + 2 * v66 + 68);
    if ( v3 > v67 || v3 + *(_DWORD *)(a1 + 120) > v67 )
      longjmp((_JBTYPE *)(a1 + 160), 14);
    *(_DWORD *)(a1 + 128) = v3;
    return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v66 + 56), (unsigned __int16)v3);
  }
  return result;
}
