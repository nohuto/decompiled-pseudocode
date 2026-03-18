/*
 * XREFs of UsbhBusPause_Action @ 0x14001498C
 * Callers:
 *     Usbh_BS_BusRun @ 0x140011EF8 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhPostInterrupt @ 0x1400133E0 (UsbhPostInterrupt.c)
 *     UsbhPCE_Disable @ 0x140013E18 (UsbhPCE_Disable.c)
 *     UsbhQueuePauseChange @ 0x1400142C4 (UsbhQueuePauseChange.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSsh_CheckHubIdle @ 0x1400398B8 (UsbhSsh_CheckHubIdle.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 i; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  volatile signed __int32 *v25; // rcx
  signed __int32 v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r13
  volatile signed __int32 *v35; // rcx
  signed __int32 v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  volatile signed __int32 *v40; // rcx
  signed __int32 v41; // eax
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  volatile signed __int32 *v46; // rcx
  signed __int32 v47; // eax
  unsigned int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rbp
  volatile signed __int32 *v52; // rcx
  signed __int32 v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  KIRQL v58; // di
  __int64 v59; // r8
  __int64 v60; // r9
  volatile signed __int32 *v61; // rcx
  signed __int32 v62; // eax
  unsigned int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  volatile signed __int32 *v71; // rcx
  signed __int32 v72; // eax
  unsigned int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 Pool2; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  __int64 v80; // r9
  __int64 v81; // rbx
  volatile signed __int32 *v82; // rcx
  signed __int32 v83; // eax
  unsigned int v84; // edx
  __int64 v85; // rcx
  __int64 v86; // rdx
  KIRQL v87; // r15
  volatile signed __int32 *v88; // rdx
  signed __int32 v89; // eax
  unsigned int v90; // r8d
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rbx
  _QWORD *v94; // rdi
  _QWORD *v95; // r9
  _QWORD *v96; // r8
  volatile signed __int32 *v97; // rcx
  signed __int32 v98; // eax
  unsigned int v99; // edx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rdx
  _QWORD *v103; // rcx
  __int64 v104; // r9
  int v105; // eax
  volatile signed __int32 *v106; // rcx
  signed __int32 v107; // eax
  unsigned int v108; // edx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9

  v6 = FdoExt(DeviceObject, a2, a3, a4);
  if ( _bittest(&UsbhLogMask, 0xBu) )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v9 = *((_DWORD *)DeviceExtension + 221);
        v10 = *((_QWORD *)DeviceExtension + 111);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 829776240;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = 0LL;
        *(_QWORD *)(v11 + v10 + 24) = 0LL;
      }
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 2712), 0xFFFFFFFF) == 1 )
  {
    v12 = *(_QWORD *)(v6 + 2664);
    if ( _bittest(&UsbhLogMask, 0xBu) )
    {
      if ( DeviceObject )
      {
        v13 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v13 )
        {
          v14 = _InterlockedExchangeAdd(v13 + 220, 0xFFFFFFFF);
          v15 = *((_DWORD *)v13 + 221);
          v16 = *((_QWORD *)v13 + 111);
          v17 = 32LL * ((v14 - 1) & v15);
          *(_DWORD *)(v17 + v16) = 1363763555;
          *(_QWORD *)(v17 + v16 + 8) = 0LL;
          *(_QWORD *)(v17 + v16 + 16) = v12;
          *(_QWORD *)(v17 + v16 + 24) = 0LL;
        }
      }
    }
    IoCancelIrp(*(PIRP *)(v6 + 2664));
  }
  KeWaitForSingleObject((PVOID)(v6 + 2688), Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    *(_DWORD *)(v6 + 2712) = 0;
    KeResetEvent((PRKEVENT)(v6 + 2688));
    UsbhPostInterrupt(DeviceObject, v112, v113, v114);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v18, v19, v20) + 2938); ++i )
    {
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v25 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
          if ( v25 )
          {
            v26 = _InterlockedExchangeAdd(v25 + 220, 0xFFFFFFFF);
            v27 = *((_DWORD *)v25 + 221);
            v28 = *((_QWORD *)v25 + 111);
            v22 = 32LL * ((v26 - 1) & v27);
            *(_DWORD *)(v22 + v28) = 1413771367;
            *(_QWORD *)(v22 + v28 + 16) = i;
            *(_QWORD *)(v22 + v28 + 8) = 0LL;
            *(_QWORD *)(v22 + v28 + 24) = 0LL;
          }
        }
      }
      if ( i )
      {
        v29 = FdoExt(DeviceObject, v22, v23, v24);
        if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v30, v31, v32) + 2938)
          && (v33 = *(_QWORD *)(v29 + 3056)) != 0 )
        {
          v34 = v33 + 2928LL * i - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v35 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
              if ( v35 )
              {
                v36 = _InterlockedExchangeAdd(v35 + 220, 0xFFFFFFFF);
                v37 = *((_DWORD *)v35 + 221);
                v38 = *((_QWORD *)v35 + 111);
                v39 = 32LL * ((v36 - 1) & v37);
                *(_DWORD *)(v39 + v38) = 1044672615;
                *(_QWORD *)(v39 + v38 + 8) = 0LL;
                *(_QWORD *)(v39 + v38 + 16) = i;
                *(_QWORD *)(v39 + v38 + 24) = v34;
              }
            }
          }
        }
        else
        {
          v34 = 0LL;
        }
      }
      else
      {
        v34 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        if ( DeviceObject )
        {
          v40 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
          if ( v40 )
          {
            v41 = _InterlockedExchangeAdd(v40 + 220, 0xFFFFFFFF);
            v42 = *((_DWORD *)v40 + 221);
            v43 = *((_QWORD *)v40 + 111);
            v44 = 32LL * ((v41 - 1) & v42);
            *(_DWORD *)(v44 + v43) = 1467310448;
            *(_QWORD *)(v44 + v43 + 24) = i;
            *(_QWORD *)(v44 + v43 + 8) = 0LL;
            *(_QWORD *)(v44 + v43 + 16) = 0LL;
          }
        }
      }
      if ( v34 )
      {
        v45 = *(int *)(v34 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          if ( DeviceObject )
          {
            v46 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
            if ( v46 )
            {
              v47 = _InterlockedExchangeAdd(v46 + 220, 0xFFFFFFFF);
              v48 = *((_DWORD *)v46 + 221);
              v49 = *((_QWORD *)v46 + 111);
              v50 = 32LL * ((v47 - 1) & v48);
              *(_DWORD *)(v50 + v49) = 846553456;
              *(_QWORD *)(v50 + v49 + 24) = i;
              *(_QWORD *)(v50 + v49 + 8) = 0LL;
              *(_QWORD *)(v50 + v49 + 16) = v45;
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v34 + 520), Executive, 0, 0, 0LL);
      v51 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( DeviceObject )
        {
          v52 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
          if ( v52 )
          {
            v53 = _InterlockedExchangeAdd(v52 + 220, 0xFFFFFFFF);
            v54 = *((_DWORD *)v52 + 221);
            v55 = *((_QWORD *)v52 + 111);
            v56 = 32LL * ((v53 - 1) & v54);
            *(_DWORD *)(v56 + v55) = 1329877100;
            *(_QWORD *)(v56 + v55 + 16) = i;
            *(_QWORD *)(v56 + v55 + 8) = 0LL;
            *(_QWORD *)(v56 + v55 + 24) = 1348564304LL;
          }
        }
      }
      v58 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_140070600 = (__int64)&dword_140070608;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v61 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
          if ( v61 )
          {
            v62 = _InterlockedExchangeAdd(v61 + 220, 0xFFFFFFFF);
            v63 = *((_DWORD *)v61 + 221);
            v64 = *((_QWORD *)v61 + 111);
            v57 = 32LL * ((v62 - 1) & v63);
            *(_DWORD *)(v57 + v64) = 1413771367;
            *(_QWORD *)(v57 + v64 + 16) = i;
            *(_QWORD *)(v57 + v64 + 8) = 0LL;
            *(_QWORD *)(v57 + v64 + 24) = 0LL;
          }
        }
      }
      if ( i )
      {
        v65 = FdoExt(DeviceObject, v57, v59, v60);
        if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v66, v67, v68) + 2938) )
        {
          v69 = *(_QWORD *)(v65 + 3056);
          if ( v69 )
          {
            v70 = v69 + 2928LL * i - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              if ( DeviceObject )
              {
                v71 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
                if ( v71 )
                {
                  v72 = _InterlockedExchangeAdd(v71 + 220, 0xFFFFFFFF);
                  v73 = *((_DWORD *)v71 + 221);
                  v74 = *((_QWORD *)v71 + 111);
                  v75 = 32LL * ((v72 - 1) & v73);
                  *(_DWORD *)(v75 + v74) = 1044672615;
                  *(_QWORD *)(v75 + v74 + 8) = 0LL;
                  *(_QWORD *)(v75 + v74 + 16) = i;
                  *(_QWORD *)(v75 + v74 + 24) = v70;
                }
              }
            }
            if ( v70 )
            {
              v51 = *(_QWORD *)(v70 + 392);
              if ( v51 )
              {
                v76 = PdoExt(*(_QWORD *)(v70 + 392));
                Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                if ( Pool2 )
                {
                  *(_DWORD *)Pool2 = 1668571500;
                  *(_QWORD *)(Pool2 + 32) = v51;
                  *(_DWORD *)(Pool2 + 24) = 1348564304;
                  *(_QWORD *)(Pool2 + 40) = 0LL;
                  v78 = (_QWORD *)(Pool2 + 8);
                  v79 = *(_QWORD **)(v76 + 1280);
                  if ( *v79 != v76 + 1272 )
                    goto LABEL_97;
                  *v78 = v76 + 1272;
                  v78[1] = v79;
                  *v79 = v78;
                  *(_QWORD *)(v76 + 1280) = v78;
                }
                else
                {
                  ++*(_DWORD *)(v76 + 1288);
                }
              }
            }
          }
        }
      }
      qword_140070600 = 0LL;
      KeReleaseSpinLock(&HubG, v58);
      if ( v51 )
      {
        v81 = PdoExt(v51);
        KeWaitForSingleObject((PVOID)(v81 + 2896), Executive, 0, 0, 0LL);
        *(_DWORD *)(v81 + 1420) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v81 + 2896), 0, 0);
        if ( _bittest(&UsbhLogMask, 8u) )
        {
          if ( DeviceObject )
          {
            v82 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
            if ( v82 )
            {
              v83 = _InterlockedExchangeAdd(v82 + 220, 0xFFFFFFFF);
              v84 = *((_DWORD *)v82 + 221);
              v85 = *((_QWORD *)v82 + 111);
              v86 = 32LL * ((v83 - 1) & v84);
              *(_DWORD *)(v86 + v85) = 1329877109;
              *(_QWORD *)(v86 + v85 + 8) = 0LL;
              *(_QWORD *)(v86 + v85 + 16) = v51;
              *(_QWORD *)(v86 + v85 + 24) = 1348564304LL;
            }
          }
        }
        v87 = KeAcquireSpinLockRaiseToDpc(&HubG);
        qword_140070600 = (__int64)&dword_140070608;
        if ( _bittest(&UsbhLogMask, 8u) )
        {
          if ( DeviceObject )
          {
            v88 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
            if ( v88 )
            {
              v89 = _InterlockedExchangeAdd(v88 + 220, 0xFFFFFFFF);
              v90 = *((_DWORD *)v88 + 221);
              v91 = *((_QWORD *)v88 + 111);
              v92 = 32LL * ((v89 - 1) & v90);
              *(_DWORD *)(v92 + v91) = 1348891236;
              *(_QWORD *)(v92 + v91 + 8) = 0LL;
              *(_QWORD *)(v92 + v91 + 16) = v51;
              *(_QWORD *)(v92 + v91 + 24) = 1348564304LL;
            }
          }
        }
        v93 = PdoExt(v51);
        v94 = (_QWORD *)(v93 + 1272);
        v95 = *(_QWORD **)(v93 + 1272);
        if ( v95 == (_QWORD *)(v93 + 1272) )
          goto LABEL_84;
        do
        {
          v96 = v95 - 1;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( DeviceObject )
            {
              v97 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
              if ( v97 )
              {
                v98 = _InterlockedExchangeAdd(v97 + 220, 0xFFFFFFFF);
                v99 = *((_DWORD *)v97 + 221);
                v100 = *((_QWORD *)v97 + 111);
                v101 = 32LL * ((v98 - 1) & v99);
                *(_DWORD *)(v101 + v100) = 1064591724;
                *(_QWORD *)(v101 + v100 + 8) = 0LL;
                *(_QWORD *)(v101 + v100 + 16) = v93;
                *(_QWORD *)(v101 + v100 + 24) = 1348564304LL;
              }
            }
          }
          if ( *((_DWORD *)v96 + 6) == 1348564304 && !v96[5] )
            break;
          v95 = (_QWORD *)*v95;
          v96 = 0LL;
        }
        while ( v95 != v94 );
        if ( !v96 )
        {
LABEL_84:
          v105 = *(_DWORD *)(v93 + 1288);
          if ( v105 )
            *(_DWORD *)(v93 + 1288) = v105 - 1;
        }
        else
        {
          v102 = v96[1];
          if ( *(_QWORD **)(v102 + 8) != v96 + 1 || (v103 = (_QWORD *)v96[2], (_QWORD *)*v103 != v96 + 1) )
LABEL_97:
            __fastfail(3u);
          *v103 = v102;
          *(_QWORD *)(v102 + 8) = v103;
          ExFreePoolWithTag(v96, 0);
        }
        if ( (_QWORD *)*v94 == v94 && !*(_DWORD *)(v93 + 1288) )
          KeSetEvent((PRKEVENT)(v93 + 1296), 0, 0);
        qword_140070600 = 0LL;
        KeReleaseSpinLock(&HubG, v87);
      }
      UsbhQueuePauseChange((__int64)DeviceObject, i, a2, v80);
      UsbhPCE_Disable((__int64)DeviceObject, i, a2, v104);
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v34 + 520), 0, 0);
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      if ( DeviceObject )
      {
        v106 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v106 )
        {
          v107 = _InterlockedExchangeAdd(v106 + 220, 0xFFFFFFFF);
          v108 = *((_DWORD *)v106 + 221);
          v109 = *((_QWORD *)v106 + 111);
          v110 = 32LL * ((v107 - 1) & v108);
          *(_DWORD *)(v110 + v109) = 1047880048;
          *(_QWORD *)(v110 + v109 + 8) = 0LL;
          *(_QWORD *)(v110 + v109 + 16) = 0LL;
          *(_QWORD *)(v110 + v109 + 24) = 0LL;
        }
      }
    }
    return 0LL;
  }
}
