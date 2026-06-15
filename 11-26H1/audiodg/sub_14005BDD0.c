/*
 * XREFs of sub_14005BDD0 @ 0x14005BDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14005C478 @ 0x14005C478 (sub_14005C478.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005BDD0(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)sub_140049338(112LL, (__int64)&unk_1400C75FC);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x70uLL);
    InitializeCriticalSectionEx(v5, 0, 0);
    v5[1].DebugInfo = 0LL;
    *(_QWORD *)&v5[1].LockCount = 0LL;
    LODWORD(v5[1].OwningThread) = 17;
    v5[1].SpinCount = 0xFFFFFFFFLL;
    v5[2].DebugInfo = 0LL;
    v5[2].LockCount = 0;
    v5[2].RecursionCount = 10;
    v5[2].OwningThread = 0LL;
    v5[2].LockSemaphore = 0LL;
    HIDWORD(v5[1].OwningThread) = 1061158912;
    LODWORD(v5[1].LockSemaphore) = 1048576000;
    HIDWORD(v5[1].LockSemaphore) = 1074790400;
    sub_140007FAC((__int64)&v5[1]);
  }
  else
  {
    v5 = 0LL;
  }
  sub_14005C478(&qword_1400E9858, v5);
  LOBYTE(v3) = qword_1400E9858 != 0;
  sub_14005C478(&v7, 0LL);
  return v3;
}
