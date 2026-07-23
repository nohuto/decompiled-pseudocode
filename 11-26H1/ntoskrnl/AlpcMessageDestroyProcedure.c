/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1409B8750
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140B42720 (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  volatile signed __int64 *v4; // rcx
  void *v5; // rcx
  signed __int64 v7; // rax
  bool v8; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  ULONG_PTR v12; // rdx
  void *v13; // rcx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog(a1);
  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7 <= 1;
    BugCheckParameter4 = v7 - 1;
    if ( v8 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v3, 0x21uLL, BugCheckParameter4);
      v10 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v3 - 31)];
      guard_dispatch_icall_no_overrides(v3, a2);
      if ( (int)guard_dispatch_icall_no_overrides(v3, v11) >= 0 )
      {
        if ( (*(_BYTE *)(v3 - 32) & 2) != 0 )
        {
          ExFreeToNPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v10 + 8), (PVOID)(v3 - 48));
        }
        else
        {
          v13 = (void *)(v3 - 48);
          if ( *(_QWORD *)(v10 + 48) )
            guard_dispatch_icall_no_overrides((__int64)v13, (__int64)&AlpcpLookasides);
          else
            ExFreePoolWithTag(v13, *(_DWORD *)(v10 + 4));
        }
      }
    }
    return 3221225473LL;
  }
  else
  {
    v4 = *(volatile signed __int64 **)(a1 + 48);
    if ( v4 )
    {
      v12 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v12 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota((PVOID)v4);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      else
      {
        if ( v12 + *((_QWORD *)v4 + 179) >= 0x1000 )
          PsReturnProcessPagedPoolQuota((ULONG_PTR)v4, v12);
        else
          _InterlockedAdd64(v4 + 179, v12);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
    }
    v5 = *(void **)(a1 + 224);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x42456C41u);
    return 0LL;
  }
}
