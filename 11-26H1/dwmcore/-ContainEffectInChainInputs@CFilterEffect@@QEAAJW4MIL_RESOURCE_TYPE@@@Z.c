/*
 * XREFs of ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1802670F4
 * Callers:
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802670D8 (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1802670F4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1802670F4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 4)) & 0xC;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 4)) & 0xC) & 0xC) == 4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
    {
      v5 = 0;
    }
    else
    {
      v5 = -2147467259;
      if ( *(int *)(a1 + 328) > 0 )
      {
        v6 = *(int *)(a1 + 328);
        v7 = 0LL;
        do
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v7);
          v9 = *(_QWORD *)(v8 + 24);
          if ( v9 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, 51LL) )
            {
              v10 = *(_QWORD *)(v8 + 24);
              if ( v10 )
              {
                v5 = CFilterEffect::ContainEffectInChainInputs(v10, a2);
                if ( v5 >= 0 )
                  break;
              }
            }
          }
          ++v7;
        }
        while ( v7 < v6 );
      }
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x252u, 0LL);
  }
  *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (4 * (*(_DWORD *)(a1 + 40) >> 2) - 4)) & 0xC;
  return (unsigned int)v5;
}
