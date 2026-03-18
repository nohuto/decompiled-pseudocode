/*
 * XREFs of ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x140109F08
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4343AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapSz@G@@444465@Z @ 0x140108BDC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U1@U-$_tlgWrapSz@D@@U1@U-.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x14010B6DC (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x14010B6F4 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::HandleResultFromUserMode(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2,
        void *a3,
        unsigned __int8 a4,
        struct CInputPointerNode *a5,
        const struct CInputDest *a6)
{
  int v7; // esi
  CInputDest *v10; // rcx
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v13; // xmm1
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // [rsp+A8h] [rbp-80h] BYREF
  int v20; // [rsp+ACh] [rbp-7Ch] BYREF
  int v21; // [rsp+B0h] [rbp-78h] BYREF
  int v22; // [rsp+B4h] [rbp-74h] BYREF
  int v23; // [rsp+B8h] [rbp-70h] BYREF
  int v24; // [rsp+BCh] [rbp-6Ch] BYREF
  int v25; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v26; // [rsp+C8h] [rbp-60h] BYREF
  const WCHAR *v27; // [rsp+D8h] [rbp-50h] BYREF
  HWND WindowHandle; // [rsp+E0h] [rbp-48h] BYREF
  const char *v29; // [rsp+E8h] [rbp-40h] BYREF
  struct CInputPointerNode *v30; // [rsp+F0h] [rbp-38h] BYREF
  void *v31; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v32; // [rsp+100h] [rbp-28h] BYREF
  __int64 v33; // [rsp+108h] [rbp-20h] BYREF
  __int128 v34; // [rsp+110h] [rbp-18h]
  __int128 v35; // [rsp+120h] [rbp-8h]
  __int64 v36; // [rsp+130h] [rbp+8h]
  _BYTE v37[48]; // [rsp+138h] [rbp+10h] BYREF

  v7 = a4;
  if ( dword_1402A9E40 )
  {
    if ( (qword_1402A9E50 & 0x20) != 0 && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
    {
      CInputDest::GetBaseWindow(a6);
      UserWindow = CInputDest::GetUserWindow(v10);
      WindowDetails = InputTraceLogging::GetWindowDetails(v37, UserWindow);
      v13 = *(_OWORD *)(WindowDetails + 16);
      v34 = *(_OWORD *)WindowDetails;
      v36 = *(_QWORD *)(WindowDetails + 32);
      v35 = v13;
      if ( (unsigned int)dword_1402A9E40 > 4
        && (qword_1402A9E50 & 0x20) != 0
        && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
      {
        v26 = v34;
        v19 = HIDWORD(v36);
        v20 = v36;
        v21 = HIDWORD(v35);
        v27 = (const WCHAR *)v35;
        v22 = DWORD2(v35);
        WindowHandle = CInputDest::GetWindowHandle(a6);
        if ( a5 )
        {
          v17 = *((_DWORD *)a5 + 74);
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 == 1 )
                v16 = "Implicit";
              else
                v16 = "UNKNOWN";
            }
            else
            {
              v16 = "Explicit";
            }
          }
          else
          {
            v16 = "NotRouted";
          }
        }
        else
        {
          v16 = "NullNode";
        }
        v29 = v16;
        v24 = *((_DWORD *)a2 + 3);
        v25 = *((_DWORD *)a1 + 10);
        v32 = *((_QWORD *)a1 + 9);
        v33 = *((_QWORD *)a1 + 27);
        v30 = a5;
        v23 = v7;
        v31 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_1402A9E40,
          byte_1402899A4,
          v14,
          v15,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v31,
          (__int64)&v23,
          (__int64)&v30,
          (void **)&v29,
          (__int64)&WindowHandle,
          &v27,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (const WCHAR **)&v26 + 1,
          (void **)&v26);
      }
    }
  }
}
