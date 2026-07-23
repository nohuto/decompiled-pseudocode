/*
 * XREFs of VfMajorVerifyNewRequest @ 0x140C378A8
 * Callers:
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyNewRequest(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rax
  __int64 result; // rax

  if ( *a4 > 0x1Bu )
    v6 = (*a4 != 0xFF) + 28LL;
  else
    v6 = (unsigned __int8)*a4;
  if ( *((_QWORD *)&unk_140FF35E8 + 12 * v6) )
    guard_dispatch_icall_no_overrides(a1, a2);
  result = qword_140FF4068;
  if ( qword_140FF4068 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
