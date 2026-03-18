/*
 * XREFs of VfMajorVerifyNewIrp @ 0x140B8335C
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyNewIrp(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *a3 > 0x1Bu )
    v4 = (*a3 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a3;
  if ( *((_QWORD *)&unk_140FFEC50 + 12 * v4) )
    guard_dispatch_icall_no_overrides(a1);
  result = qword_140FFF6D0;
  if ( qword_140FFF6D0 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
