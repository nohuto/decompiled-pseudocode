/*
 * XREFs of AslpFileQueryExportName @ 0x140895368
 * Callers:
 *     AslpFileGetExportName @ 0x1408932C0 (AslpFileGetExportName.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     AslpMemorySpanCheckBounds @ 0x140719BB4 (AslpMemorySpanCheckBounds.c)
 *     RtlCopyToUserFromUser @ 0x140781DE8 (RtlCopyToUserFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlStringLengthFromUser @ 0x140782168 (RtlStringLengthFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQueryExportName(char *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  const char *v5; // r9
  int v6; // r8d
  unsigned __int64 v7; // rbx
  const char *v8; // r9
  int v9; // r8d
  int v10; // ecx
  bool IsUserAddress; // r14
  __int16 UShortFromUser; // ax
  unsigned int *v13; // rax
  unsigned int *v14; // r15
  unsigned int ULongFromUser; // r12d
  unsigned int v16; // r13d
  __int64 v17; // r15
  unsigned int v18; // eax
  char *v19; // rsi
  const char *v20; // r9
  int v21; // r8d
  int v22; // ecx
  __int64 v23; // rax
  size_t v24; // rbx
  char *v25; // r14
  unsigned __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  unsigned __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h] BYREF
  __int64 v32; // [rsp+68h] [rbp-40h]
  char *v33; // [rsp+70h] [rbp-38h] BYREF
  __int64 v34; // [rsp+78h] [rbp-30h]
  unsigned __int64 v35; // [rsp+B0h] [rbp+8h] BYREF

  v35 = 0LL;
  if ( a2 && *(_QWORD *)(a2 + 32) )
  {
    v27 = *(_QWORD *)(a2 + 32);
    v28 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v27 = 0LL;
    v28 = 0LL;
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v35, a2);
  if ( ImageNtHeader >= 0 )
  {
    v7 = v35;
    v29 = v35;
    v30 = 264LL;
    if ( !AslpMemorySpanCheckBounds(&v29, &v27) )
    {
      v8 = "Image too small to be a valid PE";
      v9 = 4335;
      v10 = 1;
LABEL_10:
      AslLogCallPrintf(v10, (unsigned int)"AslpFileQueryExportName", v9, (_DWORD)v8);
      return (unsigned int)-1073741701;
    }
    IsUserAddress = MmIsUserAddress(v7);
    if ( IsUserAddress )
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)(v7 + 24));
    else
      UShortFromUser = *(_WORD *)(v7 + 24);
    if ( UShortFromUser == 267 )
    {
      v13 = (unsigned int *)(v7 + 120);
    }
    else
    {
      if ( UShortFromUser != 523 )
      {
        AslLogCallPrintf(
          2,
          (unsigned int)"AslpFileQueryExportName",
          4367,
          (unsigned int)"Unknown image optional header magic value %x");
        return (unsigned int)-1073741637;
      }
      v13 = (unsigned int *)(v7 + 136);
    }
    v14 = v13 + 1;
    if ( IsUserAddress )
    {
      ULongFromUser = RtlReadULongFromUser(v13);
      v16 = RtlReadULongFromUser(v14);
    }
    else
    {
      ULongFromUser = *v13;
      v16 = *v14;
    }
    v17 = AslpImageRvaToVa(v7, a2, ULongFromUser);
    v31 = v17;
    v32 = v16;
    if ( !AslpMemorySpanCheckBounds((unsigned __int64 *)&v31, &v27) )
    {
      if ( !v16 && !v17 )
        return (unsigned int)-1073741275;
      v8 = "Export directory invalid or invalid image format";
      v9 = 4389;
      v10 = 2;
      goto LABEL_10;
    }
    if ( IsUserAddress )
      v18 = RtlReadULongFromUser((unsigned int *)(v17 + 12));
    else
      v18 = *(_DWORD *)(v17 + 12);
    v19 = (char *)AslpImageRvaToVa(v7, a2, v18);
    v33 = v19;
    v34 = 256LL;
    if ( !AslpMemorySpanCheckBounds((unsigned __int64 *)&v33, &v27) )
    {
      ImageNtHeader = -1073741701;
      v20 = "Export name pointer out of bounds or invalid image format";
      v21 = 4415;
      v22 = 2;
LABEL_31:
      AslLogCallPrintf(v22, (unsigned int)"AslpFileQueryExportName", v21, (_DWORD)v20);
      return (unsigned int)ImageNtHeader;
    }
    if ( IsUserAddress )
    {
      v23 = RtlStringLengthFromUser(v19);
      v24 = v23;
      if ( (unsigned __int64)(v23 + 1) > 0x100 )
      {
        ImageNtHeader = -2147483643;
        v20 = "Export name too long";
        v21 = 4424;
        v22 = 1;
        goto LABEL_31;
      }
      v25 = &a1[v23];
      if ( MmIsUserAddress((unsigned __int64)a1) )
      {
        RtlCopyToUserFromUser(a1, v19, v24);
        RtlWriteUCharToUser(v25, 0);
      }
      else
      {
        RtlCopyFromUser(a1, v19, v24);
        *v25 = 0;
      }
    }
    else
    {
      ImageNtHeader = RtlStringCchCopyA(a1, 0x100uLL, v19);
      if ( ImageNtHeader < 0 )
      {
        v5 = "RtlStringCchCopyA failed [%x]";
        v6 = 4441;
        goto LABEL_7;
      }
    }
    return 0;
  }
  v5 = "AslpFileGetImageNtHeader failed [%x]";
  v6 = 4324;
LABEL_7:
  AslLogCallPrintf(1, (unsigned int)"AslpFileQueryExportName", v6, (_DWORD)v5);
  return (unsigned int)ImageNtHeader;
}
