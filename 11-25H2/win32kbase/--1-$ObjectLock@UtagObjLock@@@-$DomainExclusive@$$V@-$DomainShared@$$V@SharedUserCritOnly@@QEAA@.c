/*
 * XREFs of ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14009CF00
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C720 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

void __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
        __int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 40) && *(_BYTE *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      RIMUnlockExclusive(v2);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
