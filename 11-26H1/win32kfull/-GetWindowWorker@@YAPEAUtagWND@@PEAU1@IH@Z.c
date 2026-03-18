/*
 * XREFs of ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x14008BC58
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1402A06E8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetAppCompatFlags @ 0x1401E7A80 (GetAppCompatFlags.c)
 */

struct tagWND *__fastcall GetWindowWorker(struct tagWND *a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // edx
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // edx
  __int64 i; // rcx

  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29D && a2 != 5 )
    return 0LL;
  v2 = 0LL;
  if ( !a2 )
  {
    v6 = *((_QWORD *)a1 + 13);
    if ( v6 )
    {
      v2 = *(_QWORD *)(v6 + 112);
      v7 = GetAppCompatFlags(0LL) & 8;
      if ( v2 )
      {
        if ( v7 )
        {
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0 )
              break;
            v2 = *(_QWORD *)(v2 + 88);
          }
          while ( v2 );
        }
      }
    }
    return (struct tagWND *)v2;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)a1 + 13) + 112LL); i; i = *(_QWORD *)(i + 88) )
      v2 = i;
    return (struct tagWND *)v2;
  }
  v4 = v3 - 1;
  if ( !v4 )
    return (struct tagWND *)*((_QWORD *)a1 + 11);
  v8 = v4 - 1;
  if ( !v8 )
    return (struct tagWND *)*((_QWORD *)a1 + 12);
  v9 = v8 - 1;
  if ( !v9 )
    return (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v9 == 1 )
    return (struct tagWND *)*((_QWORD *)a1 + 14);
  UserSetLastError(1443);
  return 0LL;
}
