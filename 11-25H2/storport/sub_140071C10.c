/*
 * XREFs of sub_140071C10 @ 0x140071C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140115650 @ 0x140115650 (sub_140115650.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140071C10(struct _KDPC *Dpc, __int64 a2, __int64 a3, void (__fastcall *a4)(__int64, _QWORD))
{
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 DeferredContext; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(a3 + 48);
  v5 = 0LL;
  v8 = v4[206];
  DeferredContext = 0LL;
  if ( a4 )
  {
    a4(v8 + 64, *(unsigned __int16 *)(a3 + 32));
    v5 = DeferredContext;
  }
  DeferredContext = v5 | 1;
  sub_140115650(Dpc, &DeferredContext, (PVOID)a3, v4);
  result = *(_QWORD *)(a3 + 72);
  _InterlockedDecrement((volatile signed __int32 *)(result
                                                  + 4LL
                                                  * (unsigned int)(((unsigned __int64)Dpc - *(_QWORD *)(a3 + 64)) >> 6)));
  return result;
}
