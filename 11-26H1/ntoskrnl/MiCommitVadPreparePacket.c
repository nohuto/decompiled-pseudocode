/*
 * XREFs of MiCommitVadPreparePacket @ 0x140998470
 * Callers:
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 * Callees:
 *     MiSanitizePfnProtection @ 0x14033EED0 (MiSanitizePfnProtection.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiGetVadPageSize @ 0x1404479B0 (MiGetVadPageSize.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiGetVadLargePageIndex @ 0x1404D00FC (MiGetVadLargePageIndex.c)
 */

__int64 __fastcall MiCommitVadPreparePacket(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v8; // r11
  __int64 v9; // r14
  unsigned int ProtectionMask; // eax
  unsigned int v11; // r10d
  int v12; // eax
  __int64 v13; // r11
  _KPROCESS *Process; // rsi
  int v15; // r10d
  __int64 PteAddress; // rax
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // rax
  _QWORD *v20; // r11
  __int64 v21; // rdx
  char v22; // r9
  unsigned int v23; // r10d
  __int64 v24; // r11
  int v25; // r8d
  __int64 VadPageSize; // rax
  unsigned int v28; // r10d
  __int64 v29; // r11
  unsigned int VadLargePageIndex; // eax
  __int64 v31; // r9
  unsigned __int64 LockedVadEvent; // rax
  __int64 v33; // rax

  v5 = *(_QWORD *)(a1 + 8);
  MiReadVadFlags(v5);
  v9 = *(_QWORD *)(v8 + 48);
  ProtectionMask = MiMakeProtectionMask(a5);
  v12 = MiSanitizePfnProtection(v5, (v11 >> 5) & 0x1F, ProtectionMask);
  *(_DWORD *)(v13 + 40) = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v15 & 0x400000) != 0 )
    PteAddress = MiGetPteAddress((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12);
  else
    PteAddress = 0LL;
  *(_QWORD *)(v13 + 32) = PteAddress;
  v17 = MiGetPteAddress(a2);
  *(_QWORD *)(v18 + 16) = v17;
  v19 = MiGetPteAddress(a2 + ((a3 - 1) | 0xFFF));
  v20[3] = v19;
  v20[25] = ((v19 - v21) >> 3) + 1;
  *v20 = (char *)Process + 1024;
  MiInitializeLargePfnList((__int64)(v20 + 9));
  if ( (v23 & 0x80000) != 0 && (v23 & 0x200000) != 0 )
  {
    VadPageSize = MiGetVadPageSize(v23);
    *(_QWORD *)(v29 + 184) = VadPageSize;
    VadLargePageIndex = MiGetVadLargePageIndex(v28);
    v25 = VadLargePageIndex;
    if ( VadLargePageIndex <= 1 )
    {
      if ( VadLargePageIndex == 1 )
      {
        if ( v31 != 8 )
          return 3221225485LL;
      }
      else if ( v31 != 16 )
      {
        return 3221225485LL;
      }
    }
    else if ( v31 != 2 )
    {
      return 3221225485LL;
    }
    if ( v9 == 1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(v5, 0x10u);
      if ( LockedVadEvent )
        *(_QWORD *)(v24 + 168) = *(_QWORD *)(LockedVadEvent + 56);
    }
    else if ( v9 )
    {
      *(_QWORD *)(v24 + 168) = v9;
    }
    v33 = *(_QWORD *)(v24 + 168);
    if ( !v33 )
      v33 = *(_QWORD *)(MiGetProcessPartition((__int64)Process) + 256);
    *(_QWORD *)(v24 + 176) = v33;
    goto LABEL_7;
  }
  if ( (v22 & 0x1A) == 0 )
  {
    *(_QWORD *)(v24 + 184) = 1LL;
    v25 = 3;
LABEL_7:
    *(_DWORD *)(v24 + 192) = v25;
    return 0LL;
  }
  return 3221225485LL;
}
