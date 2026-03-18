/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x140025670
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhiSignalResumeEvent @ 0x1400130A0 (UsbhiSignalResumeEvent.c)
 *     UsbhLogSignalResumeEvent @ 0x1400139C4 (UsbhLogSignalResumeEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhiSignalSuspendEvent @ 0x14001EB0C (UsbhiSignalSuspendEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140026F80 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSetResumePending @ 0x1400273BC (UsbhSetResumePending.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 *     UsbhRemoveQueuedSuspend @ 0x140044A8C (UsbhRemoveQueuedSuspend.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r15
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  KSPIN_LOCK *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  KIRQL v30; // al
  KIRQL v31; // di
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  struct _KEVENT *v43; // rdi
  __int64 Signalling; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned int v82; // esi
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // r8d
  __int64 v86; // rax
  __int64 v87; // rax
  volatile int Lock; // eax
  __int64 Timeout; // [rsp+20h] [rbp-48h]
  __int64 Timeouta; // [rsp+20h] [rbp-48h]
  __int64 v91; // [rsp+88h] [rbp+20h] BYREF

  v91 = 0LL;
  FdoExt(a1);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, a3, a1, 1383162736, 0);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 724267376;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = 3LL;
        *(_QWORD *)(v11 + 24) = v8;
      }
    }
  }
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 724267376;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
        *(_QWORD *)(v15 + 24) = v12;
      }
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 3;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *(_DWORD *)(v17 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 812659551;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v18;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
  }
  if ( (_DWORD)v18 != 7 )
  {
    if ( (_DWORD)v18 == 6 )
    {
      v51 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v91) = 0x100000;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v52 = *(_QWORD *)(a1 + 64);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v52 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
            *(_DWORD *)v53 = 846213983;
            *(_QWORD *)(v53 + 8) = 0LL;
            *(_QWORD *)(v53 + 16) = v18;
            *(_QWORD *)(v53 + 24) = v51;
          }
        }
      }
      UsbhSetResumePending(a1, a2);
      v54 = *(unsigned __int16 *)(a2 + 4);
      v55 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v56 = *(_QWORD *)(a1 + 64);
          if ( v56 )
          {
            v57 = *(_QWORD *)(v56 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v56 + 880)) & *(_DWORD *)(v56 + 884));
            *(_DWORD *)v57 = 1986359664;
            *(_QWORD *)(v57 + 8) = 0LL;
            *(_QWORD *)(v57 + 16) = v55;
            *(_QWORD *)(v57 + 24) = v54;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v58 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v58 + a2 + 1384) = 1;
      v59 = *(unsigned __int16 *)(a2 + 4);
      v60 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v61 = *(_QWORD *)(a1 + 64);
          if ( v61 )
          {
            v62 = *(_QWORD *)(v61 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v61 + 880)) & *(_DWORD *)(v61 + 884));
            *(_DWORD *)v62 = 1986359664;
            *(_QWORD *)(v62 + 8) = 0LL;
            *(_QWORD *)(v62 + 16) = v60;
            *(_QWORD *)(v62 + 24) = v59;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v91, 0, 0LL);
      v63 = *(unsigned __int16 *)(a2 + 4);
      v64 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v65 = *(_QWORD *)(a1 + 64);
          if ( v65 )
          {
            v66 = *(_QWORD *)(v65 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v65 + 880)) & *(_DWORD *)(v65 + 884));
            *(_DWORD *)v66 = 757952880;
            *(_QWORD *)(v66 + 8) = 0LL;
            *(_QWORD *)(v66 + 16) = v64;
            *(_QWORD *)(v66 + 24) = v63;
          }
        }
      }
      v67 = *(_DWORD *)(a2 + 12);
      v68 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v68 + a2 + 8) = v67;
      *(_DWORD *)(v68 + a2 + 12) = 0x100000;
    }
    else
    {
      if ( (_DWORD)v18 != 14 )
      {
        switch ( (int)v18 )
        {
          case 1:
            Log(a1, 512, 1597206579, v18, *(unsigned __int16 *)(a2 + 4));
            UsbhiSignalResumeEvent(a1, a2);
            v80 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 400) = 0;
            *(_DWORD *)(a2 + 12) = 1;
            *(_DWORD *)(v80 + a2 + 1384) = 1;
            UsbhUnlockPcqWithTag(a1, a2, v9, 0);
            return UsbhDecHubBusy(a1, v81, v6);
          case 2:
          case 3:
          case 4:
            goto LABEL_62;
          case 5:
          case 12:
          case 13:
            Timeouta = *(unsigned __int16 *)(a2 + 4);
            LODWORD(v91) = 0x100000;
            Log(a1, 512, 1597206583, v18, Timeouta);
            UsbhSetResumePending(a1, a2);
            UsbhSetPcqEventStatus(a1, a2, 1LL);
            UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v91, 0, 0LL);
            UsbhUnlockPcqWithTag(a1, a2, v9, 0x100000);
            return UsbhDecHubBusy(a1, v69, v6);
          case 8:
          case 9:
          case 10:
            if ( (_DWORD)v18 == 9 )
            {
              v82 = 4;
            }
            else
            {
              v82 = 14;
              if ( (_DWORD)v18 == 8 )
                v82 = 3;
            }
            UsbhRemoveQueuedSuspend(a1, a2, 0x140000000uLL, v13);
            UsbhiSignalSuspendEvent(a1, a2);
            Log(a1, 512, 1597206580, v82, *(unsigned __int16 *)(a2 + 4));
            if ( *(_DWORD *)(a2 + 400) == 5 )
            {
              Timeout = *(unsigned __int16 *)(a2 + 4);
              LODWORD(v91) = 0x100000;
              Log(a1, 512, 1597206610, v18, Timeout);
              UsbhSetResumePending(a1, a2);
              UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v91, 0, 0LL);
            }
            v83 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = v82;
            *(_DWORD *)(v83 + a2 + 1384) = v82;
            UsbhUnlockPcqWithTag(a1, a2, v9, 0);
            return UsbhDecHubBusy(a1, v84, v6);
          case 11:
            goto LABEL_14;
          case 15:
          case 16:
          case 17:
          case 20:
            UsbhiSignalResumeEvent(a1, a2);
            v85 = 1597206582;
            goto LABEL_84;
          case 18:
            v85 = 1597206584;
