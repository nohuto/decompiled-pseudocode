/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058
 * Callers:
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180045A40 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180045F80 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180048510 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z @ 0x180045604 (-GetTargetPropertyValue@CBaseExpression@@IEBAJPEAVCExpressionValue@@@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18010D3FC (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  bool v2; // zf
  int TargetPropertyValue; // eax
  const char *v4; // r9
  unsigned int v5; // esi
  size_t ExpressionTypeByteSize; // rsi
  void *v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void **v10; // rdx
  char *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int ChannelCallbackId; // eax
  int v15; // r8d
  int v16; // eax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-59h]
  int v20; // [rsp+20h] [rbp-59h]
  _QWORD v21[2]; // [rsp+50h] [rbp-29h] BYREF
  void *Src[8]; // [rsp+60h] [rbp-19h] BYREF
  int v23; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( *((_DWORD *)this + 38) == 11 )
    v2 = *((_QWORD *)this + 37) == 0LL;
  else
    v2 = *((_QWORD *)this + 36) == 0LL;
  if ( !v2 )
    return 0LL;
  v23 = 0;
  TargetPropertyValue = CBaseExpression::GetTargetPropertyValue(this, (struct CExpressionValue *)Src);
  v5 = TargetPropertyValue;
  if ( TargetPropertyValue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)(unsigned int)TargetPropertyValue,
      v19);
    if ( v23 == 11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Src[0] + 16LL))(Src[0]);
    return v5;
  }
  else
  {
    if ( *((_DWORD *)this + 38) == 11 )
    {
      if ( v23 != 11 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1EF,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
          v4);
      v11 = (char *)this + 296;
      wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 37, (__int64)Src[0]);
      goto LABEL_12;
    }
    ExpressionTypeByteSize = (unsigned int)GetExpressionTypeByteSize();
    v7 = MIDL_user_allocate(ExpressionTypeByteSize);
    v8 = (void *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = v7;
    if ( v8 )
      operator delete(v8);
    v9 = (void *)*((_QWORD *)this + 36);
    if ( v9 )
    {
      v10 = Src;
      if ( v23 == 11 )
        v10 = (void **)Src[0];
      memcpy_0(v9, v10, ExpressionTypeByteSize);
      v11 = (char *)this + 296;
LABEL_12:
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
              *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
              0LL);
      if ( v12 && CNotificationResource::ShouldNotify(this) )
      {
        if ( *((_DWORD *)this + 38) == 11 )
        {
          v18 = *(_QWORD *)v11;
          v13 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
          gsl::details::extent_type<-1>::extent_type<-1>(v21, *(_QWORD *)(v18 + 24) - v13);
          if ( v21[0] == -1LL || !v13 && v21[0] )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
        }
        else
        {
          v13 = *((_QWORD *)this + 36);
          GetExpressionTypeByteSize();
        }
        ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
        v21[1] = *((unsigned int *)this + 18);
        v21[0] = ChannelCallbackId;
        v16 = CoreUICallSend(v12, v21, 2LL, 0LL, 10, &unk_1802F5AC7, 0, v13, v15);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x809,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
            (const char *)(unsigned int)v16,
            v20);
      }
      if ( v23 == 11 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)Src[0] + 16LL))(Src[0]);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E4,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x8007000ELL,
      v19);
    if ( v23 == 11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Src[0] + 16LL))(Src[0]);
    return 2147942414LL;
  }
}
