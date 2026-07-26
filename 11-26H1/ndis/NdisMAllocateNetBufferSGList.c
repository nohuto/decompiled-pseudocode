/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x14003A7D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     PplpLazyInitializeLookasideList @ 0x14003AEF0 (PplpLazyInitializeLookasideList.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x14003AFA0 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // r10
  char v7; // r13
  __int64 v8; // r14
  int v9; // ebp
  _QWORD *v11; // r9
  int v12; // eax
  unsigned int Number; // ebx
  unsigned int DataOffset; // ecx
  _MDL *MdlChain; // rdi
  ULONG i; // eax
  unsigned int DataLength; // eax
  char *v18; // r15
  unsigned __int16 *p_Reserved; // r12
  NDIS_STATUS v20; // r10d
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  struct _LOOKASIDE_LIST_EX *v25; // rcx
  PVOID v26; // rax
  char *v27; // r12
  __int64 v28; // r8
  __int64 v29; // rdx
  ULONG v30; // r12d
  void *v31; // rcx
  struct _MDL *Mdl; // rax
  PLOOKASIDE_LIST_EX v33; // r8
  char v34[8]; // [rsp+28h] [rbp-A0h]
  int v35; // [rsp+38h] [rbp-90h]
  int v36; // [rsp+38h] [rbp-90h]
  unsigned __int16 *P; // [rsp+60h] [rbp-68h]
  PVOID Pa; // [rsp+60h] [rbp-68h]
  _QWORD *v39; // [rsp+68h] [rbp-60h]
  _QWORD *v40; // [rsp+70h] [rbp-58h]
  unsigned __int16 *v41; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+80h] [rbp-48h]
  PVOID Entry; // [rsp+88h] [rbp-40h] BYREF
  struct _LOOKASIDE_LIST_EX *Lookasidea; // [rsp+D0h] [rbp+8h]
  PLOOKASIDE_LIST_EX Lookasideb; // [rsp+D0h] [rbp+8h]
  ULONG Length; // [rsp+E8h] [rbp+20h]
  signed int Lengtha; // [rsp+E8h] [rbp+20h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Flags & 1;
  v42 = v6;
  v8 = 0LL;
  LOWORD(v9) = 0;
  v11 = NdisMiniportDmaHandle;
  v12 = *(_DWORD *)(v6 + 48);
  Number = -1;
  if ( v12 || *(_DWORD *)(v6 + 80) )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v9 = *(_DWORD *)(v6 + 80);
    if ( !v8 )
      v8 = *(_QWORD *)(v6 + 40);
    if ( (v12 & 0x400) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v8 + ndisPcwPerCpuDataStride * Number + 80);
    }
    if ( (v9 & 0x400) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v8 + ndisPcwPerCpuDataStride * Number + 384) = __rdtsc();
    }
  }
  if ( *((_QWORD *)NdisMiniportDmaHandle + 2) )
    ndisBugCheckEx(0x28uLL, 3uLL, 0LL, 0LL);
  DataOffset = NetBuffer->DataOffset;
  MdlChain = NetBuffer->MdlChain;
  if ( !MdlChain )
    return -1073741823;
  for ( i = MdlChain->ByteCount; DataOffset >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    DataOffset -= i;
  }
  DataLength = NetBuffer->DataLength;
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
  Length = DataLength + DataOffset;
  if ( DataLength + DataOffset < DataLength )
    return -1073676268;
  v18 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
  p_Reserved = &NetBuffer->Reserved;
  if ( v7 )
    *p_Reserved |= 4u;
  v39 = v11 + 5;
  if ( !ScatterGatherListBuffer )
  {
    P = &NetBuffer->Reserved;
    v40 = v11 + 6;
LABEL_27:
    v24 = v11[10];
    v41 = &NetBuffer->Reserved;
    v25 = (struct _LOOKASIDE_LIST_EX *)(v24 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7) + 64);
    Entry = v25;
    if ( !LOBYTE(v25[1].L.Depth) )
    {
      PplpLazyInitializeLookasideList(v24, v25);
      v25 = (struct _LOOKASIDE_LIST_EX *)Entry;
      v41 = P;
    }
    v26 = ExAllocateFromLookasideListEx(v25);
    Entry = v26;
    if ( v26 )
    {
      *p_Reserved |= 1u;
      v27 = (char *)NdisMiniportDmaHandle;
      NetBuffer->NdisReserved[0] = v26;
      LOBYTE(v35) = v7;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, PVOID, _DWORD))(*(_QWORD *)(*v39 + 8LL) + 112LL))(
              *v39,
              *(_QWORD *)(v42 + 3824),
              MdlChain,
              v18,
              Length,
              *((_QWORD *)NdisMiniportDmaHandle + 6),
              Context,
              v35,
              v26,
              *((_DWORD *)NdisMiniportDmaHandle + 18));
      if ( v20 >= 0 )
        goto LABEL_11;
      NetBuffer->NdisReserved[0] = 0LL;
      *v41 &= ~1u;
      v28 = *((_QWORD *)NdisMiniportDmaHandle + 10);
      v39 = (char *)NdisMiniportDmaHandle + 40;
      v40 = (char *)NdisMiniportDmaHandle + 48;
      v29 = v28 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7) + 64;
      Lookasidea = (struct _LOOKASIDE_LIST_EX *)v29;
      if ( !*(_BYTE *)(v29 + 112) )
      {
        PplpLazyInitializeLookasideList(v28, v29);
        v39 = v27 + 40;
        v40 = v27 + 48;
      }
      ExFreeToLookasideListEx(Lookasidea, Entry);
      v41 = &NetBuffer->Reserved;
    }
    v30 = Length;
    LOBYTE(v35) = v7;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*v39 + 8LL)
                                                                                               + 88LL))(
            *v39,
            *(_QWORD *)(v42 + 3824),
            MdlChain,
            v18,
            Length,
            *v40,
            Context,
            v35);
    if ( v20 >= 0 )
      goto LABEL_11;
    Entry = 0LL;
    Lookasideb = 0LL;
    Pa = (PVOID)ExAllocatePool2(66LL, Length, 1735607374LL);
    v31 = Pa;
    if ( !Pa )
    {
      v20 = -1073741670;
      Lengtha = -1073741670;
      goto LABEL_49;
    }
    Mdl = IoAllocateMdl(Pa, Length, 0, 0, 0LL);
    Lookasideb = (PLOOKASIDE_LIST_EX)Mdl;
    if ( !Mdl )
    {
      v31 = Pa;
      v20 = -1073741670;
      Lengtha = -1073741670;
LABEL_50:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v34 = v20;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          3u,
          0x31u,
          (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
          *(_QWORD *)v34);
        v20 = Lengtha;
        Mdl = (struct _MDL *)Lookasideb;
        v31 = Pa;
      }
      if ( Mdl )
      {
        IoFreeMdl(Mdl);
        v20 = Lengtha;
        v31 = Pa;
      }
      if ( v31 )
      {
        ExFreePoolWithTag(v31, 0);
        v20 = Lengtha;
      }
      NetBuffer->NdisReserved[0] = 0LL;
      NetBuffer->Reserved &= ~2u;
      if ( v20 < 0 )
        NetBuffer->Reserved &= ~4u;
      goto LABEL_11;
    }
    MmBuildMdlForNonPagedPool(Mdl);
    v33 = Lookasideb;
    Lookasideb->L.ListHead.Alignment = 0LL;
    if ( v7 )
    {
      Lengtha = RtlCopyMdlToBuffer(MdlChain, 0LL, Pa, Length, (unsigned __int64 *)&Entry);
      v20 = Lengtha;
      if ( Lengtha < 0 )
      {
LABEL_39:
        v31 = Pa;
LABEL_49:
        Mdl = (struct _MDL *)Lookasideb;
        goto LABEL_50;
      }
      v33 = Lookasideb;
    }
    NetBuffer->NdisReserved[0] = v33;
    *v41 |= 2u;
    LOBYTE(v36) = v7;
    Lengtha = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PLOOKASIDE_LIST_EX, PVOID, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*v39 + 8LL) + 88LL))(
                *v39,
                *(_QWORD *)(v42 + 3824),
                v33,
                Pa,
                v30,
                *v40,
                Context,
                v36);
    v20 = Lengtha;
    if ( Lengtha >= 0 )
      goto LABEL_11;
    goto LABEL_39;
  }
  v40 = v11 + 6;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, _QWORD, PVOID, char, PVOID, ULONG))(*(_QWORD *)(v11[5] + 8LL) + 112LL))(
          v11[5],
          *(_QWORD *)(v6 + 3824),
          MdlChain,
          v18,
          DataLength + DataOffset,
          v11[6],
          Context,
          v7,
          ScatterGatherListBuffer,
          ScatterGatherListBufferSize);
  if ( v20 < 0 )
  {
    v11 = NdisMiniportDmaHandle;
    P = &NetBuffer->Reserved;
    goto LABEL_27;
  }
LABEL_11:
  if ( (v9 & 0x400) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v22 = v8 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v23 = __rdtsc();
    *(_QWORD *)(v22 + 184) += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - *(_QWORD *)(v22 + 384);
    *(_QWORD *)(v22 + 384) = 0LL;
  }
  return v20;
}
