/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14039FB18
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x14039F6A8 (MmWaitForCacheManagerPrefetch.c)
 *     MiPfCompletePrefetchIos @ 0x14039FC90 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B9DEC (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiMapWorkingSetTypeToVm @ 0x14039F9F0 (MiMapWorkingSetTypeToVm.c)
 *     MiFillPteHierarchy @ 0x14039FA50 (MiFillPteHierarchy.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR a1, void *a2)
{
  unsigned int v3; // edx
  unsigned int v6[4]; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v8[7]; // [rsp+48h] [rbp-41h] BYREF
  int v9; // [rsp+80h] [rbp-9h]
  __int64 v10; // [rsp+90h] [rbp+7h]

  *(_QWORD *)v6 = 0LL;
  v3 = *(_DWORD *)(a1 + 188);
  if ( a2 == (void *)1 )
    a2 = MiMapWorkingSetTypeToVm((v3 >> 1) & 0xF);
  *(_DWORD *)(a1 + 188) = v3 | 0x2000000;
  memset_0(v7, 0, 0x98uLL);
  MiFillPteHierarchy(0LL, v8);
  v9 &= ~0x100u;
  v10 = 0LL;
  memset(v7, 0, sizeof(v7));
  v8[4] = (unsigned __int64)a2;
  MiWaitForInPageComplete((__int64)v7, a1, v6);
  return MiFinishHardFault((__int64)v7, ((*(_QWORD *)(a1 + 232) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL, a1, 0LL);
}
