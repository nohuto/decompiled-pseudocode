/*
 * XREFs of rimPredictionPolicyUpdateStateAndApply @ 0x140137548
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetDoPrediction @ 0x1401B8F48 (ApiSetDoPrediction.c)
 */

__int64 __fastcall rimPredictionPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // rdi
  __int64 result; // rax
  int v9; // ecx
  int v10; // edx

  if ( a4
    || (*(_DWORD *)(a1 + 368) & 8) != 0
    || (v5 = *(_DWORD *)(a1 + 24), v6 = 1, v5 != 1) && (unsigned int)(v5 - 2) > 2 )
  {
    v6 = 0;
  }
  v7 = (_DWORD *)(a2 + 2464);
  if ( v6 )
  {
    result = ApiSetDoPrediction(a1, *(_QWORD *)(a2 + 2488), *(_QWORD *)(a2 + 2480), a3, a2 + 96, a2 + 2472, a2 + 2464);
    if ( *(_DWORD *)(a2 + 2388) )
    {
      v9 = *v7 - *(_DWORD *)(a2 + 2480);
      v10 = *(_DWORD *)(a2 + 2468) - *(_DWORD *)(a2 + 2484);
      *(_DWORD *)(a2 + 2536) += v9;
      *(_DWORD *)(a2 + 2544) += v9;
      *(_DWORD *)(a2 + 2540) += v10;
      *(_DWORD *)(a2 + 2548) += v10;
    }
  }
  else
  {
    *(_QWORD *)v7 = *(_QWORD *)(a2 + 2480);
    result = *(_QWORD *)(a2 + 2488);
    *(_QWORD *)(a2 + 2472) = result;
  }
  return result;
}
