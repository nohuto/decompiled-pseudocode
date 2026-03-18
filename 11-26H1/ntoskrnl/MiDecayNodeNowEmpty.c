/*
 * XREFs of MiDecayNodeNowEmpty @ 0x140462438
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x1402994DC (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14046229C (MiUnlinkProtectedStandbyPfn.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x1404625B8 (MiRemoveDecayClusterTimer.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 */

void __fastcall MiDecayNodeNowEmpty(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rcx
  _BYTE *v8; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_DWORD *)(v2 + 32) & 0x8000000) == 0 )
  {
    MiRemoveDecayClusterTimer(v2);
    v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | ((a1 & 0xFFFFFFFFFFLL) << 12);
    v4 = v3 | 0x880;
    if ( qword_140E2D740 )
    {
      if ( (qword_140E2D740 & v4) != 0 )
        v4 = v3 | 0x890;
      else
        v4 = qword_140E2D740 | v3 | 0x880;
    }
    v5 = a1 - qword_140E347B0;
    *(_QWORD *)(v2 + 16) = v4;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E347D0);
    v6 = 1;
    v7 = v5 & 7;
    v8 = (_BYTE *)(qword_140E347E0 + ((unsigned __int64)v5 >> 3));
    if ( (unsigned int)(v7 + 1) > 8 )
    {
      if ( (v5 & 7) == 0 )
        goto LABEL_15;
      v6 = v7 - 7;
      *v8++ |= byte_140017F38[v7];
      if ( (unsigned int)(v7 - 7) > 8 )
      {
        RtlSetVolatileMemory(v8, 255, (unsigned __int64)v6 >> 3);
        v8 += (unsigned __int64)v6 >> 3;
        v6 &= 7u;
      }
      if ( v6 )
LABEL_15:
        *v8 |= byte_140032340[v6];
    }
    else
    {
      *v8 |= 1 << v7;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      dword_140E347D0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E347D0, retaddr);
  }
}
