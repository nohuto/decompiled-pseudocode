/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x1407EEE3C
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140B47D68 (PspDeleteSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpDeleteSiloState @ 0x1406CD094 (ExpDeleteSiloState.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ObCleanupSiloState @ 0x1407C216C (ObCleanupSiloState.c)
 *     EtwCleanupSiloState @ 0x14082455C (EtwCleanupSiloState.c)
 *     ExpWnfDeleteScopeInstances @ 0x14084714C (ExpWnfDeleteScopeInstances.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx
  ULONG_PTR v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  struct _KEVENT *v12; // rcx
  void *v13; // rcx

  v2 = (void *)*((_QWORD *)P + 120);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 120) = 0LL;
  }
  ObCleanupSiloState((volatile __int64 *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x66BuLL, 0LL);
  if ( *((_QWORD *)P + 110) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 110), 2LL);
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 110), 0LL);
    ExFreePoolWithTag(*((PVOID *)P + 110), 0x20666E57u);
    KeLeaveCriticalRegion();
  }
  if ( *((_QWORD *)P + 111) )
    ZwClose(*((HANDLE *)P + 111));
  if ( *((_QWORD *)P + 112) )
    ZwClose(*((HANDLE *)P + 112));
  v5 = (void *)*((_QWORD *)P + 104);
  if ( v5 )
  {
    EtwCleanupSiloState(v5);
    *((_QWORD *)P + 104) = 0LL;
  }
  if ( *((_QWORD *)P + 157) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)P + 78);
    *((_QWORD *)P + 157) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 125);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)P + 125) = 0LL;
  }
  v7 = *((_QWORD *)P + 126);
  if ( v7 )
  {
    MiRemoveFromSystemSpace(v7);
    *((_QWORD *)P + 126) = 0LL;
  }
  v8 = (void *)*((_QWORD *)P + 124);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x6C537350u);
    *((_QWORD *)P + 124) = 0LL;
  }
  if ( *((_QWORD *)P + 162) )
  {
    MiRemoveFromSystemSpace(*((_QWORD *)P + 161));
    v9 = (void *)*((_QWORD *)P + 162);
    *((_QWORD *)P + 161) = 0LL;
    ObfDereferenceObject(v9);
    *((_QWORD *)P + 162) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 109);
  if ( v10 )
  {
    ExpDeleteSiloState(v10);
    *((_QWORD *)P + 109) = 0LL;
  }
  v11 = (void *)*((_QWORD *)P + 152);
  if ( v11 )
  {
    ZwClose(v11);
    *((_QWORD *)P + 152) = 0LL;
  }
  v12 = (struct _KEVENT *)*((_QWORD *)P + 160);
  if ( v12 )
  {
    KeSetEvent(v12, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 160), 0x65446953u);
    *((_QWORD *)P + 160) = 0LL;
  }
  v13 = (void *)*((_QWORD *)P + 153);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
