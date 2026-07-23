/*
 * XREFs of RawQueryFileSystemInformation @ 0x140805BB0
 * Callers:
 *     RawUserFsCtrl @ 0x140919C34 (RawUserFsCtrl.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14061A52C (Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RawPerformDevIoCtrl @ 0x140805964 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x140805B5C (RawComputeFileSystemInformationChecksum.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD2BD0 (IoBuildSynchronousFsdRequest.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  NTSTATUS Status; // ebx
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG v11; // r14d
  int v12; // ebx
  ULONG v13; // eax
  PVOID PoolWithTag; // rdi
  __int64 v15; // rsi
  PIRP v16; // rax
  ULONG v17; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  __int128 v21; // [rsp+78h] [rbp-1h] BYREF
  ULONG Length[2]; // [rsp+88h] [rbp+Fh]

  *(_QWORD *)Length = 0LL;
  v4 = *(unsigned int *)(a2 + 8);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v21 = 0LL;
  if ( (unsigned int)v4 >= 9 )
  {
    v7 = *(_QWORD **)(a1 + 24);
    memset_0(v7, 0, v4);
    Status = RawPerformDevIoCtrl(v8, *(struct _DEVICE_OBJECT **)(a3 + 192), v9, v10, &v21);
    if ( Status >= 0 )
    {
      v11 = Length[1];
      if ( Length[1] >= 0x18 )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(a3 + 192) + 152LL);
        if ( (unsigned int)Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline() )
        {
          v13 = v12 + v11;
          if ( v12 + v11 < v11 )
            return (unsigned int)-1073741811;
        }
        else
        {
          v13 = v11;
        }
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v13, 0x62574152u);
        if ( PoolWithTag )
        {
          if ( (unsigned int)Feature_RAW_Sector_Alignment_Fix__private_IsEnabledDeviceUsageNoInline() )
            v15 = -(__int64)(unsigned int)(v12 + 1) & ((unsigned __int64)PoolWithTag + (unsigned int)(v12 + 1) - 1);
          else
            v15 = (__int64)PoolWithTag;
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v16 = IoBuildSynchronousFsdRequest(
                  3u,
                  *(PDEVICE_OBJECT *)(a3 + 192),
                  (PVOID)v15,
                  v11,
                  0LL,
                  &Event,
                  &IoStatusBlock);
          if ( v16 )
          {
            v16->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            Status = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 192), v16);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status >= 0 )
            {
              if ( *(_DWORD *)(v15 + 16) == 1397904198
                && (v17 = *(unsigned __int16 *)(v15 + 20), v17 <= v11)
                && (unsigned __int16)v17 >= 0x18u
                && (unsigned __int16)RawComputeFileSystemInformationChecksum(v15) == *(_WORD *)(v15 + 22) )
              {
                *v7 = *(_QWORD *)(v15 + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
                Status = -1073741637;
              }
            }
          }
          else
          {
            Status = -1073741670;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)Status;
}
