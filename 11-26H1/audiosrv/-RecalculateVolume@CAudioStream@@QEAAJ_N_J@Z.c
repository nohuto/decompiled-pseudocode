/*
 * XREFs of ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180024214
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180020F68 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180021320 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180023680 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180024BC8 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x18002595C (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800D53EC (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U6@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@855@Z @ 0x1800011D4 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800016BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U6@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@833@Z @ 0x180002ED0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?NotifyVolumeChanged@CAudioStream@@IEAAXXZ @ 0x1800253DC (-NotifyVolumeChanged@CAudioStream@@IEAAXXZ.c)
 *     ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x180025480 (-CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this, char a2, __int64 a3)
{
  unsigned int v4; // edi
  char *v5; // r14
  unsigned int v6; // edx
  unsigned int v7; // eax
  char *v8; // rsi
  int v9; // eax
  unsigned int v10; // r15d
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // eax
  int v15; // r15d
  _BOOL8 v16; // rdx
  int v17; // eax
  int v18; // esi
  struct AudioSrvTelemetryProvider *v19; // rax
  _DWORD *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  struct AudioSrvTelemetryProvider *v23; // rax
  _DWORD *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  const wchar_t *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  const wchar_t *v33; // rax
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v36; // eax
  int v37; // [rsp+20h] [rbp-99h]
  int v38; // [rsp+70h] [rbp-49h] BYREF
  __int64 v39; // [rsp+78h] [rbp-41h] BYREF
  __int64 v40; // [rsp+80h] [rbp-39h] BYREF
  __int64 v41; // [rsp+88h] [rbp-31h] BYREF
  const wchar_t *v42; // [rsp+90h] [rbp-29h] BYREF
  const wchar_t *v43; // [rsp+98h] [rbp-21h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v47; // [rsp+B8h] [rbp-1h]
  char *v48; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v50; // [rsp+120h] [rbp+67h] BYREF
  char v51; // [rsp+128h] [rbp+6Fh]
  __int64 v52; // [rsp+130h] [rbp+77h]
  char *v53; // [rsp+138h] [rbp+7Fh] BYREF

  v52 = a3;
  v51 = a2;
  v4 = 0;
  if ( *((_QWORD *)this + 21) )
  {
    v5 = (char *)this + 176;
    if ( *((_QWORD *)this + 22) )
    {
      v6 = 0;
      v7 = *((_DWORD *)this + 20);
      if ( v7 )
      {
        do
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * v6++) = 1065353216;
          v7 = *((_DWORD *)this + 20);
        }
        while ( v6 < v7 );
        v8 = (char *)this + 176;
      }
      else
      {
        v8 = (char *)this + 176;
      }
      LOBYTE(v50) = 0;
      v39 = 0LL;
      v9 = CAudioStream::CalculateAPOVolume(this, v7, *((float *const *)this + 14), (bool *)&v50, &v39);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x40F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
      v48 = (char *)this + 128;
      v12 = *(_QWORD *)v8;
      v13 = (unsigned __int8)v50;
      if ( *(_QWORD *)v8 )
      {
        LOBYTE(v50) = 0;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v50);
        v15 = v14;
        v53 = v8;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x419,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v14,
            v37);
          v53 = (char *)this + 176;
        }
        if ( v15 == -2147417848 )
        {
          LOBYTE(v50) = 0;
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v5);
          v8 = v53;
        }
        if ( *(_QWORD *)v8 )
        {
          if ( !v15 )
          {
            v16 = (_BYTE)v50 != 0;
            if ( v16 != ((_BYTE)v13 != 0) )
            {
              LOBYTE(v16) = v13;
              v17 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, _QWORD))(**(_QWORD **)v8 + 32LL))(
                      *(_QWORD *)v8,
                      v16,
                      0LL,
                      0LL);
              v18 = v17;
              if ( v17 >= 0 )
              {
                if ( *((_QWORD *)this + 8) )
                {
                  v19 = AudioSrvTelemetryProvider::Instance();
                  v20 = (_DWORD *)*((_QWORD *)v19 + 1);
                  if ( *v20 > 4u )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(*((_QWORD *)v19 + 1), 0x400000000002LL) )
                    {
                      LODWORD(v53) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
                      v42 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                                + 64LL))(*((_QWORD *)this + 8) + 8LL);
                      v40 = (__int64)this + 424;
                      v41 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
                      v38 = v13;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                        (int)v20,
                        (int)&unk_1801A4A39,
                        v21,
                        v22,
                        (__int64)&v38,
                        (__int64)&v41,
                        &v40,
                        &v42,
                        (__int64)&v53);
                    }
                  }
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x426,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  (const char *)(unsigned int)v17,
                  0);
                if ( v18 == -2147417848 )
                  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v5);
              }
            }
          }
        }
      }
      if ( g_StreamVolumeChangeAsTelemetryCounter <= 0 || *((_DWORD *)this + 101) )
      {
        v29 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *(_DWORD *)v29 > 4u
          && (*(_BYTE *)(v29 + 16) & 2) != 0
          && (*(_QWORD *)(v29 + 24) & 2LL) == *(_QWORD *)(v29 + 24) )
        {
          v45 = v39;
          v44 = v52;
          LODWORD(v53) = *((_DWORD *)this + 22);
          v38 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
          v32 = *((_QWORD *)this + 8);
          if ( v32 )
            v33 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v32 + 8) + 64LL))(v32 + 8);
          else
            v33 = L"null";
          v43 = v33;
          v41 = (__int64)this + 424;
          v40 = *((_QWORD *)this + 49);
          LOBYTE(v50) = v13;
          v46 = *((_QWORD *)this + 14);
          v47 = *((_WORD *)this + 40);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v29,
            (int)&unk_1801A48EE,
            v30,
            v31,
            &v46,
            (__int64)&v50,
            (__int64)&v40,
            &v41,
            &v43,
            (__int64)&v38,
            (__int64)&v53,
            (__int64)&v44,
            (__int64)&v45);
        }
      }
      else
      {
        --g_StreamVolumeChangeAsTelemetryCounter;
        v23 = AudioSrvTelemetryProvider::Instance();
        v24 = (_DWORD *)*((_QWORD *)v23 + 1);
        if ( *v24 > 4u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)v23 + 1), 0x400000000002LL) )
        {
          v41 = v39;
          v40 = v52;
          LODWORD(v53) = *((_DWORD *)this + 22);
          v38 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
          v27 = *((_QWORD *)this + 8);
          if ( v27 )
            v28 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v27 + 8) + 64LL))(v27 + 8);
          else
            v28 = L"null";
          v42 = v28;
          v43 = (const wchar_t *)((char *)this + 424);
          v44 = *((_QWORD *)this + 49);
          LOBYTE(v50) = v13;
          v46 = *((_QWORD *)this + 14);
          v47 = *((_WORD *)this + 40);
          v45 = 0x2000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (int)v24,
            (int)&unk_1801A4989,
            v25,
            v26,
            (__int64)&v45,
            &v46,
            (__int64)&v50,
            (__int64)&v44,
            (__int64 *)&v43,
            &v42,
            (__int64)&v38,
            (__int64)&v53,
            (__int64)&v40,
            (__int64)&v41);
        }
      }
      v34 = *((_QWORD *)this + 21);
      if ( v34 )
      {
        v50 = 0LL;
        if ( v51 )
        {
          if ( v52 <= v39 )
            v52 = v39;
          v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL);
        }
        else
        {
          v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v34 + 32LL);
        }
        v36 = v35(v34, *((unsigned int *)this + 20), *((_QWORD *)this + 14), &v50);
        v4 = v36;
        if ( v36 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x483,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v36,
            1);
        if ( v4 == -2147417848 )
        {
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 168);
          v4 = 0;
        }
      }
      CAudioStream::NotifyVolumeChanged(this);
      if ( this != (CAudioStream *)-128LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    }
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  return v4;
}
