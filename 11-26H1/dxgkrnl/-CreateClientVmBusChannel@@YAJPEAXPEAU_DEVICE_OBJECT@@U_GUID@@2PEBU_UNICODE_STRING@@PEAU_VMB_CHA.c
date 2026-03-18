/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1403BE578
 * Callers:
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14021FFEC (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403BE250 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x14018E774 (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x140227A94 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x14042A6F4 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

__int64 __fastcall CreateClientVmBusChannel(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a6,
        void (*a7)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a8)(struct VMBCHANNEL__ *, unsigned int),
        struct VMBCHANNEL__ **a9)
{
  int v13; // ebx
  __int64 v14; // rcx
  int v16; // edi
  __int64 v17; // rcx
  struct VMBCHANNEL__ *v18; // [rsp+50h] [rbp-31h] BYREF
  int v19; // [rsp+58h] [rbp-29h] BYREF
  __int64 v20; // [rsp+60h] [rbp-21h]
  char v21; // [rsp+68h] [rbp-19h]
  struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *v22; // [rsp+70h] [rbp-11h]
  void (*v23)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+78h] [rbp-9h]

  v22 = a6;
  v23 = a7;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2135);
  *a9 = 0LL;
  v13 = EnsureClientVmBusInterface();
  if ( v13 >= 0 )
  {
    v18 = 0LL;
    v16 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD, struct VMBCHANNEL__ **))qword_140168400)(
            a2,
            0LL,
            &v18);
    if ( v16 < 0 )
      goto LABEL_14;
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_140168470)(v18, 0x20000LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64, __int64))qword_1401684E8)(v18, 256LL, 256LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_140168480)(
      v18,
      v22);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), _QWORD))qword_140168478)(
      v18,
      v23,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1401684C8)(v18, a1);
    v16 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _GUID *, struct _GUID *, _QWORD))qword_1401684F0)(
            v18,
            a3,
            a4,
            0LL);
    if ( v16 < 0
      || (((void (__fastcall *)(struct VMBCHANNEL__ *, _QWORD))qword_1401684B8)(v18, 0LL),
          ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_140168460)(v18, a5),
          v16 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_140168430)(v18),
          v16 < 0) )
    {
LABEL_14:
      if ( v18 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 15568;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create host VM bus channel. Status: 0x%I64x",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
        DestroyVmBusChannel(v18);
      }
      else
      {
        VmBusInterfaceDereference();
      }
    }
    else
    {
      ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1401684E0)(v18);
      *a9 = v18;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    return (unsigned int)v16;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v13;
  }
}
