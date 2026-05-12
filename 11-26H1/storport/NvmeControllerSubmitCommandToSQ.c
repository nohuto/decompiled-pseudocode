/*
 * XREFs of NvmeControllerSubmitCommandToSQ @ 0x140043110
 * Callers:
 *     NvmeControllerSendNonReadWriteCommand @ 0x14004CB10 (NvmeControllerSendNonReadWriteCommand.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 *     NvmeStartIoPolling @ 0x14011E230 (NvmeStartIoPolling.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerSubmitCommandToSQ(
        PVOID SystemArgument2,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  bool v7; // r12
  __int16 v9; // r14
  int v10; // r13d
  signed __int16 v11; // bp
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ebp
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int16 Next_high; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  char DepthSList; // al
  bool v25; // zf
  union _SLIST_HEADER *v26; // rcx
  PSLIST_ENTRY v27; // r9
  unsigned int v28; // r10d
  int v29; // r8d
  signed __int16 v30; // dx
  char v31; // al
  PSLIST_ENTRY v32; // r9
  unsigned int v33; // r10d
  int v34; // r8d
  signed __int16 v35; // dx
  __int64 v36; // r8
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rdi
  PSLIST_ENTRY v41; // r10
  unsigned int v42; // r9d
  int v43; // r8d
  signed __int16 v44; // dx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rax
  int v48; // ebp
  __int64 v49; // rax
  _DWORD *v50; // rcx
  _OWORD *v51; // rdx
  _OWORD *v52; // rcx
  char v53; // r8
  __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // rcx
  __int16 v57; // bp
  __int64 v58; // rdx
  unsigned int v59; // r9d
  __int64 v60; // rcx
  unsigned int v61; // edx
  __int64 v62; // rdi
  signed __int32 v63; // r8d
  _QWORD *v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rax
  signed __int32 v68[8]; // [rsp+0h] [rbp-138h] BYREF
  unsigned int v69; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+A4h] [rbp-94h]
  unsigned int v71; // [rsp+A8h] [rbp-90h]
  int v72; // [rsp+ACh] [rbp-8Ch]
  int v73; // [rsp+B0h] [rbp-88h]
  __int64 v74; // [rsp+B8h] [rbp-80h]
  __int128 v75; // [rsp+C0h] [rbp-78h]
  KIRQL v76; // [rsp+140h] [rbp+8h]
  char v77; // [rsp+148h] [rbp+10h]
  unsigned __int64 v78; // [rsp+150h] [rbp+18h]

  v7 = 0;
  HIBYTE(v9) = 0;
  v69 = 0;
  LOWORD(v10) = 0;
  v11 = 0;
  v77 = *((_BYTE *)SystemArgument2 + 1728);
  v73 = a2[6] & 4;
  v76 = KfRaiseIrql(2u);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 128));
  if ( **(_QWORD **)(*(_QWORD *)(a3 + 88) + 1288LL) == 1LL )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v12 = *(_QWORD *)(a3 + 88);
    if ( *a2 )
    {
      v13 = *(_QWORD *)(*a2 + 4184);
      if ( v13 )
        *(_BYTE *)(*(_QWORD *)(v13 + 184) + 3LL) |= 1u;
    }
    v14 = *(_DWORD *)(*a2 + 4256) & 1;
    StorPushRequestToDeviceQueue(*(_QWORD *)(v12 + 1024), a4, a2);
    _InterlockedOr(v68, 0);
    if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(v12 + 1024) + 8LL * a4 + 24), 1, 0) )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 956));
    if ( (_BYTE)v14 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( a5 )
  {
    v16 = *(_DWORD *)(a3 + 124);
    while ( 1 )
    {
      v10 = *(unsigned __int16 *)(a3 + 142);
      v11 = 0;
      if ( (unsigned __int16)(v10 + 1) < v16 )
        v11 = v10 + 1;
      if ( v11 == *(_WORD *)(a3 + 140) )
        break;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v11, v10) == v10 )
      {
        Next_high = *a5;
        goto LABEL_17;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a3 + 64));
    StorEtwNvmeControllerEvent(
      (_DWORD)SystemArgument2,
      1,
      2,
      (unsigned int)L"Failed to get free slot for non-read/write command",
      (__int64)L"SQ ID",
      *(_WORD *)(a3 + 136),
      (__int64)L"SQ head",
      *(_WORD *)(a3 + 140),
      (__int64)L"SQ tail",
      *(_WORD *)(a3 + 142),
      (__int64)L"Command ID",
      *a5,
      (__int64)L"IO SQ count",
      *((_WORD *)SystemArgument2 + 11),
      (__int64)L"IO CQ count",
      *((_WORD *)SystemArgument2 + 13),
      (__int64)L"Queue depth",
      *((_DWORD *)SystemArgument2 + 2),
      (__int64)L"Free command ID count",
      DepthSList);
    v15 = -1073741595;
    v7 = (*(_DWORD *)(*a2 + 4256) & 0x800) == 0;
  }
  else
  {
    v25 = (*(_DWORD *)(*a2 + 4256) & 1) == 0;
    v26 = (union _SLIST_HEADER *)(a3 + 64);
    v70 = *(_DWORD *)(a3 + 124);
    if ( v25 )
    {
      v32 = ExpInterlockedPopEntrySList(v26);
      if ( v32 )
      {
        _InterlockedOr(v68, 0);
        v33 = v70;
        while ( 1 )
        {
          v34 = *(unsigned __int16 *)(a3 + 142);
          v35 = 0;
          if ( (unsigned __int16)(v34 + 1) < v33 )
            v35 = v34 + 1;
          if ( v35 == *(_WORD *)(a3 + 140) )
            break;
          if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v35, v34) == v34 )
          {
            Next_high = HIWORD(v32[3].Next);
            LOWORD(v10) = v34;
            v11 = v35;
            v31 = 1;
            goto LABEL_52;
          }
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v32);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
      v36 = *(_QWORD *)(a3 + 88);
      v74 = v36;
      v37 = *(unsigned __int16 *)(v36 + 22);
      if ( v37 != 1 )
      {
        v38 = *(unsigned __int16 *)(a3 + 136);
        v72 = v38 - 1;
        v39 = v38 % v37;
        v70 = v39;
        do
        {
          if ( v39 >= *(unsigned __int16 *)(v36 + 22) )
            break;
          v40 = *(_QWORD *)(*(_QWORD *)(a3 + 88) + 728LL) + 192LL * v39;
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 128));
          v71 = *(_DWORD *)(v40 + 124);
          v41 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v40 + 64));
          if ( v41 )
          {
            _InterlockedOr(v68, 0);
            v42 = v71;
            while ( 1 )
            {
              v43 = *(unsigned __int16 *)(v40 + 142);
              v44 = 0;
              if ( (unsigned __int16)(v43 + 1) < v42 )
                v44 = v43 + 1;
              if ( v44 == *(_WORD *)(v40 + 140) )
                break;
              if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v40 + 142), v44, v43) == v43 )
              {
                Next_high = HIWORD(v41[3].Next);
                LOWORD(v10) = v43;
                v11 = v44;
                a3 = v40;
                v31 = 1;
                goto LABEL_52;
              }
            }
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v40 + 64), v41);
          }
          v36 = v74;
          v45 = v70 + 1;
          v46 = *(unsigned __int16 *)(v74 + 22);
          _InterlockedDecrement((volatile signed __int32 *)(v40 + 128));
          v39 = v45 % v46;
          v70 = v39;
        }
        while ( v39 != v72 );
      }
      v31 = 0;
    }
    else
    {
      v27 = ExpInterlockedPopEntrySList(v26);
      if ( v27 )
      {
        _InterlockedOr(v68, 0);
        v28 = v70;
        while ( 1 )
        {
          v29 = *(unsigned __int16 *)(a3 + 142);
          v30 = 0;
          if ( (unsigned __int16)(v29 + 1) < v28 )
            v30 = v29 + 1;
          if ( v30 == *(_WORD *)(a3 + 140) )
            break;
          if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v30, v29) == v29 )
          {
            Next_high = HIWORD(v27[3].Next);
            LOWORD(v10) = v29;
            v11 = v30;
            goto LABEL_17;
          }
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v27);
      }
      v31 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    }
    Next_high = 0;
LABEL_52:
    if ( !v31 )
    {
      v12 = *(_QWORD *)(a3 + 88);
      if ( *a2 )
      {
        v47 = *(_QWORD *)(*a2 + 4184);
        if ( v47 )
          *(_BYTE *)(*(_QWORD *)(v47 + 184) + 3LL) |= 1u;
      }
      v48 = *(_DWORD *)(*a2 + 4256) & 1;
      StorPushRequestToDeviceQueue(*(_QWORD *)(v12 + 1024), a4, a2);
      _InterlockedOr(v68, 0);
      if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(v12 + 1024) + 8LL * a4 + 24), 1, 0) )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 956));
      if ( (_BYTE)v48 )
        goto LABEL_9;
LABEL_8:
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 960));
LABEL_9:
      v15 = -2147483631;
      KeLowerIrql(v76);
      goto LABEL_110;
    }
LABEL_17:
    v18 = *a2;
    *((_DWORD *)a2 + 16) = a4;
    v19 = *(_QWORD *)(a3 + 32);
    v20 = *(_QWORD *)(v18 + 4184);
    LOWORD(v18) = *((_WORD *)a2 + 26);
    v21 = (unsigned __int64)Next_high << 7;
    v74 = v20;
    *(_WORD *)(v19 + v21 + 58) = v18;
    v22 = *(_QWORD *)(*a2 + 4216);
    if ( v22 )
      v23 = *(_DWORD *)(v22 + 56);
    else
      v23 = 0;
    *(_DWORD *)(*(_QWORD *)(a3 + 32) + v21 + 80) = v23;
    *(_QWORD *)(*(_QWORD *)(a3 + 32) + v21 + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 1288LL) + 40LL);
    _interlockedbittestandset((volatile signed __int32 *)(*a2 + 4256), 3u);
    *(_DWORD *)(*a2 + 4268) = 0;
    *(_QWORD *)(v21 + *(_QWORD *)(a3 + 32) + 24) = v20;
    *(_WORD *)(v21 + *(_QWORD *)(a3 + 32) + 56) = v10;
    *(_QWORD *)(v21 + *(_QWORD *)(a3 + 32) + 16) = 0LL;
    *(_WORD *)(v21 + *(_QWORD *)(a3 + 32) + 52) = a4;
    *(_DWORD *)(v21 + *(_QWORD *)(a3 + 32) + 48) = *(_DWORD *)(*a2 + 4248);
    *(_QWORD *)(v21 + *(_QWORD *)(a3 + 32) + 40) = 0LL;
    *(_QWORD *)(v21 + *(_QWORD *)(a3 + 32) + 32) = *(_QWORD *)(*a2 + 4192);
    *(_QWORD *)(v21 + *(_QWORD *)(a3 + 32) + 40) = *(_QWORD *)(*a2 + 4200);
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) = 0;
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 61) = 0;
    if ( (*(_DWORD *)(*a2 + 4256) & 0x20) != 0 )
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) = *(_BYTE *)(v21 + *(_QWORD *)(a3 + 32) + 60) | 2;
    if ( (*(_DWORD *)(*a2 + 4256) & 0x40) != 0 )
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) = *(_BYTE *)(v21 + *(_QWORD *)(a3 + 32) + 60) | 0x10;
    if ( (*(_DWORD *)(*a2 + 4256) & 0x100) != 0 )
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) = *(_BYTE *)(v21 + *(_QWORD *)(a3 + 32) + 60) | 0x20;
    if ( (*(_DWORD *)(*a2 + 4256) & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(*a2 + 4256) & 0x1000) != 0 )
      {
        v7 = 1;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a3 + 32) + v21 + 72) = a2;
        *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 61) = *(_BYTE *)(v21 + *(_QWORD *)(a3 + 32) + 61) | 1;
      }
    }
    v49 = *(_QWORD *)(a3 + 32);
    if ( !*(_WORD *)(v21 + v49 + 58) )
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) = *(_BYTE *)(v21 + v49 + 60) | 0x40;
    if ( (*(_DWORD *)(*a2 + 4256) & 0x10000) != 0 )
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 61) = *(_BYTE *)(v21 + *(_QWORD *)(a3 + 32) + 61) | 2;
    v50 = (_DWORD *)*a2;
    *((_WORD *)a2 + 27) = *(_WORD *)(a3 + 136);
    *((_DWORD *)a2 + 17) = v50[1024];
    *((_DWORD *)a2 + 18) = v50[1034];
    *((_DWORD *)a2 + 19) = v50[1035];
    a2[10] = *(_QWORD *)(v21 + *(_QWORD *)(a3 + 32) + 64);
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) = *(_BYTE *)(v21 + *(_QWORD *)(a3 + 32) + 60) | 4;
    *(_WORD *)(*a2 + 4098) = Next_high;
    v51 = (_OWORD *)*a2;
    v52 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v10);
    *v52 = *(_OWORD *)(*a2 + 4096);
    v52[1] = v51[257];
    v52[2] = v51[258];
    v52[3] = v51[259];
    *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v10 + 8) = Next_high;
    v53 = v77;
    if ( v77 == 1 )
    {
      v54 = *(_QWORD *)(a3 + 56);
      if ( v54 )
      {
        v78 = (unsigned __int64)(unsigned __int16)v10 << 6;
        memset_0((void *)(v78 + v54), 0, 0x40uLL);
        v20 = v74;
        *(_DWORD *)(v78 + *(_QWORD *)(a3 + 56)) = 1;
        *(_DWORD *)(*(_QWORD *)(a3 + 56) + v78 + 8) = *(unsigned __int16 *)(a3 + 136);
        *(_DWORD *)(*(_QWORD *)(a3 + 56) + v78 + 12) = (unsigned __int16)v10;
        *(_QWORD *)(*(_QWORD *)(a3 + 56) + v78 + 16) = *(_QWORD *)(*a2 + 4160);
        v53 = 1;
      }
    }
    if ( v20 )
      *(_BYTE *)(*(_QWORD *)(v20 + 184) + 3LL) |= 1u;
    _InterlockedOr(v68, 0);
    _interlockedbittestandset((volatile signed __int32 *)(*a2 + 4256), 0xEu);
    *(_BYTE *)(*(_QWORD *)(a3 + 32) + v21 + 60) |= 1u;
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v55 = v69 & 0xFFFF0000 | (unsigned __int16)(v10 + 1);
    v69 = v55;
    if ( (unsigned __int16)(v10 + 1) == *(_DWORD *)(a3 + 124) )
      v69 = v55 & 0xFFFF0000;
    if ( v73 && v7 )
      _InterlockedDecrement16((volatile signed __int16 *)(*a2 + 4264));
    _InterlockedOr(v68, 0);
    while ( *(_WORD *)(a3 + 142) == v11 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 132), 1, 0) )
      {
        while ( *(_DWORD *)(a3 + 128) )
          _InterlockedOr(v68, 0);
        if ( *(_WORD *)(a3 + 142) == v11 )
        {
          if ( v53 == 1 )
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(*((_QWORD *)SystemArgument2 + 16)
                                                                                     + 528LL))(
              *((_QWORD *)SystemArgument2 + 206) + 64LL,
              *(unsigned int *)(a3 + 16),
              4LL,
              0LL,
              &v69);
          }
          else
          {
            **(_DWORD **)(a3 + 16) = v69;
            _InterlockedOr(v68, 0);
          }
        }
        _InterlockedOr(v68, 0);
        _InterlockedExchange((volatile __int32 *)(a3 + 132), 0);
        if ( (*((_BYTE *)SystemArgument2 + 1360) & 4) != 0 )
        {
          v25 = *(_DWORD *)SystemArgument2 == 1314276178;
          v56 = *a2;
          v57 = *(_WORD *)(a3 + 136);
          WORD1(v75) = *(_WORD *)(a3 + 138);
          *((_QWORD *)&v75 + 1) = *(_QWORD *)(v56 + 4184);
          DWORD1(v75) = *(_DWORD *)(v56 + 4096);
          LOWORD(v75) = v57;
          if ( v25 )
          {
            v58 = *(_QWORD *)(*((_QWORD *)SystemArgument2 + 171) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
            v59 = *(_DWORD *)(v58 + 12);
            v60 = v58 + 64;
            _InterlockedOr(v68, 0);
            if ( v59 )
            {
              if ( v58 != -64 )
              {
                v61 = _InterlockedIncrement((volatile signed __int32 *)v58) % v59;
                v62 = v60 + ((unsigned __int64)v61 << 6);
                if ( (*((_DWORD *)SystemArgument2 + 334) & 1) != 0 )
                  v63 = _InterlockedIncrement((volatile signed __int32 *)SystemArgument2 + 352);
                else
                  v63 = v61;
                *(_DWORD *)(v62 + 4) = v63;
                v64 = (_QWORD *)(v62 + 8);
                *(_WORD *)v62 = 0;
                LOBYTE(v9) = v57 != 0;
                *(_WORD *)(v62 + 2) = v9;
                if ( (*((_DWORD *)SystemArgument2 + 334) & 2) != 0 )
                  KeQuerySystemTimePrecise(v64);
                else
                  *v64 = MEMORY[0xFFFFF78000000014];
                *(_OWORD *)(v62 + 16) = v75;
                *(_OWORD *)(v62 + 32) = 0LL;
              }
            }
          }
        }
        break;
      }
    }
    v15 = 259;
  }
  KeLowerIrql(v76);
  if ( v7 )
  {
    v65 = *((_QWORD *)SystemArgument2 + 16);
    v66 = *(_QWORD *)(v65 + 160);
    if ( *(_BYTE *)v66 == 1
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v66 + 16) + 8LL * a4), 0xFFFFFFFF) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v65 + 160) + 8LL), 0LL, 2LL);
    }
  }
LABEL_110:
  if ( **((_BYTE **)SystemArgument2 + 217) && *(_WORD *)(a3 + 136) )
    NvmeStartIoPolling(SystemArgument2);
  return v15;
}
