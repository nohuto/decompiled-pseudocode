/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A1F8 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 * Callees:
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180009F80 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18000B9E4 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18000BB20 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000BBF0 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180075520 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7)
{
  char *v9; // r12
  signed int v10; // edx
  unsigned int v11; // edi
  int v12; // esi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rdx
  int v18; // r14d
  unsigned int i; // edi
  void *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 **v24; // r14
  __int64 *v25; // rcx
  __int64 v27; // r15
  char *v28; // rax
  char *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // r15d
  __int64 v33; // rdx
  int j; // edi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rcx
  __int64 **v38; // rdi
  __int64 v39; // rdx
  __int64 *v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rcx
  void (__fastcall *v43)(__int64 *, __int64); // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  int v47; // [rsp+28h] [rbp-91h]
  int v48; // [rsp+28h] [rbp-91h]
  char *v49; // [rsp+38h] [rbp-81h] BYREF
  int v50; // [rsp+40h] [rbp-79h]
  unsigned int v51; // [rsp+44h] [rbp-75h]
  std::_Ref_count_base *v52[2]; // [rsp+48h] [rbp-71h] BYREF
  void *Block; // [rsp+58h] [rbp-61h] BYREF
  __int64 v54; // [rsp+60h] [rbp-59h]
  void *v55; // [rsp+68h] [rbp-51h] BYREF
  __int64 v56; // [rsp+70h] [rbp-49h]
  void *v57; // [rsp+78h] [rbp-41h] BYREF
  __int64 v58; // [rsp+80h] [rbp-39h]
  _BYTE v59[112]; // [rsp+88h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  __int64 v61; // [rsp+110h] [rbp+57h]

  SystemEffectDescriptor::RemoveModesFromOverridingChains(a1, a2);
  v57 = 0LL;
  v58 = 0LL;
  v9 = 0LL;
  v49 = 0LL;
  v10 = 0;
  v50 = 0;
  v11 = 0;
  v51 = 0;
  v12 = 0;
  v61 = 0LL;
  while ( v12 < *((_DWORD *)a2 + 2) )
  {
    v13 = *((_QWORD *)a1 + 2);
    if ( v13 )
    {
      v14 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, (unsigned int)v12);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v13, v14) != -1 )
      {
        v15 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, (unsigned int)v12);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v57, v15) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFA,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v47);
          break;
        }
        v10 = v50;
        goto LABEL_54;
      }
      v10 = v50;
    }
    if ( v12 < 0 || v12 >= *((_DWORD *)a2 + 2) )
    {
      ATL::_AtlRaiseException(0xC000008C, v10);
      __debugbreak();
    }
    v27 = *(_QWORD *)a2;
    if ( v10 == v11 )
    {
      if ( v11 )
      {
        v11 = 2 * v10;
        if ( (v10 & 0x40000000) != 0 )
          goto LABEL_56;
      }
      else
      {
        v11 = 1;
      }
      if ( v11 > 0x7FFFFFFuLL || (v28 = (char *)_o__recalloc(v9, v11, 16LL)) == 0LL )
      {
LABEL_56:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFF,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v47);
        break;
      }
      v51 = v11;
      v9 = v28;
      v49 = v28;
      v10 = v50;
    }
    v29 = &v9[16 * v10];
    if ( v29 )
      *(_OWORD *)v29 = *(_OWORD *)(v61 + v27);
    v50 = ++v10;
LABEL_54:
    ++v12;
    v61 += 16LL;
  }
  v16 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  Block = 0LL;
  v54 = 0LL;
  v17 = *((_QWORD *)a1 + 2);
  v18 = a5;
  if ( !v17
    || a5
    || (ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)&Block, v17 + 40),
        (_DWORD)v54 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) )
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v55, a4 + 16LL * i) )
      {
        v33 = 280LL;
LABEL_63:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v33,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v47);
        goto LABEL_14;
      }
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, a4 + 16LL * i) )
      {
        v33 = 281LL;
        goto LABEL_63;
      }
    }
    if ( *((_QWORD *)a1 + 2) && a5 == 1 )
    {
      for ( j = 0; ; ++j )
      {
        v35 = *((_QWORD *)a1 + 2);
        if ( j >= *(_DWORD *)(v35 + 48) )
          break;
        if ( j < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v17);
          goto LABEL_86;
        }
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                              &Block,
                              *(_QWORD *)(v35 + 40) + 16LL * j) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x121,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v47);
          break;
        }
      }
    }
