/*
 * XREFs of MiQueryLoadedPatches @ 0x14087A3A0
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiFindUserSidHotPatchContext @ 0x14087600C (MiFindUserSidHotPatchContext.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 */

__int64 __fastcall MiQueryLoadedPatches(
        PSID SourceSid,
        _QWORD *a2,
        _DWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v6; // r14
  unsigned __int64 v9; // rbx
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  _QWORD *UserSidHotPatchContext; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // esi
  __int128 *v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD **v17; // r8
  unsigned __int64 v18; // rax
  _QWORD *i; // r8
  unsigned int v20; // ebx
  int v21; // r12d
  int CurrentProcessorColor; // eax
  unsigned int v23; // edx
  _DWORD *PoolMm; // rax
  _DWORD *v25; // rdi
  UNICODE_STRING *v26; // rbp
  __int64 v27; // rax
  _DWORD *v28; // r14
  signed __int64 v29; // rsi
  wchar_t *v30; // r13
  unsigned __int16 v31; // ax
  __int64 Length; // rax
  _QWORD **v33; // rcx
  unsigned __int64 v34; // rax
  _QWORD *j; // rcx
  __int64 v36; // rdx
  $241382875694CED3D471BC5892DE3337 *v38; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  --CurrentThread->SpecialApcDisable;
  v9 = 0LL;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E366D8.Header.Lock, 0, v11, &stru_140E366D8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( SourceSid )
  {
    UserSidHotPatchContext = MiFindUserSidHotPatchContext(SourceSid);
    v13 = 96LL;
    v14 = 0;
    v15 = (__int128 *)((unsigned __int64)(UserSidHotPatchContext + 3) & -(__int64)(UserSidHotPatchContext != 0LL));
    if ( !v15 )
      goto LABEL_23;
  }
  else
  {
    v15 = &xmmword_140E366C0;
    v13 = 96LL;
    v14 = 0;
  }
  while ( 1 )
  {
    v15 = *(__int128 **)v15;
    if ( !v15 )
      break;
    v9 = (unsigned __int64)v15;
  }
  v16 = v9;
  if ( v9 )
  {
    do
    {
      ++v14;
      v17 = *(_QWORD ***)(v16 + 8);
      v13 += *(unsigned __int16 *)(v16 + 40) + 24LL;
      v18 = v16;
      if ( v17 )
      {
        v16 = *(_QWORD *)(v16 + 8);
        for ( i = *v17; i; i = (_QWORD *)*i )
          v16 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v16 || *(_QWORD *)v16 == v18 )
            break;
          v18 = v16;
        }
      }
    }
    while ( v16 );
    v6 = a3;
  }
LABEL_23:
  if ( a5 >= v13 )
  {
    v21 = v13;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_DWORD *)ExAllocatePoolMm(256LL, v23, 1900571981, CurrentProcessorColor | 0x80000000);
    v25 = PoolMm;
    if ( !PoolMm )
    {
      v20 = -1073741670;
      goto LABEL_44;
    }
    *PoolMm = 2;
    if ( SourceSid )
      RtlCopySid(0x44u, PoolMm + 1, SourceSid);
    if ( v14 )
    {
      v26 = (UNICODE_STRING *)(v25 + 24);
      v27 = v14;
      v28 = &v25[4 * v14 + 24];
      *((_QWORD *)v25 + 10) = v25 + 24;
      v29 = (char *)v25 - (char *)a4;
      *((_QWORD *)v25 + 11) = v28;
      v30 = (wchar_t *)&v28[2 * v27];
      while ( v9 )
      {
        *v28 = *(_DWORD *)(v9 + 24);
        v28[1] = *(_DWORD *)(v9 + 28);
        v31 = *(_WORD *)(v9 + 40);
        v26->Length = v31;
        v26->MaximumLength = v31;
        v26->Buffer = v30;
        RtlCopyUnicodeString(v26, (PCUNICODE_STRING)(v9 + 40));
        v26->Buffer = (wchar_t *)((char *)v26->Buffer - v29);
        v28 += 2;
        ++v25[18];
        Length = v26->Length;
        ++v26;
        v33 = *(_QWORD ***)(v9 + 8);
        v30 = (wchar_t *)((char *)v30 + Length);
        v34 = v9;
        if ( v33 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          for ( j = *v33; j; j = (_QWORD *)*j )
            v9 = (unsigned __int64)j;
        }
        else
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v9 || *(_QWORD *)v9 == v34 )
              break;
            v34 = v9;
          }
        }
      }
      *((_QWORD *)v25 + 11) -= v29;
      *((_QWORD *)v25 + 10) -= v29;
      v6 = a3;
    }
    *a2 = v25;
    *v6 = v21;
  }
  else
  {
    if ( v13 > 0xFFFFFFFF )
    {
      v20 = -1073741675;
      goto LABEL_44;
    }
    *a2 = 0LL;
    *v6 = v13;
  }
  v20 = 0;
LABEL_44:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E366D8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E366D8);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v38 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v38->ApcState.ApcListHead[0].Flink != v38 )
      KiCheckForKernelApcDelivery((__int64)v38, v36);
  }
  return v20;
}
