/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTagPriority@@YAPEAXPEAXIKW4_EX_POOL_PRIORITY@@@Z @ 0x1400C91B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTagPriority(void *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r10d
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 1835091022;
  if ( a3 )
    v4 = a3;
  return (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, void *))ndisVerifierWdmDispatch + 6))(
           512LL,
           a2,
           v4,
           a4,
           retaddr);
}
