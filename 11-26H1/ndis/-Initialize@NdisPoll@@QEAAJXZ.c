/*
 * XREFs of ?Initialize@NdisPoll@@QEAAJXZ @ 0x140146360
 * Callers:
 *     NdisRegisterPoll @ 0x140145F10 (NdisRegisterPoll.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     NdisMQueryAdapterInstanceName @ 0x1400909C0 (NdisMQueryAdapterInstanceName.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x14014614C (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 */

__int64 __fastcall NdisPoll::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  int v2; // eax
  unsigned int v3; // edi
  bool v5; // zf
  char *v6; // rdi
  void (__fastcall *v7)(__int64, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *); // rcx
  struct KLOADER_MODULE_REFERENCE__ *v8; // rdx
  NDIS_STATUS v9; // eax
  unsigned int v10; // ebp
  _QWORD *v11; // r15
  unsigned int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  struct KLOADER_MODULE_REFERENCE__ *v14; // [rsp+38h] [rbp-50h]
  char *v15; // [rsp+40h] [rbp-48h]
  UNICODE_STRING pAdapterInstanceName; // [rsp+48h] [rbp-40h] BYREF
  void *v17; // [rsp+90h] [rbp+8h] BYREF

  v2 = ExecutionContextLibrary::Initialize(this);
  v3 = v2;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
        v2);
    return v3;
  }
  else
  {
    this[45] = 0LL;
    this[46] = 0LL;
    this[47] = 0LL;
    this[48] = 0LL;
    this[42] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtPollDriver;
    *((_DWORD *)this + 80) = 4000;
    this[41] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[44] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 43);
    this[43] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 43);
    *((_DWORD *)this + 81) = 1817211460;
    this[54] = 0LL;
    this[55] = 0LL;
    this[56] = 0LL;
    this[57] = 0LL;
    v5 = ndisVerifierNdisDispatch == 0LL;
    this[51] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtIndicateReceivedNbls;
    *((_DWORD *)this + 98) = 6000;
    this[50] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[53] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 52);
    this[52] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 52);
    *((_DWORD *)this + 99) = 1817213010;
    if ( v5 || !this[80] )
    {
      v6 = (char *)(this + 58);
      memset(this + 58, 0, 0x48uLL);
      v7 = NdisPoll::EvtCompleteTransmittedNblsThunk;
    }
    else
    {
      v6 = (char *)(this + 58);
      memset(this + 58, 0, 0x48uLL);
      v7 = NdisPoll::EvtCompleteTransmittedNblsThunkWithVerifier;
    }
    *(_DWORD *)v6 = 6000;
    *((_QWORD *)v6 + 1) = this;
    *((_QWORD *)v6 + 2) = v7;
    *((_QWORD *)v6 + 4) = v6 + 24;
    *((_QWORD *)v6 + 3) = v6 + 24;
    *((_DWORD *)v6 + 1) = 1817213012;
    this[71] = 0LL;
    this[72] = 0LL;
    this[73] = 0LL;
    this[74] = 0LL;
    this[68] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtSetMiniportNotificationEnabled;
    this[67] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[70] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 69);
    this[69] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 69);
    v8 = this[75];
    v13 = 40LL;
    pAdapterInstanceName = 0LL;
    v15 = (char *)v8 + 4008;
    v14 = this[79];
    v9 = NdisMQueryAdapterInstanceName(&pAdapterInstanceName, v8);
    v10 = v9;
    if ( v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
          v9,
          v13,
          v14,
          v15);
    }
    else
    {
      wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
        (__int64)&v17,
        (__int64)pAdapterInstanceName.Buffer);
      v11 = this + 20;
      v12 = ((__int64 (__fastcall *)(__int64 *, char *))this[1])(&v13, (char *)this + 160);
      v10 = v12;
      if ( v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xCu,
            (struct _GUID *)&WPP_2540e12dc9643011f79727f1480dd687_Traceguids,
            v12,
            v13,
            v14,
            v15);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v11, (char *)this + 392);
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v11, v6);
        ((void (__fastcall *)(_QWORD, char *))this[3])(*v11, (char *)this + 320);
        ((void (__fastcall *)(_QWORD, char *))this[6])(*v11, (char *)this + 536);
        ((void (__fastcall *)(_QWORD))this[11])(*v11);
        v10 = 0;
      }
      wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(&v17, 0LL);
    }
    return v10;
  }
}
