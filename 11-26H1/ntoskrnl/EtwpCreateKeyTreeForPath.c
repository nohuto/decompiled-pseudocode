/*
 * XREFs of EtwpCreateKeyTreeForPath @ 0x1406CB148
 * Callers:
 *     EtwStartAutoLogger @ 0x140B44338 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwpCreateKey @ 0x1406CB094 (EtwpCreateKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpCreateKeyTreeForPath(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  unsigned int i; // edi
  __int64 v5; // rbp
  __int16 v6; // ax
  __int64 result; // rax
  WCHAR v8; // cx
  WCHAR SourceString[256]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  v3 = 0;
  memset_0(SourceString, 0, sizeof(SourceString));
  for ( i = 0; ; ++i )
  {
    v5 = i;
    v6 = *(_WORD *)(a1 + 2LL * i);
    if ( !v6 || i >= 0x100 )
      break;
    if ( v6 == 92 && (unsigned int)++v2 > 3 )
    {
      result = EtwpCreateKey(SourceString);
      v3 = result;
      if ( (int)result < 0 )
        return result;
    }
    v8 = *(_WORD *)(a1 + 2LL * i);
    SourceString[v5] = v8;
  }
  return v3;
}
