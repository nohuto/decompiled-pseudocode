/*
 * XREFs of PfSnBeginAppLaunch @ 0x1409E9DD0
 * Callers:
 *     PfSnAppLaunchScenarioControl @ 0x1407C72C0 (PfSnAppLaunchScenarioControl.c)
 *     PfProcessCreateNotification @ 0x1409E9D20 (PfProcessCreateNotification.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1404B2990 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404B5064 (PfLockSharedRelease.c)
 *     PfSnGetAppVersion @ 0x1404D67A4 (PfSnGetAppVersion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PfSnBeginScenario @ 0x14096F3B8 (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x14096F6B4 (PfSnLogScenarioDecision.c)
 *     PfSnScanCommandLine @ 0x1409E8F94 (PfSnScanCommandLine.c)
 *     PfSnIsHostingApplication @ 0x1409E9178 (PfSnIsHostingApplication.c)
 *     PfSnCheckModernApp @ 0x1409E923C (PfSnCheckModernApp.c)
 *     PfCalculateProcessHash @ 0x1409E9560 (PfCalculateProcessHash.c)
 *     PfSnCheckScenario @ 0x1409EA0EC (PfSnCheckScenario.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1409EA150 (PfSnAltProfileFindByScenarioId.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(ULONG_PTR a1, unsigned __int16 *a2, int a3)
{
  void *v6; // rdi
  unsigned int v7; // r14d
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  _WORD *v13; // rax
  const void *v14; // rdx
  __int64 v15; // rbx
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned __int8 IsHostingApplication; // al
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  __int64 v25; // rax
  unsigned __int16 *v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  struct _KLOCK_ENTRIES v32; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t Str2[8]; // [rsp+C0h] [rbp-40h] BYREF
  $07BAD7E6BFE160503A0B2CC15B90D4A7 v34; // [rsp+D0h] [rbp-30h]
  _RTL_RB_TREE WaiterTree; // [rsp+E0h] [rbp-20h]
  __int128 v36; // [rsp+F0h] [rbp-10h]
  unsigned int v37; // [rsp+100h] [rbp+0h]
  _BYTE v38[256]; // [rsp+110h] [rbp+10h] BYREF

  v31 = 0;
  v30 = 0;
  v28 = 0;
  v29 = 0;
  *(_OWORD *)&v32.Entries[0].LockState.0 = 0LL;
  memset_0(Str2, 0, 0x44uLL);
  v27 = 0LL;
  v6 = 0LL;
  memset_0(&v32.Entries[0].TreeNode.Right, 0, 0x40uLL);
  v7 = 0;
  v8 = PfSnCheckScenario(0LL, &v31);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( !a2 )
  {
    v9 = PfCalculateProcessHash(a1, (unsigned __int64)&v27);
    v6 = v27;
    v8 = v9;
    if ( v9 < 0 )
    {
LABEL_26:
      PfSnLogScenarioDecision(a1, (const WCHAR *)&v32.Entries[0].TreeNode.Right, 0, 0, 15, 15, v8, -1LL);
      goto LABEL_22;
    }
    a2 = v27;
  }
  v10 = 0LL;
  v11 = *((_QWORD *)a2 + 1);
  v12 = *a2 >> 1;
  v32.Thread = (_KTHREAD *)256;
  LODWORD(v27) = 0;
  v13 = (_WORD *)(v11 + 2 * (v12 - 1LL));
  if ( (unsigned __int64)v13 < v11 )
    goto LABEL_25;
  do
  {
    if ( *v13 == 92 )
      break;
    v10 = (unsigned int)(v10 + 1);
    --v13;
  }
  while ( (unsigned __int64)v13 >= v11 );
  if ( !(_DWORD)v10 || (v14 = (const void *)(v11 + 2LL * (v12 - (unsigned int)v10))) == 0LL )
  {
LABEL_25:
    v8 = -1073741811;
    goto LABEL_26;
  }
  if ( (unsigned int)v10 >= 0x1D )
    v10 = 29LL;
  v15 = 2 * v10;
  memmove(&v32.Entries[0].TreeNode.Right, v14, 2 * v10);
  *(_WORD *)((char *)&v32.Entries[0].TreeNode.Right + v15) = 0;
  v16 = *(_DWORD *)(a1 + 900);
  IsHostingApplication = PfSnIsHostingApplication((wchar_t *)&v32.Entries[0].TreeNode.Right, v17, v18, v19);
  v8 = PfSnScanCommandLine(&v28, &v30, IsHostingApplication);
  if ( v8 < 0 )
    goto LABEL_26;
  v8 = PfSnCheckModernApp((int *)&v27, &v29, (__int64)v38, &v32);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( (_DWORD)v27 )
  {
    v7 = 8;
    *(_QWORD *)&v32.Entries[0].EntryFlags = v38;
    *(_WORD *)&v32.Entries[0].LockState.0 = v32.Thread;
    WORD1(v32.Entries[0].LockUnsafe) = v32.Thread;
  }
  else
  {
    *(_OWORD *)&v32.Entries[0].LockState.0 = *(_OWORD *)a2;
  }
  v21 = v30;
  v32.Entries[0].BoostBitmap.WaiterCounts = v16 + v28 + v29;
  *(_QWORD *)&v32.AvailableEntryBitmap = 0LL;
  v32.Thread = (_KTHREAD *)v30;
  PfSnGetAppVersion(a1, (__int64)&v32.AvailableEntryBitmap);
  *(_OWORD *)Str2 = *(_OWORD *)&v32.Entries[0].TreeNode.Right;
  v34 = v32.Entries[0].40;
  WaiterTree = v32.Entries[0].WaiterTree;
  v36 = *(_OWORD *)&v32.Entries[0].EntryLock;
  v37 = v21;
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E66FF0.WaitBlock[1].Thread, v22, v23, v24);
  v25 = PfSnAltProfileFindByScenarioId(Str2);
  if ( v25 )
  {
    v32.Entries[0].BoostBitmap.WaiterCounts += *(_DWORD *)(v25 + 124);
    HIDWORD(v32.Thread) = *(_DWORD *)(v25 + 124);
  }
  else
  {
    v32.Entries[0].BoostBitmap.WaiterCounts += v21;
  }
  PfLockSharedRelease((struct _KTHREAD *)&stru_140E66FF0.WaitBlockFill11[72]);
  v32.Entries[0].BoostBitmap.WaiterCounts += a3;
  if ( (stru_140E66FF0.WaitBlockFill5[32] & 0x20) != 0 || v31 == 2 )
    v7 |= 2u;
  v8 = PfSnBeginScenario(a1, (__int64)&v32.Entries[0].TreeNode.Children[1], 0, v7, (__int64)v32.Entries, &v32);
  if ( v8 >= 0 )
    v8 = 0;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
