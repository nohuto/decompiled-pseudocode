/*
 * XREFs of MiInitializeZeroFaultPacket @ 0x1402B6EB0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 */

__int64 __fastcall MiInitializeZeroFaultPacket(_QWORD *a1, struct _LIST_ENTRY *a2, unsigned int *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  char v8; // dl
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // r8d
  struct _LIST_ENTRY *v13; // rsi
  _DWORD *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  _KPROCESS *Process; // r10
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v19; // r9
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  int v21; // eax
  bool v22; // zf
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _LIST_ENTRY *v25; // [rsp+40h] [rbp+8h] BYREF

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_OWORD *)a3 + 2) = 0LL;
  *((_OWORD *)a3 + 3) = 0LL;
  *((_OWORD *)a3 + 4) = 0LL;
  if ( (*(_DWORD *)(a1[7] + 184LL) & 0xF) == 0 )
    *a3 |= 0x100u;
  v6 = a1[2];
  v7 = a1 + 2;
  v8 = v6;
  v9 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v8 & 1) != 0 )
  {
    switch ( *v9 )
    {
      case 2:
        *a3 |= 1u;
        break;
      case 1:
        *a3 |= 2u;
        break;
      case 5:
        *a3 |= 0x20u;
        v7 = a1 + 2;
        break;
    }
  }
  v10 = *v7 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*v7 & 1) != 0 && *(_BYTE *)v10 == 4 || (*a3 & 0x23) != 0 )
  {
    *((_QWORD *)a3 + 6) = v10;
    if ( (*v7 & 1) != 0 && *(_BYTE *)(*v7 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      *((_QWORD *)a3 + 8) = *(_QWORD *)(v10 + 48);
    v11 = *a3;
    if ( (*a3 & 2) == 0 )
      goto LABEL_22;
    v12 = *(_DWORD *)(v10 + 80);
    if ( (v12 & 0x40000) != 0 )
    {
      v11 |= 8u;
    }
    else
    {
      if ( (v12 & 0x4000) == 0 )
        goto LABEL_22;
      v11 |= 0x14u;
    }
    *a3 = v11;
LABEL_22:
    if ( (v11 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) > 0x1000uLL )
      {
        v11 |= 0x40u;
        *a3 = v11;
      }
      if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
        *a3 = v11 & 0xFFF3FFFF | 0x40000;
    }
  }
  if ( a2 )
  {
    a2 = a2->Flink;
    v25 = a2;
    v13 = a2;
    goto LABEL_54;
  }
  v25 = 0LL;
  if ( *a1 >= 0x7FFFFFFF0000uLL )
  {
    *((_QWORD *)a3 + 1) = a1;
    *((_QWORD *)a3 + 2) = *a1;
    *((_QWORD *)a3 + 7) = 0LL;
    goto LABEL_63;
  }
  v14 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v14);
    v16 = *v14 & 0x7FFFFFFF;
    v15 = _InterlockedCompareExchange(v14, v16 + 1, v16);
    if ( v16 != v15 )
    {
      while ( v15 >= 0 )
      {
        v10 = (unsigned int)v15;
        v15 = _InterlockedCompareExchange(v14, v15 + 1, v15);
        if ( v15 == (_DWORD)v10 )
          goto LABEL_38;
      }
      LOBYTE(v10) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v14, v10, (__int64)v14);
    }
  }
  else
  {
    LOBYTE(v10) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v14, v10);
  }
LABEL_38:
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = Process[3].Header.WaitListHead.Flink;
  if ( Flink )
  {
    v19 = *a1 >> 12;
    if ( v19 < (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
      || v19 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
    {
      Flink = *(struct _LIST_ENTRY **)&Process[3].Header.Lock;
      if ( !Flink )
        goto LABEL_50;
      do
      {
        if ( v19 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
        {
          if ( v19 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
            break;
          Flink = Flink->Flink;
        }
        else
        {
          Flink = Flink->Blink;
        }
      }
      while ( Flink );
      if ( !Flink )
        goto LABEL_50;
      Process[3].Header.WaitListHead.Flink = Flink;
    }
    a2 = Flink;
  }
LABEL_50:
  v13 = a2;
  v25 = a2;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&ActiveProcessors[4].StaticBitmap[8] + 4, retaddr);
  }
LABEL_54:
  *((_QWORD *)a3 + 1) = a1;
  *((_QWORD *)a3 + 2) = *a1;
  *((_QWORD *)a3 + 7) = a2;
  if ( v13 )
  {
    if ( *a1 < 0x7FFFFFFF0000uLL )
    {
      v21 = (int)a2[3].Flink;
      if ( (v21 & 0x1C) == 0 )
      {
        if ( (v21 & 0x80000) != 0 )
          v22 = (v21 & 0x4000000) == 0;
        else
          v22 = (v21 & 0x800000) == 0;
        if ( !v22 )
          *a3 = *a3 & 0xFFF3FFFF | 0x80000;
      }
    }
  }
LABEL_63:
  result = MiComputeFaultNode(a1, 0LL, &v25);
  a3[10] = result;
  return result;
}
