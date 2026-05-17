/*
 * XREFs of RtlCopyUnicodeString @ 0x180075F50
 * Callers:
 *     LdrGetDllDirectory @ 0x180075EC0 (LdrGetDllDirectory.c)
 *     EtwpQueryUmLogger @ 0x180076A54 (EtwpQueryUmLogger.c)
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 result; // rax

  if ( a2 )
  {
    v3 = *a2;
    v4 = a1[1];
    v5 = (const void *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v3 <= (unsigned __int16)v4 )
      v4 = v3;
    v6 = (void *)*((_QWORD *)a1 + 1);
    v7 = v4;
    *a1 = v4;
    memmove(v6, v5, v4);
    result = a1[1];
    if ( (unsigned __int64)*a1 + 2 <= result )
    {
      result = 0LL;
      *((_WORD *)v6 + (v7 >> 1)) = 0;
    }
  }
  else
  {
    result = 0LL;
    *a1 = 0;
  }
  return result;
}
