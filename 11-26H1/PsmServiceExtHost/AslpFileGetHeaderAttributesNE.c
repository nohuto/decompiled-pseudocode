/*
 * XREFs of AslpFileGetHeaderAttributesNE @ 0x18009C158
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x180099EDC (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     AslpFileGet16BitDescription @ 0x18009B3C4 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x18009B4AC (AslpFileGet16BitModuleName.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesNE(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  __int64 v7; // r8
  __int64 v9; // rbp
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r11
  int v13; // [rsp+20h] [rbp-28h]
  PWSTR v14; // [rsp+60h] [rbp+18h] BYREF
  PWSTR v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 56) == 5 )
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
      v9 = -1LL;
      if ( (int)AslpFileGet16BitDescription(&v14, a2) < 0 )
      {
        *(_DWORD *)(a1 + 664) |= 2u;
      }
      else
      {
        v4 = AslStringXmlSanitize(v14);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = "AslStringXmlSanitize failed [%x]";
          v7 = 3525LL;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 640) = 4;
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)(v10 + 2 * v11) );
        *(_DWORD *)(a1 + 664) |= 5u;
        *(_QWORD *)(a1 + 648) = v11;
        *(_QWORD *)(a1 + 656) = v10;
      }
      if ( (int)AslpFileGet16BitModuleName(&v15, a2) >= 0 )
      {
        v4 = AslStringXmlSanitize(v15);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = "AslStringXmlSanitize failed [%x]";
          v7 = 3546LL;
          goto LABEL_3;
        }
        *(_DWORD *)(a1 + 672) = 4;
        do
          ++v9;
        while ( *(_WORD *)(v12 + 2 * v9) );
        *(_DWORD *)(a1 + 696) |= 5u;
        *(_QWORD *)(a1 + 680) = v9;
        *(_QWORD *)(a1 + 688) = v12;
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
  v6 = "AslFileMappingEnsure failed [%x]";
  v7 = 3489LL;
LABEL_3:
  v13 = v4;
  AslLogCallPrintf(1LL, "AslpFileGetHeaderAttributesNE", v7, v6, v13);
  return v5;
}
