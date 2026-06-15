/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800D51D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180037160 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18007C75C (--1-$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@s.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(CAudioStream *this, int a2, __int64 a3, int a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  int MediaEvent; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  void *v24; // [rsp+38h] [rbp-59h] BYREF
  int v25; // [rsp+40h] [rbp-51h] BYREF
  __int64 v26; // [rsp+48h] [rbp-49h] BYREF
  __int64 v27; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v28[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 *v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  void **v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  int *v35; // [rsp+A8h] [rbp+17h]
  __int64 v36; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = AudioSrvTelemetryProvider::Instance();
  v9 = (_DWORD *)*((_QWORD *)v8 + 1);
  if ( *v9 > 4u && tlgKeywordOn(*((_QWORD *)v8 + 1), 512LL) )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    v27 = *((_QWORD *)this + 48);
    LODWORD(v24) = a4;
    v35 = &v25;
    v26 = a3;
    v33 = &v24;
    v31 = &v26;
    v29 = &v27;
    v36 = 4LL;
    v34 = 4LL;
    v32 = 8LL;
    v30 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1801A483D, 0LL, 0LL, 6, (__int64)v28);
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v14;
    v15 = v14;
    if ( !v14 )
    {
      v16 = -2147024882;
      v17 = 1526LL;
      v18 = 2147942414LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v18);
      std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>(&v24);
      return v16;
    }
    *v14 = v13;
    *(GUID *)(v14 + 7) = GUID_00000000_0000_0000_0000_000000000000;
    v14[1] = 0x20000;
    v14[6] = v12;
    *((_QWORD *)v14 + 6) = *((_QWORD *)this + 48);
    *((_QWORD *)v14 + 7) = a3;
    v14[16] = a4;
    v14[17] = a2;
    MediaEvent = StringCbCopyW((char *)v14 + 72, v12, *(char **)(*((_QWORD *)this + 7) + 656LL));
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1545LL;
LABEL_11:
      v18 = (unsigned int)MediaEvent;
      goto LABEL_12;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    MediaEvent = GenerateMediaEvent(v15, v20, v21, v22);
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1550LL;
      goto LABEL_11;
    }
    std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>(&v24);
  }
  return 0LL;
}
