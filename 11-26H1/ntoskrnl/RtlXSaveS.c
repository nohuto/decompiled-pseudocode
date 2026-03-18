/*
 * XREFs of RtlXSaveS @ 0x1403D45AC
 * Callers:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D4130 (KiSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405ECAD4 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x140A321C0 (PspGetContext.c)
 * Callees:
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D4CB0 (RtlpLocateExtendedOrSupervisorFeature.c)
 *     RtlXSave @ 0x1403D4DC0 (RtlXSave.c)
 */

__int64 __fastcall RtlXSaveS(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v3; // rcx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave(_RCX, a2, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  result = a2 & *(_QWORD *)(_RCX + 520);
  __asm { xsaves  byte ptr [rcx] }
  if ( KiUserCetPl3SspCanonicalizeMask )
  {
    v3 = (unsigned int *)(_RCX + 512);
    result = *v3;
    if ( (result & 0x800) != 0 )
    {
      result = RtlpLocateExtendedOrSupervisorFeature(v3, 11LL);
      *(_QWORD *)(result + 8) &= KiUserCetPl3SspCanonicalizeMask;
    }
  }
  return result;
}
