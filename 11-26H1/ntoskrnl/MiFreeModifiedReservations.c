/*
 * XREFs of MiFreeModifiedReservations @ 0x1404DC3E4
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x140406B68 (MiCheckFreeModifiedReservations.c)
 *     MiPageFileNoFreeSpace @ 0x140512338 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 */

char __fastcall MiFreeModifiedReservations(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  struct _KEVENT *v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  ULONG_PTR v8; // rbp
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  int v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v2 = *(_WORD *)(a1 + 172);
  if ( (v2 & 0x40) == 0 )
  {
    v3 = *(struct _KEVENT **)(a1 + 224);
    v4 = 88LL * (v2 & 0xF);
    v5 = (_DWORD)a2 == 0 ? 0x10000 : 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)((char *)&v3[192].Header.Lock + v4);
      LOBYTE(v2) = -1;
      if ( v7 == 0x3FFFFFFFFFLL )
        break;
      v8 = 48 * v7 - 0x220000000000LL;
      v9 = MiSafeLockPage(*(_QWORD *)((char *)&v3[192].Header.Lock + v4), a2);
      v10 = v9;
      if ( v9 != 17 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)((char *)&v3[193].Header.WaitListHead + v4));
        if ( v7 == *(_QWORD *)((char *)&v3[192].Header.Lock + v4) )
        {
          MiUnlinkPageFromListEx(48 * v7 - 0x220000000000LL, 1);
          v11 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 16) = v11 & 0xFFFFFFFFFFFFFFFBuLL;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)((char *)&v3[193].Header.WaitListHead + v4));
          MiInsertPageInList(v8, 8u);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v2) = MiReleasePageFileInfo(v3, v11, 1);
          if ( KiIrqlFlags )
            LOBYTE(v2) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
          __writecr8(v10);
          if ( ++v6 >= v5 && !v13 )
            return v2;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)((char *)&v3[193].Header.WaitListHead + v4));
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v10 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
            __writecr8(v10);
          }
        }
      }
    }
  }
  return v2;
}
