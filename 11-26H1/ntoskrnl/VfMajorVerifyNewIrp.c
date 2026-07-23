/*
 * XREFs of VfMajorVerifyNewIrp @ 0x140C377F8
 * Callers:
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyNewIrp(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 result; // rax

  if ( *a3 > 0x1Bu )
    v5 = (*a3 != 0xFF) + 28LL;
  else
    v5 = (unsigned __int8)*a3;
  if ( *((_QWORD *)&unk_140FF3620 + 12 * v5) )
    guard_dispatch_icall_no_overrides(a1, a2);
  result = qword_140FF40A0;
  if ( qword_140FF40A0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
