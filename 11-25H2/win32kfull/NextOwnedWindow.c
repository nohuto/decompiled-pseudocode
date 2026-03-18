/*
 * XREFs of NextOwnedWindow @ 0x140142930
 * Callers:
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14006001C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C24A8 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  if ( a1 )
    goto LABEL_4;
  a1 = *(_QWORD **)(a3 + 112);
  if ( !a1 )
    return 0LL;
  do
  {
    v5 = (_QWORD *)a1[15];
    v6 = a1;
    if ( a1 != v5 )
    {
      v6 = (_QWORD *)a1[15];
      if ( v5 )
      {
        do
        {
          v7 = v6[13];
          if ( v7 == a1[13] )
            break;
          v6 = (_QWORD *)v6[13];
        }
        while ( v7 );
      }
    }
    if ( a2 == v6 )
      break;
LABEL_4:
    a1 = (_QWORD *)a1[11];
  }
  while ( a1 );
  return a1;
}
