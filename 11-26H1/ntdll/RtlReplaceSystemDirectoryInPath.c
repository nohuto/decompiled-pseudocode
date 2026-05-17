/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x180035310
 * Callers:
 *     LdrpGetModuleName @ 0x180033E20 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800364B8 (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlFindUnicodeSubstring @ 0x180036C40 (RtlFindUnicodeSubstring.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // si
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // edi
  void *UnicodeSubstring; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a2;
  *(_OWORD *)Src = 0LL;
  v13 = 0LL;
  if ( (_WORD)a2 == a3 )
    return 0LL;
  LOBYTE(a2) = a4;
  result = RtlpWow64SelectSystem32PathInternal(a3, a2, Src);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = a4;
    result = RtlpWow64SelectSystem32PathInternal(v5, v8, &v13);
    if ( (int)result >= 0 )
    {
      v11 = LOWORD(Src[0]);
      if ( (_WORD)v13 == LOWORD(Src[0]) )
      {
        LOBYTE(v10) = 1;
        UnicodeSubstring = (void *)RtlFindUnicodeSubstring(a1, &v13, v10);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src[1], v11);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v9;
    }
  }
  return result;
}
