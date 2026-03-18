/*
 * XREFs of VfMajorAdvanceIrpStatus @ 0x140B82DE8
 * Callers:
 *     IovpCompleteRequest2 @ 0x140B96E04 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorAdvanceIrpStatus(_BYTE *a1)
{
  __int64 v2; // rax

  if ( VfVerifyMode <= 2 || (MmVerifierData & 0x1000) == 0 )
    return 0LL;
  if ( *a1 > 0x1Bu )
    v2 = (*a1 != 0xFF) + 28LL;
  else
    v2 = (unsigned __int8)*a1;
  if ( *((_QWORD *)&unk_140FFEC38 + 12 * v2) && (unsigned int)guard_dispatch_icall_no_overrides(a1) )
    return 1LL;
  if ( qword_140FFF6B8 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0LL;
}
