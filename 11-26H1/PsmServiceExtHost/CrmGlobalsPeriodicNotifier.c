/*
 * XREFs of CrmGlobalsPeriodicNotifier @ 0x180069650
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18001ECC8 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmLogGlobalsPeriodicNotifier @ 0x18007577C (CrmLogGlobalsPeriodicNotifier.c)
 */

__int64 __fastcall CrmGlobalsPeriodicNotifier(__int64 a1, __int64 a2)
{
  int v2; // r15d
  unsigned __int64 v3; // rdi
  int v4; // r14d
  __int64 v5; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 result; // rax

  v2 = 0;
  v3 = a2 + 424;
  v4 = 0;
  v5 = a2 + 408;
  do
  {
    WaitForSingleObject(*(HANDLE *)(a2 + 456), 0x7530u);
    CempLockAcquireExclusive(v5);
    do
    {
      v7 = *(_QWORD *)(a2 + 432);
      if ( (v7 & 1) != 0 )
      {
        if ( !*(_QWORD *)v3 )
          break;
        v8 = *(_QWORD *)v3 ^ v3;
      }
      else
      {
        v8 = *(_QWORD *)v3;
      }
      if ( !v8 )
        break;
      if ( (*(_QWORD *)(a2 + 432) & 1LL) != 0 )
        v9 = v7 == 1 ? 0LL : v7 ^ (v3 | 1);
      else
        v9 = *(_QWORD *)(a2 + 432);
      CrmRegistrationReadyQueueRemoveAndNotify(v9 - 24, 0, 1);
      ++v2;
      CrmLogGlobalsPeriodicNotifier(v9 - 24);
    }
    while ( !v2 );
    if ( (*(_BYTE *)(a2 + 432) & 1) == 0 )
    {
      v10 = *(_QWORD *)v3;
LABEL_18:
      if ( v10 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( *(_QWORD *)v3 )
    {
      v10 = *(_QWORD *)v3 ^ v3;
      goto LABEL_18;
    }
LABEL_19:
    *(_DWORD *)(a2 + 472) = 0;
    v4 = 1;
LABEL_20:
    *(_DWORD *)(v5 + 8) = 0;
    result = RtlReleaseSRWLockExclusive(v5);
  }
  while ( !v4 );
  return result;
}
