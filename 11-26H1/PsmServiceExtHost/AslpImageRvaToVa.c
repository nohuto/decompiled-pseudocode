/*
 * XREFs of AslpImageRvaToVa @ 0x18009E75C
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x18009A6EC (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x18009B834 (AslpFileGetClrVersion.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x18009C63C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x18009D1B0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x18009D7D0 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x18009DEA0 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 */

unsigned __int64 __fastcall AslpImageRvaToVa(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  int ImageNtHeader; // eax
  _DWORD *v12; // r8
  unsigned int i; // r9d
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  if ( !a3 )
    return 0LL;
  if ( !*(_BYTE *)(a2 + 51) )
  {
    v7 = *(_QWORD *)(a2 + 32);
    v8 = a1 + 264;
    v9 = *(_QWORD *)(a2 + 40);
    v16 = a1;
    v10 = v7 + v9;
    if ( v5 < v7 || v5 > v8 || v5 > v10 || v8 < v7 || v8 > v10 || v7 > v10 || v9 < 0x108 )
    {
      AslLogCallPrintf(
        2LL,
        "AslpImageRvaToVa",
        5461LL,
        "AslpImageRvaToVa called with headers not contained in the file view.");
      ImageNtHeader = AslpFileGetImageNtHeader(&v16, a2);
      if ( ImageNtHeader < 0 )
      {
        AslLogCallPrintf(1LL, "AslpImageRvaToVa", 5465LL, "AslpFileGetImageNtHeader failed [%x]", ImageNtHeader);
        return 0LL;
      }
      v5 = v16;
    }
    v12 = (_DWORD *)(*(unsigned __int16 *)(v5 + 20) + v5 + 24);
    for ( i = 0; i < *(unsigned __int16 *)(v5 + 6); ++i )
    {
      v14 = v12[3];
      if ( a3 >= v14 && a3 < v12[4] + v14 )
      {
        if ( v12 )
        {
          v15 = a3 + v12[5] - v12[3];
          if ( v15 < *(_QWORD *)(a2 + 24) )
            return v15 + *(_QWORD *)(a2 + 32);
        }
        return 0LL;
      }
      v12 += 10;
    }
    return 0LL;
  }
  if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 40) )
    return a3 + *(_QWORD *)(a2 + 32);
  return 0LL;
}
