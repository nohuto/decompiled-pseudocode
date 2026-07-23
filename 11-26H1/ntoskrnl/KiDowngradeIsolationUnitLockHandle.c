/*
 * XREFs of KiDowngradeIsolationUnitLockHandle @ 0x1403ED6A0
 * Callers:
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiDowngradeIsolationUnitLockHandle(unsigned __int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r11
  __int64 v5; // r8
  _QWORD *result; // rax
  __int64 *v8; // rsi
  int v9; // ebp
  unsigned __int8 *v10; // rcx
  unsigned int v11; // edi
  unsigned __int8 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD v15[3]; // [rsp+0h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
  v3 = a2;
  v4 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v5 = *a1 & 1;
  v15[0] = v4;
  result = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( (_DWORD)v5 != a2 )
  {
    if ( (_DWORD)v5 )
    {
      v10 = *(unsigned __int8 **)(v4 + 36504);
      v11 = *v10;
      result = v10 + 8;
    }
    else
    {
      result = v15;
      v11 = 1;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v12 = *(unsigned __int8 **)(v4 + 36504);
        v9 = *v12;
        v8 = (__int64 *)(v12 + 8);
      }
    }
    else
    {
      v8 = v15;
      v9 = 1;
    }
    v13 = *v8;
    if ( v11 )
    {
      v14 = v11;
      do
      {
        if ( v13 == *result )
        {
          v2 = (unsigned int)(v2 + 1);
          if ( (_DWORD)v2 == v9 )
            v13 = -1LL;
          else
            v13 = v8[v2];
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(*result + 48LL), 0LL);
        }
        ++result;
        --v14;
      }
      while ( v14 );
    }
    *a1 = v3 ^ (*a1 ^ v3) & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return result;
}
