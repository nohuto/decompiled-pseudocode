/*
 * XREFs of AlpcpLocateSectionView @ 0x140A84878
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, signed __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 **v4; // r15
  signed __int64 *v5; // r14
  ULONG_PTR v6; // rbx
  signed __int64 *v7; // rsi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rdi
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // ebp
  void *v12; // rdx
  LegacyAutoBoost *v13; // rdi
  __int64 *v14; // rax
  ULONG_PTR v16; // rdi

  v4 = (__int64 **)(a2 + 42);
  a4->Thread = 0LL;
  v5 = a2 + 41;
  v6 = 0LL;
  v7 = a2 + 44;
  do
  {
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, 0, v9, (struct _KTHREAD *)v7);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    v11 = 0;
    v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, v10);
    if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5, 0, v13, (struct _KTHREAD *)v5);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v14 = *v4;
    while ( v14 != (__int64 *)v4 )
    {
      if ( *((_BYTE *)v14 + 17) == 6 )
      {
        v16 = (ULONG_PTR)(v14 + 6);
        if ( v14[11] == a3 )
        {
          if ( AlpcpReferenceBlob((ULONG_PTR)(v14 + 6)) )
          {
            v6 = v16;
            v11 = -1073741823;
          }
          else
          {
            v11 = -1073741267;
          }
          break;
        }
      }
      v14 = (__int64 *)*v14;
      v11 = 0;
    }
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((unsigned __int64)v5);
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v7);
    KeAbPostRelease((unsigned __int64)v7);
  }
  while ( v11 == -1073741267 );
  if ( v6 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) == a1 )
    {
      a4->Thread = (_KTHREAD *)v6;
      return 0LL;
    }
    AlpcpDereferenceBlobEx(v6, 1);
  }
  return 3221225793LL;
}
