/*
 * XREFs of ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x1800F31E0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$array@_N$0L@@std@@QEAAAEA_N_K@Z @ 0x1804EC614 (--A-$array@_N$0L@@std@@QEAAAEA_N_K@Z.c)
 */

__int64 __fastcall PositionerPriority::GetCurrentPositioner(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 i; // r8
  __int64 v4; // rdx
  int v5; // r8d
  unsigned int v6; // edi

  v1 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  for ( i = 11LL; i; i = v4 )
  {
    if ( *(_BYTE *)std::array<bool,11>::operator[](&a1[4], i - 1) )
    {
      v6 = v5 - 1;
      if ( v1 )
        ReleaseSRWLockShared(v1);
      return v6;
    }
  }
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return 0LL;
}
