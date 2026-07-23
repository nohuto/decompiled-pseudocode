/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1407805D8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     AslpFileLargeAssignViewAndDelete @ 0x140895ABC (AslpFileLargeAssignViewAndDelete.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x140895C20 (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFilePartialViewFree @ 0x140895EE8 (AslpFilePartialViewFree.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslpFileLargeMapCreate @ 0x140B6CF80 (AslpFileLargeMapCreate.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // r8
  unsigned int i; // edx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  bool v14; // zf
  unsigned int v15; // ecx
  int v16; // edi
  __int64 v17; // rbx
  void *v18; // rcx
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v19 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; (int)i < 36; ++i )
  {
    if ( i > 0xE )
    {
      if ( i == 26 )
        goto LABEL_34;
      if ( i > 0x1A )
      {
        if ( i == 27 || i == 28 || i == 29 || i == 30 )
          goto LABEL_34;
        v15 = i - 31;
        v14 = i == 31;
      }
      else
      {
        if ( i == 15 || i == 16 || i == 17 || i == 18 || i == 19 )
          goto LABEL_34;
        v15 = i - 22;
        v14 = i == 22;
      }
      if ( v14 )
        goto LABEL_34;
      v13 = v15 == 2;
    }
    else
    {
      if ( i == 14 )
        goto LABEL_34;
      if ( i > 7 )
      {
        v7 = i == 8;
        v8 = i - 8;
      }
      else
      {
        if ( i == 7 || !i )
          goto LABEL_34;
        v8 = i - 1;
        v7 = i == 1;
      }
      if ( v7 )
        goto LABEL_34;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_34;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_34;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_34;
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_34;
      v13 = v12 == 1;
    }
    if ( !v13 )
      *v5 |= 2u;
LABEL_34:
    v5 += 8;
  }
  v16 = AslpFileLargeMapCreate(&v19, a2 + 8, v5);
  if ( v16 >= 0 )
  {
    if ( (int)AslpFileLargeGetChecksumAttributes(a1, v19) < 0 )
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileLargeEnsureLargeFileMapping",
        249,
        (unsigned int)"AslpFileLargeGetChecksumAttributes failed to get checksum attributes [%x]");
    v16 = AslpFileLargeAssignViewAndDelete(a2, &v19);
  }
  v17 = v19;
  if ( v19 )
  {
    AslpFilePartialViewFree(v19 + 48);
    AslpFilePartialViewFree(v17 + 16);
    v18 = *(void **)(v17 + 8);
    if ( v18 )
      ZwClose(v18);
    AslFree(v18, v17);
  }
  return (unsigned int)v16;
}
