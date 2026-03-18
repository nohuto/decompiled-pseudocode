/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BEF74
 * Callers:
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     MNFreePopup @ 0x1402565F0 (MNFreePopup.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO **v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD v10[2]; // [rsp+58h] [rbp+17h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp+27h] BYREF
  ULONG_PTR v12[2]; // [rsp+78h] [rbp+37h] BYREF
  __int64 *v13[2]; // [rsp+88h] [rbp+47h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v10, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v10[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v10[0] + 24LL) )
    {
      v3 = *(_QWORD *)v10[0];
      if ( *(_QWORD *)(*(_QWORD *)v10[0] + 16LL) )
        v4 = *(struct tagTHREADINFO ***)(v3 + 16);
      else
        v4 = *(struct tagTHREADINFO ***)(v3 + 24);
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v4);
      xxxSendTransformableMessageTimeout(v4, 484LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v5);
    }
    if ( *(_QWORD *)(*(_QWORD *)v10[0] + 40LL) )
    {
      if ( *(int *)(*(_QWORD *)v10[0] + 80LL) >= 0 )
      {
        v2 = *(_QWORD *)v10[0];
        if ( *(_DWORD *)(*(_QWORD *)v10[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 40LL)
                                                               + 44LL) )
        {
          v2 = *(_QWORD *)(*(_QWORD *)v10[0] + 40LL);
          *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v10[0] + 80LL) + *(_QWORD *)(v2 + 88)) + 4LL) &= ~0x80u;
        }
      }
    }
    if ( (**(_DWORD **)v10[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v10[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v10[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v10[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v10[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v10[0] + 8LL) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v12, *(_QWORD *)(*(_QWORD *)v10[0] + 8LL));
      if ( *(_QWORD *)(*(_QWORD *)v10[0] + 40LL) )
        v6 = **(_QWORD **)(*(_QWORD *)v10[0] + 40LL);
      else
        v6 = 0LL;
      xxxSendTransformableMessageTimeout(
        *(struct tagTHREADINFO ***)(*(_QWORD *)v10[0] + 8LL),
        293LL,
        v6,
        (struct tagDRAWITEMSTRUCT *)((unsigned __int64)(**(_DWORD **)v10[0] & 4) << 27),
        0,
        0,
        0LL,
        1,
        1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v12, v7);
    }
    **(_DWORD **)v10[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v10[0] + 16LL) )
    {
      v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v10[0] + 16LL));
      v9 = v8;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        if ( *(_QWORD *)(v8 + 16) )
        {
          v2 = *(_QWORD *)v10[0];
          if ( *(_QWORD *)(v8 + 16) != *(_QWORD *)v10[0] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1209);
        }
        *(_QWORD *)(v9 + 16) = *(_QWORD *)v10[0];
      }
    }
    if ( (**(_DWORD **)v10[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v10[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, *(_QWORD *)v10[0]);
      MNFreePopup(v13);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v10, v2);
}
