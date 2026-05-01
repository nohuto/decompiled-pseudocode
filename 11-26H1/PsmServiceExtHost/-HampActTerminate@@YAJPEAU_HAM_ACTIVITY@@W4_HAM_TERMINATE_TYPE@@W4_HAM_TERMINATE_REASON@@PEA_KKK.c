/*
 * XREFs of ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18005D9B0
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CCAC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActTerminate(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5, char a6)
{
  DWORD v6; // ebp
  __int64 v8; // rdi
  _QWORD *Value; // rsi
  int v13; // ebx
  __int64 *v14; // rax
  __int64 v15; // r8
  struct _HAM_ACTIVITY *FirstActivity; // r8
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF

  v6 = HampLockTrackerId;
  v8 = *(_QWORD *)(a1 + 80);
  v23 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(v8);
  if ( *(_BYTE *)(a1 + 562) == 4 )
  {
    v13 = -1073741275;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(a1 + 512) )
  {
    v13 = -1073741436;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a1 + 552) & 8) != 0 )
  {
    v13 = -1058275327;
    goto LABEL_7;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x10000) == 0 )
    {
      v13 = -1073741580;
      goto LABEL_7;
    }
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v8);
    while ( FirstActivity )
    {
      if ( FirstActivity != (struct _HAM_ACTIVITY *)a1
        && *((_QWORD *)FirstActivity + 64) == *(_QWORD *)(v8 + 808)
        && (v20 & *((_DWORD *)FirstActivity + 28)) != 0
        && (*((_BYTE *)FirstActivity + 552) & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 552) = v19 | 0x10;
        v13 = -1058275328;
        goto LABEL_7;
      }
      v21 = *((_QWORD *)FirstActivity + 12);
      v22 = *((_QWORD *)FirstActivity + 10);
      FirstActivity = 0LL;
      if ( v21 != v22 + 608 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v21 - 96);
    }
  }
  v13 = HampHostQueueTerminateEx(v8, a2, a3, *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64), 1, a5, a4, &v23);
  if ( v13 >= 0 )
    v13 = 0;
LABEL_7:
  if ( HampLockTrackerId != -1 )
  {
    v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v14[2]-- == 1 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v8 + 8) = 0;
  RtlReleaseSRWLockExclusive(v8);
  if ( v23 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v8 + 704));
  return (unsigned int)v13;
}
