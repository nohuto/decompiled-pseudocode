/*
 * XREFs of sub_1400A6008 @ 0x1400A6008
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_1400A5FC0 @ 0x1400A5FC0 (sub_1400A5FC0.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 * Callees:
 *     sub_1400563D0 @ 0x1400563D0 (sub_1400563D0.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 */

__int64 __fastcall sub_1400A6008(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  KSPIN_LOCK *v3; // r13
  _QWORD **v4; // r12
  int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *i; // rsi
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = (KSPIN_LOCK *)(a1 + 136);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (_QWORD **)(a1 + 144);
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v9 = (__int64)(i - 8);
    if ( sub_14009210C((__int64)(i - 8)) )
    {
      v10 = 0;
      if ( (_DWORD)v2 )
      {
        v11 = (v7 - v6) / 10000;
        if ( v11 >= v2 )
        {
          v5 = 258;
          break;
        }
        v10 = v2 - v11;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = sub_1400563D0(v9, v10);
      v7 = MEMORY[0xFFFFF78000000014];
      KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
      i = v4;
      if ( v5 < 0 )
        break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v5;
}
