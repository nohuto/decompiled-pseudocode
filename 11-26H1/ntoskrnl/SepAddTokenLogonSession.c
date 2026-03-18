/*
 * XREFs of SepAddTokenLogonSession @ 0x140774EB0
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     SepSetServerSiloToken @ 0x14081221C (SepSetServerSiloToken.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall SepAddTokenLogonSession(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *i; // rbx
  __int64 **Pool2; // rax
  __int64 *v8; // rbx
  __int64 **v9; // rdx

  v1 = 1529154084 * *(_DWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = v1 >> 28;
  v5 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.InGlobalUpdateVpThreadPriorityList + 13 * (v4 & 3));
  ExAcquireResourceExclusiveLite(v5, 1u);
  for ( i = *(__int64 **)(SepLogonSessions + 8 * v4); i; i = (__int64 *)*i )
  {
    if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)i + 2)
      && *(_DWORD *)(a1 + 28) == *((_DWORD *)i + 3)
      && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 168LL) == i[21] )
    {
      Pool2 = (__int64 **)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        v8 = i + 23;
        Pool2[1] = 0LL;
        Pool2[2] = (__int64 *)a1;
        v9 = (__int64 **)v8[1];
        if ( *v9 != v8 )
          __fastfail(3u);
        *Pool2 = v8;
        Pool2[1] = (__int64 *)v9;
        *v9 = (__int64 *)Pool2;
        v8[1] = (__int64)Pool2;
      }
      break;
    }
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
}
