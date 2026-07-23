/*
 * XREFs of ExSecurePoolUpdate @ 0x1406D4FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSecurePoolUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  _DWORD *v7; // rax
  _DWORD *v8; // rcx

  v7 = 0LL;
  if ( a1 )
  {
    v8 = (_DWORD *)((unsigned __int64)&dword_140E6BF60 ^ qword_140E6BFA8 ^ a1);
    if ( *v8 == -1381122884 )
      v7 = v8;
  }
  if ( a6 && a7 )
    return v7 != 0LL ? -1073741637 : -1073741811;
  else
    return 3221225485LL;
}
