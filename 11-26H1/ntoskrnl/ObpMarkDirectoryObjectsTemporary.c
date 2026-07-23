/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x1409DEF90
 * Callers:
 *     ObpDeleteDirectoryName @ 0x1409DF2E8 (ObpDeleteDirectoryName.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF1C8 (ObpLockDirectoryExclusive.c)
 *     ObpUnlockDirectory @ 0x1409DF250 (ObpUnlockDirectory.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B025FC (ObpDeleteSymbolicLinkName.c)
 */

_QWORD *__fastcall ObpMarkDirectoryObjectsTemporary(_QWORD **a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rax
  _QWORD **v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbp
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  _QWORD *v22; // rcx
  PVOID v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+28h] [rbp-70h]
  _QWORD *v25; // [rsp+30h] [rbp-68h]
  __int128 v26; // [rsp+38h] [rbp-60h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  _QWORD *v29; // [rsp+A8h] [rbp+10h]
  _QWORD **v30; // [rsp+B0h] [rbp+18h]
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v29 = a2;
  v4 = a2;
  v26 = 0LL;
  v27 = 0LL;
  ObpLockDirectoryExclusive(&v26, a1, a3, a4);
  v7 = 37LL;
  v30 = a1;
  v31 = 37LL;
  v8 = a1;
  do
  {
    v9 = *v8;
    v10 = v8;
    if ( *v8 )
    {
      do
      {
        v12 = 0;
        v24 = v9[1];
        v25 = v10;
        v13 = v24 - 48;
        if ( (*(_BYTE *)(v24 - 48 + 26) & 2) != 0 )
          v14 = v13 - ObpInfoMaskToOffset[*(_BYTE *)(v24 - 48 + 26) & 3];
        else
          v14 = 0LL;
        v23 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v13 + 24) ^ (unsigned __int64)BYTE1(v13)];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = (AutoBoost *)KeAbPreAcquire(v13 + 16, 0LL, 0LL, v6);
        v18 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 16), v16, v13 + 16);
        if ( v18 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v18, v17);
          else
            *((_BYTE *)v18 + 10) = 1;
        }
        *(_BYTE *)(v13 + 27) &= ~0x10u;
        if ( *(_QWORD *)(v13 + 8) || *(_DWORD *)(v14 + 24) )
        {
          v4 = v29;
        }
        else
        {
          if ( v23 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(v24);
          v22 = v9;
          *v10 = *v9;
          v9 = (_QWORD *)*v9;
          *(_QWORD *)v14 = 0LL;
          v4 = v22;
          *v22 = v29;
          v29 = v22;
          ObfDereferenceObjectWithTag(a1, 0x6944624Fu);
          v12 = 1;
        }
        v10 = v9;
        _m_prefetchw((const void *)(v13 + 16));
        v19 = *(_QWORD *)(v13 + 16);
        v20 = v19 - 16;
        if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v20 = 0LL;
        if ( (v19 & 2) != 0
          || (v21 = *(_QWORD *)(v13 + 16),
              v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), v20, v19)) )
        {
          ExfReleasePushLock((_QWORD *)(v13 + 16));
        }
        KeAbPostRelease(v13 + 16);
        KeLeaveCriticalRegion();
        if ( v12 )
          v10 = v25;
        else
          v9 = (_QWORD *)*v9;
      }
      while ( v9 );
      v8 = v30;
      v7 = v31;
    }
    ++v8;
    --v7;
    v30 = v8;
    v31 = v7;
  }
  while ( v7 );
  ObpUnlockDirectory(&v26);
  return v4;
}
