/*
 * XREFs of NtCreateCrossVmMutant @ 0x140847FC0
 * Callers:
 *     DifNtCreateCrossVmMutantWrapper @ 0x140673B30 (DifNtCreateCrossVmMutantWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExpCreateCrossVmMutant @ 0x14084C3E0 (ExpCreateCrossVmMutant.c)
 */

__int64 __fastcall NtCreateCrossVmMutant(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  int CrossVmMutant; // edx
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF

  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  CrossVmMutant = ExpCreateCrossVmMutant((unsigned int)&v14, a2, a3, a4, a5, a6, PreviousMode);
  if ( CrossVmMutant >= 0 )
    *a1 = v14;
  return (unsigned int)CrossVmMutant;
}
