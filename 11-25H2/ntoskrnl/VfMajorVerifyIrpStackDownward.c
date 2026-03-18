/*
 * XREFs of VfMajorVerifyIrpStackDownward @ 0x140B831CC
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyIrpStackDownward(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rax
  __int64 result; // rax

  if ( *a4 > 0x1Bu )
    v5 = (*a4 != 0xFF) + 28LL;
  else
    v5 = (unsigned __int8)*a4;
  if ( *((_QWORD *)&unk_140FFEC20 + 12 * v5) )
    guard_dispatch_icall_no_overrides(a1);
  result = qword_140FFF6A0;
  if ( qword_140FFF6A0 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
