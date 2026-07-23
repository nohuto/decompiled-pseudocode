/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x140817E20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140470310 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB8628 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r8
  _QWORD *v5; // rsi
  _QWORD *v7; // r14
  void *v8; // r15
  NTSTATUS v9; // eax
  PERESOURCE *v10; // rdi
  NTSTATUS v11; // ebx
  struct _KTHREAD *v12; // rax
  int v13; // eax
  PERESOURCE v14; // rdx
  void *v15; // r12
  int v16; // eax
  _QWORD *v18; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  POWNER_ENTRY OwnerTable; // [rsp+B0h] [rbp+50h] BYREF
  _QWORD *v22; // [rsp+B8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  Object = 0LL;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  v7 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v8 = 0LL;
  v9 = SepReferenceTokenByHandle(a1, 8u, (__int64)CurrentThread, a4, &Object, &OwnerTable, &v20);
  v10 = (PERESOURCE *)Object;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(v10[6], 1u);
    if ( *((_BYTE *)v10 + 204) )
    {
      v11 = -1073741525;
      goto LABEL_12;
    }
    v13 = SepReferenceLogonSessionSilo(&v10[27]->SystemResourcesList.Blink, *(_QWORD *)&v10[27][1].ActiveEntries, &v18);
    v7 = v18;
    v11 = v13;
    if ( v13 >= 0 )
    {
      v14 = v10[27];
      v15 = (void *)v18[7];
      OwnerTable = v14->OwnerTable;
      if ( OwnerTable )
      {
        v16 = SepReferenceLogonSessionSilo(&OwnerTable, *(_QWORD *)&v14[1].ActiveEntries, &v22);
        v5 = v22;
        v11 = v16;
        if ( v16 < 0 )
          goto LABEL_12;
        v8 = (void *)v22[7];
      }
      if ( !v15 || (v11 = SeSetSessionIdToken(v15, a2), v11 >= 0) )
      {
        if ( v8 )
          v11 = SeSetSessionIdToken(v8, a2);
      }
    }
  }
LABEL_12:
  if ( v10 )
  {
    ExReleaseResourceLite(v10[6]);
    KeLeaveCriticalRegion();
    ObfDereferenceObjectWithTag(v10, 0x74726853u);
  }
  if ( v7 )
    SepDeReferenceLogonSessionDirect(v7);
  if ( v5 )
    SepDeReferenceLogonSessionDirect(v5);
  return (unsigned int)v11;
}
