/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18010EAD0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18010D3FC (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18010EDF4 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18010F01C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18010F11C (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  char *v3; // r12
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // eax
  bool v22; // bp
  bool v23; // zf
  unsigned int v25; // eax
  __int64 Resource; // rax
  CSharedSectionBase *v27; // rax
  const void *v28; // rax
  int v29; // ecx
  const void *v30; // r14
  unsigned int ExpressionTypeByteSize; // eax
  int v32; // r9d
  size_t v33; // rdi
  void *v34; // rax
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rdi
  __int64 v38; // rax
  unsigned int v39; // [rsp+20h] [rbp-48h]
  unsigned int v40; // [rsp+20h] [rbp-48h]
  size_t v41[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (char *)this + 304;
  if ( *((_QWORD *)this + 38) || *((_QWORD *)this + 42) )
  {
    v11 = -2003303421;
    v25 = 208;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v25, 0LL);
    goto LABEL_10;
  }
  v7 = *((_DWORD *)a3 + 3);
  if ( !v7 )
  {
    v40 = 214;
    goto LABEL_9;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v40 = 220;
    goto LABEL_9;
  }
  if ( *((unsigned int *)a3 + 5) < 48 * (unsigned __int64)*((unsigned int *)a3 + 2) )
  {
    v40 = 226;
    goto LABEL_9;
  }
  if ( v7 >= *((_DWORD *)a2 + 7)
    || (v8 = *((_DWORD *)a2 + 6) * v7, v9 = *((_QWORD *)a2 + 5), v10 = (unsigned int)v8, !*(_DWORD *)(v8 + v9))
    || (v12 = *(_QWORD *)(v8 + v9 + 8)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 132LL)
    || (v13 = *(_QWORD *)(v10 + v9 + 8)) == 0 )
  {
    v40 = 233;
LABEL_9:
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v40, 0LL);
LABEL_10:
    std::unique_ptr<KeyframeSequence>::reset(v3, 0LL);
    return (unsigned int)v11;
  }
  v14 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v14 )
    goto LABEL_15;
  Resource = CResourceTable::GetResource(a2, v14, 3LL);
  if ( !Resource || *((_DWORD *)a3 + 8) != 4 )
  {
    v40 = 246;
    goto LABEL_9;
  }
  *((_QWORD *)this + 42) = Resource;
LABEL_15:
  v15 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 105) = *((_DWORD *)a3 + 2);
  v16 = *((_DWORD *)a2 + 12);
  if ( !v15 )
  {
    *((_DWORD *)this + 44) = v16;
    goto LABEL_17;
  }
  if ( v15 != v16 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2E2u, 0LL);
    v25 = 253;
    goto LABEL_30;
  }
LABEL_17:
  if ( *((_DWORD *)a3 + 14) )
  {
    if ( *((_QWORD *)this + 36) || *((_QWORD *)this + 37) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x103,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
        (const char *)0x8007029CLL,
        v39);
    v27 = (CSharedSectionBase *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 12), 132LL);
    if ( v27 )
    {
      v28 = CSharedSectionBase::ResolveAllocation(v27, *((unsigned int *)a3 + 13), *((unsigned int *)a3 + 14));
      v29 = *((_DWORD *)this + 38);
      v30 = v28;
      if ( v29 == 11 )
      {
        v37 = MIDL_user_allocate(0x48uLL);
        if ( v37 )
        {
          gsl::details::extent_type<-1>::extent_type<-1>(v41, *((unsigned int *)a3 + 14));
          if ( v41[0] == -1LL || !v30 && v41[0] )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          v41[1] = (size_t)v30;
          v38 = CPathData::CPathData((__int64)v37, g_DeviceManager, v41);
        }
        else
        {
          v38 = 0LL;
        }
        wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 37, v38);
      }
      else
      {
        ExpressionTypeByteSize = GetExpressionTypeByteSize(v29);
        if ( ExpressionTypeByteSize == v32 )
        {
          v33 = ExpressionTypeByteSize;
          v34 = MIDL_user_allocate(ExpressionTypeByteSize);
          v35 = (void *)*((_QWORD *)this + 36);
          *((_QWORD *)this + 36) = v34;
          if ( v35 )
            operator delete(v35);
          v36 = (void *)*((_QWORD *)this + 36);
          if ( v36 )
            memcpy_0(v36, v30, v33);
        }
      }
    }
  }
  v17 = *(unsigned int *)(v13 + 80);
  v18 = *((unsigned int *)a3 + 4);
  if ( v18 >= v17
    || *((unsigned int *)a3 + 5) > v17 - v18
    || (v19 = *(_QWORD *)(v13 + 88)) == 0
    || (v20 = v18 + v19) == 0 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x126u, 0LL);
    goto LABEL_10;
  }
  v11 = CKeyframeAnimation::SetIterationInfo(this, v18, *((unsigned int *)a3 + 8));
  if ( v11 < 0 )
  {
    v25 = 301;
    goto LABEL_30;
  }
  v21 = CKeyframeAnimation::SetKeyFrameData(this, *((unsigned int *)a3 + 15), *((unsigned int *)a3 + 10), v20);
  v22 = v21 >= 0;
  v23 = (*((_BYTE *)this + 216) & 0x40) == 0;
  *((_BYTE *)this + 217) ^= (*((_BYTE *)a3 + 64) ^ *((_BYTE *)this + 217)) & 1;
  if ( v23 && v21 >= 0 )
  {
    v11 = CBaseExpression::TryRegisterWithExpressionManager(this);
    if ( v11 < 0 )
    {
      v25 = 312;
      goto LABEL_30;
    }
  }
  v11 = 0;
  if ( !v22 )
    goto LABEL_10;
  return (unsigned int)v11;
}
