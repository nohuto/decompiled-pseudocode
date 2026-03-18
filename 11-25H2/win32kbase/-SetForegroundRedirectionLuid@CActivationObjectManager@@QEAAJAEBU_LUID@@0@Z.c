/*
 * XREFs of ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401AA0FC
 * Callers:
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1401BFEA0 (NtUserSetForegroundRedirectionForActivationObject.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x140065200 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1400E3AFC (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E42F4 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A9F04 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 */

__int64 __fastcall CActivationObjectManager::SetForegroundRedirectionLuid(
        CActivationObjectManager *this,
        const struct _LUID *a2,
        const struct _LUID *a3)
{
  unsigned int v6; // esi
  struct CActivationObject *ActivationObjectFromLuid; // r15
  __int64 v8; // rcx
  struct CActivationObject *v9; // rdi
  _BYTE v11[28]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v12; // [rsp+50h] [rbp-19h] BYREF
  __int64 v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+68h] [rbp-1h]
  _DWORD v15[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]

  v15[0] = 0;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  v15[1] = 0;
  v6 = -1073741275;
  v16 = 0LL;
  v20 = 0LL;
  CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)this + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(this, a2);
  if ( ActivationObjectFromLuid )
  {
    v6 = 0;
    if ( *a3 )
    {
      v9 = CActivationObjectManager::GetActivationObjectFromLuid(this, a3);
      if ( v9 )
      {
        memset(v11, 0, 20);
        *(struct _LUID *)&v11[20] = *a3;
        *(struct _LUID *)((char *)ActivationObjectFromLuid + 60) = *a3;
        v12 = *(_OWORD *)v11;
        v13 = *(_QWORD *)&v11[16];
        v14 = *(_DWORD *)&v11[24];
        CActivationObjectManager::NotifySystemSateChanged(
          v8,
          (__int64)ActivationObjectFromLuid,
          4,
          (unsigned int *)&v12);
        if ( (*((_DWORD *)ActivationObjectFromLuid + 14) & 4) != 0 && (*((_BYTE *)v9 + 56) & 1) != 0 )
          CActivationObjectManager::SetForeground(
            this,
            (__int64)v9,
            0,
            0,
            (struct CActivationObjectManager::ForegroundChangeTracker *)v15);
      }
      else
      {
        v6 = -1073741811;
      }
    }
    else
    {
      *(_DWORD *)v11 = 0;
      *(_QWORD *)((char *)ActivationObjectFromLuid + 60) = 0LL;
      *(_OWORD *)&v11[4] = 0LL;
      v14 = 0;
      v12 = *(_OWORD *)v11;
      v13 = 0LL;
      CActivationObjectManager::NotifySystemSateChanged(0LL, (__int64)ActivationObjectFromLuid, 4, (unsigned int *)&v12);
    }
  }
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v15);
  return v6;
}
