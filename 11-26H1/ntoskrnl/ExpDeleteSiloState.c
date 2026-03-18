/*
 * XREFs of ExpDeleteSiloState @ 0x1406CD094
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1407EEE3C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUserApcKernelRoutine @ 0x140959620 (PspUserApcKernelRoutine.c)
 *     sub_140A7E328 @ 0x140A7E328 (sub_140A7E328.c)
 *     MmUnmapViewInSystemSpace @ 0x140AE2510 (MmUnmapViewInSystemSpace.c)
 *     ExWaitForCallBacks @ 0x140B5EF7C (ExWaitForCallBacks.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDeleteSiloState(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  PVOID *v6; // rax
  PVOID Pa; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x69534C53u);
    *(_QWORD *)P = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 2);
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    *((_QWORD *)P + 2) = 0LL;
  }
  v4 = (void *)*((_QWORD *)P + 5854);
  if ( v4 )
  {
    MmUnmapViewInSystemSpace(v4);
    *((_QWORD *)P + 5854) = 0LL;
  }
  v5 = *((_QWORD *)P + 5856);
  if ( v5 )
  {
    ExWaitForCallBacks(v5);
    PspUserApcKernelRoutine(*((_QWORD *)P + 5856));
    *((_QWORD *)P + 5856) = 0LL;
  }
  v6 = (PVOID *)*((_QWORD *)P + 5877);
  if ( v6 )
  {
    Pa = *v6;
    if ( (int)sub_140A7E328(&Pa) >= 0 )
      ExFreePoolWithTag(Pa, 0x20534C53u);
    ExFreePoolWithTag(*((PVOID *)P + 5877), 0x20534C53u);
    *((_QWORD *)P + 5877) = 0LL;
  }
  ExFreePoolWithTag(P, 0x69534C53u);
}
