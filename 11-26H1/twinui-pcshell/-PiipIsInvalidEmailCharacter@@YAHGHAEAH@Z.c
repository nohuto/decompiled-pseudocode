/*
 * XREFs of ?PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z @ 0x18067650C
 * Callers:
 *     PiiFilterEmbeddedPathsExecute @ 0x1806765FC (PiiFilterEmbeddedPathsExecute.c)
 * Callees:
 *     _o_iswspace_0 @ 0x1802C9E48 (_o_iswspace_0.c)
 */

__int64 __fastcall PiipIsInvalidEmailCharacter(__int64 a1, int a2, int *a3)
{
  int v3; // ebx
  __int16 v4; // di
  __int128 *i; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v4 = a1;
  v8 = *(_DWORD *)L"\\";
  v7 = *(_OWORD *)L"@[]<>,:;\\";
  if ( *a3 )
  {
    if ( (_WORD)a1 == 34 )
      *a3 = 0;
    return 0LL;
  }
  if ( (_WORD)a1 != 34 )
  {
    if ( !(unsigned int)o_iswspace_0(a1) )
    {
      for ( i = &v7; v4 != *(_WORD *)i; i = (__int128 *)((char *)i + 2) )
      {
        if ( (unsigned int)++v3 >= 0xA )
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( !a2 )
    return 1LL;
  *a3 = 1;
  return 0LL;
}
