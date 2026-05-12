/*
 * XREFs of sub_140074DEC @ 0x140074DEC
 * Callers:
 *     sub_14004DAD0 @ 0x14004DAD0 (sub_14004DAD0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140074DEC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  void (__fastcall *v5)(__int64, _QWORD, __int64); // rax
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v7; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  if ( *(_DWORD *)v2 != 1094997074 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v2 = 0LL;
  }
  if ( a2
    && (_InterlockedExchange((volatile __int32 *)(a2 + 24), 1),
        (v5 = (void (__fastcall *)(__int64, _QWORD, __int64))_InterlockedExchange64((volatile __int64 *)(a2 + 8), 0LL)) != 0LL)
    && (!v2 ? (v6 = *(_QWORD *)(v3 + 408)) : (v6 = *(_QWORD *)(v2 + 616)),
        v5(v6 + 16, *(_QWORD *)(a2 + 16), a2),
        _InterlockedExchange((volatile __int32 *)(a2 + 24), 0) == 2) )
  {
    IoFreeWorkItem(*(PIO_WORKITEM *)a2);
    *(_QWORD *)a2 = 0LL;
    ExFreePoolWithTag((PVOID)a2, 0x49576152u);
    if ( v2 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 4888));
LABEL_15:
      v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v2 + 336);
      goto LABEL_13;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 1080));
  }
  else if ( v2 )
  {
    goto LABEL_15;
  }
  v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v3 + 152);
LABEL_13:
  ExReleaseRundownProtectionCacheAware(v7);
}
