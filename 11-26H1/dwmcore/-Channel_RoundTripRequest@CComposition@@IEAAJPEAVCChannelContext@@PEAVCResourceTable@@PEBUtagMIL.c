/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x18014E8FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x18014EC84 (McTemplateU0qqx_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CComposition::Channel_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ROUNDTRIPREQUEST *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  unsigned int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v9) = *((_DWORD *)a4 + 1);
  v4 = *((_DWORD *)this + 246);
  DWORD1(v9) = 1;
  *((_QWORD *)&v9 + 1) = 0LL;
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    v6 = -2147024362;
    v8 = 183;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x565u, 0LL);
    return (unsigned int)v6;
  }
  v6 = 0;
  if ( v5 <= *((_DWORD *)this + 245) )
  {
    *(_OWORD *)(*((_QWORD *)this + 120) + 16LL * v4) = v9;
    *((_DWORD *)this + 246) = v5;
    goto LABEL_4;
  }
  v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 960, 16, 1, &v9);
  if ( v6 < 0 )
  {
    v8 = 194;
    goto LABEL_8;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(DWORD2(v9), v5, DWORD1(v9), v9, SBYTE8(v9));
  return (unsigned int)v6;
}
