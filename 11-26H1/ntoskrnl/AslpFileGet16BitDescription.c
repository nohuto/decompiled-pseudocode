/*
 * XREFs of AslpFileGet16BitDescription @ 0x14088C260
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x14088D018 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x140887EBC (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitDescription @ 0x14088ED68 (AslpFileQuery16BitDescription.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGet16BitDescription(wchar_t **a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  char v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    memset_0(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitDescription(v6);
    if ( v4 >= 0 )
    {
      v5 = AslStringAnsiToUnicode(a1, v6);
      if ( v5 < 0 )
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpFileGet16BitDescription",
          4491,
          (unsigned int)"AslStringAnsiToUnicode failed [%x]");
      return (unsigned int)v5;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGet16BitDescription",
        4485,
        (unsigned int)"AslpFileQuery16BitDescription failed [%x]");
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
