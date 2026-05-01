/*
 * XREFs of ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003D484
 * Callers:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18003D1FC (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180049D44 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18006DDEC (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007E614 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F3B4 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003DC84 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003DCA8 (-HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotTerminate(
        struct _HAM_HOST_SNAPSHOT *a1,
        int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        unsigned int a5,
        char a6)
{
  struct _HAM_TERMINATION_HOST_BLOCK *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  int UnbiasedInterruptTimeMs64; // eax
  __int64 *v14; // r12
  int v15; // r13d
  int v16; // esi
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  struct _RM_HAM_ACTIVITY_HOST *v18; // rdi
  _QWORD *v19; // rbx
  __int64 *Value; // rax
  __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rax
  BOOL v24; // esi
  DWORD v25; // ebp
  _QWORD *v26; // rbx
  unsigned int v27; // edx
  struct _HAM_TERMINATION_HOST_BLOCK *v28; // rbx
  _QWORD *v29; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+48h] [rbp-40h] BYREF
  int v32; // [rsp+B0h] [rbp+28h]

  v30 = 0LL;
  for ( i = HampHostSnapshotGetFirst(a1); i; i = HampHostSnapshotGetNext(a1) )
  {
    v11 = *(struct _RM_HAM_ACTIVITY_HOST **)i;
    LODWORD(v29) = 0;
    HampHostQueueTerminateEx((__int64)v11, a2, a3, a4, 0, 0, 0LL, (unsigned int *)&v29);
    if ( (a6 & 1) != 0 )
    {
      HampHostAcquireLockExclusiveEx(v11, 0);
      HampHostCheckQueueStateWorker(v11, 0);
      HampHostReleaseLockExclusive(v11);
    }
  }
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v14 = &v30;
  v15 = UnbiasedInterruptTimeMs64;
  if ( a5 == -1 )
    v14 = 0LL;
  v16 = a5 + UnbiasedInterruptTimeMs64;
  v32 = a5 + UnbiasedInterruptTimeMs64;
  result = HampHostSnapshotGetFirst(a1);
  while ( 1 )
  {
    v28 = result;
    if ( !result )
      break;
    v18 = *(struct _RM_HAM_ACTIVITY_HOST **)result;
    HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)result, 0);
    v19 = (_QWORD *)((char *)v28 + 8);
    v29 = v19;
    do
    {
      if ( HampLockTrackerId != -1 )
      {
        Value = (__int64 *)TlsGetValue(HampLockTrackerId);
        v21 = *Value;
        if ( (*Value & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v22 = Value[2]-- == 1;
        if ( v22 )
          *Value = v21 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(v18);
      if ( v14 )
      {
        v23 = (unsigned int)(v16 - v15);
        if ( (unsigned int)v23 < a5 )
          v30 = -10000 * v23;
        else
          v30 = 0LL;
      }
      RtlWaitOnAddress((char *)v18 + 808, v19, 8LL);
      if ( a5 == -1 )
      {
        v24 = 0;
      }
      else
      {
        v15 = CempQueryUnbiasedInterruptTimeMs64();
        v24 = v16 - v15 > a5;
      }
      v25 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v26 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v26 |= 2uLL;
        ++v26[2];
        v19 = v29;
      }
      RtlAcquireSRWLockShared(v18);
      if ( *v19 != *((_QWORD *)v18 + 101) )
        break;
      v22 = !v24;
      v16 = v32;
    }
    while ( v22 );
    HampHostReleaseLockSharedEx(v18, v27);
    result = HampHostSnapshotGetNext(a1);
    v16 = v32;
  }
  return result;
}
