/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x140175610
 * Callers:
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1402877F4 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, struct tagWND *const *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  struct tagWND *i; // rdx

  v2 = 0;
  v4 = *((_QWORD *)a1 + 3);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(struct tagWND **)(v6 + 24);
  }
  if ( a1 == v5 )
  {
    LOBYTE(v2) = a1 == a2[10];
  }
  else
  {
    for ( i = (struct tagWND *)*((_QWORD *)a2 + 10); a1 != i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*(_WORD *)(*((_QWORD *)i + 5) + 42LL) & 0x2FFF) == 0x29D )
        return v2;
    }
    return 1;
  }
  return v2;
}
