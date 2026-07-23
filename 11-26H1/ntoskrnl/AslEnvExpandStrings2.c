/*
 * XREFs of AslEnvExpandStrings2 @ 0x1408917B4
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlWideStringLengthFromUser @ 0x1407821B4 (RtlWideStringLengthFromUser.c)
 *     AslEnvExpandStrings @ 0x1408914E8 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x140891D90 (AslpEnvResolveVars.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        __int64 a1,
        unsigned __int16 *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  const wchar_t *v8; // rdi
  __int64 v9; // r13
  int v10; // r12d
  const wchar_t *v11; // rsi
  __int64 v12; // rcx
  wchar_t *v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // r9
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  _DWORD v25[4]; // [rsp+40h] [rbp-78h] BYREF
  wchar_t *v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  const wchar_t *v28; // [rsp+68h] [rbp-50h]

  v8 = 0LL;
  v9 = 0LL;
  v25[0] = 0;
  v10 = 0;
  v11 = 0LL;
  v26 = 0LL;
  if ( MmIsUserAddress((unsigned __int64)a2) )
  {
    v27 = RtlWideStringLengthFromUser(a2);
    v10 = v27 + 1;
    v25[2] = v27 + 1;
    v13 = (wchar_t *)AslAlloc(v12, 2LL * (unsigned int)(v27 + 1));
    v11 = v13;
    v26 = v13;
    if ( !v13 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", 833, (unsigned int)"Out of memory");
      v15 = -1073741801;
      v25[1] = -1073741801;
      goto LABEL_28;
    }
    RtlCopyFromUser(v13, a2, 2LL * (unsigned int)(v27 + 1));
    v8 = v11;
    v28 = v11;
  }
  v16 = -1LL;
  if ( !v8 )
  {
    v8 = a2;
    v17 = -1LL;
    do
      ++v17;
    while ( a2[v17] );
    v10 = v17 + 1;
  }
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( (unsigned int)AslpEnvResolveVars(v8, a6, a7, (__int64)v25) == -1073741789 )
  {
    if ( v10 != v25[0] )
    {
      v9 = AslAlloc(v18, 2LL * v25[0]);
      if ( !v9 )
      {
        v15 = -1073741801;
        v19 = "Out of memory";
        v20 = 880;
        goto LABEL_15;
      }
      v21 = -1LL;
      do
        ++v21;
      while ( v8[v21] );
      v15 = AslpEnvResolveVars(v8, a6, a7, (__int64)v25);
      if ( v15 < 0 )
      {
        v19 = "AslpEnvResolveVars failed [%x]";
        v20 = 892;
        goto LABEL_15;
      }
      v8 = (const wchar_t *)v9;
    }
    do
      ++v16;
    while ( v8[v16] );
    v22 = AslEnvExpandStrings(a1, (unsigned __int64)v8, v16, a3, a4, a5);
    v15 = v22;
    if ( v22 >= 0 || v22 == -1073741789 )
      goto LABEL_28;
    v19 = "AslEnvExpandStrings failed [%x]";
    v20 = 907;
    goto LABEL_15;
  }
  v15 = -1073741595;
  v19 = "AslpEnvResolveVars failed to fail properly for null buffer";
  v20 = 872;
LABEL_15:
  AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", v20, (_DWORD)v19);
LABEL_28:
  AslFree(v14, v9);
  if ( v11 )
    AslFree(v23, v11);
  return (unsigned int)v15;
}
