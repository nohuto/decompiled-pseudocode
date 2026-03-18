/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x140002870
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1400040A0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSetResumePending @ 0x1400044E8 (UsbhSetResumePending.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhiSignalResumeEvent @ 0x14000B4D8 (UsbhiSignalResumeEvent.c)
 *     UsbhLogSignalResumeEvent @ 0x14000BE24 (UsbhLogSignalResumeEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhiSignalSuspendEvent @ 0x14002394C (UsbhiSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     UsbhRemoveQueuedSuspend @ 0x1400445B0 (UsbhRemoveQueuedSuspend.c)
 */

__int64 __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v7; // r12
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  KIRQL v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  KIRQL v26; // al
  KIRQL v27; // di
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // r9d
  int v69; // esi
  __int64 v70; // rax
  int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // [rsp+20h] [rbp-48h]
  __int64 v75; // [rsp+20h] [rbp-48h]
  __int64 v76; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v76 = 0LL;
  FdoExt(a1, a2, a3, a4);
  v7 = UsbhIncHubBusy(a1, v4, a1, 1383162736, 0);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v11 = v8;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v12 = 724267376;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 3LL;
        *(_QWORD *)(v12 + 24) = v10;
      }
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v15 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v15 = 724267376;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v14;
        *(_QWORD *)(v15 + 24) = v13;
      }
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = 32 * (v16 + 43);
  *(_DWORD *)(v17 + a2) = 3;
  *(_DWORD *)(v17 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + a2 + 8) = -1;
  *(_QWORD *)(v17 + a2 + 12) = 0LL;
  *(_QWORD *)(v17 + a2 + 20) = 0LL;
  *(_DWORD *)(v17 + a2 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v9 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884))
           + *(_QWORD *)(v9 + 888);
        *(_DWORD *)v9 = 812659551;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = v18;
        *(_QWORD *)(v9 + 24) = v19;
      }
    }
  }
  switch ( (_DWORD)v18 )
  {
    case 7:
LABEL_14:
      v20 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v76) = 0x100000;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v9 = *(_QWORD *)(a1 + 64);
          if ( v9 )
          {
            v9 = 32LL
               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884))
               + *(_QWORD *)(v9 + 888);
            *(_DWORD *)v9 = 829436767;
            *(_QWORD *)(v9 + 8) = 0LL;
            *(_QWORD *)(v9 + 16) = v18;
            *(_QWORD *)(v9 + 24) = v20;
          }
        }
      }
      v21 = FdoExt(a1, v9, v20, v14);
      v22 = *(unsigned __int16 *)(a2 + 4);
      v23 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v24 = *(_QWORD *)(a1 + 64);
          if ( v24 )
          {
            v25 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884))
                + *(_QWORD *)(v24 + 888);
            *(_DWORD *)v25 = 1986359664;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 16) = v23;
            *(_QWORD *)(v25 + 24) = v22;
          }
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 4944));
      *(_BYTE *)(a2 + 2838) = 0;
      v27 = v26;
      *(_DWORD *)(a2 + 696) = 3;
      KeResetEvent((PRKEVENT)(a2 + 712));
      KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 4944), v27);
      v28 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 18;
      *(_DWORD *)(v28 + a2 + 1384) = 18;
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v76, 0, 0LL);
      v29 = *(unsigned __int16 *)(a2 + 4);
      v30 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v31 = *(_QWORD *)(a1 + 64);
          if ( v31 )
          {
            v32 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884))
                + *(_QWORD *)(v31 + 888);
            *(_DWORD *)v32 = 1986359664;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = v30;
            *(_QWORD *)(v32 + 24) = v29;
          }
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
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
            *(_DWORD *)v36 = 757952880;
            *(_QWORD *)(v36 + 8) = 0LL;
            *(_QWORD *)(v36 + 16) = v34;
            *(_QWORD *)(v36 + 24) = v33;
          }
        }
      }
      *(_DWORD *)(a2 + 448) = 0;
LABEL_31:
      v37 = *(_DWORD *)(a2 + 12);
      v38 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(v38 + a2 + 12) = 0x100000;
      *(_DWORD *)(v38 + a2 + 8) = v37;
