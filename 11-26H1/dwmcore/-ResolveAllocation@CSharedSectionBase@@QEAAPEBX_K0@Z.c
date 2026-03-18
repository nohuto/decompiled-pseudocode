/*
 * XREFs of ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550
 * Callers:
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800553F4 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18010EAD0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x18014C738 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x180216974 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONAN.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180219DBC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     ?ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPERSISTENTCACHE@@PEBXI@Z @ 0x180219F78 (-ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPER.c)
 *     ?ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSection@@II@Z @ 0x180263928 (-ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSect.c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x180281C8C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180288E48 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 * Callees:
 *     <none>
 */

const void *__fastcall CSharedSectionBase::ResolveAllocation(
        CSharedSectionBase *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  const void *result; // rax

  v3 = *((unsigned int *)this + 20);
  if ( a2 >= v3 || a3 > v3 - a2 )
    return 0LL;
  v4 = *((_QWORD *)this + 11);
  result = 0LL;
  if ( v4 )
    return (const void *)(v4 + a2);
  return result;
}
