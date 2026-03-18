/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x140B82FD4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140B741C0 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(_BYTE *a1)
{
  __int64 v2; // rax

  if ( *a1 > 0x1Bu )
    v2 = (*a1 != 0xFF) + 28LL;
  else
    v2 = (unsigned __int8)*a1;
  if ( (!*((_QWORD *)&unk_140FFEC40 + 12 * v2) || (unsigned int)guard_dispatch_icall_no_overrides(a1))
    && qword_140FFF6C0 )
  {
    return guard_dispatch_icall_no_overrides(a1);
  }
  else
  {
    return 0LL;
  }
}
