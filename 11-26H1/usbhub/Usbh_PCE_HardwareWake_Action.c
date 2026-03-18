/*
 * XREFs of Usbh_PCE_HardwareWake_Action @ 0x14002F370
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     UsbhRemoveQueuedSuspend @ 0x1400445B0 (UsbhRemoveQueuedSuspend.c)
 */

void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  KIRQL v6; // si
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // rcx
  signed __int32 v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  signed __int32 v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  signed __int32 v38; // eax
  unsigned int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // r11d
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r10d
  __int64 v51; // r9
  __int64 v52; // rax
  int v53; // r10d

  FdoExt(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v5 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v6 = v4;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 724267376;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = 12LL;
        *(_QWORD *)(v11 + v10 + 24) = v5;
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
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
        v16 = *(_DWORD *)(v14 + 884);
        v17 = *(_QWORD *)(v14 + 888);
        v18 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v18 + v17) = 724267376;
        *(_QWORD *)(v18 + v17 + 8) = 0LL;
        *(_QWORD *)(v18 + v17 + 16) = v13;
        *(_QWORD *)(v18 + v17 + 24) = v12;
      }
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = 32 * (v19 + 43);
  *(_DWORD *)(v20 + a2) = 12;
  *(_DWORD *)(v20 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v20 + a2 + 8) = -1;
  *(_QWORD *)(v20 + a2 + 12) = 0LL;
  *(_QWORD *)(v20 + a2 + 20) = 0LL;
  *(_DWORD *)(v20 + a2 + 28) = 0;
  v21 = *(int *)(a2 + 12);
  v22 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 880), 0xFFFFFFFF);
        v25 = *(_DWORD *)(v23 + 884);
        v26 = *(_QWORD *)(v23 + 888);
        v27 = 32LL * ((v24 - 1) & v25);
        *(_DWORD *)(v27 + v26) = 812659249;
        *(_QWORD *)(v27 + v26 + 8) = 0LL;
        *(_QWORD *)(v27 + v26 + 16) = v21;
        *(_QWORD *)(v27 + v26 + 24) = v22;
      }
    }
  }
  if ( (int)v21 <= 10 )
  {
    if ( (_DWORD)v21 != 10 )
    {
      switch ( (_DWORD)v21 )
      {
        case 1:
          goto LABEL_47;
        case 2:
        case 3:
        case 4:
          goto LABEL_18;
        case 5:
        case 6:
LABEL_48:
          Log(a1, 512, 825389107, v21, *(unsigned __int16 *)(a2 + 4));
          v52 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = v53;
          *(_DWORD *)(v52 + a2 + 1384) = v53;
          if ( *(_DWORD *)(a2 + 400) == 5 )
            Log(a1, 512, 825389161, v51, *(unsigned __int16 *)(a2 + 4));
          goto LABEL_50;
        case 7:
          Log(a1, 512, 825389106, 7LL, *(unsigned __int16 *)(a2 + 4));
          v45 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 2;
          *(_DWORD *)(v45 + a2 + 1384) = 2;
          *(_DWORD *)(a2 + 400) = v46;
LABEL_39:
          UsbhSetPcqEventStatus(a1, a2, 2, 10);
          KeResetEvent((PRKEVENT)(a2 + 472));
LABEL_50:
          UsbhUnlockPcqWithTag(a1, a2, v6, 0);
          return;
      }
      if ( (_DWORD)v21 != 8 )
      {
        if ( (_DWORD)v21 != 9 )
        {
LABEL_46:
          Log(a1, 512, 825389144, v21, *(unsigned __int16 *)(a2 + 4));
          v48 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v48 + a2 + 1384) = 19;
          goto LABEL_50;
        }
        Log(a1, 512, 825389109, 9LL, *(unsigned __int16 *)(a2 + 4));
        UsbhRemoveQueuedSuspend(a1, a2);
        v44 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v44 + a2 + 1384) = 4;
        goto LABEL_39;
      }
    }
    Log(a1, 512, 825389108, v21, *(unsigned __int16 *)(a2 + 4));
    v47 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 10;
    *(_DWORD *)(v47 + a2 + 1384) = 10;
    goto LABEL_50;
  }
  if ( (_DWORD)v21 == 11 || (_DWORD)v21 == 12 || (_DWORD)v21 == 13 )
    goto LABEL_48;
  if ( (_DWORD)v21 != 14 )
  {
    if ( (_DWORD)v21 != 15 && (_DWORD)v21 != 16 && (_DWORD)v21 != 17 )
    {
      if ( (_DWORD)v21 != 18 && (_DWORD)v21 != 20 )
        goto LABEL_46;
LABEL_47:
      Log(a1, 512, 825389110, v21, *(unsigned __int16 *)(a2 + 4));
      v49 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v50;
      *(_DWORD *)(v49 + a2 + 1384) = v50;
      goto LABEL_50;
    }
    goto LABEL_48;
  }
LABEL_18:
  v28 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 880), 0xFFFFFFFF);
        v31 = *(_DWORD *)(v29 + 884);
        v32 = *(_QWORD *)(v29 + 888);
        v33 = 32LL * ((v30 - 1) & v31);
        *(_DWORD *)(v33 + v32) = 829436465;
        *(_QWORD *)(v33 + v32 + 8) = 0LL;
        *(_QWORD *)(v33 + v32 + 16) = v21;
        *(_QWORD *)(v33 + v32 + 24) = v28;
      }
    }
  }
  v34 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = v21;
  *(_DWORD *)(v34 + a2 + 1384) = v21;
  v35 = *(unsigned __int16 *)(a2 + 4);
  v36 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 && a1 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 880), 0xFFFFFFFF);
      v39 = *(_DWORD *)(v37 + 884);
      v40 = *(_QWORD *)(v37 + 888);
      v41 = 32LL * ((v38 - 1) & v39);
      *(_DWORD *)(v41 + v40) = 757952880;
      *(_QWORD *)(v41 + v40 + 8) = 0LL;
      *(_QWORD *)(v41 + v40 + 16) = v36;
      *(_QWORD *)(v41 + v40 + 24) = v35;
    }
  }
  v42 = *(_DWORD *)(a2 + 12);
  v43 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v43 + a2 + 1384) = v42;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
}
