/*
 * XREFs of CcPerfLogFlushSection @ 0x1404A3858
 * Callers:
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushSection(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  ULONG_PTR v9; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  if ( a2 )
  {
    v9 = CcReferenceSharedCacheMapFileObject(a2);
    v11[1] = *(_QWORD *)(v9 + 24);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(a2 + 96), v9, 0x63536343u);
    if ( a3 )
      v12 = *a3;
    else
      v12 = 0LL;
    v14 = a5;
    v11[0] = a1;
    v10[0] = v11;
    v13 = a4;
    v10[1] = 32LL;
    EtwTraceKernelEvent((int)v10, 1, 0x80020000, 5642, 5249282);
  }
}
