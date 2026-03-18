/*
 * XREFs of AcpiPccPlatformInterruptServiceRoutineDpc @ 0x140064D20
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccPlatformNotificationUnsafe @ 0x140064E14 (AcpiPccPlatformNotificationUnsafe.c)
 */

void __fastcall AcpiPccPlatformInterruptServiceRoutineDpc(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  int v5; // ecx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  KIRQL v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v4 = 0LL;
  AcpiPccLockSubspace(a3, &v10);
  AcpiPccPlatformNotificationUnsafe((PVOID)a3);
  if ( *(_DWORD *)(a3 + 560) )
  {
    AcpiPccCommandComplete(a3, 0);
  }
  else if ( *(_DWORD *)(a3 + 16) == 2 )
  {
    v5 = *(_DWORD *)(a3 + 8) & 0x1E;
    if ( v5 == 20 )
    {
      KeInsertQueueDpc((PRKDPC)(a3 + 712), 0LL, 0LL);
    }
    else if ( v5 == 16 )
    {
      v6 = (_QWORD *)(a3 + 360);
      v7 = *(_QWORD **)(a3 + 360);
      if ( v7 == (_QWORD *)(a3 + 360) )
      {
        v9 = *(_DWORD *)(a3 + 8) & 0xFFFFFFE1 | 6;
      }
      else
      {
        if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
          __fastfail(3u);
        *v6 = v8;
        v4 = v7;
        *(_QWORD *)(v8 + 8) = v6;
        v9 = *(_DWORD *)(a3 + 8) & 0xFFFFFFE1 | 0xA;
      }
      *(_DWORD *)(a3 + 8) = v9;
    }
  }
  AcpiPccUnlockSubspace(a3, v10);
  if ( v4 )
  {
    *((_DWORD *)v4 + 10) = 0;
    KeSetEvent((PRKEVENT)(v4 + 2), 0, 0);
  }
}
