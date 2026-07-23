/*
 * XREFs of CmpStartRMLogs @ 0x1408B2F7C
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1408B2D64 (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpUuidCreate @ 0x140A7EF4C (CmpUuidCreate.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartRMLogs(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v5; // esi
  __int64 v6; // r14
  int started; // eax
  __int64 v8; // rcx
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v2 = 0;
  Uuid = 0LL;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v5 = CmpUuidCreate(&Uuid);
    v6 = (*(_DWORD *)(a1 + 104) & 2) != 0 ? 4 : 0;
    CmpLockRegistryFreezeAware(0LL);
    started = CmpStartRMLog(a1, 0LL);
    v2 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v5 >= 0 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v2 = CmpStartRMLog(a1, &Uuid);
    }
    CmpUnlockRegistry(v8);
    *(_DWORD *)(v6 + a1 + 108) = v2;
  }
  return v2;
}
