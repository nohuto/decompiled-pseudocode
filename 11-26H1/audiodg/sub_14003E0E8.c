/*
 * XREFs of sub_14003E0E8 @ 0x14003E0E8
 * Callers:
 *     sub_140078FA0 @ 0x140078FA0 (sub_140078FA0.c)
 *     sub_14007D840 @ 0x14007D840 (sub_14007D840.c)
 *     sub_14007DB60 @ 0x14007DB60 (sub_14007DB60.c)
 *     sub_14007E4A0 @ 0x14007E4A0 (sub_14007E4A0.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall sub_14003E0E8(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2, _DWORD *a3)
{
  RTL_SRWLOCK *v4; // rcx
  RTL_SRWLOCK **result; // rax

  *a1 = a2;
  v4 = a2 + 1;
  if ( LODWORD(a2->Ptr) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v4);
  }
  result = a1;
  *a3 = 0;
  return result;
}
