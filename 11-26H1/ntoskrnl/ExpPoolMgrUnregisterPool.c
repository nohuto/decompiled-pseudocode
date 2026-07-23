/*
 * XREFs of ExpPoolMgrUnregisterPool @ 0x14084D830
 * Callers:
 *     ExpPoolDestroy @ 0x14084C7D4 (ExpPoolDestroy.c)
 * Callees:
 *     ExpPoolMgrAcquirePoolListLockExclusive @ 0x1404CA6E0 (ExpPoolMgrAcquirePoolListLockExclusive.c)
 *     ExpPoolMgrReleasePoolListLockExclusive @ 0x1404CB00C (ExpPoolMgrReleasePoolListLockExclusive.c)
 */

void __fastcall ExpPoolMgrUnregisterPool(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v6 = 3LL * (unsigned __int8)BYTE1(a2[1]);
  ExpPoolMgrAcquirePoolListLockExclusive(a1, (__int64)a2, a3, a4);
  v7 = a2 + 4;
  v8 = a2[4];
  v9 = v8 == a1 + 16 + 8 * v6;
  v10 = (_QWORD *)(a1 + 112);
  v11 = v8 - 32;
  v12 = 3LL;
  if ( v9 )
    v11 = 0LL;
  do
  {
    if ( (_QWORD *)*v10 == a2 )
      *v10 = v11;
    ++v10;
    --v12;
  }
  while ( v12 );
  --*(_DWORD *)(a1 + 8 * v6 + 32);
  v13 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v14 = (_QWORD *)a2[5], (_QWORD *)*v14 != v7) )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v7 = 0LL;
  a2[5] = 0LL;
  ExpPoolMgrReleasePoolListLockExclusive(a1);
}
