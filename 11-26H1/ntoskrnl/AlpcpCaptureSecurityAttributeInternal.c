/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x14098CED0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140AB872C (AlpcpCaptureSecurityAttribute32.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(
        __int64 a1,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5)
{
  int v7; // ebx
  _KTHREAD *Thread; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rsi
  void *v11; // rdx
  LegacyAutoBoost *v12; // r14
  unsigned __int64 v13; // rdi
  ULONG_PTR v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 result; // rax
  __int64 *v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v21; // [rsp+30h] [rbp-38h] BYREF

  v21 = 0LL;
  if ( (a2 & 0xFFFCFFFF) != 0 )
    return 3221225485LL;
  v7 = a2 & 0x10000;
  if ( (a2 & 0x20000) != 0 )
  {
    if ( v7 )
      return 3221225485LL;
  }
  Thread = a4->Thread;
  if ( a4->Thread != (_KTHREAD *)-2LL )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      v10 = (_QWORD *)(v9 + 40);
      if ( v10 )
      {
        v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v10 + 1), 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64(v10 + 1, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v10 + 1, 0, v12, (struct _KTHREAD *)(v10 + 1));
        if ( v12 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v12, v11);
          else
            *((_BYTE *)v12 + 10) = 1;
        }
        v13 = (unsigned int)((_DWORD)Thread - 16);
        if ( v13 < v10[2] )
        {
          _mm_lfence();
          v14 = *(_QWORD *)(*v10 + 8 * v13);
          if ( v14 )
          {
            if ( *(_BYTE *)(v14 - 31) == 3 && AlpcpReferenceBlob(v14) )
            {
              if ( _InterlockedCompareExchange64(v10 + 1, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v10 + 1);
              KeAbPostRelease((unsigned __int64)(v10 + 1));
              if ( (*(_BYTE *)(v14 - 32) & 4) != 0 )
              {
                _InterlockedOr(v20, 0);
                if ( (*(_QWORD *)(v14 - 16) & 1) != 0 )
                  ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(v14 - 16), v15, v16, v17);
              }
              if ( a1 == *(_QWORD *)(v14 + 24) )
              {
                if ( v7 )
                {
                  if ( (unsigned __int8)AlpcpDeleteBlob(v14) )
                    AlpcpDereferenceBlobEx(v14);
                  AlpcpDereferenceBlobEx(v14);
                  v14 = 0LL;
                }
                *(_QWORD *)(a5 + 32) = v14;
                return 0LL;
              }
              else
              {
                AlpcpDereferenceBlobEx(v14);
                return 3221225506LL;
              }
            }
          }
        }
        if ( _InterlockedCompareExchange64(v10 + 1, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v10 + 1);
        KeAbPostRelease((unsigned __int64)(v10 + 1));
      }
    }
    return 3221225480LL;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    LOBYTE(v7) = 1;
  }
  else if ( v7 )
  {
    return 3221225480LL;
  }
  result = AlpcpCreateSecurityContext(a1, (__int64)KeGetCurrentThread(), v7, a3, &v21);
  if ( (int)result >= 0 )
  {
    v19 = v21;
    *(_QWORD *)(a5 + 32) = v21;
    if ( (_BYTE)v7 )
      a4->Thread = (_KTHREAD *)v19[1];
  }
  return result;
}
