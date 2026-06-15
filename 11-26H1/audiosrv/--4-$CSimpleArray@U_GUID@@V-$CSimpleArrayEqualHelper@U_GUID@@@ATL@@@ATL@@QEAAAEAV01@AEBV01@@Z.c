/*
 * XREFs of ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180009F80
 * Callers:
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009368 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18000A0C0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000AE0C (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800B0AF8 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rsi
  void *v5; // rcx
  void *v6; // rax
  int v7; // eax
  int v8; // ebp
  __int64 v9; // r14
  int v10; // edi
  __int64 v11; // r15
  unsigned int v12; // edi
  __int64 v13; // rax
  bool v15; // sf

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2;
  if ( v2 == *(_DWORD *)(a2 + 8) )
  {
    while ( v2 > 0 )
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(a1, (unsigned int)--v2);
  }
  else
  {
    v5 = *(void **)a1;
    if ( v5 )
    {
      free(v5);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    v6 = calloc(*(int *)(v3 + 8), 0x10uLL);
    *(_QWORD *)a1 = v6;
    if ( v6 )
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 8);
  }
  v7 = *(_DWORD *)(v3 + 8);
  v8 = 0;
  if ( v7 > 0 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 < 0 || v8 >= v7 )
      {
        ATL::_AtlRaiseException(0xC000008C, a2);
        JUMPOUT(0x18000A0B7LL);
      }
      v10 = *(_DWORD *)(a1 + 8);
      v11 = *(_QWORD *)v3;
      if ( v10 != *(_DWORD *)(a1 + 12) )
        goto LABEL_16;
      if ( *(_DWORD *)(a1 + 12) )
      {
        v15 = (v10 & 0x40000000) != 0;
        v12 = 2 * v10;
        if ( v15 )
          goto LABEL_19;
      }
      else
      {
        v12 = 1;
      }
      LODWORD(a2) = v12;
      if ( v12 <= 0x7FFFFFFuLL )
      {
        v13 = _o__recalloc(*(_QWORD *)a1, v12, 16LL);
        if ( v13 )
        {
          *(_DWORD *)(a1 + 12) = v12;
          *(_QWORD *)a1 = v13;
LABEL_16:
          a2 = *(_QWORD *)a1 + 16LL * *(int *)(a1 + 8);
          if ( a2 )
            *(_OWORD *)a2 = *(_OWORD *)(v9 + v11);
          ++*(_DWORD *)(a1 + 8);
        }
      }
LABEL_19:
      v7 = *(_DWORD *)(v3 + 8);
      ++v8;
      v9 += 16LL;
    }
    while ( v8 < v7 );
  }
  return a1;
}
