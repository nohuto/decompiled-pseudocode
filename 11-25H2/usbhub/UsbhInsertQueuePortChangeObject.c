/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x140026F80
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140024E40 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140026210 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003EA34 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, int a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // esi
  int v10; // edx
  _DWORD *Pool2; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rcx
  __int64 v28; // rax
  _DWORD v29[13]; // [rsp+44h] [rbp-34h] BYREF

  v6 = a2;
  v9 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
  FdoExt(a1);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1112885333LL);
  if ( Pool2 )
  {
    v9 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 1413771367;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = v6;
          *(_QWORD *)(v13 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v6 )
      goto LABEL_32;
    v14 = FdoExt(a1);
    if ( (unsigned __int16)v6 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_32;
    v15 = *((_QWORD *)v14 + 382);
    if ( !v15 )
      goto LABEL_32;
    v16 = v15 + 2928 * v6 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 1044672615;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v6;
          *(_QWORD *)(v18 + 24) = v16;
        }
      }
    }
    if ( !v16 )
    {
LABEL_32:
      ExFreePoolWithTag(Pool2, 0);
      v9 = -1073741811;
      goto LABEL_33;
    }
    *((_WORD *)Pool2 + 2) = v6;
    Pool2[2] = *a3;
    *Pool2 = 1145332592;
    v29[0] = 0;
    v19 = FdoExt(a1);
    if ( *((_QWORD *)v19 + 574) )
    {
      (*((void (__fastcall **)(_QWORD, _DWORD *))v19 + 574))(*((_QWORD *)v19 + 570), v29);
      v21 = v29[0];
    }
    else
    {
      v21 = 0;
    }
    v22 = (unsigned int)Pool2[2];
    *((_QWORD *)Pool2 + 5) = a5;
    Pool2[8] = v21;
    Pool2[12] = a4;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v23 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v23 = 1145262193;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = v16;
          *(_QWORD *)(v23 + 24) = v22;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        v22,
        50,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v6,
        Pool2[2]);
    if ( a4 == 1 )
    {
      v28 = UsbhLatchPdo(a1, v6, (__int64)Pool2, 0x49515043u);
      if ( !v28 )
      {
        v9 = -1073741811;
        goto LABEL_43;
      }
      if ( v28 != a5 )
      {
        v9 = -1073741811;
        UsbhUnlatchPdo(a1, v28, (__int64)Pool2, 0x49515043u);
        goto LABEL_43;
      }
    }
    if ( (Pool2[2] & 0x16) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 2876));
    if ( (Pool2[2] & 1) == 0 )
    {
      v24 = v16 + 456;
      v25 = Pool2 + 4;
      v26 = *(_QWORD **)(v16 + 464);
      if ( *v26 == v16 + 456 )
      {
LABEL_31:
        *v25 = v24;
        v25[1] = v26;
        *v26 = v25;
        *(_QWORD *)(v24 + 8) = v25;
        KeSetEvent((PRKEVENT)(v16 + 496), 0, 0);
        goto LABEL_33;
      }
LABEL_39:
      __fastfail(3u);
    }
    if ( !*(_BYTE *)(v16 + 2839) )
    {
      v24 = v16 + 456;
      *(_BYTE *)(v16 + 2839) = 1;
      v26 = *(_QWORD **)(v16 + 464);
      v25 = Pool2 + 4;
      if ( *v26 == v16 + 456 )
        goto LABEL_31;
      goto LABEL_39;
    }
LABEL_43:
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1,
      51,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      v9);
  return v9;
}
