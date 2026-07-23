/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x140C37464
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140C285A0 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax

  v2 = a2;
  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  if ( (!*((_QWORD *)&unk_140FF3610 + 12 * v4) || (unsigned int)guard_dispatch_icall_no_overrides((__int64)a1, a2))
    && qword_140FF4090 )
  {
    return guard_dispatch_icall_no_overrides((__int64)a1, v2);
  }
  else
  {
    return 0LL;
  }
}
