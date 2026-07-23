/*
 * XREFs of VfMajorIsNewRequest @ 0x140C373E4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140FF3618 + 12 * v4) && (unsigned int)guard_dispatch_icall_no_overrides(a1, (__int64)a2) )
    return 1LL;
  result = qword_140FF4098;
  if ( qword_140FF4098 )
    return guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  return result;
}
