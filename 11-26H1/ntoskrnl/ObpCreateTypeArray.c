/*
 * XREFs of ObpCreateTypeArray @ 0x140A67954
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1407C6754 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1407C6810 (ObGetObjectInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v5; // rax
  _DWORD *v6; // rsi
  int v7; // edi
  _DWORD *Pool2; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rdi

  ObpLockObjectTypeExclusive((__int64)a1, a2, a3, a4);
  v5 = (_QWORD *)*a1;
  v6 = 0LL;
  v7 = 0;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v5 = (_QWORD *)*v5;
      ++v7;
    }
    while ( v5 != a1 );
    if ( v7 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v6 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v7;
        v10 = 0LL;
        v11 = (_QWORD *)*a1;
        while ( v11 != a1 )
        {
          *(_QWORD *)&v6[2 * v10 + 2] = v11;
          if ( !ObReferenceObjectSafe((__int64)(v11 + 10)) )
            *(_QWORD *)&v6[2 * v10 + 2] = 0LL;
          v11 = (_QWORD *)*v11;
          v10 = (unsigned int)(v10 + 1);
        }
      }
    }
  }
  ObpUnlockObjectType(a1);
  return v6;
}
