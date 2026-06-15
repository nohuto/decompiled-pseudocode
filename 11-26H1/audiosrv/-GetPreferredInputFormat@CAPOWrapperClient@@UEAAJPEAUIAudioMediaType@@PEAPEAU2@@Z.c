/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800BA0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800B525C (CreateAudioMediaType_Unsafe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::GetPreferredInputFormat(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  __int64 v6; // rdx
  struct AudioSrvTelemetryProvider *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int AudioMediaType_Unsafe; // eax
  __int64 v12; // rdx
  LPVOID pv[2]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  if ( !*((_QWORD *)this + 3) )
  {
    v6 = 358LL;
LABEL_16:
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    return v9;
  }
  if ( !a3 || !a2 )
  {
    v6 = 359LL;
    goto LABEL_16;
  }
  v7 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v7 + 1),
    "SystemEffect_GetPreferredInputFormat",
    (const char *)this + 68);
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
  if ( v8 )
  {
    v10 = *((_QWORD *)this + 3);
    pv[0] = 0LL;
    AudioMediaType_Unsafe = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v10 + 72LL))(v10, v8, pv);
    v9 = AudioMediaType_Unsafe;
    if ( AudioMediaType_Unsafe >= 0 )
    {
      AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(
                                (const struct tWAVEFORMATEX *)pv[0],
                                (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
                                a3);
      v9 = AudioMediaType_Unsafe;
      if ( AudioMediaType_Unsafe >= 0 )
      {
        CoTaskMemFree(pv[0]);
        v9 = 0;
        goto LABEL_13;
      }
      v12 = 369LL;
    }
    else
    {
      v12 = 366LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)AudioMediaType_Unsafe);
    CoTaskMemFree(pv[0]);
LABEL_13:
    pv[0] = 0LL;
    goto LABEL_14;
  }
  v9 = -2004287480;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16B,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)0x88890008LL);
LABEL_14:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v9;
}
