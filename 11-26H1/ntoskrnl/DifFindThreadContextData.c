/*
 * XREFs of DifFindThreadContextData @ 0x14064E2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DifFindThreadContextData(int a1, int a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax

  if ( DifPluginStates[a1] )
  {
    v2 = *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64];
    if ( v2 )
    {
      v3 = *(__int64 **)(v2 + 8);
      if ( v3 )
      {
        while ( v3 )
        {
          if ( a1 == *((_DWORD *)v3 + 5) && a2 == *((_DWORD *)v3 + 4) )
            return v3[1];
          v3 = (__int64 *)*v3;
        }
      }
    }
  }
  return 0LL;
}
