/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x180045738
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180003D24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned __int64 FrameTargetTime; // rax
  CComposition *v6; // rax
  CComposition *v7; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  void *v12; // rax
  void *v13; // [rsp+50h] [rbp+8h] BYREF
  struct CResourceTable *v14; // [rsp+58h] [rbp+10h] BYREF
  CComposition **v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a2;
  if ( this[38] )
  {
    if ( *((_BYTE *)a3 + 24) )
      FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
    else
      FrameTargetTime = *((_QWORD *)a3 + 1);
    this[49] = (CComposition *)FrameTargetTime;
    v6 = (CComposition *)*((_QWORD *)a3 + 2);
    v7 = this[3];
    *((_BYTE *)this + 464) |= 2u;
    this[50] = v6;
    CExpressionManager::Invalidate(*((CExpressionManager **)v7 + 102));
  }
  else if ( (unsigned int)dword_1803DC880 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803DC880, 4LL, a3) )
  {
    v11 = (__int64)this[7];
    if ( v11 )
    {
      v12 = *(void **)(v11 + 72);
      v10 = *(unsigned int *)(v11 + 28);
    }
    else
    {
      v12 = &unk_1802F34A8;
    }
    v13 = v12;
    LODWORD(v14) = v10;
    v15 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      (__int64)&unk_1803B5038,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v14,
      &v13);
  }
  return 0LL;
}