LABEL_84:
            Log(a1, 512, v85, v18, *(unsigned __int16 *)(a2 + 4));
            v86 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = v18;
            *(_DWORD *)(v86 + a2 + 1384) = v18;
            break;
          default:
            Log(a1, 512, 1597206616, v18, *(unsigned __int16 *)(a2 + 4));
            v87 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 19;
            *(_DWORD *)(v87 + a2 + 1384) = 19;
            break;
        }
        UsbhUnlockPcqWithTag(a1, a2, v9, 0);
        return UsbhDecHubBusy(a1, v69, v6);
      }
LABEL_62:
      if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      v70 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v71 = *(_QWORD *)(a1 + 64);
          if ( v71 )
          {
            v72 = *(_QWORD *)(v71 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 880)) & *(_DWORD *)(v71 + 884));
            *(_DWORD *)v72 = 896545631;
            *(_QWORD *)(v72 + 8) = 0LL;
            *(_QWORD *)(v72 + 16) = v18;
            *(_QWORD *)(v72 + 24) = v70;
          }
        }
      }
      v73 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v18;
      *(_DWORD *)(v73 + a2 + 1384) = v18;
      v74 = *(unsigned __int16 *)(a2 + 4);
      v75 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v76 = *(_QWORD *)(a1 + 64);
          if ( v76 )
          {
            v77 = *(_QWORD *)(v76 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v76 + 880)) & *(_DWORD *)(v76 + 884));
            *(_DWORD *)v77 = 757952880;
            *(_QWORD *)(v77 + 8) = 0LL;
            *(_QWORD *)(v77 + 16) = v75;
            *(_QWORD *)(v77 + 24) = v74;
          }
        }
      }
      v78 = *(_DWORD *)(a2 + 12);
      v79 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v79 + a2 + 8) = v78;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
    return UsbhDecHubBusy(a1, v69, v6);
  }
LABEL_14:
  v22 = *(unsigned __int16 *)(a2 + 4);
  LODWORD(v91) = 0x100000;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 829436767;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v18;
        *(_QWORD *)(v24 + 24) = v22;
      }
    }
  }
  v25 = (KSPIN_LOCK *)FdoExt(a1);
  v26 = *(unsigned __int16 *)(a2 + 4);
  v27 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v28 = *(_QWORD *)(a1 + 64);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
        *(_DWORD *)v29 = 1986359664;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_QWORD *)(v29 + 16) = v27;
        *(_QWORD *)(v29 + 24) = v26;
      }
    }
  }
  *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
  v30 = KeAcquireSpinLockRaiseToDpc(v25 + 618);
  *(_BYTE *)(a2 + 2838) = 0;
  v31 = v30;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock(v25 + 618, v31);
  v32 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 18;
  *(_DWORD *)(v32 + a2 + 1384) = 18;
  UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v91, 0, 0LL);
  v33 = *(unsigned __int16 *)(a2 + 4);
  v34 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 1986359664;
        *(_QWORD *)(v36 + 8) = 0LL;
        *(_QWORD *)(v36 + 16) = v34;
        *(_QWORD *)(v36 + 24) = v33;
      }
    }
  }
  *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
  KeResetEvent((PRKEVENT)(a2 + 472));
  v37 = *(unsigned __int16 *)(a2 + 4);
  v38 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
        *(_DWORD *)v40 = 757952880;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = v38;
        *(_QWORD *)(v40 + 24) = v37;
      }
    }
  }
  v41 = *(_DWORD *)(a2 + 12);
  v42 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v42 + a2 + 8) = v41;
  *(_DWORD *)(v42 + a2 + 12) = 0x100000;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
  v43 = (struct _KEVENT *)FdoExt(a1);
  v43[142].Header.Type = 1;
  KeWaitForSingleObject(&v43[139], Executive, 0, 0, 0LL);
  Signalling = v43[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
        *(_DWORD *)v46 = 1667581000;
        *(_QWORD *)(v46 + 8) = 0LL;
        *(_QWORD *)(v46 + 16) = v6;
        *(_QWORD *)(v46 + 24) = Signalling;
      }
    }
  }
  if ( v43[142].Header.Signalling )
  {
    if ( v6 == (_QWORD *)1936941672 )
    {
      Lock = v43[130].Header.Lock;
      if ( Lock )
        v43[130].Header.LockNV = Lock - 1;
    }
    else if ( v6 )
    {
      v47 = v6[1];
      v48 = v6 + 1;
      if ( *(_QWORD **)(v47 + 8) != v6 + 1 || (v49 = (_QWORD *)v6[2], (_QWORD *)*v49 != v48) )
        __fastfail(3u);
      *v49 = v47;
      *(_QWORD *)(v47 + 8) = v49;
      v6[2] = v6 + 1;
      *v48 = v48;
      ExFreePoolWithTag(v6, 0);
    }
  }
  return KeSetEvent(v43 + 139, 0, 0);
}
