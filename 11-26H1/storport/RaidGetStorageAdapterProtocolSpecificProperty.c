/*
 * XREFs of RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006C8EC
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1400095B0 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageAdapterProtocolSpecificProperty(__int64 a1, IRP *a2, __int64 *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v7; // rbp
  _IRP *MasterIrp; // rsi
  unsigned int Options; // edx
  unsigned __int64 Length; // r9
  int v11; // eax
  int v12; // edi
  unsigned int v13; // eax
  char v14; // bl
  unsigned int v15; // r8d
  __m128i v16; // xmm1
  _LIST_ENTRY ThreadListEntry; // xmm2
  __int128 v18; // xmm3
  _IO_STATUS_BLOCK IoStatus; // xmm0
  size_t v20; // r14
  _LIST_ENTRY *v21; // xmm0_8
  unsigned int v22; // ecx
  unsigned int SystemBuffer_high; // eax
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // rax
  __int64 v28; // [rsp+80h] [rbp-78h] BYREF
  _IO_STATUS_BLOCK v29; // [rsp+A0h] [rbp-58h]
  __int128 v30; // [rsp+B0h] [rbp-48h]
  unsigned int v31; // [rsp+108h] [rbp+10h] BYREF
  unsigned int *v32; // [rsp+110h] [rbp+18h] BYREF
  _LIST_ENTRY *Pointer; // [rsp+118h] [rbp+20h]

  memset_0(&v28, 0, 0x40uLL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v32 = 0LL;
  v31 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v11 = *(_DWORD *)&MasterIrp->Type;
  *a3 = 0LL;
  if ( v11 == 49 )
  {
    v13 = 48;
    v14 = 0;
    v15 = 48;
  }
  else
  {
    if ( v11 != 67 )
      return (unsigned int)-1073741585;
    v13 = 80;
    v14 = 1;
    v15 = 72;
  }
  if ( Options < v13 )
    return (unsigned int)-1073741585;
  if ( v14 )
  {
    if ( LODWORD(MasterIrp->MdlAddress) != 1 || HIDWORD(MasterIrp->MdlAddress) != 72 )
    {
      v12 = -1073741585;
      goto LABEL_35;
    }
    IoStatus = MasterIrp->IoStatus;
    v16 = *(__m128i *)&MasterIrp->Flags;
    ThreadListEntry = MasterIrp->ThreadListEntry;
    v18 = *(_OWORD *)&MasterIrp->RequestorMode;
    Pointer = (_LIST_ENTRY *)MasterIrp->IoStatus.Pointer;
  }
  else
  {
    v16 = *(__m128i *)&MasterIrp->MdlAddress;
    ThreadListEntry = *(_LIST_ENTRY *)&MasterIrp->AssociatedIrp.MasterIrp;
    v18 = v30;
    Pointer = MasterIrp->ThreadListEntry.Blink;
    v29.Pointer = Pointer;
    IoStatus = v29;
  }
  if ( !_mm_cvtsi128_si32(v16)
    || !v16.m128i_i32[1]
    || LODWORD(ThreadListEntry.Flink)
    && (LODWORD(ThreadListEntry.Flink) < (unsigned __int64)(v14 != 0 ? 0x18 : 0) + 40 || !HIDWORD(ThreadListEntry.Flink)) )
  {
    return (unsigned int)-1073741585;
  }
  if ( (unsigned int)Length >= v15 )
  {
    v20 = Length;
    if ( Length < LODWORD(ThreadListEntry.Flink) + ((unsigned __int64)ThreadListEntry.Flink >> 32) + 8 )
      return (unsigned int)-1073741585;
    v12 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, (__int64 *)&v32, &v31);
    if ( v12 < 0 )
    {
      v7 = v32;
    }
    else
    {
      v7 = v32;
      v12 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)v32, v31, 0LL, 0, 64, 0);
      if ( v12 >= 0 )
      {
        memset_0(MasterIrp, 0, v20);
        if ( v14 )
        {
          *(_DWORD *)&MasterIrp->Type = 1;
          *(_DWORD *)(&MasterIrp->Size + 1) = 72;
          *(__m128i *)&MasterIrp->MdlAddress = v16;
          *(_LIST_ENTRY *)&MasterIrp->AssociatedIrp.MasterIrp = ThreadListEntry;
          *(_IO_STATUS_BLOCK *)&MasterIrp->ThreadListEntry.Blink = IoStatus;
          *(_OWORD *)&MasterIrp->IoStatus.Information = v18;
        }
        else
        {
          *(__m128i *)&MasterIrp->MdlAddress = v16;
          *(_DWORD *)&MasterIrp->Type = 48;
          v21 = Pointer;
          *(_LIST_ENTRY *)&MasterIrp->AssociatedIrp.MasterIrp = ThreadListEntry;
          *(_DWORD *)(&MasterIrp->Size + 1) = 48;
          MasterIrp->ThreadListEntry.Blink = v21;
        }
        LODWORD(MasterIrp->ThreadListEntry.Flink) = v7[15];
        v22 = v7[14];
        if ( v22 )
        {
          SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
          if ( SystemBuffer_high >= v22 )
            SystemBuffer_high = v7[14];
          v24 = SystemBuffer_high;
          memmove(
            (char *)&MasterIrp->MdlAddress + (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
            (char *)v7 + v7[13] + 36,
            SystemBuffer_high);
          v25 = MasterIrp->AssociatedIrp.IrpCount + 8;
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v24;
          v26 = v24 + v25;
        }
        else
        {
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = 0;
          v26 = v14 != 0 ? 72LL : 48LL;
        }
        *a3 = v26;
      }
    }
  }
  else
  {
    if ( (unsigned int)Length < 8 )
      return (unsigned int)-1073741789;
    *(_DWORD *)&MasterIrp->Type = v14 != 0 ? 1 : 48;
    *(_DWORD *)(&MasterIrp->Size + 1) = v14 != 0 ? 72 : 48;
    v12 = 0;
    *a3 = 8LL;
  }
LABEL_35:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  return (unsigned int)v12;
}
