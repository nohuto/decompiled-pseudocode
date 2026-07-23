/*
 * XREFs of AslpFileGet16BitModuleName @ 0x140892744
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x140893414 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x14088E2B8 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitModuleName @ 0x140895264 (AslpFileQuery16BitModuleName.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGet16BitModuleName(wchar_t **a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  CHAR v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    memset_0(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitModuleName(v6);
    if ( v4 >= 0 )
    {
      v5 = AslStringAnsiToUnicode(a1, v6);
      if ( v5 < 0 )
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpFileGet16BitModuleName",
          4537,
          (unsigned int)"AslStringAnsiToUnicode failed [%x]");
      return (unsigned int)v5;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGet16BitModuleName",
        4531,
        (unsigned int)"AslpFileQuery16BitModuleName failed [%x]");
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
