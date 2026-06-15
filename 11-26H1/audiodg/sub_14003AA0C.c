/*
 * XREFs of sub_14003AA0C @ 0x14003AA0C
 * Callers:
 *     sub_14007A620 @ 0x14007A620 (sub_14007A620.c)
 *     sub_14007B240 @ 0x14007B240 (sub_14007B240.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall sub_14003AA0C(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2, _DWORD *a3)
{
  RTL_SRWLOCK *v4; // rcx
  RTL_SRWLOCK **result; // rax

  *a1 = a2;
  v4 = a2 + 1;
  if ( LODWORD(a2->Ptr) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v4);
  }
  result = a1;
  *a3 = 0;
  return result;
}
