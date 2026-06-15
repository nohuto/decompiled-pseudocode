/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18004F7C0
 * Callers:
 *     ?OnEndpointStateChanged@CVolumeStrip@@UEAAX_N@Z @ 0x18011A9A0 (-OnEndpointStateChanged@CVolumeStrip@@UEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SkipVolumeChangeNotificationForContext@@YA_NPEBU_GUID@@@Z @ 0x18004FD04 (-SkipVolumeChangeNotificationForContext@@YA_NPEBU_GUID@@@Z.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18004FD34 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18004FE38 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x18004FF08 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18004FF2C (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x1800504A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // eax
  unsigned int v8; // r12d
  _DWORD *v9; // rdi
  char *v10; // rax
  char *v11; // rbx
  GUID *v12; // rax
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  _WORD *v18; // r9
  unsigned __int64 v19; // rcx
  _WORD *v20; // rdx
  unsigned __int64 v21; // r8
  _WORD *v22; // rax
  _DWORD *v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  int v27; // eax
  void *v28; // rdx
  int v29; // eax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  int v35; // [rsp+78h] [rbp-19h] BYREF
  int v36; // [rsp+7Ch] [rbp-15h] BYREF
  int v37; // [rsp+80h] [rbp-11h] BYREF
  int v38; // [rsp+84h] [rbp-Dh] BYREF
  int v39; // [rsp+88h] [rbp-9h] BYREF
  int v40; // [rsp+8Ch] [rbp-5h] BYREF
  int v41; // [rsp+90h] [rbp-1h] BYREF
  __int64 v42; // [rsp+98h] [rbp+7h] BYREF
  _DWORD *v43; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v44[2]; // [rsp+A8h] [rbp+17h] BYREF
  void *Src; // [rsp+B8h] [rbp+27h]
  _DWORD *v46; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  unsigned int Size; // [rsp+110h] [rbp+7Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids,
      (char *)this - 8);
  }
  if ( SkipVolumeChangeNotificationForContext(a3) )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(*((_QWORD *)this + 18) + 2 * v5) );
  v6 = (unsigned int)(2 * v5 + 2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
  Size = 4 * v7;
  v8 = v6 + 8 * v7 + 80;
  v43 = operator new[]((unsigned int)(4 * v7 + 28), (const struct std::nothrow_t *)&std::nothrow);
  v9 = v43;
  if ( !v43 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v10 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v44[0] = v10;
  v11 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, v8);
    *(_DWORD *)v11 = v8;
    v12 = &GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v11 + 1) = 128;
    if ( a3 )
      v12 = a3;
    *(GUID *)(v11 + 24) = *v12;
    *((_DWORD *)v11 + 19) = v6;
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 96LL))(
            *((_QWORD *)this + 21),
            v11 + 40);
    v14 = v13;
    if ( v13 < 0 )
    {
      v31 = (unsigned int)v13;
      v32 = 506LL;
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 136LL))(
              *((_QWORD *)this + 20),
              v11 + 44);
      v14 = v15;
      if ( v15 < 0 )
      {
        v33 = 507LL;
        goto LABEL_41;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
      *((_DWORD *)v11 + 12) = v16;
      v17 = *((_QWORD *)this + 20);
      v42 = (unsigned int)v6;
      Src = &v11[v6 + 80];
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 48LL))(v17, v16);
      v18 = (_WORD *)*((_QWORD *)this + 18);
      v19 = (unsigned __int64)(unsigned int)v6 >> 1;
      if ( v19 )
      {
        v20 = v11 + 80;
        v21 = 2147483646 - v19;
        do
        {
          if ( !(v21 + v19) )
            break;
          if ( !*v18 )
            break;
          *v20++ = *v18++;
          --v19;
        }
        while ( v19 );
        v22 = v20 - 1;
        if ( v19 )
          v22 = v20;
        *v22 = 0;
        v14 = v19 == 0 ? 0x8007007A : 0;
        if ( v19 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64, _WORD *))(**((_QWORD **)this + 20) + 128LL))(
                  *((_QWORD *)this + 20),
                  v11 + 52,
                  v21,
                  v18);
          v14 = v15;
          if ( v15 < 0 )
          {
            v33 = 515LL;
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, char *))(**((_QWORD **)this + 20) + 176LL))(
                    *((_QWORD *)this + 20),
                    0xFFFFFFFFLL,
                    v11 + 56,
                    v11 + 60,
                    v11 + 64);
            v14 = v15;
            if ( v15 >= 0 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 20) + 184LL))(
                      *((_QWORD *)this + 20),
                      v11 + 68,
                      v11 + 72);
              if ( (v14 & 0x80000000) == 0 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 20) + 56LL))(
                  *((_QWORD *)this + 20),
                  *((unsigned int *)v11 + 12),
                  &v11[v42 + 80 + Size]);
                v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                if ( *v23 > 4u )
                {
                  v35 = *((_DWORD *)v11 + 18);
                  v36 = *((_DWORD *)v11 + 17);
                  v37 = *((_DWORD *)v11 + 16);
                  v38 = *((_DWORD *)v11 + 15);
                  v39 = *((_DWORD *)v11 + 14);
                  v40 = *((_DWORD *)v11 + 13);
                  v41 = *((_DWORD *)v11 + 11);
                  LODWORD(v42) = *((_DWORD *)v11 + 10);
                  v44[0] = v11 + 80;
                  v43 = v11 + 24;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (_DWORD)v23,
                    (unsigned int)&unk_1801A7D6D,
                    v24,
                    v25,
                    (__int64)v44,
                    (__int64)&v43,
                    (__int64)&v42,
                    (__int64)&v41,
                    (__int64)&v40,
                    (__int64)&v39,
                    (__int64)&v38,
                    (__int64)&v37,
                    (__int64)&v36,
                    (__int64)&v35);
                }
                v44[1] = v11;
                v44[0] = &CMasterVolumeNotification::`vftable';
                v26 = CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 16));
                v14 = v26;
                if ( v26 < 0 )
                {
                  v31 = (unsigned int)v26;
                  v32 = 537LL;
                }
                else
                {
                  *(_OWORD *)v9 = *(_OWORD *)(v11 + 24);
                  v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
                  v28 = Src;
                  v9[6] = v27;
                  v9[4] = *((_DWORD *)v11 + 10);
                  v9[5] = *((_DWORD *)v11 + 11);
                  memcpy_0(v9 + 7, v28, Size);
                  v46 = v9;
                  Src = &CInternalVolumeNotification::`vftable';
                  v29 = CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::ForEachEntry((LPCRITICAL_SECTION)this + 2);
                  v14 = v29;
                  if ( v29 >= 0 )
                  {
                    operator delete(v11, (const struct std::nothrow_t *)0x58);
                    operator delete(v9, (const struct std::nothrow_t *)0x20);
                    return 0LL;
                  }
                  v31 = (unsigned int)v29;
                  v32 = 545LL;
                }
                goto LABEL_36;
              }
              v34 = v14;
              v33 = 517LL;
              goto LABEL_43;
            }
            v33 = 516LL;
          }
LABEL_41:
          v34 = (unsigned int)v15;
LABEL_43:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
            (const char *)v34);
          goto LABEL_30;
        }
      }
      else
      {
        v14 = -2147024809;
      }
      v31 = v14;
      v32 = 513LL;
    }
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v31);
    operator delete(v11, (const struct std::nothrow_t *)0x58);
    operator delete(v9, (const struct std::nothrow_t *)0x20);
    return v14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)0x8007000ELL);
  v14 = -2147024882;
LABEL_30:
  std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(v44);
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v43);
  return v14;
}
