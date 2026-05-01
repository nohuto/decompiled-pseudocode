/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x180094584
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x180094880 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x180096170 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     ULongLongMult @ 0x18008D23C (ULongLongMult.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpCheckFromStringVersion @ 0x180092614 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x18009273C (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x180092784 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x1800928A8 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800928F0 (SdbpCheckVersion.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800937FC (SdbReadQWORDTag.c)
 *     AslStringPatternMatchExW @ 0x180099A68 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v9; // ebp
  unsigned __int64 i; // r14
  unsigned int FirstTag; // r11d
  ULONGLONG v12; // rax
  ULONGLONG v13; // r10
  ULONGLONG j; // rdi
  ULONGLONG v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  bool v24; // zf
  __int64 StringTagPtr; // rax
  int v26; // eax
  unsigned __int64 QWORDTag; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int DWORDTag; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned __int16 *v37; // rax
  unsigned __int16 *v38; // rax
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0;
  v9 = 1;
  for ( i = 0LL; i < 0x40; i += 4LL )
  {
    FirstTag = SdbFindFirstTag(a2, a3, *(_WORD *)((char *)&unk_1800E18B0 + i));
    if ( !FirstTag )
      continue;
    v12 = a4[2];
    v13 = 0LL;
    for ( j = 0LL; v13 < v12; j = 0LL )
    {
      j = 0LL;
      if ( v13 < v12 )
      {
        v15 = a4[1];
        pullResult = 0LL;
        if ( ULongLongMult(v15, v13, &pullResult) < 0 || (j = a4[5] + pullResult, j < a4[5]) )
          j = 0LL;
      }
      if ( *(_WORD *)j == *(_WORD *)((char *)&unk_1800E18B0 + i + 2) )
        break;
      v12 = a4[2];
      ++v13;
    }
    if ( !j )
    {
      if ( *(_WORD *)((char *)&unk_1800E18B0 + i) == 24577 )
        continue;
      if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3) != 28768 )
      {
        AslLogCallPrintf(
          1LL,
          "SdbpCheckApplicationTypeAttributes",
          5501LL,
          "Failed to find Attribute to use for sdb tag");
        return v4;
      }
LABEL_30:
      v9 = 0;
      continue;
    }
    v16 = *(unsigned __int16 *)((char *)&unk_1800E18B0 + i);
    if ( v16 > 0x6011 )
    {
      v31 = v16 - 24617;
      if ( !v31 )
        goto LABEL_26;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_26;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_26;
      v34 = v33 - 23;
      if ( !v34 )
        goto LABEL_26;
      v35 = v34 - 2;
      if ( v35 )
      {
        v36 = v35 - 2;
        if ( v36 )
        {
          v24 = v36 == 2;
LABEL_25:
          if ( !v24 )
            return v4;
LABEL_26:
          StringTagPtr = SdbGetStringTagPtr(a2, FirstTag);
          if ( !StringTagPtr )
            return v4;
          v26 = AslStringPatternMatchExW(StringTagPtr, *(_QWORD *)(j + 8));
          goto LABEL_28;
        }
        v37 = (unsigned __int16 *)SdbGetStringTagPtr(a2, FirstTag);
        if ( !v37 )
          return v4;
        v26 = SdbpCheckFromStringVersion(v37, *(unsigned __int16 **)(j + 8));
      }
      else
      {
        v38 = (unsigned __int16 *)SdbGetStringTagPtr(a2, FirstTag);
        if ( !v38 )
          return v4;
        v26 = SdbpCheckUptoStringVersion(v38, *(unsigned __int16 **)(j + 8));
      }
    }
    else
    {
      if ( v16 == 24593 )
        goto LABEL_26;
      v17 = v16 - 16453;
      if ( v17 )
      {
        v18 = v17 - 4047;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
            goto LABEL_34;
          v20 = v19 - 1;
          if ( !v20 )
            goto LABEL_32;
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v24 = v23 == 4072;
                goto LABEL_25;
              }
LABEL_32:
              QWORDTag = SdbReadQWORDTag(a2, FirstTag, -1LL);
              if ( QWORDTag == -1LL )
                return v4;
              v26 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(j + 8));
              goto LABEL_28;
            }
LABEL_34:
            v28 = SdbReadQWORDTag(a2, FirstTag, -1LL);
            if ( v28 == -1LL )
              return v4;
            v26 = SdbpCheckFromVersion(v28, *(_QWORD *)(j + 8));
            goto LABEL_28;
          }
        }
        v29 = SdbReadQWORDTag(a2, FirstTag, -1LL);
        if ( v29 == -1LL )
          return v4;
        v26 = SdbpCheckVersion(v29, *(_QWORD *)(j + 8));
      }
      else
      {
        DWORDTag = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFF);
        if ( DWORDTag == -1 )
          return v4;
        v26 = DWORDTag == *(_DWORD *)(j + 8);
      }
    }
LABEL_28:
    if ( v9 )
    {
      v9 = 1;
      if ( v26 )
        continue;
    }
    goto LABEL_30;
  }
  *a1 = v9;
  return 1;
}
