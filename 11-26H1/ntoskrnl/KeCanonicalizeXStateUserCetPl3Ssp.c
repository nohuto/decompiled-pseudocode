/*
 * XREFs of KeCanonicalizeXStateUserCetPl3Ssp @ 0x1403D7610
 * Callers:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D7C80 (RtlpLocateExtendedOrSupervisorFeature.c)
 */

void __fastcall KeCanonicalizeXStateUserCetPl3Ssp(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 ExtendedOrSupervisorFeature; // rax

  if ( KiUserCetPl3SspCanonicalizeMask )
  {
    v1 = (_DWORD *)(a1 + 512);
    if ( (*v1 & 0x800LL) != 0 )
    {
      ExtendedOrSupervisorFeature = RtlpLocateExtendedOrSupervisorFeature(v1, 11LL);
      *(_QWORD *)(ExtendedOrSupervisorFeature + 8) &= KiUserCetPl3SspCanonicalizeMask;
    }
  }
}
