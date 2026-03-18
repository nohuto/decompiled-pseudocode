/*
 * XREFs of ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18027C9E0
 * Callers:
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18027A010 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 *     ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x18027C580 (-StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180004A20 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18016DA20 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CBaseExpression::StartAsTriggeredAnimation(CBaseExpression *this)
{
  char v1; // al
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rdx
  CBaseExpression *v7; // [rsp+40h] [rbp+8h] BYREF
  CBaseExpression *v8; // [rsp+48h] [rbp+10h]

  v1 = *((_BYTE *)this + 216);
  if ( (v1 & 8) != 0 )
  {
    if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
    {
      v5 = &unk_1803B58A4;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (v1 & 0x20) != 0 )
    {
      *((_DWORD *)this + 56) = 0;
      *((_BYTE *)this + 216) = v1 | 1;
      *((_QWORD *)this + 20) = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
    else
    {
      v3 = *((_QWORD *)this + 3);
      v7 = this;
      DynArray<CBaseExpression *,1>::AddMultipleAndSet(*(_QWORD *)(v3 + 816) + 384LL, &v7);
    }
    if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
    {
      v5 = &unk_1803B593F;
LABEL_11:
      LODWORD(v7) = *((_DWORD *)this + 55);
      v8 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        (__int64)v5);
    }
  }
  return 0LL;
}
