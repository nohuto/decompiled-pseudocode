/*
 * XREFs of _lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator() @ 0x180136440
 * Callers:
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18013B304 (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator()(__int64 *a1, int a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx

  result = *a1;
  v5 = 0LL;
  v6 = a2;
  v8 = *(unsigned __int16 *)(*a1 + 2LL * a2);
  v9 = 20LL * a2;
  while ( (unsigned int)v5 < (unsigned int)v8 )
  {
    result = 5 * (v5 + 20 * v6);
    v10 = a1[1];
    v11 = *(_QWORD *)(v10 + 20 * (v5 + 20 * v6)) - *a3;
    if ( !v11 )
      v11 = *(_QWORD *)(v10 + 20 * (v5 + 20 * v6) + 8) - a3[1];
    if ( !v11 )
    {
      *(_DWORD *)(v10 + 20 * (v5 + 20 * v6) + 16) |= a4;
      return result;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  if ( (unsigned int)v8 < 0x14 )
  {
    *(_OWORD *)(a1[1] + 20 * (v9 + v8)) = *(_OWORD *)a3;
    *(_DWORD *)(a1[1] + 20 * (v9 + *(unsigned __int16 *)(*a1 + 2 * v6)) + 16) = a4;
    result = *a1;
    ++*(_WORD *)(*a1 + 2 * v6);
  }
  return result;
}
