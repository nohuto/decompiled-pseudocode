/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18000A0C0
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     _lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator() @ 0x180135BEC (_lambda_27cd9712d7984e7fa7dba7b637d2d0ce_--operator().c)
 *     _lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator() @ 0x1801373F0 (_lambda_dec62a0f3d11fac13fbc690f673d9d9c_--operator().c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x180009344 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180009F80 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetDefaultEffectChainClsids(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  struct _GUID *v15; // rbx
  struct _GUID *v16; // rax
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a2);
  *a3 = 0;
  v8 = *((_QWORD *)this + 2);
  if ( !v8 )
    return 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)a2, v8);
  v9 = *((_QWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 8);
  if ( *((_DWORD *)a2 + 2) != v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v17);
    return 2147942414LL;
  }
  v12 = 40LL;
  if ( v10 <= 0 )
    v12 = 56LL;
  v13 = v12 + v9;
  if ( a4 )
  {
    v14 = *(int *)(v13 + 8);
    v15 = 0LL;
    if ( *(_DWORD *)(v13 + 8) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 0x10 )
        goto LABEL_15;
      v14 *= 16LL;
    }
    v16 = (struct _GUID *)ATL::CComAllocator::Allocate(v14);
    v15 = v16;
    if ( v16 )
    {
      memcpy_0(v16, *(const void **)(v12 + v9), 16LL * *(int *)(v13 + 8));
      *a4 = v15;
      CoTaskMemFree(0LL);
      goto LABEL_13;
    }
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v17);
    CoTaskMemFree(v15);
    return 2147942414LL;
  }
LABEL_13:
  *a3 = *(_DWORD *)(v13 + 8);
  return 0LL;
}
