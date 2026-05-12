/*
 * XREFs of NvmeControllerGetTelemetryLog @ 0x1400F4BE8
 * Callers:
 *     NvmeControllerGetDeviceInternalLogIoctl @ 0x1401A14B0 (NvmeControllerGetDeviceInternalLogIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1400E30C4 (BuildGetLogPageCommandForTelemetryLog.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerReuseExtendedCommand @ 0x14011FE74 (NvmeControllerReuseExtendedCommand.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeControllerGetTelemetryLog(
        union _SLIST_HEADER *a1,
        char a2,
        char a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned __int64 Alignment; // rax
  unsigned __int64 v6; // r15
  unsigned int v10; // r13d
  __int64 *ExtendedCommand; // rdi
  int v12; // ebx
  __int64 v13; // r8
  int DmaBuffer; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r14d
  unsigned int v17; // r14d
  _OWORD *Pool; // rax
  _BYTE *v19; // r15
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // r12d
  unsigned int v27; // r12d
  unsigned int v28; // r8d
  bool v29; // zf
  int v30; // r8d
  int v31; // r8d
  int v33; // [rsp+30h] [rbp-59h]
  int v34; // [rsp+30h] [rbp-59h]
  int v35; // [rsp+40h] [rbp-49h]
  int v36; // [rsp+40h] [rbp-49h]
  unsigned int v37; // [rsp+68h] [rbp-21h]
  __int64 v38; // [rsp+68h] [rbp-21h]
  __int128 v39; // [rsp+70h] [rbp-19h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-9h] BYREF
  int v41; // [rsp+E8h] [rbp+5Fh]

  Alignment = a1[8].Alignment;
  v6 = a1[37].Alignment;
  *(_OWORD *)Src = 0LL;
  v39 = 0LL;
  v29 = (*(_BYTE *)(v6 + 261) & 8) == 0;
  v10 = 0;
  v37 = *(_DWORD *)(Alignment + 200);
  ExtendedCommand = 0LL;
  *a4 = 0;
  *a5 = 0LL;
  if ( v29 )
  {
    v12 = -1073741637;
    goto LABEL_35;
  }
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
  {
LABEL_4:
    v12 = -1073741670;
    goto LABEL_35;
  }
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x200u, v13, (void **)&v39, (_QWORD *)&v39 + 1, 0);
  v15 = 0;
  v12 = DmaBuffer;
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
    *(_WORD *)(*ExtendedCommand + 4252) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160) = v39;
    *(_DWORD *)(*ExtendedCommand + 4248) = 512;
    LOBYTE(v15) = a2;
    BuildGetLogPageCommandForTelemetryLog(
      (__int64)a1,
      *ExtendedCommand + 4096,
      v15,
      0x200u,
      *((__int64 *)&v39 + 1),
      v33,
      0LL,
      v35,
      *ExtendedCommand,
      ExtendedCommand[1],
      1u);
    v12 = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
    if ( v12 >= 0 )
    {
      if ( a3 )
      {
        v16 = 512;
      }
      else
      {
        v17 = *(unsigned __int16 *)(v39 + 12);
        if ( (*(_BYTE *)(v6 + 261) & 0x40) != 0 && v17 <= *(_DWORD *)(v39 + 16) )
          v17 = *(_DWORD *)(v39 + 16);
        v16 = (v17 + 1) << 9;
      }
      Pool = (_OWORD *)RaidAllocatePool(64LL, v16, 1280205138LL, 0LL);
      v19 = Pool;
      if ( !Pool )
        goto LABEL_4;
      v20 = (_OWORD *)v39;
      v21 = 4LL;
      do
      {
        *Pool = *v20;
        Pool[1] = v20[1];
        Pool[2] = v20[2];
        Pool[3] = v20[3];
        Pool[4] = v20[4];
        Pool[5] = v20[5];
        Pool[6] = v20[6];
        Pool += 8;
        v22 = v20[7];
        v20 += 8;
        *(Pool - 1) = v22;
        --v21;
      }
      while ( v21 );
      if ( !a3 )
      {
        v10 = v37;
        v41 = 512;
        if ( v16 - 512 < v37 )
          v10 = v16 - 512;
        v12 = NvmeAllocateDmaBuffer((__int64)a1, v10, 128LL, Src, &Src[1], 0);
        if ( v12 < 0 )
          goto LABEL_33;
        v23 = 512;
        while ( 1 )
        {
          v24 = *ExtendedCommand;
          if ( v23 >= v16 )
            break;
          v25 = v23;
          v38 = v23;
          v26 = v10;
          if ( v16 - v23 < v10 )
            v26 = v16 - v23;
          *(void **)(v24 + 4160) = Src[0];
          v27 = v26 & 0xFFFFFE00;
          *(void **)(*ExtendedCommand + 4168) = Src[1];
          *(_DWORD *)(*ExtendedCommand + 4248) = v27;
          LOBYTE(v25) = a2;
          BuildGetLogPageCommandForTelemetryLog(
            (__int64)a1,
            *ExtendedCommand + 4096,
            v25,
            v27,
            (__int64)Src[1],
            v34,
            v23,
            v36,
            *ExtendedCommand,
            ExtendedCommand[1],
            1u);
          v12 = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
          if ( v12 < 0 )
            goto LABEL_33;
          NvmeControllerReuseExtendedCommand(a1, ExtendedCommand);
          memmove(&v19[v38], Src[0], v27);
          v23 = v27 + v41;
          v41 += v27;
        }
        v28 = 512;
        *(_QWORD *)(v24 + 4160) = v39;
        *(_QWORD *)(*ExtendedCommand + 4168) = *((_QWORD *)&v39 + 1);
        *(_DWORD *)(*ExtendedCommand + 4248) = 512;
        LOBYTE(v28) = a2;
        BuildGetLogPageCommandForTelemetryLog(
          (__int64)a1,
          *ExtendedCommand + 4096,
          v28,
          0x200u,
          *((__int64 *)&v39 + 1),
          v34,
          0LL,
          v36,
          *ExtendedCommand,
          ExtendedCommand[1],
          0);
        v12 = NvmeControllerProcessCommandSync(a1, (__int64)ExtendedCommand);
        if ( v12 < 0 )
          goto LABEL_33;
        if ( !*(_BYTE *)(v39 + 382)
          || (!a2 ? (v29 = *(_BYTE *)(v39 + 383) == v19[383]) : (v29 = *(_BYTE *)(v39 + 381) == v19[381]), !v29) )
        {
          v12 = 304;
LABEL_33:
          ExFreePoolWithTag(v19, 0x4C4E6152u);
          goto LABEL_35;
        }
      }
      *a4 = v16;
      *a5 = v19;
    }
  }
LABEL_35:
  NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 512, v30, v39, *((__int64 *)&v39 + 1));
  NvmeFreeDmaBuffer((_DWORD)a1, v10, v31, Src[0], (__int64)Src[1]);
  return (unsigned int)v12;
}
