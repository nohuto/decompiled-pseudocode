/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x140714174
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x1408824A0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140883D00 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     ULongLongMult @ 0x14046FB90 (ULongLongMult.c)
 *     SdbReadQWORDTag @ 0x140885B50 (SdbReadQWORDTag.c)
 *     SdbpCheckFromStringVersion @ 0x140887474 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x1408875A0 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1408875E8 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x140887710 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x140887758 (SdbpCheckVersion.c)
 *     AslStringPatternMatchW @ 0x1409E7018 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409E8A54 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // r14
  int v10; // ebp
  __int64 v11; // r8
  unsigned int FirstTag; // r10d
  ULONGLONG v13; // rax
  char *v14; // r11
  ULONGLONG v15; // r9
  ULONGLONG i; // rdi
  ULONGLONG v17; // rcx
  ULONGLONG v18; // rcx
  unsigned int v19; // eax
  bool v20; // zf
  __int64 v21; // rax
  int v22; // eax
  __int64 QWORDTag; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int DWORDTag; // ecx
  __int64 v27; // rax
  __int64 StringTagPtr; // rax
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0;
  v6 = 0LL;
  v10 = 1;
  while ( v6 < 0x40 )
  {
    FirstTag = SdbFindFirstTag(a2, a3, *(unsigned __int16 *)((char *)&unk_140E0EDD0 + v6));
    if ( !FirstTag )
      goto LABEL_31;
    v13 = a4[2];
    v14 = (char *)&unk_140E0EDD0;
    v15 = 0LL;
    for ( i = 0LL; v15 < v13; i = 0LL )
    {
      i = 0LL;
      if ( v15 < v13 )
      {
        v17 = a4[1];
        pullResult = 0LL;
        if ( ULongLongMult(v17, v15, &pullResult) < 0 || (v18 = a4[5], i = v18 + pullResult, v18 + pullResult < v18) )
          i = 0LL;
      }
      if ( *(_WORD *)i == *(_WORD *)&v14[v6 + 2] )
        break;
      v13 = a4[2];
      ++v15;
    }
    v19 = *(unsigned __int16 *)&v14[v6];
    if ( !i )
    {
      if ( (_WORD)v19 == 24577 )
        goto LABEL_31;
      if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3, v11, v15) != 28768 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckApplicationTypeAttributes",
          5501,
          (unsigned int)"Failed to find Attribute to use for sdb tag");
        return v4;
      }
LABEL_30:
      v10 = 0;
      goto LABEL_31;
    }
    if ( v19 > 0x6011 )
    {
      switch ( v19 )
      {
        case 0x6029u:
        case 0x602Au:
        case 0x602Bu:
        case 0x6042u:
          goto LABEL_26;
        case 0x6044u:
          StringTagPtr = SdbGetStringTagPtr(a2, FirstTag, v11, v15);
          if ( !StringTagPtr )
            return v4;
          v22 = SdbpCheckUptoStringVersion(StringTagPtr, *(_QWORD *)(i + 8));
          break;
        case 0x6046u:
          v27 = SdbGetStringTagPtr(a2, FirstTag, v11, v15);
          if ( !v27 )
            return v4;
          v22 = SdbpCheckFromStringVersion(v27, *(_QWORD *)(i + 8));
          break;
        default:
          v20 = v19 == 24648;
LABEL_25:
          if ( !v20 )
            return v4;
LABEL_26:
          v21 = SdbGetStringTagPtr(a2, FirstTag, v11, v15);
          if ( !v21 )
            return v4;
          v22 = AslStringPatternMatchW(v21, *(_QWORD *)(i + 8));
          break;
      }
    }
    else
    {
      if ( v19 == 24593 )
        goto LABEL_26;
      if ( v19 == 16453 )
      {
        DWORDTag = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFFLL, v15);
        if ( DWORDTag == -1 )
          return v4;
        v22 = DWORDTag == *(_DWORD *)(i + 8);
      }
      else
      {
        if ( v19 != 20500 )
        {
          if ( v19 == 20501 )
            goto LABEL_34;
          if ( v19 == 20502 )
            goto LABEL_32;
          if ( v19 != 20503 )
          {
            if ( v19 != 20504 )
            {
              if ( v19 != 20505 )
              {
                v20 = v19 == 24577;
                goto LABEL_25;
              }
LABEL_32:
              QWORDTag = SdbReadQWORDTag(a2, FirstTag, -1LL, v15);
              if ( QWORDTag == -1 )
                return v4;
              v22 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(i + 8));
              goto LABEL_28;
            }
LABEL_34:
            v24 = SdbReadQWORDTag(a2, FirstTag, -1LL, v15);
            if ( v24 == -1 )
              return v4;
            v22 = SdbpCheckFromVersion(v24, *(_QWORD *)(i + 8));
            goto LABEL_28;
          }
        }
        v25 = SdbReadQWORDTag(a2, FirstTag, -1LL, v15);
        if ( v25 == -1 )
          return v4;
        v22 = SdbpCheckVersion(v25, *(_QWORD *)(i + 8));
      }
    }
LABEL_28:
    if ( !v10 )
      goto LABEL_30;
    v10 = 1;
    if ( !v22 )
      goto LABEL_30;
LABEL_31:
    v6 += 4LL;
  }
  *a1 = v10;
  return 1;
}
