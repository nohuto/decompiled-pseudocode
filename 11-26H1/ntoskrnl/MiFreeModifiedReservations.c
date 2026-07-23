/*
 * XREFs of MiFreeModifiedReservations @ 0x1404D5AC4
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x1403FFC58 (MiCheckFreeModifiedReservations.c)
 *     MiPageFileNoFreeSpace @ 0x14050BDA8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 */

char __fastcall MiFreeModifiedReservations(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  struct _KEVENT *v3; // r15
  __int64 v4; // r8
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  ULONG_PTR v9; // rbp
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  int v14; // [rsp+58h] [rbp+10h]

  v14 = a2;
  v2 = *(_WORD *)(a1 + 172);
  if ( (v2 & 0x40) == 0 )
  {
    v3 = *(struct _KEVENT **)(a1 + 224);
    v4 = v2 & 0xF;
    v5 = 88 * v4;
    v6 = (_DWORD)a2 == 0 ? 0x10000 : 0;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)((char *)&v3[192].Header.Lock + v5);
      LOBYTE(v2) = -1;
      if ( v8 == 0x3FFFFFFFFFLL )
        break;
      v9 = 48 * v8 - 0x220000000000LL;
      v10 = MiSafeLockPage(*(_QWORD *)((char *)&v3[192].Header.Lock + v5), a2, v4);
      v11 = v10;
      if ( v10 != 17 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)((char *)&v3[193].Header.WaitListHead + v5));
        if ( v8 == *(_QWORD *)((char *)&v3[192].Header.Lock + v5) )
        {
          MiUnlinkPageFromListEx(48 * v8 - 0x220000000000LL, 1);
          v12 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 16) = v12 & 0xFFFFFFFFFFFFFFFBuLL;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)((char *)&v3[193].Header.WaitListHead + v5));
          MiInsertPageInList(v9, 8u);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v2) = MiReleasePageFileInfo(v3, v12, 1LL);
          if ( KiIrqlFlags )
            LOBYTE(v2) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v11);
          if ( ++v7 >= v6 && !v14 )
            return v2;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)((char *)&v3[193].Header.WaitListHead + v5));
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v11 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
            __writecr8(v11);
          }
        }
      }
    }
  }
  return v2;
}
