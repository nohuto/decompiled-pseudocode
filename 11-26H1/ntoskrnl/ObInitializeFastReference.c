/*
 * XREFs of ObInitializeFastReference @ 0x140A7BD9C
 * Callers:
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 *     SepInitializationPhase0 @ 0x140CE3538 (SepInitializationPhase0.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x14041EF10 (ObpIncrPointerCountEx.c)
 */

__int64 __fastcall ObInitializeFastReference(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  result = (a2 + 15) & -(__int64)(a2 != 0);
  *a1 = result;
  return result;
}
