/*
 * XREFs of SeSetSessionIdToken @ 0x140AE5DDC
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x1408165B4 (SepCopyClientTokenAndSetSilo.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140817E20 (SeSetSessionIdTokenWithLinked.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // ebp
  void *SessionObjectById; // rdi
  void *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // eax
  __int64 v12; // rdx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  v4 = 0LL;
  if ( !LODWORD(ExpPlatformBinaryLock.QuantumTarget) )
    SessionObjectById = PsGetSessionObjectById();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v13, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    v10 = *((_DWORD *)Token + 50);
    if ( (v10 & 0x4000) != 0 )
    {
      v12 = *((_QWORD *)Token + 135);
      if ( v12 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v12, v8, v9);
        v10 = *((_DWORD *)Token + 50);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      *((_DWORD *)Token + 30) = SessionId;
      if ( !LODWORD(ExpPlatformBinaryLock.QuantumTarget) )
      {
        v4 = (void *)*((_QWORD *)Token + 145);
        *((_QWORD *)Token + 145) = SessionObjectById;
      }
      SessionObjectById = 0LL;
    }
    *((_DWORD *)Token + 30) = SessionId;
    if ( (v10 & 0x4000) != 0 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98), v8, v9);
  }
  _InterlockedOr(v13, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v2;
}
