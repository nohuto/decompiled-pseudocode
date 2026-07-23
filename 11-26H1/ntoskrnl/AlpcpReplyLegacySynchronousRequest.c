/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x140A52738
 * Callers:
 *     NtReplyPort @ 0x1407C2E40 (NtReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x1407C2FD0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     AlpcpSetOwnerPortMessage @ 0x1408EEA60 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCaptureMessageData @ 0x14098CCB0 (AlpcpCaptureMessageData.c)
 *     AlpcpLookupMessage @ 0x14098FA50 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140991E48 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140A52BE4 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpAvailableBufferSize @ 0x140A53310 (AlpcpAvailableBufferSize.c)
 *     AlpcpLockBlobShared @ 0x140A53460 (AlpcpLockBlobShared.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 *a1, __m128i *a2, char a3)
{
  __int64 v3; // r14
  __int64 v4; // r9
  signed int v5; // ebx
  int v7; // r8d
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  ULONG_PTR v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  bool v13; // r15
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  char *v16; // r10
  void *v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // r15
  struct _KLOCK_ENTRIES *v20; // r9
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // r15
  _QWORD *v30; // rbx
  signed __int64 *v31; // r12
  void *v32; // rdx
  LegacyAutoBoost *v33; // r15
  __int64 *v34; // r15
  __int64 v35; // rcx
  signed __int32 v36[8]; // [rsp+0h] [rbp-F8h] BYREF
  signed int v37; // [rsp+30h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v39; // [rsp+50h] [rbp-A8h]
  __m128i v40; // [rsp+60h] [rbp-98h] BYREF
  __m128i v41; // [rsp+70h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-78h]
  __int64 *v43; // [rsp+88h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-60h]
  __int128 v45; // [rsp+A0h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-48h]

  v43 = a1;
  v39 = a1;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  BugCheckParameter2[0] = 0LL;
  v3 = *a1;
  v44 = *a1;
  if ( a3 )
  {
    v45 = 0LL;
    v46 = 0LL;
    RtlCopyFromUser(&v40, a2, 0x28uLL);
    if ( (unsigned int)v40.m128i_i16[0] >= (unsigned __int16)(v40.m128i_i16[0] + 40)
      || (unsigned __int64)v40.m128i_u16[0] + 40 > v40.m128i_u16[1] )
    {
      v5 = -1073741811;
    }
    else
    {
      v40.m128i_i16[1] = v40.m128i_i16[0] + 40;
      v5 = 0;
    }
    v37 = v5;
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( v40.m128i_i16[3] )
      return 3221225485LL;
    v7 = v42;
  }
  else
  {
    v40 = *a2;
    v41 = a2[1];
    HIDWORD(v42) = HIDWORD(a2[2].m128i_i64[0]);
    v7 = 0;
    LODWORD(v42) = 0;
    v4 = (unsigned int)_mm_cvtsi128_si32(v40);
    if ( (unsigned __int16)v4 >= (unsigned __int16)(v4 + 40)
      || (unsigned __int64)(unsigned __int16)v4 + 40 > v40.m128i_u16[1] )
    {
      v5 = -1073741811;
    }
    else
    {
      v40.m128i_i16[1] = v4 + 40;
      v5 = 0;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  v5 = AlpcpLookupMessage(v3, v41.m128i_u32[2], v7, v4, BugCheckParameter2);
  if ( v5 >= 0 )
  {
    v10 = BugCheckParameter2[0];
    v11 = *(_QWORD *)(BugCheckParameter2[0] + 16);
    v5 = v11 == 0 ? 0xC0000702 : 0;
    if ( !v11 )
    {
      v18 = BugCheckParameter2[0];
LABEL_46:
      AlpcpUnlockMessage(v18, v11, v8, v9);
      return (unsigned int)v5;
    }
    v12 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v12 & 0x80u) != 0 )
    {
      AlpcpCancelMessage(v3, BugCheckParameter2[0], 0x10000LL);
      return (unsigned int)-1073741769;
    }
    if ( (v12 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2[0] + 32) )
      goto LABEL_33;
    if ( v11 != v3 )
    {
      if ( (v12 & 7) == 0 )
      {
        v29 = *(_QWORD *)(BugCheckParameter2[0] + 24);
        if ( v29 )
        {
          v30 = *(_QWORD **)(v29 + 16);
          AlpcpLockBlobShared(v30);
          if ( ((*(_DWORD *)(v29 + 416) >> 1) & 3) == 2 )
            v13 = *v30 == v3 || v30[1] == v3;
          else
            v13 = v30[2] == v3;
          if ( _InterlockedCompareExchange64(v30 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v30 - 2);
          KeAbPostRelease((unsigned __int64)(v30 - 2));
LABEL_20:
          if ( v13 )
          {
            v14 = AlpcpAvailableBufferSize(v10);
            if ( v15 > v14 )
            {
              v5 = AlpcpCaptureMessageData(v10, v15, v16, a3);
            }
            else
            {
              v17 = (void *)(v10 + 280);
              if ( a3 )
                RtlCopyFromUser(v17, v16, v15);
              else
                RtlCopyVolatileMemory(v17, v16, v15);
              v5 = 0;
            }
            v37 = v5;
            v18 = v10;
            if ( v5 >= 0 )
            {
              *(_DWORD *)(v10 + 40) |= 0x10000u;
              _InterlockedOr(v36, 0);
              v19 = *(_QWORD *)(v10 + 24);
              AlpcpRemoveMessageFromPendingQueue(v10, v11, v8, v9);
              *(_DWORD *)(v10 + 240) = v40.m128i_i32[0];
              *(_WORD *)(v10 + 244) = 2;
              *(_OWORD *)(v10 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
              v21 = *(_DWORD *)(v10 + 40) | 0x200;
              *(_DWORD *)(v10 + 40) = v21;
              v22 = v21 & 0xFFFFFF87 | (4 * (*(_DWORD *)(v19 + 416) & 6));
              *(_DWORD *)(v10 + 40) = v22;
              if ( ((v22 >> 3) & 0xF) == 1 )
              {
                v39 = *(__int64 **)(v19 + 16);
                v31 = v39 - 2;
                v33 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v39 - 2), 0LL, 0LL, v20);
                if ( _InterlockedCompareExchange64(v31, 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx(v31, 0, v33, (struct _KTHREAD *)v31);
                if ( v33 )
                {
                  if ( (KiAbpGlobalState & 1) != 0 )
                    AutoBoost::KiAbpPostAcquire(v33, v32);
                  else
                    *((_BYTE *)v33 + 10) = 1;
                }
                v34 = v39;
                v35 = v39[1];
                if ( v35 )
                  *(_QWORD *)(v10 + 120) = *(_QWORD *)(v35 + 56);
                else
                  *(_QWORD *)(v10 + 120) = 0LL;
                if ( _InterlockedCompareExchange64(v34 - 2, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v34 - 2);
                KeAbPostRelease((unsigned __int64)(v34 - 2));
              }
              else
              {
                *(_QWORD *)(v10 + 120) = *(_QWORD *)(v19 + 56);
              }
              v23 = *(_QWORD *)(v10 + 32);
              *(_QWORD *)(v10 + 32) = 0LL;
              --*(_WORD *)(v10 - 30);
              *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 40) & 0xFFFEFEF8 | 0x105;
              AlpcpClearOwnerPortMessage(v10);
              AlpcpSetOwnerPortMessage(v10, (void *)v3);
              AlpcpUnlockMessage(v10, v24, v25, v26);
              if ( (v43[6] & 4) != 0 )
                v43[3] = v23;
              else
                KeReleaseSemaphoreEx(v23 + 1304, 1LL, 1LL, v27, 0, 0LL);
              return (unsigned int)v5;
            }
            goto LABEL_46;
          }
        }
LABEL_33:
        AlpcpUnlockMessage(v10, v11, v8, v9);
        return (unsigned int)-1073741790;
      }
      if ( (*(_BYTE *)(v3 + 416) & 6) != 6 )
        goto LABEL_33;
      v28 = *(_QWORD **)(v3 + 16);
      if ( !v28 || *v28 != v11 )
        goto LABEL_33;
    }
    if ( (v12 & 7) == 3 && (v12 & 0x2000) == 0 )
    {
      v13 = 1;
      goto LABEL_20;
    }
    goto LABEL_33;
  }
  return (unsigned int)v5;
}
