/*
 * XREFs of ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18000ACCC
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000AE0C (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18000B9E4 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::ReplaceEffectChain(
        void **this,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        const struct _GUID *a5)
{
  char *v5; // rbx
  unsigned int i; // edi
  int v11; // esi
  unsigned int v12; // esi
  bool v13; // sf
  __int64 v14; // rax
  struct _GUID *v15; // rdx
  __int64 v16; // rdx
  unsigned int j; // ebx
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (char *)(this + 5);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this + 5);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this + 7);
  for ( i = 0; i < a2; ++i )
  {
    v11 = *((_DWORD *)v5 + 2);
    if ( v11 == *((_DWORD *)v5 + 3) )
    {
      if ( *((_DWORD *)v5 + 3) )
      {
        v13 = (v11 & 0x40000000) != 0;
        v12 = 2 * v11;
        if ( v13 )
          goto LABEL_14;
      }
      else
      {
        v12 = 1;
      }
      if ( v12 > 0x7FFFFFFuLL || (v14 = _o__recalloc(*(_QWORD *)v5, v12, 16LL)) == 0 )
      {
LABEL_14:
        v16 = 68LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v19);
        return 2147942414LL;
      }
      *((_DWORD *)v5 + 3) = v12;
      *(_QWORD *)v5 = v14;
    }
    v15 = (struct _GUID *)(*(_QWORD *)v5 + 16LL * *((int *)v5 + 2));
    if ( v15 )
      *v15 = a3[i];
    ++*((_DWORD *)v5 + 2);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(this + 7, &a3[i]) )
    {
      v16 = 70LL;
      goto LABEL_15;
    }
  }
  for ( j = 0; j < a4; ++j )
  {
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(this + 7, &a5[j]) )
    {
      v16 = 75LL;
      goto LABEL_15;
    }
  }
  return 0LL;
}
