/*
 * XREFs of KiIsIsolationUnitIdleByHandle @ 0x1402367F0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsIsolationUnitIdleByHandle(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax
  _BYTE *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx

  v1 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_DWORD *)a1 & 1) == 0 )
    return (*(_BYTE *)(v1 + 35) & 1) == 0;
  v3 = *(_BYTE **)(v1 + 36504);
  v4 = (__int64 *)(v3 + 8);
  result = 1LL;
  if ( *v3 )
  {
    v5 = (unsigned __int8)*v3;
    do
    {
      v6 = *v4++;
      result = (*(unsigned __int8 *)(v6 + 35) ^ 1) & (unsigned int)result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
