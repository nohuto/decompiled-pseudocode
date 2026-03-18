/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x1400040A0
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140002018 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003290 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003E4F0 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 v6; // r14
  unsigned int v9; // esi
  void *v10; // rdx
  __int64 v11; // rdx
  _DWORD *Pool2; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // rcx
  __int64 v34; // rax
  int v35[14]; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  v6 = a2;
  v9 = -1073741670;
  v10 = &WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6);
  FdoExt(a1, v10, a3, a4);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1112885333LL);
  if ( Pool2 )
  {
    v9 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 )
        {
          v35[0] = 1413771367;
          v11 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884))
              + *(_QWORD *)(v11 + 888);
          *(_DWORD *)v11 = 1413771367;
          *(_QWORD *)(v11 + 8) = 0LL;
          *(_QWORD *)(v11 + 16) = v6;
          *(_QWORD *)(v11 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v6 )
      goto LABEL_32;
    v15 = FdoExt(a1, v11, v13, v14);
    if ( (unsigned __int16)v6 > *(unsigned __int8 *)(FdoExt(a1, v16, v17, v18) + 2938) )
      goto LABEL_32;
    v22 = *(_QWORD *)(v15 + 3056);
    if ( !v22 )
      goto LABEL_32;
    v23 = v22 + 2928 * v6 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v35[0] = 1044672615;
          v24 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v24 = 1044672615;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = v6;
          *(_QWORD *)(v24 + 24) = v23;
        }
      }
    }
    if ( !v23 )
    {
LABEL_32:
      ExFreePoolWithTag(Pool2, 0);
      v9 = -1073741811;
      goto LABEL_33;
    }
    *((_WORD *)Pool2 + 2) = v6;
    Pool2[2] = *a3;
    *Pool2 = 1145332592;
    v35[0] = 0;
    v25 = FdoExt(a1, v19, v20, v21);
    if ( *(_QWORD *)(v25 + 4592) )
    {
      (*(void (__fastcall **)(_QWORD, int *))(v25 + 4592))(*(_QWORD *)(v25 + 4560), v35);
      v27 = v35[0];
    }
    else
    {
      v27 = 0;
    }
    v28 = (unsigned int)Pool2[2];
    *((_QWORD *)Pool2 + 5) = a5;
    Pool2[8] = v27;
    Pool2[12] = v5;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v35[0] = 1145262193;
          v29 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v29 = v35[0];
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = v23;
          *(_QWORD *)(v29 + 24) = v28;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v26,
        v28,
        50,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v6,
        Pool2[2]);
    if ( v5 == 1 )
    {
      v34 = UsbhLatchPdo(a1, (unsigned __int16)v6, Pool2, 1230065731LL);
      if ( !v34 )
      {
        v9 = -1073741811;
        goto LABEL_43;
      }
      if ( v34 != a5 )
      {
        v9 = -1073741811;
        UsbhUnlatchPdo(a1, v34, Pool2, 1230065731LL);
        goto LABEL_43;
      }
    }
    if ( (Pool2[2] & 0x16) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 2876));
    if ( (Pool2[2] & 1) == 0 )
    {
      v30 = v23 + 456;
      v31 = Pool2 + 4;
      v32 = *(_QWORD **)(v23 + 464);
      if ( *v32 == v23 + 456 )
      {
LABEL_31:
        *v31 = v30;
        v31[1] = v32;
        *v32 = v31;
        *(_QWORD *)(v30 + 8) = v31;
        KeSetEvent((PRKEVENT)(v23 + 496), 0, 0);
        goto LABEL_33;
      }
LABEL_39:
      __fastfail(3u);
    }
    if ( !*(_BYTE *)(v23 + 2839) )
    {
      v30 = v23 + 456;
      *(_BYTE *)(v23 + 2839) = 1;
      v32 = *(_QWORD **)(v23 + 464);
      v31 = Pool2 + 4;
      if ( *v32 == v23 + 456 )
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
      v11,
      1,
      51,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      v9);
  return v9;
}
