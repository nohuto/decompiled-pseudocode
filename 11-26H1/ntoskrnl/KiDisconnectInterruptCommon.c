/*
 * XREFs of KiDisconnectInterruptCommon @ 0x140430EB4
 * Callers:
 *     KeDisconnectInterrupt @ 0x140430D90 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140431368 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x1404302F8 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404309BC (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectInterruptInternal @ 0x1404310AC (KiDisconnectInterruptInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSignalWaitDisconnectLock @ 0x1405F8C3C (KiSignalWaitDisconnectLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  unsigned int v7; // esi
  char v8; // r12
  __int64 v9; // rbx
  KSPIN_LOCK *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // rdx
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v17; // [rsp+28h] [rbp-58h] BYREF
  char *v18; // [rsp+38h] [rbp-48h]
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v19[1] = a3;
  v18 = 0LL;
  v19[0] = 0LL;
  v17 = 0LL;
  v5 = *(struct _KTHREAD **)(a2 + 152);
  v20 = 0LL;
  v7 = -1073741585;
  v8 = 0;
  v16[0] = 0;
  PreviousAffinity = 0LL;
  if ( v5 != KeGetCurrentThread() )
  {
    LOWORD(v17) = 1;
    v18 = (char *)&v17 + 8;
    *((_QWORD *)&v17 + 1) = (char *)&v17 + 8;
    v19[0] = &v17;
    BYTE2(v17) = 6;
    DWORD1(v17) = 0;
  }
  if ( a1 )
  {
    v10 = (KSPIN_LOCK *)(KiDpcCorralLock.Timer.DueTime.QuadPart + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v10, v16);
    CurrentIrql = v16[0];
  }
  else
  {
    v9 = *(unsigned int *)(a2 + 96);
    Affinity = 0LL;
    v10 = 0LL;
    v11 = KiProcessorBlock[v9];
    Affinity.Group = *(unsigned __int8 *)(v11 + 208);
    Affinity.Mask = *(_QWORD *)(v11 + 200);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (_DWORD)v9 != KeGetCurrentPrcb()->Number )
      __fastfail(0x28u);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12, 15LL);
    }
  }
  if ( !*(_BYTE *)(a2 + 95) || (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
LABEL_20:
    if ( !a1 )
      goto LABEL_12;
LABEL_23:
    HalpReleaseHighLevelLock(v10, CurrentIrql);
    goto LABEL_15;
  }
  if ( *(_WORD *)(a2 + 102) )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
    v8 = 1;
    *(_QWORD *)(a2 + 144) = v19;
    goto LABEL_20;
  }
  if ( a1 )
  {
    v7 = KiDisconnectSecondaryInterruptInternal(a2);
    goto LABEL_23;
  }
  v7 = KiDisconnectInterruptInternal(a2, a3);
LABEL_12:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_15:
  if ( v19[0] && v8 )
  {
    LOBYTE(v14) = 1;
    KiSignalWaitDisconnectLock(v19[0], v14);
    return (unsigned int)v20;
  }
  return v7;
}
