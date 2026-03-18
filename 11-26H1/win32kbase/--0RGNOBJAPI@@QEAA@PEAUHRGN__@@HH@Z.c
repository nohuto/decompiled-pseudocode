/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0
 * Callers:
 *     GreGetRegionData @ 0x1400103C0 (GreGetRegionData.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14001DE10 (SetRectRgnIndirect.c)
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     GreGetRgnBox @ 0x140022720 (GreGetRgnBox.c)
 *     ?GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z @ 0x1400554B0 (-GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 *     GreRectInRegion @ 0x1400A8460 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x140106D90 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x14012AF60 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x140168F20 (GreIsValidRegion.c)
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@QEAA@XZ @ 0x1400FC160 (--0-$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1401964DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  struct _RECTL *v14; // rax
  struct _RECTL *v15; // rdi
  char v17; // cl
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+44h] [rbp-54h] BYREF
  int v21; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h] BYREF
  struct _RECTL v23; // [rsp+58h] [rbp-40h] BYREF
  __int64 v24; // [rsp+68h] [rbp-30h]

  v22 = (__int64)this;
  *(_QWORD *)this = 0LL;
  UnexpectedThreadTerminationHandler<RGNOBJAPI>::UnexpectedThreadTerminationHandler<RGNOBJAPI>((char *)this + 8);
  v9 = *(_QWORD *)(W32GetSessionState(v8) + 88);
  LOBYTE(v10) = 4;
  v11 = HmgLock(v9, a2, v10, 0LL);
  *(_QWORD *)this = v11;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  if ( !v11 )
    return this;
  v12 = 1;
  if ( a4 && *(_WORD *)(v11 + 12) != 1 )
  {
    if ( (unsigned int)dword_1402A9F58 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x400000000000LL) )
    {
      v20 = 0;
      v22 = 0x1000000LL;
      v21 = 82559;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1402A9F58,
        (unsigned int)&unk_140283B55,
        v18,
        v19,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v20);
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    goto LABEL_33;
  }
  v13 = HmgPentryFromPobj(v9);
  v14 = (struct _RECTL *)GreDecodeUserModePointer(*(void **)(v13 + 16));
  v15 = v14;
  if ( v14 )
  {
    v23 = *v14;
    v24 = *(_QWORD *)&v14[1].left;
    v17 = _mm_cvtsi128_si32((__m128i)v23);
    if ( (v17 & 0x11) == 0x10 )
    {
      if ( (v17 & 0x20) == 0 )
        goto LABEL_4;
      if ( v23.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_10:
        v15->left &= ~0x20u;
        goto LABEL_4;
      }
      if ( v23.top != 2 )
        goto LABEL_4;
      if ( ((v23.right & 0xF8000000) == 0 || (v23.right & 0xF8000000) == 0xF8000000)
        && ((v24 & 0xF800000000000000uLL) == 0 || (HIDWORD(v24) & 0xF8000000) == 0xF8000000)
        && ((v24 & 0xF8000000) == 0 || (v24 & 0xF8000000) == 0xF8000000)
        && ((v23.bottom & 0xF8000000) == 0 || (v23.bottom & 0xF8000000) == 0xF8000000) )
      {
        RGNOBJ::vSet(this, (const struct _RECTL *const)&v23.right);
        goto LABEL_10;
      }
    }
    v12 = 0;
  }
LABEL_4:
  if ( !v12 )
  {
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
LABEL_33:
    *((_QWORD *)this + 5) = 0LL;
    *(_QWORD *)this = 0LL;
  }
  return this;
}
