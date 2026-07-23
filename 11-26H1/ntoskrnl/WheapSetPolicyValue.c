/*
 * XREFs of WheapSetPolicyValue @ 0x140850024
 * Callers:
 *     WheapScanRegistryForPolicyChanges @ 0x14084FF3C (WheapScanRegistryForPolicyChanges.c)
 * Callees:
 *     WheaInitializeRegChangeNotify @ 0x14084FBA4 (WheaInitializeRegChangeNotify.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CEEA90 (WheapOpenPolicyRegistryKey.c)
 */

__int64 __fastcall WheapSetPolicyValue(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int *v7; // rdx

  v2 = 0;
  v3 = a1;
  if ( !CmpContextListLock.WaitBlock[1].Object )
    WheapOpenPolicyRegistryKey();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&CmpContextListLock.WaitBlockFill11[120], 0, 1) == 1 )
    WheaInitializeRegChangeNotify();
  if ( (unsigned int)v3 >= 0x16 )
    return (unsigned int)-1073741811;
  v5 = *a2;
  v6 = 32 * v3;
  if ( *a2 < *((_DWORD *)&unk_140E093A0 + 8 * v3) || v5 > *(_DWORD *)((char *)&unk_140E093A4 + v6) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    _mm_lfence();
    v7 = *(unsigned int **)((char *)&off_140E09398 + v6);
    if ( *v7 != v5 )
    {
      *v7 = v5;
      WheapRegPolicyTableChanged[v3] = 1;
    }
  }
  return v2;
}
