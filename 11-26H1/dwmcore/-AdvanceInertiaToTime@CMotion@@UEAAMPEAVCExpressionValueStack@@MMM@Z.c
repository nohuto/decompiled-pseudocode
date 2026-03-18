/*
 * XREFs of ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z @ 0x18013C9E0
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z @ 0x18013D614 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z.c)
 * Callees:
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18013ACC8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x18013CB5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z @ 0x18013E504 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::AdvanceInertiaToTime(
        CMotion *this,
        struct CExpressionValueStack *a2,
        float a3,
        float a4,
        float a5)
{
  bool v5; // zf
  float v8; // xmm0_4
  float v9; // xmm6_4
  int v10; // ecx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  double v15; // xmm0_8
  float v16; // [rsp+50h] [rbp-68h] BYREF
  int v17; // [rsp+54h] [rbp-64h] BYREF
  float v18; // [rsp+58h] [rbp-60h] BYREF
  const wchar_t *v19; // [rsp+60h] [rbp-58h] BYREF
  CMotion *v20; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v21[24]; // [rsp+70h] [rbp-48h] BYREF

  v5 = *((_QWORD *)this + 3) == 0LL;
  *((float *)this + 22) = a3;
  v8 = fmaxf(a5, *((float *)this + 12));
  *((float *)this + 15) = a4;
  v9 = 0.0;
  *((float *)this + 12) = v8;
  if ( v5 )
  {
    v15 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 16LL))(this);
    v9 = *(float *)&v15;
    *((float *)this + 13) = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
  }
  if ( *((_QWORD *)this + 3) )
  {
    v9 = CMotion::AdvanceInertiaToTimeInertiaModifier(this, a2);
    *((_DWORD *)this + 13) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                                           *((_QWORD *)this + 3),
                                           v21)
                                       + 8);
  }
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v10 = *((_DWORD *)this + 9);
    v17 = *((_DWORD *)this + 13);
    v16 = a5;
    v18 = v9;
    v19 = ScrollAxisToString(v10);
    v20 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1803B620E,
      v12,
      v13,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  return v9;
}
