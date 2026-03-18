/*
 * XREFs of ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z @ 0x140337E80
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x140265370 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 */

void __fastcall UMPDOBJ::ReferenceServerProcess(UMPDOBJ *this, struct _EPROCESS *a2)
{
  bool v4; // zf
  struct W32_PUSH_LOCK *v5; // rcx
  void *v6; // rcx
  struct W32_PUSH_LOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (UMPDOBJ *)((char *)this + 400) == 0LL;
  v5 = (UMPDOBJ *)((char *)this + 400);
  v7 = v5;
  if ( !v4 )
    GreAcquirePushLockExclusive(v5);
  v6 = (void *)*((_QWORD *)this + 51);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)this + 51) = 0LL;
  }
  if ( a2 )
  {
    ObfReferenceObject(a2);
    *((_QWORD *)this + 51) = a2;
  }
  Gre::PUSHLOCKEX::vUnlock(&v7, 0);
}
