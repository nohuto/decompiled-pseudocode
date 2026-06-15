/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_262b589463239528202aaef0d25d8228__0_ @ 0x180110744
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_262b589463239528202aaef0d25d8228__0_(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_180177990;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
