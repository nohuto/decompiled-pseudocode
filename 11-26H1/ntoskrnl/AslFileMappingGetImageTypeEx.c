/*
 * XREFs of AslFileMappingGetImageTypeEx @ 0x14088F14C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x14088EF88 (AslFileMappingGetFileKindDetail.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v7; // r14d
  __int16 v8; // r8
  __int16 v9; // r15
  int v10; // ecx
  int v11; // eax
  int ImageNtHeader; // ebx
  const char *v13; // r9
  int v14; // r8d
  __int64 v15; // rax
  __int16 v17; // [rsp+30h] [rbp-68h]
  _QWORD v18[10]; // [rsp+48h] [rbp-50h] BYREF
  _WORD *v20; // [rsp+A8h] [rbp+10h]

  v20 = a2;
  v18[0] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(a5 + 64) == 1 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_24;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  if ( ImageNtHeader < 0 )
  {
    v13 = "AslFileMappingEnsure failed [%x]";
    v14 = 1102;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingGetImageTypeEx", v14, (_DWORD)v13);
LABEL_6:
    v11 = 0;
    v10 = 0;
    a2 = v20;
    v8 = 0;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a5 + 64) != 6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_6;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v18, a5);
  if ( ImageNtHeader < 0 )
  {
    v13 = "AslpFileGetImageNtHeader failed [%x]";
    v14 = 1122;
    goto LABEL_5;
  }
  v8 = *(_WORD *)(v18[0] + 4LL);
  v17 = v8;
  v9 = *(_WORD *)(v18[0] + 24LL);
  if ( *(_DWORD *)(a5 + 80) || !a3 && !a4 )
    goto LABEL_12;
  if ( v9 == 267 )
  {
    v7 = *(_DWORD *)(v18[0] + 232LL);
  }
  else if ( v9 == 523 )
  {
    v7 = *(_DWORD *)(v18[0] + 248LL);
  }
  if ( v7 )
  {
    v15 = AslpImageRvaToVa(v18[0], a5, v7);
    if ( v15 )
    {
      v10 = 1;
      v11 = *(_DWORD *)(v15 + 16);
      ImageNtHeader = 0;
    }
    else
    {
      AslLogCallPrintf(
        2,
        (unsigned int)"AslFileMappingGetImageTypeEx",
        1176,
        (unsigned int)"Failed to find the Cor20Header");
      ImageNtHeader = 0;
      v11 = 0;
      v10 = 0;
    }
    a2 = v20;
    v8 = v17;
  }
  else
  {
LABEL_12:
    ImageNtHeader = 0;
    v11 = 0;
    v10 = 0;
    a2 = v20;
  }
LABEL_24:
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return (unsigned int)ImageNtHeader;
}
