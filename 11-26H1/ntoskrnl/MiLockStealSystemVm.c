/*
 * XREFs of MiLockStealSystemVm @ 0x14044D760
 * Callers:
 *     MiInitializePageTradePacket @ 0x140292A70 (MiInitializePageTradePacket.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiSmallVaStillMapsFrame @ 0x1403167FC (MiSmallVaStillMapsFrame.c)
 *     MiVaIsPageFileHash @ 0x14044DB50 (MiVaIsPageFileHash.c)
 */

__int64 __fastcall MiLockStealSystemVm(__int64 a1, unsigned __int8 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  unsigned int v7; // r12d
  _WORD *v8; // r13
  unsigned __int64 v9; // r14
  unsigned int SystemRegionType; // ebp
  int v11; // r15d
  int v12; // r8d
  char v13; // al
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v17; // rax
  void *volatile *v18; // [rsp+70h] [rbp+8h]

  v5 = a2;
  v7 = 1;
  v8 = *(_WORD **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v9 = (__int64)((_QWORD)a3 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v9);
  if ( v9 < 0xFFFFF68000000000uLL || (v11 = 1, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
    v11 = 0;
  v18 = MiSystemVaTypeToVm(SystemRegionType);
  switch ( SystemRegionType )
  {
    case 4u:
      v13 = *(_BYTE *)(a1 + 35);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v13 & 0x10) == 0 )
      {
        if ( (unsigned __int8)v5 < 2u )
        {
          if ( KiIrqlFlags != v12 )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
          __writecr8(v5);
        }
        a4[2] |= 0x20u;
        break;
      }
LABEL_41:
      if ( (unsigned __int8)v5 < 2u )
      {
        if ( KiIrqlFlags != v12 )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
      }
      return v7;
    case 5u:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v5 < 2u )
      {
        if ( KiIrqlFlags != v12 )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
      }
      a4[2] |= 0x10u;
      break;
    case 0xBu:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v5 < 2u )
      {
        if ( KiIrqlFlags != v12 )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
      }
      a4[12] = 1;
      break;
    case 0x11u:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v5 < 2u )
      {
        if ( KiIrqlFlags != v12 )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
          v12 = 0;
        }
        __writecr8(v5);
      }
      a4[12] = v12;
      break;
    default:
      v17 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
      v8 = *(_WORD **)(stru_140E2ED08.ThreadLock + 8 * v17);
      if ( SystemRegionType != 8 || !MiVaIsPageFileHash(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v17), v9) )
      {
        _InterlockedIncrement(&dword_140EF901C);
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_41;
      }
      a4[12] = 2;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v5 < 2u )
      {
        if ( KiIrqlFlags != v12 )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
      }
      break;
  }
  if ( !(unsigned int)MiSynchronizeSystemVa((__int64)v18, v9, SystemRegionType, v11, (__int64)a4) )
    goto LABEL_26;
  v14 = (a1 + 0x220000000000LL) / 48;
  if ( v11 )
  {
    if ( (unsigned int)MiSmallVaStillMapsFrame(v9, (a1 + 0x220000000000LL) / 48) )
      goto LABEL_14;
LABEL_25:
    v7 = 2;
    goto LABEL_26;
  }
  if ( (*a3 & 1) == 0 || ((*a3 >> 12) & 0xFFFFFFFFFFLL) != v14 )
    goto LABEL_25;
LABEL_14:
  v15 = a4[12];
  if ( v15 == 3
    || v15 == 2
    || (a4[2] & 0x20) != 0
    || (*(_QWORD *)a1 & 1) != 0 && (*(_DWORD *)(a1 + 32) & 0x8000000) == 0 )
  {
    if ( v14 <= qword_140E2D920
      && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FF) == *v8
      && *(__int64 *)(a1 + 40) >= 0
      && (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0
      && ((*a4 & 0x410000) == 0x410000 || (unsigned int)MiGetPfnSlabType(a1) == 9) )
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_140EF9028);
  }
LABEL_26:
  MiUnlockStealVm((__int64)a4);
  if ( ((_DWORD)v18[23] & 0xF) != 2 )
  {
    _InterlockedIncrement(&dword_140EF901C);
    return v7;
  }
  _InterlockedIncrement(&dword_140EF90B8);
  return 1LL;
}
