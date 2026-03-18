/*
 * XREFs of ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x180216974
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180199EDC (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CInjectionAnimation::ProcessSetInjectionData(
        CInjectionAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA *a3)
{
  unsigned int v6; // edx
  CSharedSectionBase *Resource; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  const void *v10; // rbx
  void *v11; // rax
  size_t v12; // r8
  CExpressionManager *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 35) || (v6 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v15 = 67;
    goto LABEL_11;
  }
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v6, 0x84u);
  if ( !Resource )
  {
    v15 = 73;
LABEL_11:
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v15, 0LL);
    return v9;
  }
  *((_DWORD *)this + 73) = *((_DWORD *)a3 + 4) / 0x84u;
  v8 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x51u, 0LL);
  }
  else
  {
    v10 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( !v10 )
    {
      v15 = 91;
      goto LABEL_11;
    }
    v11 = operator new[](saturated_mul(*((int *)this + 73), 0x84uLL));
    v12 = 132LL * *((int *)this + 73);
    *((_QWORD *)this + 35) = v11;
    memcpy_0(v11, v10, v12);
    v13 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
    *((_BYTE *)v13 + 418) = 1;
    CExpressionManager::Invalidate(v13);
    return 0;
  }
  return v9;
}
