/*
 * XREFs of NvmeAdapterConnectController @ 0x140197E74
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     FindNvmeAuthKeyById @ 0x140074F80 (FindNvmeAuthKeyById.c)
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 *     McTemplateK0qjzsdqq_EtwWriteTransfer @ 0x1400D1FF8 (McTemplateK0qjzsdqq_EtwWriteTransfer.c)
 *     McTemplateK0qjzsh_EtwWriteTransfer @ 0x1400D2120 (McTemplateK0qjzsh_EtwWriteTransfer.c)
 *     McTemplateK0qjzshq_EtwWriteTransfer @ 0x1400D2224 (McTemplateK0qjzshq_EtwWriteTransfer.c)
 *     NvmeAdapterConnectControllerInternal @ 0x1400D3D60 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterFindSubsystemPort @ 0x1400D5754 (NvmeAdapterFindSubsystemPort.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterConnectController(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int16 v8; // ax
  int NvmeHostNQN; // esi
  __int64 SubsystemPort; // rax
  __int64 v11; // r8
  __int64 v12; // r12
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  __int64 v17; // rcx
  const char *NvmeAuthKeyById; // rax
  int v19; // ecx
  const char *v20; // rax
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER v22; // rbx
  PIO_WORKITEM v23; // r15
  char v24; // cl
  int v25; // eax
  _QWORD *v26; // r15
  _QWORD *v27; // rcx
  _DWORD *v28; // r15
  PIO_WORKITEM v29; // rcx
  int v30; // edx
  __int64 v31; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // r9
  const EVENT_DESCRIPTOR *v38; // rdx
  __int64 v39; // rdx
  _BYTE *v40; // r9
  unsigned __int8 v41; // r15
  char v42; // r10
  char v43; // bl
  char v44; // r11
  char v45; // r12
  char *v46; // r12
  int v47; // ecx
  __int64 v48; // rax
  unsigned __int64 v49; // r13
  __int64 v50; // r8
  int v51; // ecx
  char v52; // r13
  char v53; // cl
  char v54; // r8
  char v55; // al
  char *v56; // r11
  unsigned int v57; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v60; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D0h]
  __int64 v62; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  char v65; // [rsp+60h] [rbp-A0h]
  char v66; // [rsp+60h] [rbp-A0h]
  char v67; // [rsp+61h] [rbp-9Fh]
  char v68; // [rsp+61h] [rbp-9Fh]
  char v69; // [rsp+62h] [rbp-9Eh]
  char v70[5]; // [rsp+63h] [rbp-9Dh] BYREF
  PIO_WORKITEM v71; // [rsp+68h] [rbp-98h]
  volatile signed __int32 *v72; // [rsp+70h] [rbp-90h]
  PIO_WORKITEM IoWorkItem; // [rsp+78h] [rbp-88h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp-80h] BYREF
  const char *v75; // [rsp+88h] [rbp-78h]
  _QWORD v76[4]; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_WORKITEM *v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  char v79; // [rsp+C0h] [rbp-40h]
  struct _KEVENT Event; // [rsp+C8h] [rbp-38h] BYREF
  GUID v81; // [rsp+E0h] [rbp-20h] BYREF
  char Str2[256]; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(v76, 0, 0x50uLL);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v65 = 0;
  v6 = 0LL;
  v70[0] = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v75 = 0LL;
  *(_QWORD *)&v81.Data1 = v4;
  v71 = 0LL;
  IoWorkItem = 0LL;
  v69 = 0;
  v72 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 608) )
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( !v7
      || *(_DWORD *)(v4 + 16) < 0x40u
      || *(_WORD *)v7 != 1
      || *(_WORD *)(v7 + 2) < 0x40u
      || (v8 = *(_WORD *)(v7 + 16), v8 != 0xFFFF) && v8 > 0xFFEFu )
    {
      NvmeHostNQN = -1073741811;
      goto LABEL_14;
    }
    if ( *(_DWORD *)(v4 + 8) < 0x20u )
    {
      NvmeHostNQN = -1073741789;
      goto LABEL_14;
    }
    SubsystemPort = NvmeAdapterFindSubsystemPort(a1, *(_QWORD *)(v7 + 8) ^ a1, 0, 0LL);
    v12 = SubsystemPort;
    if ( !SubsystemPort )
    {
      NvmeHostNQN = -1073741275;
      goto LABEL_14;
    }
    v17 = *(_QWORD *)(SubsystemPort + 32);
    v67 = 1;
    if ( *(_WORD *)(v7 + 16) == 0xFFFF )
    {
      if ( (v17 & 4) != 0 )
        goto LABEL_26;
    }
    else if ( (v17 & 4) == 0 )
    {
LABEL_26:
      if ( (v17 & 2) == 0 && (*(_WORD *)(v7 + 18) || *(_WORD *)(v7 + 20)) )
      {
        NvmeHostNQN = -1073741811;
LABEL_98:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 40));
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v7 + 56) )
      {
        NvmeHostNQN = GetNvmeHostNQN(0, Str2);
        if ( NvmeHostNQN < 0 )
          goto LABEL_98;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32, 1u);
        v69 = 1;
        NvmeAuthKeyById = (const char *)FindNvmeAuthKeyById(*(_DWORD *)(v7 + 56));
        v75 = NvmeAuthKeyById;
        v6 = (__int64)NvmeAuthKeyById;
        if ( !NvmeAuthKeyById )
          goto LABEL_35;
        if ( _strnicmp(NvmeAuthKeyById + 20, Str2, 0x100uLL) )
          goto LABEL_37;
        v19 = *(_DWORD *)(v7 + 60);
        if ( v19 )
        {
          v20 = (const char *)FindNvmeAuthKeyById(v19);
          v72 = (volatile signed __int32 *)v20;
          if ( !v20 )
          {
LABEL_35:
            NvmeHostNQN = -1073741275;
            goto LABEL_96;
          }
          if ( _strnicmp(v20 + 20, (const char *)(v12 + 60), 0x100uLL) )
          {
LABEL_37:
            NvmeHostNQN = -1073740007;
            goto LABEL_96;
          }
        }
      }
      if ( (byte_140173449 & 4) != 0 )
        McTemplateK0qjzsh_EtwWriteTransfer(
          v12 + 60,
          &EventNVMeoFConnectControllerStart,
          v11,
          *(_DWORD *)(a1 + 56),
          a1 + 1048,
          *(const wchar_t **)(a1 + 1032),
          (const char *)(v12 + 60),
          *(_WORD *)(v7 + 16));
      if ( UseQPCTime )
        v21 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v21.QuadPart = KeQueryUnbiasedInterruptTime();
      v22 = v21;
      if ( KeGetCurrentNodeNumber() == *(_DWORD *)(*(_QWORD *)(v12 + 24) + 16LL) )
      {
        v25 = NvmeAdapterConnectControllerInternal(v12, v7, v6, (__int64)v72, v70, (PVOID *)&IoWorkItem);
        v23 = IoWorkItem;
        NvmeHostNQN = v25;
        v24 = v70[0];
        v71 = IoWorkItem;
LABEL_56:
        if ( NvmeHostNQN >= 0 )
        {
          if ( v75 )
          {
            _InterlockedAdd((volatile signed __int32 *)v75 + 4, 1u);
            if ( v72 )
              _InterlockedAdd(v72 + 4, 1u);
          }
          if ( v24 )
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 632), 1u);
            v26 = (_QWORD *)((char *)v23 + 64);
            v27 = *(_QWORD **)(v12 + 616);
            if ( *v27 != v12 + 608 )
              __fastfail(3u);
            *v26 = v12 + 608;
            v26[1] = v27;
            *v27 = v26;
            *(_QWORD *)(v12 + 616) = v26;
            ++*(_DWORD *)(v12 + 624);
            ExReleaseResourceLite((PERESOURCE)(v12 + 632));
            KeLeaveCriticalRegion();
          }
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 40));
          v28 = *(_DWORD **)(a2 + 24);
          v67 = 0;
          memset_0(v28, 0, *(unsigned int *)(*(_QWORD *)&v81.Data1 + 8LL));
          v29 = v71;
          v30 = v28[1] | 1;
          v28[1] = v30;
          *v28 = 2097153;
          if ( (*((_BYTE *)v29 + 136) & 4) != 0 )
            v28[1] = v30 | 8;
          *((_QWORD *)v28 + 1) = (unsigned __int64)v29 ^ a1;
          *((_WORD *)v28 + 8) = *((_WORD *)v29 + 2);
          v28[5] = *((_DWORD *)v29 + 143);
          if ( *((_DWORD *)v29 + 143) == 1 )
          {
            *((_WORD *)v28 + 12) = *((_WORD *)v29 + 10);
            *((_WORD *)v28 + 13) = *((_WORD *)v29 + 4);
          }
          ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v29 + 69));
          v31 = *((unsigned __int16 *)v28 + 1);
          v23 = v71;
          *(_QWORD *)(a2 + 56) = v31;
        }
LABEL_69:
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( NvmeHostNQN < 0 )
        {
          if ( (byte_14017344A & 4) != 0 )
          {
            if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v22.QuadPart )
              v35 = PerformanceCounter.QuadPart - v22.QuadPart;
            else
              v35 = PerformanceCounter.QuadPart - v22.QuadPart - 1;
            if ( UseQPCTime )
            {
              v36 = 0LL;
              if ( PerformanceFrequency.QuadPart && v35 )
              {
                v37 = 1000 * (v35 % PerformanceFrequency.QuadPart);
                v35 = v37 / PerformanceFrequency.QuadPart + 1000 * (v35 / PerformanceFrequency.QuadPart);
                v36 = 10000 * (v37 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart + 10000 * v35;
              }
            }
            else
            {
              v36 = v35;
            }
            McTemplateK0qjzsdqq_EtwWriteTransfer(
              a1 + 1048,
              v36 / 0xA,
              v35,
              *(_DWORD *)(a1 + 56),
              a1 + 1048,
              *(const wchar_t **)(a1 + 1032),
              (const char *)(v12 + 60),
              NvmeHostNQN,
              v63,
              v36 / 0xA);
          }
        }
        else if ( (byte_14017344A & 2) != 0 )
        {
          if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v22.QuadPart )
            v33 = PerformanceCounter.QuadPart - v22.QuadPart;
          else
            v33 = PerformanceCounter.QuadPart - v22.QuadPart - 1;
          if ( UseQPCTime )
          {
            v34 = 0LL;
            if ( PerformanceFrequency.QuadPart && v33 )
              v34 = 10000
                  * (1000 * (v33 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart
                  + 10000
                  * (1000 * (v33 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                   + 1000 * (v33 / PerformanceFrequency.QuadPart));
          }
          else
          {
            v34 = v33;
          }
          McTemplateK0qjzshq_EtwWriteTransfer(
            v12 + 60,
            v34 / 0xA,
            a1 + 1048,
            *(_DWORD *)(a1 + 56),
            a1 + 1048,
            *(const wchar_t **)(a1 + 1032),
            (const char *)(v12 + 60),
            *((_WORD *)v23 + 2),
            v34 / 0xA);
        }
        if ( !v69 )
        {
LABEL_97:
          if ( !v67 )
            goto LABEL_14;
          goto LABEL_98;
        }
LABEL_96:
        ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
        KeLeaveCriticalRegion();
        goto LABEL_97;
      }
      IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( !IoWorkItem )
      {
        NvmeHostNQN = -1073741670;
        v23 = 0LL;
        goto LABEL_69;
      }
      v76[3] = v72;
      v76[0] = v12;
      v76[1] = v7;
      v76[2] = v6;
      v77 = 0LL;
      v78 = 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( (unsigned __int8)IoQueueWorkItemToNode(
                              IoWorkItem,
                              NvmeAdapterConnectControllerWorker,
                              1LL,
                              v76,
                              *(_DWORD *)(*(_QWORD *)(v12 + 24) + 16LL)) )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        NvmeHostNQN = v78;
        if ( (int)v78 >= 0 )
        {
          v23 = v77;
          v65 = v79;
          v71 = v77;
LABEL_54:
          IoFreeWorkItem(IoWorkItem);
          v24 = v65;
          goto LABEL_56;
        }
      }
      else
      {
        NvmeHostNQN = -1073741823;
      }
      v23 = 0LL;
      goto LABEL_54;
    }
    NvmeHostNQN = -1073741637;
    goto LABEL_98;
  }
  NvmeHostNQN = -1073741637;
LABEL_14:
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = NvmeHostNQN;
  if ( v13 )
    goto LABEL_156;
  v81 = 0LL;
  IoGetActivityIdIrp(a2, &v81);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_156;
    v38 = &EventNonReadWriteRequestComplete;
    goto LABEL_155;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_156;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v5 = *v16;
        LODWORD(v60) = *(_DWORD *)(a2 + 48);
        LODWORD(Timeout) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v81, a2, Timeout, v60);
      }
      goto LABEL_156;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_156;
    v38 = &EventPnpRequestComplete;
LABEL_155:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v38, &v81, a2, Timeout);
    goto LABEL_156;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_156;
  v39 = *(_QWORD *)(v15 + 8);
  v40 = 0LL;
  v66 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  if ( *(_BYTE *)(v39 + 2) != 40 )
  {
    v53 = *(_BYTE *)(v39 + 72);
    v40 = *(_BYTE **)(v39 + 32);
    v41 = *(_BYTE *)(v39 + 11);
    v52 = *(_BYTE *)(v39 + 4);
    if ( *(_BYTE *)(v39 + 2) )
      goto LABEL_156;
LABEL_130:
    LOBYTE(v14) = v53 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_156;
    v54 = *(_BYTE *)(v39 + 3);
    if ( v54 == 1 || !v40 || !v41 )
      goto LABEL_149;
    v55 = *v40 & 0x7F;
    if ( v55 == 114 || v55 == 115 )
    {
      v14 = (unsigned __int64)&v40[v41];
      LOBYTE(v39) = 0;
      if ( (unsigned __int64)(v40 + 8) > v14 )
        goto LABEL_147;
      v43 = v40[2];
      v42 = v40[1] & 0xF;
      v44 = v40[3];
    }
    else
    {
      v14 = (unsigned __int64)&v40[v41];
      LOBYTE(v39) = 0;
      if ( (unsigned __int64)(v40 + 8) > v14 )
        goto LABEL_147;
      v56 = v40 + 13;
      v42 = v40[2] & 0xF;
      v57 = v41;
      if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
        v57 = (unsigned __int8)v40[7] + 8;
      v14 = (unsigned __int64)&v40[v57];
      if ( (unsigned __int64)v56 <= v14 )
        v43 = v40[12];
      if ( (unsigned __int64)(v40 + 14) > v14 )
        v44 = 0;
      else
        v44 = *v56;
    }
    v39 = 1LL;
LABEL_147:
    if ( (_BYTE)v39 )
      v45 = 1;
LABEL_149:
    if ( byte_140173441 < 0 )
    {
      if ( !v45 )
      {
        v44 = 0;
        v43 = 0;
        v42 = 0;
      }
      LOBYTE(v64) = v44;
      LOBYTE(v63) = v43;
      LOBYTE(v62) = v42;
      LOBYTE(v61) = v52;
      LOBYTE(v60) = v54;
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v39, &v81, a2, Timeout, v60, v61, v62, v63, v64, a2);
    }
    goto LABEL_156;
  }
  v46 = 0LL;
  v68 = 0;
  if ( !*(_DWORD *)(v39 + 20) )
  {
    v47 = *(_DWORD *)(v39 + 56);
    v48 = 0LL;
    LODWORD(v71) = 0;
    LODWORD(v72) = v47;
    if ( v47 )
    {
      do
      {
        v14 = *(unsigned int *)(v39 + 4 * v48 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v49 = *(unsigned int *)(v39 + 16);
          if ( (unsigned int)v14 < (unsigned int)v49 )
          {
            v50 = (unsigned int)v14;
            v51 = *(_DWORD *)(v14 + v39) - 64;
            if ( v51 )
            {
              v14 = (unsigned int)(v51 - 1);
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 == 1 )
                {
                  v14 = v50 + 40;
                  if ( v50 + 40 <= v49 )
                  {
                    if ( *(_DWORD *)(v50 + v39 + 12) )
                      v46 = (char *)(v50 + v39 + 32);
                    v40 = *(_BYTE **)(v50 + v39 + 24);
LABEL_115:
                    v52 = *(_BYTE *)(v50 + v39 + 8);
                    v41 = *(_BYTE *)(v50 + v39 + 9);
                    goto LABEL_124;
                  }
                }
              }
              else
              {
                v14 = v50 + 56;
                if ( v50 + 56 <= v49 )
                {
                  v68 = 1;
                  if ( *(_BYTE *)(v50 + v39 + 10) )
                    v46 = (char *)(v50 + v39 + 24);
                  v40 = *(_BYTE **)(v50 + v39 + 16);
                  v41 = *(_BYTE *)(v50 + v39 + 9);
                  v66 = *(_BYTE *)(v50 + v39 + 8);
                }
              }
            }
            else
            {
              v14 = v50 + 40;
              if ( v50 + 40 <= v49 )
              {
                if ( *(_BYTE *)(v50 + v39 + 10) )
                  v46 = (char *)(v50 + v39 + 24);
                v40 = *(_BYTE **)(v50 + v39 + 16);
                goto LABEL_115;
              }
            }
            if ( v68 )
              break;
          }
        }
        v48 = (unsigned int)((_DWORD)v71 + 1);
        LODWORD(v71) = v48;
      }
      while ( (unsigned int)v48 < (unsigned int)v72 );
      v52 = v66;
LABEL_124:
      if ( v46 )
      {
        v53 = *v46;
        v45 = 0;
        goto LABEL_130;
      }
    }
  }
LABEL_156:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)NvmeHostNQN;
}
