/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x18009DA90
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x18009CA48 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x180099EDC (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x18009E148 (AslpFileQueryVersionString.c)
 *     AslpFileVerBlockGetValueOffset @ 0x18009E440 (AslpFileVerBlockGetValueOffset.c)
 *     AslpFileVerQueryBlock @ 0x18009E4B4 (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int VersionString; // eax
  unsigned __int16 *v9; // rsi
  unsigned int v10; // edi
  const char *v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-20h]
  _WORD *v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+48h] BYREF
  __int64 v26; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  v23 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  if ( !a2 )
  {
    v4 = (_DWORD *)(a1 + 184);
    v5 = 8LL;
    do
    {
      *v4 |= 2u;
      v4 += 8;
      --v5;
    }
    while ( v5 );
    goto LABEL_4;
  }
  VersionString = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v26, &v25);
  v6 = VersionString;
  if ( VersionString == -1073741275 )
  {
    v9 = 0LL;
    v10 = 0;
LABEL_15:
    v15 = 0LL;
    v16 = (unsigned __int64)v10 >> 2;
    while ( v15 < 0x80 )
    {
      v17 = *(int *)((char *)&unk_1800B9C70 + v15);
      VersionString = AslpFileQueryVersionString(
                        (unsigned int)&v23,
                        (unsigned int)&v24,
                        v2,
                        (_DWORD)v9,
                        v16,
                        *(_QWORD *)((char *)&unk_1800B9C70 + v15 + 8));
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
        {
          v11 = "AslpFileQueryVersionString failed [%x]";
          v12 = 2616LL;
          goto LABEL_11;
        }
        *(_DWORD *)(32 * v17 + a1 + 24) |= 2u;
      }
      else
      {
        VersionString = AslStringXmlSanitize(v23);
        v6 = VersionString;
        if ( VersionString < 0 )
        {
          v11 = "AslStringXmlSanitize failed [%x]";
          v12 = 2603LL;
          goto LABEL_11;
        }
        v19 = -1LL;
        v20 = 32 * v17;
        *(_DWORD *)(32 * v17 + a1) = 4;
        do
          ++v19;
        while ( *(_WORD *)(v18 + 2 * v19) );
        *(_DWORD *)(v20 + a1 + 24) |= 1u;
        *(_QWORD *)(v20 + a1 + 8) = v19;
        *(_QWORD *)(v20 + a1 + 16) = v18;
      }
      v15 += 16LL;
    }
    if ( v9 && v16 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v21 = *v9;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v21;
      return 0;
    }
LABEL_4:
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  if ( VersionString >= 0 )
  {
    v13 = v25;
    v14 = v26;
    v9 = 0LL;
    v10 = 0;
    if ( (int)AslpFileVerBlockGetValueOffset(&v27, v26, v25) >= 0 && v27 < v13 )
    {
      v9 = (unsigned __int16 *)(v27 + v14);
      v10 = v13 - v27;
    }
    goto LABEL_15;
  }
  v11 = "AslpFileVerQueryBlock failed [%x]";
  v12 = 2561LL;
LABEL_11:
  LODWORD(v22) = VersionString;
  AslLogCallPrintf(1LL, "AslpFileMakeStringVersionAttributes", v12, v11, v22);
  return v6;
}
