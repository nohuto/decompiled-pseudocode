/*
 * XREFs of SdbpSearchDB @ 0x140A92348
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409E31A8 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408858D4 (SdbpFindNextNamedTagHelper.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409E4454 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1409E6084 (SdbFindFirstStringIndexedTag.c)
 *     SdbGetIndex @ 0x1409E6C78 (SdbGetIndex.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409E7480 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbpCheckExe @ 0x140A92254 (SdbpCheckExe.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A9287C (SdbpFindFirstNamedTagHelper.c)
 *     SdbpCheckForMatch @ 0x140A92960 (SdbpCheckForMatch.c)
 *     SdbFindNextStringIndexedTag @ 0x140B27C98 (SdbFindNextStringIndexedTag.c)
 */

__int64 __fastcall SdbpSearchDB(__int64 a1, union _RTL_RUN_ONCE *a2, __int16 a3, __int64 a4, void *a5, int FirstTag)
{
  unsigned int *v6; // r13
  wchar_t *Str1; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r15d
  int v11; // r12d
  unsigned int FirstIndexedWildCardTag; // eax
  unsigned int v13; // esi
  unsigned int v14; // eax
  int v15; // r12d
  int FirstStringIndexedTag; // eax
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rsi
  int v20; // r12d
  int FirstNamedTagHelper; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // r12d
  int NextIndexedWildCardTag; // eax
  int v26; // eax
  unsigned int v27; // esi
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  int v33; // [rsp+40h] [rbp-40h] BYREF
  int v34; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v35; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *v36; // [rsp+50h] [rbp-30h]
  __int64 v37[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v38; // [rsp+68h] [rbp-18h]
  __int64 v39; // [rsp+78h] [rbp-8h]
  int v41; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+58h]

  v42 = a4;
  LOWORD(v41) = a3;
  v6 = (unsigned int *)a5;
  Str1 = *(wchar_t **)(a4 + 40);
  v39 = 0LL;
  v9 = 0LL;
  v33 = 0;
  v41 = 0;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  memset_0(a5, 0, 0x80uLL);
  v36 = Str1;
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpSearchDB");
    goto LABEL_54;
  }
  v10 = 16;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    v11 = 1;
    FirstIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, 28679, 24587, Str1, (unsigned int *)v37);
    goto LABEL_7;
  }
  v11 = 0;
  if ( a2 != *(union _RTL_RUN_ONCE **)(a1 + 8) )
  {
    FirstIndexedWildCardTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24587, Str1, 1);
    while ( 1 )
    {
LABEL_7:
      v13 = FirstIndexedWildCardTag;
      if ( !FirstIndexedWildCardTag )
      {
        Str1 = v36;
        break;
      }
      v34 = 2;
      v35 = 0;
      if ( (unsigned int)SdbpCheckForMatch(a1, (_DWORD)a2, FirstIndexedWildCardTag, v42, (__int64)&v34, (__int64)&v35)
        && v34 == 2 )
      {
        if ( (unsigned int)v9 < 0x10 )
        {
          v14 = v35;
          v6[2 * v9] = v13;
          v6[2 * v9 + 1] = v14;
          v9 = (unsigned int)(v9 + 1);
          v41 = v9;
          v33 = 2;
          goto LABEL_13;
        }
        AslLogCallPrintf(1LL, (__int64)"SdbpCheckExe");
        v9 = (unsigned int)(v9 + 1);
        v41 = v9;
      }
      if ( (unsigned int)v9 > 0x10 )
        goto LABEL_55;
LABEL_13:
      if ( v11 )
        FirstIndexedWildCardTag = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v37);
      else
        FirstIndexedWildCardTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v13, 24587LL, v36, 1);
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24577, 0LL) )
  {
    v15 = 1;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, Str1, (__int64)v37);
  }
  else
  {
    v15 = 0;
    FirstStringIndexedTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24577, Str1, 0);
  }
  while ( 1 )
  {
    v17 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v18 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, &v41, v42, 0, &v33, v6);
    LODWORD(v9) = v41;
    if ( v18 )
    {
      if ( v33 != 2 )
        goto LABEL_53;
    }
    else if ( (unsigned int)v41 > 0x10 )
    {
      goto LABEL_55;
    }
    if ( v15 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v37);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v17, 24577LL, v36, 0);
  }
  v19 = v42;
  if ( *(_QWORD *)(v42 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2, 28679, 24608, 0LL) )
    {
      v20 = 1;
      FirstNamedTagHelper = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, *(const WCHAR **)(v19 + 48), (__int64)v37);
    }
    else
    {
      v20 = 0;
      FirstNamedTagHelper = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24608, *(wchar_t **)(v19 + 48), 0);
    }
    while ( 1 )
    {
      v22 = FirstNamedTagHelper;
      if ( !FirstNamedTagHelper )
        break;
      v23 = SdbpCheckExe(a1, (int)a2, FirstNamedTagHelper, &v41, v42, 0, &v33, v6);
      LODWORD(v9) = v41;
      if ( v23 )
      {
        if ( v33 != 2 )
          goto LABEL_53;
      }
      else if ( (unsigned int)v41 > 0x10 )
      {
        goto LABEL_55;
      }
      if ( v20 )
        FirstNamedTagHelper = SdbFindNextStringIndexedTag(a2, v37);
      else
        FirstNamedTagHelper = SdbpFindNextNamedTagHelper(
                                (__int64)a2,
                                FirstTag,
                                v22,
                                24608LL,
                                *(wchar_t **)(v42 + 48),
                                0);
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    v24 = 1;
    NextIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, 28679, 24587, v36, (unsigned int *)v37);
    goto LABEL_52;
  }
  v24 = 0;
  if ( a2 != *(union _RTL_RUN_ONCE **)(a1 + 8) )
  {
    NextIndexedWildCardTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24587, v36, 1);
LABEL_52:
    while ( 1 )
    {
      v27 = NextIndexedWildCardTag;
      if ( !NextIndexedWildCardTag )
        break;
      v26 = SdbpCheckExe(a1, (int)a2, NextIndexedWildCardTag, &v41, v42, 2, &v33, v6);
      LODWORD(v9) = v41;
      if ( v26 )
      {
        if ( v33 != 2 )
          break;
      }
      else if ( (unsigned int)v41 > 0x10 )
      {
        goto LABEL_55;
      }
      if ( v24 )
        NextIndexedWildCardTag = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v37);
      else
        NextIndexedWildCardTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v27, 24587LL, v36, 1);
    }
  }
LABEL_53:
  if ( (unsigned int)v9 <= 0x10 )
  {
LABEL_54:
    v10 = v9;
    if ( !(_DWORD)v9 )
      return (unsigned int)v9;
  }
LABEL_55:
  v28 = v10;
  do
  {
    v29 = SdbFindFirstTag((__int64)a2, *v6, 24582);
    if ( v29 )
      SdbGetStringTagPtr(a2, v29, v30, v31);
    v6 += 2;
    --v28;
  }
  while ( v28 );
  return (unsigned int)v9;
}