LABEL_32:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
      return UsbhDecHubBusy(a1, v39, v7);
    case 6:
      v41 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v76) = 0x100000;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v42 = *(_QWORD *)(a1 + 64);
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
            *(_DWORD *)v43 = 846213983;
            *(_QWORD *)(v43 + 8) = 0LL;
            *(_QWORD *)(v43 + 16) = 6LL;
            *(_QWORD *)(v43 + 24) = v41;
          }
        }
      }
      UsbhSetResumePending(a1, a2);
      v44 = *(unsigned __int16 *)(a2 + 4);
      v45 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v46 = *(_QWORD *)(a1 + 64);
          if ( v46 )
          {
            v47 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884))
                + *(_QWORD *)(v46 + 888);
            *(_DWORD *)v47 = 1986359664;
            *(_QWORD *)(v47 + 8) = 0LL;
            *(_QWORD *)(v47 + 16) = v45;
            *(_QWORD *)(v47 + 24) = v44;
          }
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v48 + a2 + 1384) = 1;
      v49 = *(unsigned __int16 *)(a2 + 4);
      v50 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v51 = *(_QWORD *)(a1 + 64);
          if ( v51 )
          {
            v52 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884))
                + *(_QWORD *)(v51 + 888);
            *(_DWORD *)v52 = 1986359664;
            *(_QWORD *)(v52 + 8) = 0LL;
            *(_QWORD *)(v52 + 16) = v50;
            *(_QWORD *)(v52 + 24) = v49;
          }
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v76, 0, 0LL);
      v53 = *(unsigned __int16 *)(a2 + 4);
      v54 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v55 = *(_QWORD *)(a1 + 64);
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
            *(_DWORD *)v56 = 757952880;
            *(_QWORD *)(v56 + 8) = 0LL;
            *(_QWORD *)(v56 + 16) = v54;
            *(_QWORD *)(v56 + 24) = v53;
          }
        }
      }
      *(_DWORD *)(a2 + 448) = 0;
      goto LABEL_31;
    case 0xE:
LABEL_53:
      if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, v19, v14) )
        UsbhSetPcqEventStatus(a1, a2, 1LL, 30LL);
      v57 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v58 = *(_QWORD *)(a1 + 64);
          if ( v58 )
          {
            v59 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884))
                + *(_QWORD *)(v58 + 888);
            *(_DWORD *)v59 = 896545631;
            *(_QWORD *)(v59 + 8) = 0LL;
            *(_QWORD *)(v59 + 16) = v18;
            *(_QWORD *)(v59 + 24) = v57;
          }
        }
      }
      v60 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v18;
      *(_DWORD *)(v60 + a2 + 1384) = v18;
      v61 = *(unsigned __int16 *)(a2 + 4);
      v62 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v63 = *(_QWORD *)(a1 + 64);
          if ( v63 )
          {
            v64 = *(_QWORD *)(v63 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v63 + 880)) & *(_DWORD *)(v63 + 884));
            *(_DWORD *)v64 = 757952880;
            *(_QWORD *)(v64 + 8) = 0LL;
            *(_QWORD *)(v64 + 16) = v62;
            *(_QWORD *)(v64 + 24) = v61;
          }
        }
      }
      v65 = *(_DWORD *)(a2 + 12);
      v66 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v66 + a2 + 1384) = v65;
      goto LABEL_32;
  }
  v19 = 0x140000000uLL;
  switch ( (int)v18 )
  {
    case 1:
      Log(a1, 512, 1597206579, v18, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalResumeEvent(a1, a2);
      v67 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(v67 + a2 + 1384) = 1;
      break;
    case 2:
    case 3:
    case 4:
      goto LABEL_53;
    case 5:
    case 12:
    case 13:
      v75 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v76) = 0x100000;
      Log(a1, 512, 1597206583, v18, v75);
      UsbhSetResumePending(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 1LL, 10LL);
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v76, 0, 0LL);
      v68 = 0x100000;
      goto LABEL_67;
    case 8:
    case 9:
    case 10:
      if ( (_DWORD)v18 == 9 )
      {
        v69 = 4;
      }
      else
      {
        v69 = 14;
        if ( (_DWORD)v18 == 8 )
          v69 = 3;
      }
      UsbhRemoveQueuedSuspend(a1, a2);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597206580, v69, *(unsigned __int16 *)(a2 + 4));
      if ( *(_DWORD *)(a2 + 400) == 5 )
      {
        v74 = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v76) = 0x100000;
        Log(a1, 512, 1597206610, v18, v74);
        UsbhSetResumePending(a1, a2);
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v76, 0, 0LL);
      }
      v70 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v69;
      *(_DWORD *)(v70 + a2 + 1384) = v69;
      break;
    case 11:
      goto LABEL_14;
    case 15:
    case 16:
    case 17:
    case 20:
      UsbhiSignalResumeEvent(a1, a2);
      v71 = 1597206582;
      goto LABEL_77;
    case 18:
      v71 = 1597206584;
LABEL_77:
      Log(a1, 512, v71, v18, *(unsigned __int16 *)(a2 + 4));
      v72 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v18;
      *(_DWORD *)(v72 + a2 + 1384) = v18;
      break;
    default:
      Log(a1, 512, 1597206616, v18, *(unsigned __int16 *)(a2 + 4));
      v73 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v73 + a2 + 1384) = 19;
      break;
  }
  v68 = 0;
LABEL_67:
  UsbhUnlockPcqWithTag(a1, a2, v11, v68);
  return UsbhDecHubBusy(a1, v39, v7);
}
