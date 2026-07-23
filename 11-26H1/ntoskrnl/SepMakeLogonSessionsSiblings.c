/*
 * XREFs of SepMakeLogonSessionsSiblings @ 0x14081B844
 * Callers:
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x14081BC00 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SepMakeLogonSessionsSiblings(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  struct _ERESOURCE *v9; // r12
  struct _ERESOURCE *v10; // r13
  struct _ERESOURCE *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 *v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rbx
  __int64 *i; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+50h] [rbp+8h]

  v2 = 1529154084 * *a2;
  CurrentThread = KeGetCurrentThread();
  v6 = SepLogonSessions;
  v7 = v2 >> 28;
  v8 = (unsigned int)(1529154084 * *a1) >> 28;
  v21 = v7;
  v9 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v8 & 3));
  v10 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v7 & 3));
  --CurrentThread->KernelApcDisable;
  if ( (unsigned int)v8 >= (unsigned int)v7 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&RtlpBootStatHandleLock.SystemAffinityTokenListHead + (v7 & 3), 1u);
    v11 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v8 & 3));
  }
  else
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&RtlpBootStatHandleLock.SystemAffinityTokenListHead + (v8 & 3), 1u);
    v11 = v10;
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  ExAcquireResourceExclusiveLite(v11, 1u);
  v13 = *(__int64 **)(v6 + 8 * v8);
  v14 = 0;
  while ( v13 )
  {
    v15 = v13[21];
    if ( v15 == PsGetCurrentServerSilo() && *a1 == *((_DWORD *)v13 + 2) && a1[1] == *((_DWORD *)v13 + 3) )
      break;
    v13 = (__int64 *)*v13;
  }
  for ( i = *(__int64 **)(v6 + 8 * v21); i; i = (__int64 *)*i )
  {
    v17 = i[21];
    if ( v17 == PsGetCurrentServerSilo() && *a2 == *((_DWORD *)i + 2) && a2[1] == *((_DWORD *)i + 3) )
      break;
  }
  if ( v13 && i )
  {
    v18 = *(_QWORD *)a2;
    *((_DWORD *)v13 + 10) |= 0x40u;
    v13[22] = v18;
    v19 = *(_QWORD *)a1;
    *((_DWORD *)i + 10) |= 0x40u;
    i[22] = v19;
  }
  else
  {
    v14 = -1073741729;
  }
  ExReleaseResourceLite(v9);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(v10);
  KeLeaveCriticalRegion();
  return v14;
}
