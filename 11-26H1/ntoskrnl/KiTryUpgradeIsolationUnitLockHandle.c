/*
 * XREFs of KiTryUpgradeIsolationUnitLockHandle @ 0x1404CE768
 * Callers:
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 * Callees:
 *     KiTryAcquireAdditionalPrcbLocks @ 0x1404CE81C (KiTryAcquireAdditionalPrcbLocks.c)
 */

__int64 __fastcall KiTryUpgradeIsolationUnitLockHandle(int *a1, int a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r9
  __int64 v4; // rbx
  unsigned __int64 *v5; // rdx
  unsigned int v6; // r10d
  unsigned __int8 *v8; // rax
  unsigned int v9; // esi
  unsigned __int64 *v10; // r11
  unsigned __int8 *v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v4 = a2;
  v5 = 0LL;
  v13 = v3;
  v6 = 0;
  if ( (v2 & 1) != 0 )
  {
    v8 = *(unsigned __int8 **)(v3 + 36504);
    v9 = *v8;
    v10 = (unsigned __int64 *)(v8 + 8);
  }
  else
  {
    v10 = &v13;
    v9 = 1;
  }
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v11 = *(unsigned __int8 **)(v3 + 36504);
      v6 = *v11;
      v5 = (unsigned __int64 *)(v11 + 8);
    }
  }
  else
  {
    v5 = &v13;
    v6 = 1;
  }
  result = KiTryAcquireAdditionalPrcbLocks(v10, v9, v5, v6);
  if ( (_BYTE)result )
    *(_QWORD *)a1 = v4 ^ (*(_QWORD *)a1 ^ v4) & 0xFFFFFFFFFFFFFFFEuLL;
  return result;
}