LABEL_14:
    v16 = v55;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v47);
  }
  v20 = Block;
  if ( (int)v58 > 0 )
  {
    *(_OWORD *)v52 = 0LL;
    v47 = 0;
    v18 = SystemEffectChainDescriptor::CreateEffectChain(&v57, (unsigned int)v54, Block, 0LL);
    if ( v18 >= 0 )
    {
      v24 = (__int64 **)(a7 + 7);
      if ( !a7[7]
        || (v30 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v59, a7),
            v31 = SystemEffectChainDescriptor::MarkAsUnresolved(v52[0], v30),
            v32 = v31,
            v31 >= 0) )
      {
        if ( (unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                             (char *)a1 + 32,
                             v52) )
        {
          if ( v52[1] )
            std::_Ref_count_base::_Decref(v52[1]);
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15A,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          0);
        if ( v52[1] )
          std::_Ref_count_base::_Decref(v52[1]);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v55);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((void **)&v49);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v57);
        v42 = *v24;
        if ( !*v24 )
          return 2147942414LL;
        v43 = *(void (__fastcall **)(__int64 *, __int64))(*v42 + 32);
        goto LABEL_108;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x159,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v31,
        0);
LABEL_91:
      v38 = v24;
      if ( v52[1] )
      {
        std::_Ref_count_base::_Decref(v52[1]);
        v38 = (__int64 **)(a7 + 7);
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v55);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((void **)&v49);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v57);
      v40 = *v24;
      if ( *v24 )
      {
        LOBYTE(v39) = v40 != a7;
        (*(void (__fastcall **)(__int64 *, __int64))(*v40 + 32))(v40, v39);
        *v38 = 0LL;
      }
      return v32;
    }
LABEL_86:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v18,
      v47);
    if ( v52[1] )
      std::_Ref_count_base::_Decref(v52[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v55);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((void **)&v49);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v57);
LABEL_82:
    v37 = (__int64 *)a7[7];
    if ( v37 )
    {
      LOBYTE(v36) = v37 != a7;
      (*(void (__fastcall **)(__int64 *, __int64))(*v37 + 32))(v37, v36);
      a7[7] = 0LL;
    }
    return (unsigned int)v18;
  }
LABEL_16:
  if ( v50 <= 0 )
    goto LABEL_24;
  *(_OWORD *)v52 = 0LL;
  if ( a6 == 1 && (v44 = *((_QWORD *)a1 + 2)) != 0 )
  {
    v21 = *(_QWORD *)(v44 + 56);
    v22 = *(unsigned int *)(v44 + 64);
  }
  else
  {
    LODWORD(v21) = 0;
    v22 = 0LL;
  }
  v48 = v21;
  v23 = SystemEffectChainDescriptor::CreateEffectChain(&v49, (unsigned int)v56, v16, v22);
  v18 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v23,
      v48);
    if ( v52[1] )
      std::_Ref_count_base::_Decref(v52[1]);
    if ( v20 )
      free(v20);
    if ( v16 )
      free(v16);
    if ( v9 )
      free(v9);
    if ( v57 )
      free(v57);
    goto LABEL_82;
  }
  v24 = (__int64 **)(a7 + 7);
  if ( a7[7] )
  {
    v45 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v59, a7);
    v46 = SystemEffectChainDescriptor::MarkAsUnresolved(v52[0], v45);
    v32 = v46;
    if ( v46 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x166,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v46,
        v48);
      goto LABEL_91;
    }
  }
  if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                        (char *)a1 + 32,
                        v52) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v48);
    if ( v52[1] )
      std::_Ref_count_base::_Decref(v52[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v55);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((void **)&v49);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v57);
    v42 = *v24;
    if ( !*v24 )
      return 2147942414LL;
    v41 = *v42;
    v43 = *(void (__fastcall **)(__int64 *, __int64))(*v42 + 32);
LABEL_108:
    LOBYTE(v41) = v42 != a7;
    v43(v42, v41);
    a7[7] = 0LL;
    return 2147942414LL;
  }
  if ( v52[1] )
    std::_Ref_count_base::_Decref(v52[1]);
LABEL_24:
  if ( v20 )
    free(v20);
  if ( v16 )
    free(v16);
  if ( v9 )
    free(v9);
  if ( v57 )
    free(v57);
  v25 = (__int64 *)a7[7];
  if ( v25 )
  {
    LOBYTE(v17) = v25 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v25 + 32))(v25, v17);
    a7[7] = 0LL;
  }
  return 0LL;
}
