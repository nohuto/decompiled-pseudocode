/*
 * XREFs of AslpFileGetHeaderAttributesNE @ 0x140893414
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslpFileGet16BitDescription @ 0x14089265C (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x140892744 (AslpFileGet16BitModuleName.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140B5A5E0 (AslStringXmlSanitize.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesNE(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  int v6; // r8d
  __int64 v8; // rbp
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r11
  wchar_t *v12; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) == 5 )
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 824) |= 2u;
      *(_DWORD *)(a1 + 760) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
      *(_DWORD *)(a1 + 1080) |= 2u;
      v8 = -1LL;
      if ( (int)AslpFileGet16BitDescription(&v12, a2) < 0 )
      {
        *(_DWORD *)(a1 + 664) |= 2u;
      }
      else
      {
        v4 = AslStringXmlSanitize(v12);
        if ( v4 < 0 )
        {
          v5 = "AslStringXmlSanitize failed [%x]";
          v6 = 3525;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 640) = 4;
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(v9 + 2 * v10) );
        *(_DWORD *)(a1 + 664) |= 5u;
        *(_QWORD *)(a1 + 648) = v10;
        *(_QWORD *)(a1 + 656) = v9;
      }
      if ( (int)AslpFileGet16BitModuleName(&v13, a2) >= 0 )
      {
        v4 = AslStringXmlSanitize(v13);
        if ( v4 < 0 )
        {
          v5 = "AslStringXmlSanitize failed [%x]";
          v6 = 3546;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 672) = 4;
        do
          ++v8;
        while ( *(_WORD *)(v11 + 2 * v8) );
        *(_DWORD *)(a1 + 696) |= 5u;
        *(_QWORD *)(a1 + 680) = v8;
        *(_QWORD *)(a1 + 688) = v11;
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 664) |= 2u;
    }
    *(_DWORD *)(a1 + 696) |= 2u;
    return 0;
  }
  v5 = "AslFileMappingEnsure failed [%x]";
  v6 = 3489;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileGetHeaderAttributesNE", v6, (_DWORD)v5);
  return (unsigned int)v4;
}
