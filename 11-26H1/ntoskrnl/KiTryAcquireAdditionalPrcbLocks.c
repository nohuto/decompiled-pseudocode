/*
 * XREFs of KiTryAcquireAdditionalPrcbLocks @ 0x1404CE81C
 * Callers:
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1404CE768 (KiTryUpgradeIsolationUnitLockHandle.c)
 * Callees:
 *     KzReleaseAdditionalPrcbLocks @ 0x140231040 (KzReleaseAdditionalPrcbLocks.c)
 */

char __fastcall KiTryAcquireAdditionalPrcbLocks(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v8; // rdx
  __int64 i; // r11

  v4 = *a1;
  LODWORD(v6) = 0;
  v8 = 0LL;
  if ( !a4 )
    return 1;
  for ( i = a3; ; i += 8LL )
  {
    if ( *(_QWORD *)i == v4 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (_DWORD)v6 == a2 )
        v4 = -1LL;
      else
        v4 = a1[v6];
      goto LABEL_6;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)i + 48LL), 0LL) )
      break;
LABEL_6:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= a4 )
      return 1;
  }
  KzReleaseAdditionalPrcbLocks(a3, v8, a1, a2);
  return 0;
}
