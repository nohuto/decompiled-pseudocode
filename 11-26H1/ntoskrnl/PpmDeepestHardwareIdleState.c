/*
 * XREFs of PpmDeepestHardwareIdleState @ 0x1404E054C
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140605810 (PpmInstallNewIdleStates.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall PpmDeepestHardwareIdleState(__int64 a1)
{
  unsigned __int8 v1; // dl
  unsigned int v3; // eax
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  unsigned __int8 v6; // cl

  v1 = 1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( v3 )
    {
      v4 = (unsigned __int8 *)(a1 + 1392);
      v5 = v3;
      do
      {
        v6 = *v4;
        v4 += 352;
        if ( v6 <= v1 )
          v6 = v1;
        v1 = v6;
        --v5;
      }
      while ( v5 );
    }
  }
  return v1;
}
