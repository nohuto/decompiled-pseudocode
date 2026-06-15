/*
 * XREFs of sub_140039110 @ 0x140039110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140039110(__int64 a1, _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx

  *a2 = 0;
  v2 = (RTL_SRWLOCK *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( SLODWORD(v2->Ptr) >= 0 )
      ++LODWORD(v2->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 88));
  }
  *a2 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 80) == 1 )
    --LODWORD(v2->Ptr);
  else
    ReleaseSRWLockShared(v2);
  return 0LL;
}
