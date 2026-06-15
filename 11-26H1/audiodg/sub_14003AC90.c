/*
 * XREFs of sub_14003AC90 @ 0x14003AC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003AC90(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  __int64 v8; // rcx
  int v9; // esi

  v3 = a2;
  v4 = 0;
  *a3 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 88));
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v3);
    v9 = 0;
    *a3 = v8;
  }
  if ( *(_DWORD *)(a1 + 80) == 1 )
    --LODWORD(v5->Ptr);
  else
    ReleaseSRWLockShared(v5);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v4;
}
