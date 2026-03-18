/*
 * XREFs of UsbhGetNodeConnectionInfoForPdo @ 0x140023560
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhGetNodeConnectionInfoForPdo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        _DWORD *a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  KSPIN_LOCK *v14; // r15
  KIRQL v15; // al
  __int64 v16; // rdi
  KIRQL v17; // r12
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rax
  int v26; // ecx
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // r12d
  _DWORD *Pool2; // rax
  _DWORD *v32; // rdi
  int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  KSPIN_LOCK *v36; // r12
  KIRQL v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD *v42; // rax
  char v43; // al
  _DWORD *v44; // rax
  unsigned int v45; // eax
  int v46; // r8d
  __int64 v47; // r10
  unsigned int i; // r9d
  _DWORD *v49; // rcx
  char *v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r8
  _DWORD *v54; // rax
  __int64 (__fastcall *v55)(_QWORD, __int64, _DWORD *, _QWORD, int *); // r10
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // [rsp+34h] [rbp-44h] BYREF
  _DWORD *v60; // [rsp+38h] [rbp-40h]

  v7 = a4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      42,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v10 = *(unsigned __int16 *)(a3 + 4);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 829320807;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = a5;
      }
    }
  }
  if ( !v7 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v13 = *(_DWORD **)(v7 + 64);
  v60 = v13;
  if ( !v13 )
    goto LABEL_98;
  if ( *v13 != 1329877064 )
    UsbhTrapFatal_Dbg(v7, v13);
  v14 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v15 = KeAcquireSpinLockRaiseToDpc(v14);
  v16 = *(_QWORD *)(v7 + 64);
  v17 = v15;
  if ( !v16 )
    goto LABEL_98;
  if ( *(_DWORD *)v16 != 1329877064 )
    UsbhTrapFatal_Dbg(v7, *(_QWORD *)(v7 + 64));
  v18 = *(int *)(v16 + 1152);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 824923716;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v7;
        *(_QWORD *)(v20 + 24) = v18;
      }
    }
  }
  v21 = *(_DWORD *)(v16 + 1152);
  if ( v21 != 2 )
  {
    if ( v21 < 2 )
      Log(a1, 256, 1146497825, v7, *(int *)(v16 + 1152));
    v27 = 0LL;
    goto LABEL_27;
  }
  v22 = *(_QWORD *)(v16 + 1160);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 724260420;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = 1212444263LL;
        *(_QWORD *)(v24 + 24) = v22;
      }
    }
  }
  v25 = FdoExt(a1);
  if ( !*((_QWORD *)v25 + 558) )
  {
    v26 = -1073741822;
    goto LABEL_96;
  }
  v26 = (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v25 + 558))(
          *((_QWORD *)v25 + 529),
          v22,
          a2,
          1212444263LL);
  if ( v26 < 0 )
  {
LABEL_96:
    v27 = 0LL;
    goto LABEL_23;
  }
  v27 = *(_QWORD *)(v16 + 1160);
LABEL_23:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v28 = *(_QWORD *)(a1 + 64);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
        *(_DWORD *)v29 = 841700932;
        *(_QWORD *)(v29 + 16) = v26;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_QWORD *)(v29 + 24) = v27;
      }
    }
  }
LABEL_27:
  KeReleaseSpinLock(v14, v17);
  memset(a5, 0, (unsigned int)*a6);
  if ( !v27 )
  {
    Log(a1, 32, 1735290468, *(int *)(a3 + 428), (__int64)a5);
    v33 = 0;
    *(_DWORD *)a5 = *(unsigned __int16 *)(a3 + 4);
    *(_DWORD *)(a5 + 31) = *(_DWORD *)(a3 + 428);
    *a6 = 35;
    goto LABEL_70;
  }
  v59 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      40,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v30 = 64;
  do
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v30, 1112885333LL);
    v32 = Pool2;
    if ( !Pool2 )
    {
      v33 = -1073741670;
      v32 = 0LL;
      goto LABEL_34;
    }
    *Pool2 = 0;
    v54 = FdoExt(a1);
    v55 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _QWORD, int *))*((_QWORD *)v54 + 538);
    if ( v55 )
    {
      v56 = v55(*((_QWORD *)v54 + 529), v27, v32, v30, &v59);
      v33 = v56;
      if ( (v56 & 0xC0000000) != 0xC0000000 )
        continue;
      if ( v56 == -1073741789 )
        v30 = v32[1];
    }
    else
    {
      v33 = -1073741822;
    }
    ExFreePoolWithTag(v32, 0);
    v32 = 0LL;
  }
  while ( v33 == -1073741789 );
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v57 = *(_QWORD *)(a1 + 64);
      if ( v57 )
      {
        v58 = *(_QWORD *)(v57 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
        *(_DWORD *)v58 = 2020172903;
        *(_QWORD *)(v58 + 24) = v33;
        *(_QWORD *)(v58 + 8) = 0LL;
        *(_QWORD *)(v58 + 16) = v27;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      41,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v33);
LABEL_34:
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
        *(_DWORD *)v35 = 827092583;
        *(_QWORD *)(v35 + 24) = v33;
        *(_QWORD *)(v35 + 8) = 0LL;
        *(_QWORD *)(v35 + 16) = v32;
      }
    }
  }
  v36 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v37 = KeAcquireSpinLockRaiseToDpc(v36);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 825054788;
        *(_QWORD *)(v39 + 24) = a2;
        *(_QWORD *)(v39 + 8) = 0LL;
        *(_QWORD *)(v39 + 16) = v27;
      }
    }
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 841832004;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v27;
          *(_QWORD *)(v41 + 24) = 1212444263LL;
        }
      }
    }
  }
  v42 = FdoExt(a1);
  if ( *((_QWORD *)v42 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v42 + 559))(
      *((_QWORD *)v42 + 529),
      v27,
      a2,
      1212444263LL);
  KeReleaseSpinLock(v36, v37);
  if ( v33 >= 0 )
  {
    *(_DWORD *)a5 = *(unsigned __int16 *)(a3 + 4);
    *(_OWORD *)(a5 + 4) = *(_OWORD *)(v32 + 3);
    *((_WORD *)a5 + 10) = *((_WORD *)v32 + 14);
    a5[22] = *((_BYTE *)v32 + 32);
    if ( a7 )
      v43 = *((_BYTE *)v32 + 40);
    else
      v43 = v32[10] == 0;
    a5[23] = v43;
    v7 = a4;
    v44 = *(_DWORD **)(a4 + 64);
    if ( v44 )
    {
      if ( *v44 != 1329877064 )
        UsbhTrapFatal_Dbg(a4, *(_QWORD *)(a4 + 64));
      if ( v44[280] == 101 )
        a5[24] = (v60[355] & 4) != 0;
      *(_WORD *)(a5 + 25) = *((_WORD *)v32 + 17);
      v45 = v32[12];
      *(_DWORD *)(a5 + 27) = v45;
      v46 = *(_DWORD *)(a3 + 428);
      if ( v46 != 4 && v46 != 5 && (unsigned int)(v46 - 6) >= 2 )
        v46 = 1;
      v47 = 0LL;
      *(_DWORD *)(a5 + 31) = v46;
      for ( i = *a6 - 35; (unsigned int)v47 < v45; v45 = *(_DWORD *)(a5 + 27) )
      {
        if ( i < 0xB )
          break;
        v49 = &v32[3 * v47];
        i -= 11;
        v50 = &a5[11 * (unsigned int)v47];
        *(_DWORD *)(v50 + 35) = v49[13];
        *(_WORD *)(v50 + 39) = *((_WORD *)v49 + 28);
        v50[41] = *((_BYTE *)v49 + 58);
        v47 = (unsigned int)(v47 + 1);
        *(_DWORD *)(v50 + 42) = v49[15];
      }
      if ( (_DWORD)v47 != v45 && (UsbhLogMask & 0x20) != 0 )
      {
        if ( a1 )
        {
          v51 = *(_QWORD *)(a1 + 64);
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
            *(_QWORD *)(v52 + 16) = i;
            *(_QWORD *)(v52 + 24) = v45;
            *(_DWORD *)v52 = 1399746151;
            *(_QWORD *)(v52 + 8) = 0LL;
          }
        }
      }
      *a6 -= i;
      goto LABEL_68;
    }
LABEL_98:
    UsbhTrapFatal_Dbg(v7, 0LL);
  }
LABEL_68:
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
LABEL_70:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      43,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v33);
  return (unsigned int)v33;
}
