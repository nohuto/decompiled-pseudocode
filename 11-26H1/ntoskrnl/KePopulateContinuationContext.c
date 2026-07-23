/*
 * XREFs of KePopulateContinuationContext @ 0x1404AFFC0
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KePopulateContinuationContext(__int64 a1)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v3; // rax

  result = KeGetCurrentThread();
  _R8 = a1;
  if ( (result->MiscFlags & 0x100000) != 0 )
  {
    v3 = __readmsr(0x6A7u);
    if ( KiUserCetPl3SspCanonicalizeMask )
      v3 &= KiUserCetPl3SspCanonicalizeMask;
    _RDX = v3 - 8;
    __asm { wrussq  qword ptr [rdx], r8 }
    result = (struct _KTHREAD *)(v3 - 8);
    __writemsr(0x6A7u, _RDX);
  }
  return result;
}
