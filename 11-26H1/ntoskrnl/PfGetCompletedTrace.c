/*
 * XREFs of PfGetCompletedTrace @ 0x140A5CBD4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionRundownProtectionRelease @ 0x140447AD8 (PfpPartitionRundownProtectionRelease.c)
 *     PfFbBufferListFlushStandby @ 0x1404A5A18 (PfFbBufferListFlushStandby.c)
 *     PfTFreeTraceDump @ 0x1404DA0E8 (PfTFreeTraceDump.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     PfpTraceLogPfPartitionId @ 0x140602E4C (PfpTraceLogPfPartitionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfGetCompletedTrace(_WORD *a1, int a2, char a3, unsigned int *a4)
{
  __int64 v6; // rsi
  _DWORD *v7; // r13
  __int64 v8; // r9
  int v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int i; // eax
  _QWORD *v13; // r12
  _DWORD *v14; // r10
  _DWORD *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  size_t v20; // r8
  void *v21; // rdx
  char *v22; // rcx
  int v23; // eax
  int v26; // [rsp+34h] [rbp-104h]
  int v27; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-FCh] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-F8h]
  _QWORD v30[2]; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int *v31; // [rsp+58h] [rbp-E0h]
  _QWORD *v32; // [rsp+60h] [rbp-D8h]
  _DWORD *v33; // [rsp+68h] [rbp-D0h]
  __int64 v34; // [rsp+70h] [rbp-C8h]
  __int64 v35; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+90h] [rbp-A8h]
  __int64 v38; // [rsp+98h] [rbp-A0h]
  unsigned int *v39; // [rsp+A0h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR v40[2]; // [rsp+B0h] [rbp-88h] BYREF
  unsigned int *v41; // [rsp+D0h] [rbp-68h]
  __int64 v42; // [rsp+D8h] [rbp-60h]
  int *v43; // [rsp+E0h] [rbp-58h]
  __int64 v44; // [rsp+E8h] [rbp-50h]

  v31 = a4;
  LODWORD(Length) = a2;
  v39 = a4;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v26 = 0;
  v27 = 0;
  v6 = 0LL;
  v30[0] = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v28 = 0;
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 2) != 0 && (qword_140E073B0 & 2) == qword_140E073B0 )
  {
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)byte_140049A83, 0LL, 0LL, 2u, v40);
    a4 = v31;
  }
  if ( (unsigned int)Length < 0x18 )
  {
    *a4 = 24;
    v9 = -1073741789;
    v23 = 0;
  }
  else
  {
    if ( a3 )
    {
      v38 = 1LL;
      ProbeForRead(a1, 1uLL, 8u);
      RtlCopyFromUser(&v36, a1, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&v36, a1, 0x18uLL);
    }
    if ( (_WORD)v36 == 2 )
    {
      LOBYTE(v8) = a3;
      v9 = PfpPartitionFindByHandle(v30, &v35, v37, v8);
      v6 = v30[0];
      if ( v9 >= 0 )
      {
        v26 = 1;
        v30[1] = v30[0] + 624LL;
        while ( 1 )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v6 + 624));
          if ( !*(_DWORD *)(v6 + 616) )
            break;
          *(_DWORD *)(v6 + 616) = 0;
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 624));
          PfFbBufferListFlushStandby(v6, v6 + 288);
        }
        v10 = *(_DWORD *)(v6 + 600);
        v11 = *(_DWORD *)(v6 + 604);
        for ( i = 0; i < 2; ++i )
        {
          if ( i )
          {
            v13 = (_QWORD *)(v6 + 568);
            v14 = (_DWORD *)(v6 + 600);
          }
          else
          {
            v13 = (_QWORD *)(v6 + 584);
            v14 = (_DWORD *)(v6 + 608);
          }
          v33 = v14;
          v32 = v13;
          v15 = (_DWORD *)*v13;
          if ( (_QWORD *)*v13 != v13 )
          {
            v7 = (_DWORD *)*v13;
            v34 = *v13;
            v16 = v15[6] + 24;
            v28 = v16;
            if ( v16 > (unsigned int)Length )
            {
              *v31 = v16;
              v9 = -1073741789;
              goto LABEL_40;
            }
            v17 = *(_QWORD *)v15;
            if ( *((_QWORD **)v15 + 1) != v13 || *(_DWORD **)(v17 + 8) != v15 )
              __fastfail(3u);
            *v13 = v17;
            *(_QWORD *)(v17 + 8) = v13;
            --*v14;
            break;
          }
        }
        if ( v10 >= v11 && *(_DWORD *)(v6 + 600) < *(_DWORD *)(v6 + 604) )
        {
          PfTAccessTracingStart(v6, 2LL);
          KeSetEvent((PRKEVENT)(v6 + 736), 0, 0);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 624));
        v26 = 0;
        v27 = 0;
        if ( v7 )
        {
          if ( a3 )
          {
            ProbeForWrite(a1, (unsigned int)Length, 8u);
            RtlSetUserMemory(a1, 0, 0x18uLL);
          }
          else
          {
            RtlSetVolatileMemory(a1, 0, 0x18uLL);
          }
          if ( a3 )
            RtlWriteUShortToUser(a1, 2);
          else
            *a1 = 2;
          if ( a3 )
            RtlWriteUShortToUser(a1 + 1, 24);
          else
            a1[1] = 24;
          Length = stru_140E66D40.Padding[0];
          v18 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(stru_140E66D40.Padding[0])) << 8)
              + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)LODWORD(stru_140E66D40.Padding[0])) >> 24);
          if ( a3 )
            RtlWriteULong64ToUser((_QWORD *)a1 + 1, v18);
          else
            *((_QWORD *)a1 + 1) = v18;
          v19 = a1 + 8;
          if ( a3 )
            RtlWriteULong64ToUser(v19, v37);
          else
            *v19 = v37;
          v20 = (unsigned int)v7[6];
          v21 = v7 + 4;
          v22 = (char *)(a1 + 12);
          if ( a3 )
            RtlCopyToUser(v22, v21, v20);
          else
            RtlCopyVolatileMemory(v22, v21, v20);
          *v31 = v28;
          PfTFreeTraceDump(v6, v7);
          v9 = 0;
        }
        else
        {
          v9 = -2147483622;
        }
      }
    }
    else
    {
      v9 = -1073741735;
    }
LABEL_40:
    v23 = v26;
  }
  if ( v23 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 624));
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 2) != 0 && (qword_140E073B0 & 2) == qword_140E073B0 )
  {
    v28 = PfpTraceLogPfPartitionId((__int64 *)v6);
    v41 = &v28;
    v42 = 4LL;
    v27 = v9;
    v43 = &v27;
    v44 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&unk_140049A20, 0LL, 0LL, 4u, v40);
  }
  if ( v6 )
    PfpPartitionRundownProtectionRelease(v6);
  if ( v35 )
    PfpPartitionDereferenceParent(v35);
  return (unsigned int)v9;
}
