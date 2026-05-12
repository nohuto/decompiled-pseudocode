/*
 * XREFs of NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94
 * Callers:
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAdapterMapBuffers @ 0x1400D9798 (NvmeAdapterMapBuffers.c)
 *     MdlToNVMeCommandPrp @ 0x14010047C (MdlToNVMeCommandPrp.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeNamepspaceExecuteNvmeSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  bool v6; // zf
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // r13d
  __int64 v12; // rax
  void *v13; // r15
  int v14; // ebx
  const void *v15; // rdx
  union _SLIST_HEADER **v17; // r14
  __int64 ExtendedCommand; // rax
  __int64 *v19; // rsi
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  PHYSICAL_ADDRESS *v23; // rbx
  __int64 v24; // r9
  _OWORD *v25; // rax
  int v26; // ebx
  __int64 v27; // r15
  __int64 v28; // rdi
  int v29; // r12d
  __int64 v30; // r13
  KIRQL v31; // bp
  _OWORD *v32; // rax
  bool v33; // [rsp+38h] [rbp-60h]
  int v34; // [rsp+38h] [rbp-60h]
  char v36; // [rsp+A8h] [rbp+10h]
  bool v37; // [rsp+A8h] [rbp+10h]
  union _SLIST_HEADER *v38; // [rsp+B0h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(v5 + 2) != 40 )
    return (unsigned int)-1073741823;
  *(_BYTE *)(v2 + 3) |= 1u;
  v6 = *(_BYTE *)(v5 + 2) == 40;
  v7 = *(unsigned int *)(v5 + 120);
  *(_BYTE *)(v5 + 3) = 0;
  v8 = 60LL;
  if ( !v6 )
    v8 = 16LL;
  v9 = v7 + v5;
  v10 = (unsigned __int8)*(_DWORD *)(v7 + v5 + 16);
  v11 = *(_DWORD *)(v8 + v5);
  v12 = 64LL;
  if ( !v6 )
    v12 = 24LL;
  v13 = *(void **)(v12 + v5);
  v36 = *(_BYTE *)(v7 + v5 + 82) & 3;
  if ( v10 == 2 || v10 == 1 )
    return (unsigned int)-1073741595;
  if ( (*(_BYTE *)(v7 + v5 + 82) & 3) == 0 || v13 && v11 && *(_QWORD *)(a2 + 8) )
  {
    if ( DisableIEEE1667 )
    {
      if ( *(_BYTE *)(v7 + v5 + 80) != 1 )
        goto LABEL_25;
      if ( (unsigned int)(v10 - 129) <= 1 && *(_BYTE *)(v9 + 59) == 0xEE )
        return (unsigned int)-1073741637;
    }
    if ( *(_BYTE *)(v7 + v5 + 80) == 1 && v10 == 6 && !*(_BYTE *)(v9 + 56) )
    {
      if ( v13 )
      {
        if ( v11 >= 0x1000 )
        {
          v15 = *(const void **)(a1 + 176);
          if ( v15 )
          {
            memmove(v13, v15, 0x1000uLL);
            return 0LL;
          }
        }
      }
    }
LABEL_25:
    v17 = (union _SLIST_HEADER **)(a1 + 16);
    ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16));
    v19 = (__int64 *)ExtendedCommand;
    if ( !ExtendedCommand )
      return (unsigned int)-1073741670;
    *(_BYTE *)(a2 + 141) = -88;
    v20 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL);
    v21 = *(_QWORD *)ExtendedCommand;
    if ( *(_BYTE *)(v7 + v5 + 80) == 1 )
      v22 = v20 | 1;
    else
      v22 = v20 & 0xFFFFFFFE;
    *(_DWORD *)(v21 + 4256) = v22;
    *(_DWORD *)(*v19 + 4256) |= 0x20u;
    *(_DWORD *)(*v19 + 4256) ^= ((unsigned __int8)*(_DWORD *)(*v19 + 4256) ^ (unsigned __int8)(2 * v36)) & 2;
    *(_QWORD *)(*v19 + 4184) = a2;
    *(_QWORD *)(*v19 + 4192) = NvmeNamespaceExecuteNvmeSrbComplete;
    *(_QWORD *)(*v19 + 4200) = v19;
    *(_QWORD *)(*v19 + 4216) = a1;
    *(_QWORD *)(*v19 + 4232) = *v17;
    if ( (*(_DWORD *)(*v19 + 4256) & 2) != 0 )
    {
      *(_QWORD *)(*v19 + 4160) = v13;
      v23 = (PHYSICAL_ADDRESS *)*v19;
      v23[521] = MmGetPhysicalAddress(v13);
      *(_DWORD *)(*v19 + 4248) = v11;
      v24 = *v19;
      if ( ((*v17)[8].Region & 0x100000000LL) == 0 )
      {
        *(_DWORD *)(*v19 + 4256) = *(_DWORD *)(v24 + 4256) & 0xFFFFFDFF;
        v25 = (_OWORD *)*v19;
        v25[256] = *(_OWORD *)(v9 + 16);
        v25[257] = *(_OWORD *)(v9 + 32);
        v25[258] = *(_OWORD *)(v9 + 48);
        v25[259] = *(_OWORD *)(v9 + 64);
        v26 = *(_DWORD *)(*v19 + 4256);
        v27 = *(_QWORD *)(a2 + 8);
        v28 = v19[7];
        v29 = *(_DWORD *)(*v19 + 4248);
        v30 = *(_QWORD *)(*v19 + 4160);
        v38 = *v17;
        v31 = KfRaiseIrql(2u);
        v33 = (v26 & 0x200) != 0;
        v37 = v33;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64 *, bool, __int64, int))(*(_QWORD *)(*(_QWORD *)(v38[8].Alignment + 1160) + 8LL) + 112LL))(
                *(_QWORD *)(v38[8].Alignment + 1160),
                *(_QWORD *)(v38[8].Alignment + 8),
                v27,
                v30,
                v29,
                NvmeContinueScatterGatherProcessCommand,
                v19,
                v33,
                v28,
                584);
        if ( v14 == -1073741789 )
        {
          LOBYTE(v34) = v37;
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64 (__fastcall *)(), __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v38[8].Alignment + 1160) + 8LL) + 88LL))(
                  *(_QWORD *)(v38[8].Alignment + 1160),
                  *(_QWORD *)(v38[8].Alignment + 8),
                  v27,
                  v30,
                  v29,
                  NvmeContinueScatterGatherProcessCommand,
                  v19,
                  v34);
        }
        if ( v31 < 2u )
          KeLowerIrql(v31);
        if ( v14 >= 0 )
          v14 = 259;
LABEL_41:
        if ( v14 >= 0 )
          return (unsigned int)v14;
LABEL_42:
        _interlockedbittestandreset((volatile signed __int32 *)(*v19 + 4256), 3u);
        NvmeControllerReclaimExtendedCommand(*v17, (__int64)v19);
        return (unsigned int)v14;
      }
      v14 = MdlToNVMeCommandPrp(v9 + 16, v11, *(_DWORD **)(a2 + 8), (_QWORD *)v24, v19[1]);
      if ( v14 < 0 )
        goto LABEL_42;
    }
    v32 = (_OWORD *)*v19;
    v32[256] = *(_OWORD *)(v9 + 16);
    v32[257] = *(_OWORD *)(v9 + 32);
    v32[258] = *(_OWORD *)(v9 + 48);
    v32[259] = *(_OWORD *)(v9 + 64);
    NvmeAdapterMapBuffers((_DWORD *)(*v17)[8].Alignment, a2);
    v14 = NvmeControllerProcessCommand((__int64)*v17, v19);
    goto LABEL_41;
  }
  return (unsigned int)-1073741811;
}
