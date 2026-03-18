/*
 * XREFs of VfMajorIsNewRequest @ 0x140B82F54
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v3 = (*a2 != 0xFF) + 28LL;
  else
    v3 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140FFEC48 + 12 * v3) && (unsigned int)guard_dispatch_icall_no_overrides(a1) )
    return 1LL;
  result = qword_140FFF6C8;
  if ( qword_140FFF6C8 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
