/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010C730
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010BE44 (--1-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18010C918 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18010DA40 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v16[3]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v17[72]; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+3Fh] BYREF

  *((_BYTE *)this + 464) &= ~1u;
  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v5 = CBaseExpression::NotifyAnimationDisconnected(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x22Au, 0LL);
      return v6;
    }
    if ( *((_BYTE *)a3 + 8) )
    {
      v7 = *((_DWORD *)this + 111);
      if ( v7 == 2 || v7 == 1 )
      {
        v18 = 0;
        v16[0] = (__int64)v17;
        v16[1] = (__int64)v17;
        v16[2] = (__int64)&v18;
        detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
          (__int64)v16,
          1LL);
        CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v16);
        v8 = v18;
        if ( v18 )
          v8 = v18 - 1;
        v9 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)(v16[0] + 72 * v8));
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x236u, 0LL);
          detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v16);
          return v6;
        }
        if ( v18 )
          --v18;
        detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v16);
      }
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 216) |= 8u;
  if ( (unsigned int)dword_1803DC880 > 5 && (qword_1803DC890 & 4) != 0 && (qword_1803DC898 & 4) == qword_1803DC898 )
  {
    v14 = *((_DWORD *)this + 18);
    v15 = (*(__int64 (__fastcall **)(CKeyframeAnimation *, struct CResourceTable *))(*(_QWORD *)this + 144LL))(this, a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned int)&unk_1803B509F,
      v11,
      v12,
      (__int64)&v15,
      (__int64)&v14);
  }
  return 0;
}
