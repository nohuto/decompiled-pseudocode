/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010C730 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E2D00 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJXZ @ 0x18004C450 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800795B8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18016ADE0 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18021A844 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3708023098@@@details@wil@@QEAA_NXZ @ 0x18027CAC8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3708023098@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  char v4; // si
  __int64 v5; // r8
  const char *v6; // r9
  int v8; // eax
  unsigned int v9; // ebx
  HANDLE EventW; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  WCHAR Name[64]; // [rsp+30h] [rbp-98h] BYREF

  v4 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3708023098>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3708023098>::GetImpl'::`2'::impl)
    && *((_DWORD *)a2 + 16) != *((_DWORD *)this + 38) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x25Au, 0LL);
    return 2147942487LL;
  }
  if ( *((_DWORD *)this + 55) && !(unsigned __int8)CExpressionValue::operator==((char *)this + 80, a2) )
    v4 = 1;
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 80), a2, v5, v6);
  if ( v4 )
  {
    CBaseExpression::LogSetOutputValue(this);
    v8 = StringCchPrintfW(Name, 60LL, L"DwmExpression_SetValue_%d", *((unsigned int *)this + 55));
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x281u, 0LL);
      return v9;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 216) & 3) != 3 )
    return 0LL;
  v11 = CBaseExpression::SetOutputValueOnTarget(this);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x291u, 0LL);
  return v12;
}
