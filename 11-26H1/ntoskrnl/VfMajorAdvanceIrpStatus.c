/*
 * XREFs of VfMajorAdvanceIrpStatus @ 0x140C31268
 * Callers:
 *     IovpCompleteRequest2 @ 0x140C4589C (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorAdvanceIrpStatus(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax

  v2 = a2;
  if ( VfVerifyMode <= 2 || (MmVerifierData & 0x1000) == 0 )
    return 0LL;
  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  if ( *((_QWORD *)&unk_140FF2608 + 12 * v4) && (unsigned int)guard_dispatch_icall_no_overrides((__int64)a1, a2) )
    return 1LL;
  if ( qword_140FF3088 )
    return guard_dispatch_icall_no_overrides((__int64)a1, v2);
  else
    return 0LL;
}
