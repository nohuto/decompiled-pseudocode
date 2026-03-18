/*
 * XREFs of ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z @ 0x18013E504
 * Callers:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z @ 0x18013C9E0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x18013ACC8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@@YAMW4Boundary@@MM@Z @ 0x18013E788 (-ValueFromBoundary@@YAMW4Boundary@@MM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1801DCF14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeInertiaModifier(CMotion *this, struct CExpressionValueStack *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  float v7; // xmm0_4
  double v8; // xmm0_8
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+58h] [rbp-19h] BYREF
  int v17; // [rsp+5Ch] [rbp-15h] BYREF
  int v18; // [rsp+60h] [rbp-11h] BYREF
  int v19; // [rsp+64h] [rbp-Dh] BYREF
  const wchar_t *v20; // [rsp+68h] [rbp-9h] BYREF
  CMotion *v21; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp+1Fh] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1)) )
  {
    v5 = *((unsigned int *)this + 24);
    if ( (_DWORD)v5 )
    {
      ValueFromBoundary(v5, *((_QWORD *)this + 2));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    }
    if ( *((float *)this + 12) > *(float *)(*((_QWORD *)this + 1) + 96LL) )
    {
      v7 = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 8LL))(this);
      if ( v7 != 0.0 )
        *(float *)(*((_QWORD *)this + 1) + 32LL) = v7 + *(float *)(*((_QWORD *)this + 1) + 32LL);
    }
  }
  v8 = (*(double (__fastcall **)(_QWORD, __int64, struct CExpressionValueStack *))(**((_QWORD **)this + 3) + 16LL))(
         *((_QWORD *)this + 3),
         v4,
         a2);
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v16 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                       *((_QWORD *)this + 3),
                       v22);
    v9 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                       *((_QWORD *)this + 3),
                       v23)
                   + 8);
    v10 = *((_DWORD *)this + 12);
    v17 = v9;
    v11 = *((_DWORD *)this + 9);
    v19 = LODWORD(v8);
    v18 = v10;
    v20 = ScrollAxisToString(v11);
    v21 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_1803B626F,
      v13,
      v14,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  return *(float *)&v8;
}
