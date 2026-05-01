/*
 * XREFs of ?ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z @ 0x1801C0060
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$array@_N$0L@@std@@QEAAAEA_N_K@Z @ 0x18050DBB0 (--A-$array@_N$0L@@std@@QEAAAEA_N_K@Z.c)
 */

__int64 __fastcall PositionerPriority::ContainsPositioner(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rbx
  unsigned int v5; // ebx

  v2 = a1 + 3;
  v3 = a2;
  AcquireSRWLockShared(a1 + 3);
  v5 = *(unsigned __int8 *)std::array<bool,11>::operator[](&a1[4], v3);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
