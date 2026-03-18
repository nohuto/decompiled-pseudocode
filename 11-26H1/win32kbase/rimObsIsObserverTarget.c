/*
 * XREFs of rimObsIsObserverTarget @ 0x1401C55E8
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x140099E6C (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400A11F4 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimObsIsObserverTarget(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rdx

  v2 = *(_DWORD *)(a2 + 48);
  v3 = 0;
  if ( v2 == a1[27] )
  {
    if ( v2 != 2 )
      return 1;
    v4 = *(_QWORD *)(a2 + 448);
    if ( *(unsigned __int16 *)(v4 + 16) == a1[28] && *(unsigned __int16 *)(v4 + 18) == a1[29] )
      return 1;
  }
  return v3;
}
