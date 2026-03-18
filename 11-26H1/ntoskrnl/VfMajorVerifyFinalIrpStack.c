/*
 * XREFs of VfMajorVerifyFinalIrpStack @ 0x140C315E0
 * Callers:
 *     IovpCompleteRequest2 @ 0x140C4589C (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyFinalIrpStack(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140FF2628 + 12 * v4) )
    guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  result = qword_140FF30A8;
  if ( qword_140FF30A8 )
    return guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  return result;
}
