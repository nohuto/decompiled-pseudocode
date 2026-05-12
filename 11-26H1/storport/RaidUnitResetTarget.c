/*
 * XREFs of RaidUnitResetTarget @ 0x1400A8D98
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0quu_EtwWriteTransfer @ 0x140097FC4 (McTemplateK0quu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitResetTarget(__int64 a1)
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
  __int64 v24; // rcx
  char v26; // [rsp+38h] [rbp-79h] BYREF
  char v27; // [rsp+39h] [rbp-78h] BYREF
  char v28; // [rsp+3Ah] [rbp-77h] BYREF
  int v29; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-71h] BYREF
  _IO_STATUS_BLOCK v31; // [rsp+48h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+58h] [rbp-59h] BYREF
  __int64 v33; // [rsp+78h] [rbp-39h]
  __int64 v34; // [rsp+80h] [rbp-31h]
  int *v35; // [rsp+88h] [rbp-29h]
  __int64 v36; // [rsp+90h] [rbp-21h]
  char *v37; // [rsp+98h] [rbp-19h]
  __int64 v38; // [rsp+A0h] [rbp-11h]
  char *v39; // [rsp+A8h] [rbp-9h]
  __int64 v40; // [rsp+B0h] [rbp-1h]
  char *v41; // [rsp+B8h] [rbp+7h]
  __int64 v42; // [rsp+C0h] [rbp+Fh]
  __int64 *v43; // [rsp+C8h] [rbp+17h]
  __int64 v44; // [rsp+D0h] [rbp+1Fh]

  v31 = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_DWORD **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 104);
  v29 = v4;
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
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 19, *(_BYTE *)v5, 0);
  v8 = Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)v5 == 1 )
    {
      v10 = *(unsigned int *)(Srb + 52);
      *(_DWORD *)(Srb + 20) = 19;
      *(_BYTE *)(v10 + Srb + 8) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v10 + Srb + 9) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v10 + Srb + 10) = 0;
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
      *(_BYTE *)(Srb + 2) = 19;
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(a1 + 105);
      *(_WORD *)(Srb + 7) = -256;
      *(_QWORD *)(Srb + 12) = 524560LL;
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
    v15 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, &v31);
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
            ++*(_DWORD *)(v19 + 12LL * i + 5216);
            if ( (v21 & 0x3F) == 1 )
              ++*(_DWORD *)(v19 + 12LL * i + 5220);
            else
              *(_BYTE *)(v19 + 12LL * i + 5224) = v21;
            break;
          }
        }
      }
      v23 = BYTE1(v29);
      if ( (unsigned int)dword_140172178 > 5 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v34 = 16LL;
        v33 = v24 + 5128;
        v29 = *(_DWORD *)(v24 + 56);
        v35 = &v29;
        v37 = &v26;
        v39 = &v27;
        v28 = *(_BYTE *)(v8 + 3);
        v41 = &v28;
        v43 = (__int64 *)&v30;
        v36 = 4LL;
        v26 = v4;
        v38 = 1LL;
        v27 = v23;
        v40 = 1LL;
        v42 = 1LL;
        v30 = v20;
        v44 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(8LL, (unsigned __int8 *)dword_1401606B9, v18, v21, 8u, &v32);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        McTemplateK0quu_EtwWriteTransfer(v17, v19, v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v23);
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
