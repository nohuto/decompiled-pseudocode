/*
 * XREFs of PdcPoSetPowerAction @ 0x1407DF750
 * Callers:
 *     <none>
 * Callees:
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoSetPowerAction(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v7; // esi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-18h]

  v7 = a2;
  v8 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopExecutePowerAction(v8, v7, a3, a4, a5);
  return PopReleasePolicyLock(v10, v9, v11, v12, v14);
}
