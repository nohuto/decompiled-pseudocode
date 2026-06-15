/*
 * XREFs of ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18000BB20
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // eax
  int v4; // edi
  unsigned int v6; // edi
  __int64 v7; // rax
  _DWORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  bool v12; // sf

  v2 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 != v2 )
  {
    v8 = (_DWORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( v2 )
  {
    v12 = (v4 & 0x40000000) != 0;
    v6 = 2 * v4;
    if ( v12 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 > 0x7FFFFFFuLL )
    return 0LL;
  v7 = _o__recalloc(*(_QWORD *)a1, v6, 16LL);
  if ( !v7 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = v6;
  v8 = (_DWORD *)(a1 + 8);
  *(_QWORD *)a1 = v7;
LABEL_7:
  v9 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v10 = a2[1];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *v9 = *a2;
    v9[1] = a2[1];
  }
  ++*v8;
  return 1LL;
}
