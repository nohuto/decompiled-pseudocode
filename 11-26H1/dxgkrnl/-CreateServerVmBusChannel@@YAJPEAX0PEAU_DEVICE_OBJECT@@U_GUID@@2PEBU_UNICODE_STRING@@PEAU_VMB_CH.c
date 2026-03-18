/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x14041C98C
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x140194D18 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1402202A0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x140227A94 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x14041CCC8 (-EnsureServerVmBusInterface@@YAJXZ.c)
 */

__int64 __fastcall CreateServerVmBusChannel(
        __int64 a1,
        void *a2,
        __int64 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        const struct _UNICODE_STRING *a6,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a7,
        void (*a8)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a9)(struct VMBCHANNEL__ *, unsigned int),
        unsigned int a10,
        struct VMBCHANNEL__ **a11)
{
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct VMBCHANNEL__ *v21; // [rsp+58h] [rbp-49h] BYREF
  __int128 v22; // [rsp+68h] [rbp-39h] BYREF
  __int128 v23; // [rsp+78h] [rbp-29h] BYREF
  int v24; // [rsp+88h] [rbp-19h] BYREF
  __int64 v25; // [rsp+90h] [rbp-11h]
  char v26; // [rsp+98h] [rbp-9h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2135);
  *a11 = 0LL;
  v16 = EnsureServerVmBusInterface();
  if ( v16 < 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v16;
  }
  LOBYTE(v15) = 1;
  v21 = 0LL;
  LODWORD(a3) = ((__int64 (__fastcall *)(__int64, __int64, struct VMBCHANNEL__ **))qword_140168400)(a3, v15, &v21);
  if ( (int)a3 < 0 )
  {
LABEL_20:
    VmBusInterfaceDereference();
    goto LABEL_21;
  }
  LODWORD(a3) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_140168688)(v21, a1);
  if ( (int)a3 < 0 )
    goto LABEL_19;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_140168470)(v21, 0x20000LL);
  if ( (int)a3 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, void *))qword_1401684C8)(v21, a2);
  v23 = (__int128)*a4;
  v22 = (__int128)*a5;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int128 *, __int128 *))qword_140168678)(
                  v21,
                  &v23,
                  &v22);
  if ( (int)a3 < 0 )
    goto LABEL_19;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_140168480)(
                  v21,
                  a7);
  if ( (int)a3 < 0 )
    goto LABEL_19;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), void (*)(struct VMBCHANNEL__ *, unsigned int)))qword_140168478)(
                  v21,
                  a8,
                  a9);
  if ( (int)a3 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_140168660)(v21, 2LL);
  ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_140168460)(v21, a6);
  if ( a10 )
  {
    v19 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, _QWORD, _QWORD))qword_140168668)(v21, a10, 0LL);
    a3 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15461;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reserve IO space: 0x%I64x",
        a3,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_19;
    }
  }
  LODWORD(a3) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_140168430)(v21);
  if ( (int)a3 < 0 )
  {
LABEL_19:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 15478;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create Host VmBus channel 0x%I64x",
      (int)a3,
      0LL,
      0LL,
      0LL,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_140168408)(v21);
    if ( (int)a3 >= 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1401684E0)(v21);
  *a11 = v21;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
  return (unsigned int)a3;
}
