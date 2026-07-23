/*
 * XREFs of LdrpResolveDelayloadAddress @ 0x1800C30F0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C3A0 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpResolveDelayloadAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64 *, __int64, __int64, __int64, _QWORD),
        int *a6)
{
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  v8 = *(unsigned int *)(a3 + 16);
  v9 = a4 - *(unsigned int *)(a3 + 12) - v6;
  v18 = 0LL;
  v11 = *(_QWORD *)(v6 + v8 + 8 * (v9 >> 3));
  if ( v11 < 0 )
    v12 = 0;
  else
    v12 = v11 + v6 + 2;
  v13 = (unsigned __int16)v11;
  if ( v11 >= 0 )
    v13 = 0;
  v14 = LdrpResolveProcedureAddress(a1, a2, v12, v13, 0, (__int64)&v18);
  *a6 = v14;
  if ( v14 < 0 )
    return v18;
  if ( AvrfpAPILookupCallbacksEnabled )
    AVrfCallAPILookupCallback(*(_QWORD *)(a1 + 48), *(_QWORD *)(a2 + 48), v18, 1, (__int64)&v18);
  if ( !a5 )
    return v18;
  v16 = *(_QWORD *)(a1 + 48);
  v17 = v18;
  v19 = 0LL;
  a5(&v19, a2, v18, v16, 0LL);
  if ( v19 )
    return v19;
  return v17;
}
