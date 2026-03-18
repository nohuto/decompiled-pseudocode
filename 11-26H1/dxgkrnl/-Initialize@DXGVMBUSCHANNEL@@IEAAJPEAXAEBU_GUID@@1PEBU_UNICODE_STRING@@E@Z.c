/*
 * XREFs of ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1402126F0
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x140212574 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x14018E774 (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x140227A94 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x14041CCC8 (-EnsureServerVmBusInterface@@YAJXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        void *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        char a6)
{
  struct _KEVENT *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  int v13; // eax
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  const wchar_t *v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // r14
  int v25; // eax
  const wchar_t *v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int128 v32; // [rsp+50h] [rbp-39h] BYREF
  __int128 v33; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v34[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v35; // [rsp+78h] [rbp-11h]
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-9h]
  __int64 (__fastcall *v37)(); // [rsp+88h] [rbp-1h]
  __int64 (__fastcall *v38)(); // [rsp+90h] [rbp+7h]
  __int64 (__fastcall *v39)(); // [rsp+98h] [rbp+Fh]

  *((_BYTE *)this + 27) = a6 != 0;
  if ( a6 )
  {
    v13 = EnsureServerVmBusInterface();
    LODWORD(v10) = v13;
    if ( v13 < 0 )
    {
      v11 = v13;
      WdLogSingleEntry2(2LL, v13, this);
      v12 = L"EnsureServerVmBusInterface failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 211;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 4) = v7;
    if ( !v7 )
    {
      WdLogSingleEntry2(2LL, -1073741801LL, this);
      WdLogGlobalForLineNumber = 198;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"m_pChannelStartEvent can't be allocated. Returning 0x%I64x",
        -1073741801LL,
        (__int64)this,
        0LL,
        0LL,
        0LL);
      goto LABEL_29;
    }
    KeInitializeEvent(v7, NotificationEvent, 0);
    v8 = EnsureClientVmBusInterface();
    LODWORD(v10) = v8;
    if ( v8 < 0 )
    {
      v11 = v8;
      WdLogSingleEntry2(2LL, v8, this);
      v12 = L"EnsureClientVmBusInterface failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 221;
LABEL_8:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, (__int64)this, 0LL, 0LL, 0LL);
      goto LABEL_28;
    }
  }
  v14 = (_QWORD *)((char *)this + 16);
  LOBYTE(v9) = a6;
  v15 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, __int64, char *))qword_140168400)(
          g_pDriverObject->DriverObject,
          v9,
          (char *)this + 16);
  v10 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(2LL, v15, this);
    WdLogGlobalForLineNumber = 234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbChannelAllocate failed. Returning 0x%I64x",
      v10,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    VmBusInterfaceDereference();
    goto LABEL_28;
  }
  LOBYTE(v16) = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_1401684B8)(*v14, v16);
  v17 = *v14;
  if ( a6 )
  {
    v32 = DxgkVailVmBusChannel;
    v33 = DxgkVailVmBusChannelType;
    v18 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *))qword_140168678)(v17, &v33, &v32);
    v10 = v18;
    if ( v18 >= 0 )
    {
      if ( a2 )
      {
        v19 = ((__int64 (__fastcall *)(_QWORD))qword_140168688)(*v14);
        v10 = v19;
        if ( v19 >= 0 )
          goto LABEL_20;
        WdLogSingleEntry2(2LL, v19, this);
        v20 = L"VmbServerChannelInitSetVmbusHandle failed. Returning 0x%I64x";
        WdLogGlobalForLineNumber = 268;
LABEL_19:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v10, (__int64)this, 0LL, 0LL, 0LL);
        if ( (int)v10 < 0 )
          goto LABEL_31;
LABEL_20:
        v21 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_140168660)(*v14, 2LL);
        LODWORD(v10) = v21;
        if ( v21 < 0 )
        {
          v11 = v21;
          WdLogSingleEntry2(2LL, v21, this);
          WdLogGlobalForLineNumber = 287;
          v12 = L"VmbServerChannelInitSetFlags failed. Returning 0x%I64x";
          goto LABEL_8;
        }
        goto LABEL_24;
      }
      v10 = -1073741811LL;
      WdLogSingleEntry2(2LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 276;
    }
    else
    {
      WdLogSingleEntry2(2LL, v18, this);
      WdLogGlobalForLineNumber = 257;
    }
    v20 = L"VmbServerChannelInitSetTargetInterfaceId failed. Returning 0x%I64x";
    goto LABEL_19;
  }
  v22 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD))qword_1401684F0)(
          v17,
          &DxgkVailVmBusChannelType,
          &DxgkVailVmBusChannel,
          0LL);
  LODWORD(v10) = v22;
  if ( v22 < 0 )
  {
    v11 = v22;
    WdLogSingleEntry2(2LL, v22, this);
    WdLogGlobalForLineNumber = 301;
    v12 = L"VmbClientChannelInitSetTargetPnp failed. Returning 0x%I64x";
    goto LABEL_8;
  }
LABEL_24:
  if ( a5 )
    ((void (__fastcall *)(_QWORD))qword_140168460)(*v14);
  v23 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_140168470)(*v14, 2048LL);
  v10 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry2(2LL, v23, this);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbChannelInitSetMaximumPacketSize failed. Returning 0x%I64x",
      v10,
      (__int64)this,
      0LL,
      0LL,
      0LL);
  }
LABEL_28:
  if ( a6 )
  {
LABEL_31:
    v24 = (_QWORD *)((char *)this + 16);
    if ( (int)v10 < 0 )
    {
LABEL_41:
      ((void (__fastcall *)(_QWORD))qword_140168408)(*v24);
      *v24 = 0LL;
      VmBusInterfaceDereference();
      return (unsigned int)v10;
    }
    goto LABEL_32;
  }
LABEL_29:
  v24 = (_QWORD *)((char *)this + 16);
  v25 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1401684E8)(*((_QWORD *)this + 2), 8LL, 8LL);
  v10 = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry2(2LL, v25, this);
    v26 = L"VmbClientChannelInitSetRingBufferPageCount failed. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 331;
LABEL_36:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, v10, (__int64)this, 0LL, 0LL, 0LL);
    goto LABEL_41;
  }
LABEL_32:
  ((void (__fastcall *)(_QWORD, DXGVMBUSCHANNEL *))qword_1401684C8)(*v24, this);
  v27 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD))qword_140168478)(*v24, &ProcessRingPacket, 0LL);
  v10 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry2(2LL, v27, this);
    v26 = L"VmbChannelInitSetProcessPacketCallbacks failed. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 346;
    goto LABEL_36;
  }
  v28 = *v24;
  v36 = ProcessChannelClosed;
  v34[0] = 1;
  v37 = ProcessChannelSuspended;
  v38 = ProcessChannelStarted;
  v39 = ProcessChannelPostStarted;
  v34[1] = 48;
  v35 = 0LL;
  v29 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_140168480)(v28, v34);
  v10 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry2(2LL, v29, this);
    v26 = L"VmbChannelInitSetStateChangeCallbacks failed. Returning 0x%I64x";
    WdLogGlobalForLineNumber = 368;
    goto LABEL_36;
  }
  if ( !a6 )
  {
    v30 = ((__int64 (__fastcall *)(_QWORD))qword_140168430)(*v24);
    v10 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry2(2LL, v30, this);
      v26 = L"VmbChannelEnable failed. Returning 0x%I64x";
      WdLogGlobalForLineNumber = 379;
      goto LABEL_36;
    }
    *((_BYTE *)this + 24) = 1;
  }
  return (unsigned int)v10;
}
