/*
 * XREFs of _lambda_262b589463239528202aaef0d25d8228_::_lambda_262b589463239528202aaef0d25d8228_ @ 0x180110A4C
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_262b589463239528202aaef0d25d8228_::_lambda_262b589463239528202aaef0d25d8228_(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a2[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  result = a1;
  *(_OWORD *)(a1 + 16) = *a3;
  return result;
}
