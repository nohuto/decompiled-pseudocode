/*
 * XREFs of AslpFileGet16BitDescription @ 0x18009B3C4
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x18009C158 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009970C (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitDescription @ 0x18009DC9C (AslpFileQuery16BitDescription.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGet16BitDescription(PWSTR *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  char v8[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    memset_0(v8, 0, sizeof(v8));
    v4 = AslpFileQuery16BitDescription(v8);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = AslStringAnsiToUnicode(a1, v8);
      v7 = v6;
      if ( v6 < 0 )
        AslLogCallPrintf(1LL, "AslpFileGet16BitDescription", 4491LL, "AslStringAnsiToUnicode failed [%x]", v6);
      return v7;
    }
    else
    {
      AslLogCallPrintf(1LL, "AslpFileGet16BitDescription", 4485LL, "AslpFileQuery16BitDescription failed [%x]", v4);
      return v5;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
