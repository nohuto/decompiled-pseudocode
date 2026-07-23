/*
 * XREFs of CcChargeThreadForReadAhead @ 0x1404AF0BC
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcChargeThreadForReadAhead(__int64 a1, __int64 a2, __int64 a3, int a4, struct _KTHREAD *a5)
{
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  int v7; // r9d
  int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rdx

  v5 = *(_QWORD *)(a1 + 48);
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 4LL);
  if ( !(_DWORD)result )
    KeBugCheckEx(0x34u, 0x628uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = a4 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 != 1 )
      return result;
    v9 = *(unsigned int *)(v5 + 52);
  }
  else
  {
    v9 = *(unsigned int *)(v5 + 52);
    result = *(_QWORD *)(v5 + 72);
    v10 = v9 + *(_QWORD *)(v5 + 56);
    if ( result )
    {
      if ( v10 <= result )
        return result;
      v9 = v10 - result;
    }
    _InterlockedExchange64((volatile __int64 *)(v5 + 72), v10);
  }
  if ( v9 )
  {
    CurrentThread = a5;
    if ( !a5 )
      CurrentThread = KeGetCurrentThread();
    result = (unsigned __int64)CurrentThread->Process;
    v12 = *(volatile signed __int64 **)(result + 1592);
    if ( v12 )
    {
      _InterlockedAdd64(v12, v9);
      _InterlockedIncrement64(v12 + 2);
    }
  }
  return result;
}
