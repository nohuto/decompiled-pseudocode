/*
 * XREFs of VfMajorVerifyIrpStackUpward @ 0x140B832A0
 * Callers:
 *     IovpCompleteRequest2 @ 0x140B96E04 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyIrpStackUpward(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v3 = (*a2 != 0xFF) + 28LL;
  else
    v3 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140FFEC28 + 12 * v3) )
    guard_dispatch_icall_no_overrides(a1);
  result = qword_140FFF6A8;
  if ( qword_140FFF6A8 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
