/*
 * XREFs of ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1401A9E08
 * Callers:
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1400E3AFC (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::QueryActivationObjectData(
        CActivationObjectManager *this,
        const struct _LUID *a2,
        struct _tagActivationObjectData *a3)
{
  unsigned int v6; // r15d
  struct CActivationObject *ActivationObjectFromLuid; // rax
  struct CActivationObject *v8; // rdi
  unsigned int ThreadId; // eax
  __int128 v11; // [rsp+20h] [rbp-30h]
  __int128 v12; // [rsp+30h] [rbp-20h]

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  v6 = -1073741275;
  RIMLockShared((__int64)this + 16);
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(this, a2);
  v8 = ActivationObjectFromLuid;
  if ( ActivationObjectFromLuid )
  {
    v6 = 0;
    *(_QWORD *)&v11 = *((_QWORD *)ActivationObjectFromLuid + 5);
    *((_QWORD *)&v11 + 1) = *((_QWORD *)ActivationObjectFromLuid + 9);
    *(_QWORD *)&v12 = *((_QWORD *)ActivationObjectFromLuid + 6);
    DWORD2(v12) = *((_DWORD *)ActivationObjectFromLuid + 14);
    HIDWORD(v12) = (unsigned int)PsGetProcessId(*((PEPROCESS *)ActivationObjectFromLuid + 3)) & 0xFFFFFFFC;
    ThreadId = (unsigned int)PsGetThreadId(*((PETHREAD *)v8 + 4));
    *(_OWORD *)a3 = v11;
    *((_OWORD *)a3 + 1) = v12;
    *((_QWORD *)a3 + 4) = ThreadId;
  }
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
  return v6;
}
