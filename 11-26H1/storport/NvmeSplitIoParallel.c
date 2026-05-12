/*
 * XREFs of NvmeSplitIoParallel @ 0x14001EFF0
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     AllocateNewNVMeIoSplitContext @ 0x1401191E0 (AllocateNewNVMeIoSplitContext.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x140119C60 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     GetNVMeSGLBufferContext @ 0x140119E00 (GetNVMeSGLBufferContext.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeSplitIoParallel(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        union _SLIST_HEADER *a8,
        unsigned __int16 *a9,
        _BYTE *a10)
{
  __int64 v10; // rax
  __int64 v11; // r13
  PSLIST_ENTRY v12; // rbp
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  _SLIST_ENTRY *v17; // rcx
  char v18; // al
  unsigned __int64 v19; // r9
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  int v22; // ebx
  PSLIST_ENTRY v23; // rsi
  __int64 v24; // r14
  PSLIST_ENTRY NewNVMeIoSplitContext; // rax
  volatile signed __int32 *v26; // rbx
  int v27; // r8d
  __int64 v28; // r14
  unsigned int v29; // r14d
  unsigned int v30; // ebx
  _SLIST_ENTRY *v31; // r11
  int v32; // edi
  int v33; // ebp
  __int64 v34; // rcx
  unsigned int v35; // r9d
  int v36; // eax
  unsigned __int64 v37; // rdx
  __int16 v38; // r9
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // rcx
  char v42; // di
  __int64 v43; // r8
  __int64 v44; // rbx
  unsigned int v45; // edi
  __int64 NVMeSGLBufferContext; // rax
  __int64 v47; // rdx
  char v48; // al
  unsigned __int16 *v49; // rsi
  signed __int32 v50; // edx
  union _SLIST_HEADER *v51; // rbp
  unsigned int v52; // r9d
  unsigned int v53; // eax
  __int64 v54; // r13
  __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // rdi
  KIRQL v58; // al
  __int64 v59; // rbx
  __int64 v60; // rdi
  volatile signed __int32 *v61; // rcx
  unsigned __int32 v63; // eax
  unsigned int v64; // ecx
  struct _SLIST_ENTRY *Next; // rbx
  int v66; // [rsp+38h] [rbp-F0h]
  __int64 v67; // [rsp+40h] [rbp-E8h]
  int v68; // [rsp+48h] [rbp-E0h]
  char v69; // [rsp+60h] [rbp-C8h] BYREF
  char v70; // [rsp+61h] [rbp-C7h]
  unsigned int v71; // [rsp+64h] [rbp-C4h]
  unsigned int v72; // [rsp+68h] [rbp-C0h]
  unsigned int v73; // [rsp+6Ch] [rbp-BCh]
  __int16 v74[2]; // [rsp+70h] [rbp-B8h] BYREF
  int v75; // [rsp+74h] [rbp-B4h]
  __int64 v76; // [rsp+78h] [rbp-B0h]
  __int64 v77; // [rsp+80h] [rbp-A8h]
  __int64 v78; // [rsp+88h] [rbp-A0h]
  volatile signed __int32 *v79; // [rsp+90h] [rbp-98h]
  int v80; // [rsp+98h] [rbp-90h]
  int v81; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-80h]
  __int64 v83; // [rsp+B0h] [rbp-78h]
  _SLIST_ENTRY *v84; // [rsp+B8h] [rbp-70h]
  __int64 v85; // [rsp+C0h] [rbp-68h]
  volatile signed __int32 *v86; // [rsp+C8h] [rbp-60h]
  __int64 v87[3]; // [rsp+D0h] [rbp-58h] BYREF
  int v92; // [rsp+150h] [rbp+28h]
  KIRQL v93; // [rsp+160h] [rbp+38h]

  v10 = *(_QWORD *)(a2 + 8);
  v11 = a1;
  v12 = 0LL;
  v83 = *(_QWORD *)(a2 + 184);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_DWORD *)(a1 + 420);
  v69 = 0;
  v81 = 0;
  v87[0] = 0LL;
  v74[0] = 0;
  v15 = HIDWORD(*(_QWORD *)(v13 + 136));
  LOBYTE(v15) = v15 & 1;
  v16 = a4;
  v76 = v15;
  v85 = *(unsigned int *)(v10 + 44);
  v17 = (_SLIST_ENTRY *)(*(_QWORD *)(v10 + 32) + v85);
  v77 = a6;
  v70 = 0;
  v71 = -1073741823;
  v80 = v14;
  v72 = 0;
  v78 = a5;
  v73 = a4;
  v75 = 0;
  v84 = v17;
  if ( a10 )
  {
    *a10 = 0;
    v13 = *(_QWORD *)(v11 + 16);
  }
  if ( v14 )
  {
    v18 = *(_BYTE *)(v11 + 419);
    v19 = *(unsigned int *)(v11 + 420);
    v77 = v19;
    if ( v18 )
      v20 = (v16 >> v18)
          + ((((unsigned int)v16 & ((_DWORD)v19 - 1))
            - 1LL
            + (unsigned __int64)(((_DWORD)v19 - 1) & (unsigned int)a5)
            + v77) >> v18);
    else
      v20 = ((unsigned int)(v16 % v19) + v19 + (unsigned int)(a5 % v19) - 1LL) / v19 + v16 / v19;
  }
  else
  {
    v20 = a4 / a6;
    if ( a4 % a6 )
      ++v20;
  }
  v21 = a7;
  v22 = 0;
  v23 = 0LL;
  v24 = 8LL * a7;
  do
  {
    NewNVMeIoSplitContext = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v24 + *(_QWORD *)(v13 + 888)));
    if ( !NewNVMeIoSplitContext )
    {
      NewNVMeIoSplitContext = (PSLIST_ENTRY)AllocateNewNVMeIoSplitContext(v13, a7);
      if ( !NewNVMeIoSplitContext )
      {
        if ( v23 )
        {
          do
          {
            Next = v23[6].Next;
            *((_QWORD *)&v23[5].Next + 1) = 0LL;
            *((_DWORD *)&v23[6].Next + 3) = 0;
            *((_DWORD *)&v23[6].Next + 2) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v24 + *(_QWORD *)(v13 + 888)), v23);
            v23 = Next;
          }
          while ( Next );
        }
        NvmeNamespaceQueueIo(a1, a2, a7);
        return 2147483665LL;
      }
    }
    if ( v23 )
      v12[6].Next = NewNVMeIoSplitContext;
    else
      v23 = NewNVMeIoSplitContext;
    ++v22;
    v12 = NewNVMeIoSplitContext;
  }
  while ( v22 != v20 );
  NewNVMeIoSplitContext[6].Next = 0LL;
  v26 = (volatile signed __int32 *)&v23[7].Next + 1;
  HIDWORD(v23[7].Next) = 0;
  *((_DWORD *)&v23[6].Next + 3) = 0;
  v27 = 0;
  v79 = (volatile signed __int32 *)&v23[7].Next + 1;
  v28 = (__int64)v23;
  v86 = (volatile signed __int32 *)&v23[7];
  LODWORD(v23[7].Next) = 0;
  LODWORD(v23[3].Next) = a4;
  *((_WORD *)&v23[7].Next + 4) = 0;
  if ( v20 )
  {
    v29 = 0;
    v30 = v77;
    v31 = v84;
    v32 = v80;
    v33 = v85;
    v82 = (__int64)v23;
    while ( 1 )
    {
      v34 = v78;
      *((_DWORD *)&v23[6].Next + 2) = 1;
      LODWORD(v23[7].Next) = 0;
      v35 = v73 - v29;
      LOWORD(v23[2].Next) = v20;
      v36 = v75;
      WORD1(v23[2].Next) = v27;
      *((_QWORD *)&v23[1].Next + 1) = a2;
      v23[1].Next = (_SLIST_ENTRY *)v11;
      LODWORD(v23[3].Next) = a4;
      v73 = v35;
      HIDWORD(v23[2].Next) = v35;
      v78 = v29 + v34;
      *((_QWORD *)&v23[2].Next + 1) = v78;
      *((_DWORD *)&v23[3].Next + 2) = v33;
      *((_DWORD *)&v23[3].Next + 3) = v36;
      v23[5].Next = v31;
      if ( v27 )
        goto LABEL_24;
      if ( v32 && (v37 = a5 % v30) != 0 )
      {
        v29 = v30;
        if ( v30 >= v30 - v37 )
          v29 = v30 - v37;
      }
      else
      {
LABEL_24:
        v29 = v35;
        if ( v30 < v35 )
          v29 = v30;
      }
      HIDWORD(v23[3].Next) = v29;
      if ( ++v27 >= v20 )
        break;
      v38 = v33;
      v31 = (_SLIST_ENTRY *)((char *)v31 + v29);
      if ( (v33 & 0xFFF) != 0 )
      {
        v39 = v29 + v33;
        if ( v29 > 4096 - v33 )
          v39 &= 0xFFFu;
        v33 = v39;
      }
      else
      {
        v33 = v29 & 0xFFF;
      }
      v23 = v23[6].Next;
      v40 = ((v29 + (unsigned __int64)(v38 & 0xFFF) + 4095) >> 12) + v75 - 1;
      if ( (v33 & 0xFFF) == 0 )
        v40 = ((v29 + (unsigned __int64)(v38 & 0xFFF) + 4095) >> 12) + v75;
      v75 = v40;
    }
    v21 = a7;
    v28 = v82;
    v26 = v79;
  }
  v41 = v83;
  v42 = v76;
  v43 = a2;
  *(_QWORD *)(v28 + 72) = *(_QWORD *)(v83 + 24);
  _InterlockedExchange64((volatile __int64 *)(v41 + 24), v28);
  *(_QWORD *)(v28 + 64) = *(_QWORD *)(v41 + 8);
  _InterlockedExchange64((volatile __int64 *)(v41 + 8), 0x8765432100000003uLL);
  if ( !v42 )
  {
    v44 = v28;
    v45 = 0;
    while ( v45 < v20 )
    {
      NVMeSGLBufferContext = GetNVMeSGLBufferContext(*(_QWORD *)(v11 + 16), v21, v43);
      v47 = NVMeSGLBufferContext;
      if ( !NVMeSGLBufferContext )
      {
        v49 = a9;
        v50 = -1073741670;
        v51 = a8;
        v42 = v76;
        v52 = v72;
        v71 = -1073741670;
        goto LABEL_68;
      }
      v43 = a2;
      *(_QWORD *)(NVMeSGLBufferContext + 40) = a2;
      v48 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
      *(_QWORD *)(v47 + 32) = v11;
      *(_BYTE *)(v47 + 126) = v48 | (a3 != 0) | 2;
      ++v45;
      *(_QWORD *)(v47 + 96) = *(_QWORD *)(v44 + 40);
      *(_QWORD *)(v47 + 104) = 0LL;
      *(_DWORD *)(v47 + 112) = 0;
      *(_DWORD *)(v47 + 116) = *(_DWORD *)(v44 + 52);
      *(_QWORD *)(v47 + 64) = 0LL;
      *(_QWORD *)(v47 + 72) = 0LL;
      *(_QWORD *)(v47 + 80) = *(_QWORD *)(v44 + 80);
      *(_QWORD *)(v47 + 88) = v44;
      *(_QWORD *)(v44 + 88) = v47;
      v44 = *(_QWORD *)(v44 + 96);
    }
    v26 = v79;
    v42 = v76;
  }
  v49 = a9;
  v53 = 0;
  v52 = v72;
  v54 = v28;
  v51 = a8;
  v50 = -1073741823;
  while ( 1 )
  {
    v73 = v53;
    if ( v53 >= v20 )
      goto LABEL_67;
    if ( v42 )
      break;
    v55 = *(_QWORD *)(v43 + 8);
    v83 = *(_QWORD *)(v54 + 88);
    v82 = v55;
    LODWORD(v55) = *(_DWORD *)(v83 + 116);
    v56 = *(unsigned __int16 *)(v83 + 124);
    v57 = *(_QWORD *)(v83 + 16);
    v77 = *(_QWORD *)(v83 + 80);
    v92 = v55;
    v78 = *(_QWORD *)(a1 + 16);
    v58 = KfRaiseIrql(2u);
    v68 = v56;
    v59 = v83;
    v67 = v57;
    v60 = v82;
    LOBYTE(v66) = a3 == 0;
    v93 = v58;
    v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 128) + 1160LL) + 8LL) + 112LL))(
            *(_QWORD *)(*(_QWORD *)(v78 + 128) + 1160LL),
            *(_QWORD *)(*(_QWORD *)(v78 + 128) + 8LL),
            v82,
            v77,
            v92,
            NvmeContinueScatterGatherProcessIO,
            v83,
            v66,
            v67,
            v68);
    v50 = v71;
    if ( v71 == -1073741789 )
    {
      LOBYTE(v66) = a3 == 0;
      v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 128) + 1160LL) + 8LL) + 88LL))(
              *(_QWORD *)(*(_QWORD *)(v78 + 128) + 1160LL),
              *(_QWORD *)(*(_QWORD *)(v78 + 128) + 8LL),
              v60,
              v77,
              v92,
              NvmeContinueScatterGatherProcessIO,
              v59,
              v66);
      v71 = v50;
    }
    if ( v93 < 2u )
    {
      KeLowerIrql(v93);
      v50 = v71;
    }
    v26 = v79;
    v52 = v72;
    v42 = v76;
    if ( v50 < 0 )
    {
      v61 = v86;
      *(_DWORD *)(v54 + 112) = v50;
      _InterlockedExchange((volatile __int32 *)(v54 + 104), 5);
      _InterlockedCompareExchange(v61, v50, 0);
      LODWORD(v61) = *(unsigned __int16 *)(v28 + 32);
      if ( _InterlockedIncrement(v26) >= (int)v61 )
      {
        v69 = 1;
        goto LABEL_67;
      }
      v69 = 0;
      if ( !v52 )
        goto LABEL_54;
    }
    else
    {
      v50 = 259;
      v52 = v72 + 1;
      v71 = 259;
      ++v72;
    }
LABEL_65:
    v54 = *(_QWORD *)(v54 + 96);
    v53 = v73 + 1;
    v43 = a2;
  }
  v63 = NvmeSendSplitIo(
          v54,
          v21,
          (_DWORD)v51,
          (_DWORD)v49,
          (__int64)&v69,
          (__int64)v87,
          (__int64)&v81,
          (__int64)v74,
          v70);
  v71 = v63;
  v50 = v63;
  if ( v63 == 259 )
  {
    v49 = 0LL;
    v52 = v72 + 1;
    v51 = 0LL;
    ++v72;
    if ( a10 )
      *a10 = 1;
    v50 = v71;
    v70 = v52 % *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 1730LL) == 0;
    goto LABEL_65;
  }
  if ( v63 == -2147483631 )
  {
    v52 = v72 + 1;
    goto LABEL_67;
  }
  if ( v69 || (v52 = v72) == 0 )
  {
LABEL_54:
    v11 = a1;
    goto LABEL_55;
  }
  if ( *(unsigned __int16 *)(v28 + 32) - *(unsigned __int16 *)(v54 + 34) == 1 )
    goto LABEL_71;
  v64 = *(unsigned __int16 *)(v28 + 32) - *(unsigned __int16 *)(v54 + 34) - 1;
  if ( (int)(_InterlockedExchangeAdd(v26, v64) + v64) >= *(unsigned __int16 *)(v28 + 32) )
  {
    v69 = 1;
    goto LABEL_54;
  }
LABEL_67:
  v11 = a1;
LABEL_68:
  if ( !v69 && (v71 = v50, v52) )
  {
LABEL_71:
    if ( (int)(v50 + 0x80000000) >= 0 && v50 != -2147483631 )
    {
      v50 = 259;
      v71 = 259;
    }
  }
  else
  {
LABEL_55:
    FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(v11 + 16), v28);
    FreeNVMeChainedIoSplitContext(*(_QWORD *)(v11 + 16), v21, v28, a2);
    v50 = v71;
  }
  if ( !v42 && v50 == 259 && v49 )
  {
    ExpInterlockedPushEntrySList(v51 + 4, (PSLIST_ENTRY)(v51[2].Alignment + ((unsigned __int64)*v49 << 7)));
    return v71;
  }
  return (unsigned int)v50;
}
