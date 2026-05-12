/*
 * XREFs of RaidUnitResetUnit @ 0x1400A90F8
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0quuu_EtwWriteTransfer @ 0x140098048 (McTemplateK0quuu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitResetUnit(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // r15
  int v4; // ebx
  __int64 v5; // r15
  __int64 Srb; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  NTSTATUS Status; // r15d
  __int64 v10; // rcx
  unsigned int LockArray_high; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // eax
  IRP *v15; // rax
  IRP *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // r10
  __int64 v21; // r9
  unsigned __int8 i; // al
  char v23; // di
  char v24; // r12
  __int64 v25; // rcx
  char v27; // [rsp+48h] [rbp-C0h] BYREF
  char v28; // [rsp+49h] [rbp-BFh] BYREF
  char v29; // [rsp+4Ah] [rbp-BEh] BYREF
  char v30; // [rsp+4Bh] [rbp-BDh] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v32[3]; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+90h] [rbp-78h]
  __int64 v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  int *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  char *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  char *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  char *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  char *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  _QWORD *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]

  *(_OWORD *)&v32[1] = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_DWORD **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 104);
  v31 = v4;
  if ( *v3 == 1314275652 )
  {
    v5 = (__int64)v3 + 274;
  }
  else if ( *v3 == 1094997074 )
  {
    v5 = (__int64)v3 + 482;
  }
  else
  {
    v5 = 98LL;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 32, *(_BYTE *)v5, 0);
  v8 = Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)v5 == 1 )
    {
      v10 = *(unsigned int *)(Srb + 52);
      *(_DWORD *)(Srb + 20) = 32;
      *(_BYTE *)(v10 + Srb + 8) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v10 + Srb + 9) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v10 + Srb + 10) = *(_BYTE *)(a1 + 106);
      *(_DWORD *)(Srb + 24) = 524560;
      v7 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v7 == 1094997074 && (*(_BYTE *)(v7 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 6232) + 8LL * LockArray_high));
        v12 = **(_QWORD **)(*(_QWORD *)(v7 + 6232) + 8LL * LockArray_high);
        *(_DWORD *)(v8 + 44) = HIDWORD(v12);
      }
      else
      {
        LODWORD(v12) = -1;
      }
      *(_DWORD *)(v8 + 32) = v12;
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_DWORD *)(v8 + 60) = 0;
      *(_QWORD *)(v8 + 80) = 0LL;
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v13 = *(_DWORD *)(a1 + 3388);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 1392);
        if ( v13 < 0x1E )
          v13 = 30;
      }
      *(_DWORD *)(v8 + 40) = v13;
    }
    else
    {
      *(_WORD *)Srb = 88;
      *(_BYTE *)(Srb + 2) = 32;
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(Srb + 7) = *(_BYTE *)(a1 + 106);
      *(_QWORD *)(Srb + 12) = 524560LL;
      *(_BYTE *)(Srb + 8) = -1;
      *(_QWORD *)(Srb + 24) = 0LL;
      *(_QWORD *)(Srb + 48) = 0LL;
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v14 = *(_DWORD *)(a1 + 3388);
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 1392);
        if ( v14 < 0x1E )
          v14 = 30;
      }
      *(_DWORD *)(v8 + 20) = v14;
    }
    v15 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, (_IO_STATUS_BLOCK *)&v32[1]);
    v16 = v15;
    if ( v15 )
    {
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v15);
      if ( Status >= 0 )
        Status = v16->IoStatus.Status;
      StorFreeSynchronousScsiRequest(v16);
      v19 = *(_QWORD *)(a1 + 24);
      v20 = MEMORY[0xFFFFF78000000014] - v2;
      LOBYTE(v21) = *(_BYTE *)(v8 + 3);
      if ( v19 )
      {
        for ( i = 0; i < 5u; ++i )
        {
          v17 = i;
          v18 = (__int64)TraceLoggingResetLatencyBuckets;
          if ( v20 <= TraceLoggingResetLatencyBuckets[i] )
          {
            v18 = 3LL * i;
            ++*(_DWORD *)(v19 + 12LL * i + 5156);
            if ( (v21 & 0x3F) == 1 )
              ++*(_DWORD *)(v19 + 12LL * i + 5160);
            else
              *(_BYTE *)(v19 + 12LL * i + 5164) = v21;
            break;
          }
        }
      }
      v23 = BYTE2(v31);
      v24 = BYTE1(v31);
      if ( (unsigned int)dword_140172178 > 5 )
      {
        v25 = *(_QWORD *)(a1 + 24);
        v35 = 16LL;
        v37 = 16LL;
        v34 = v25 + 5128;
        v36 = a1 + 2104;
        v31 = *(_DWORD *)(v25 + 56);
        v38 = &v31;
        v40 = &v27;
        v42 = &v28;
        v44 = &v29;
        v30 = *(_BYTE *)(v8 + 3);
        v46 = &v30;
        v48 = v32;
        v39 = 4LL;
        v27 = v4;
        v41 = 1LL;
        v28 = v24;
        v43 = 1LL;
        v29 = v23;
        v45 = 1LL;
        v47 = 1LL;
        v32[0] = v20;
        v49 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(v25, (unsigned __int8 *)dword_1401605DA, v18, v21, 0xAu, &v33);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        McTemplateK0quuu_EtwWriteTransfer(v17, v19, v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v24, v23);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
