/*
 * XREFs of ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AD80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z @ 0x1401D7E34 (-ReadCurrentFile@CDriverStoreCopy@@QEAAJPEAX_KK@Z.c)
 *     MapGpadl @ 0x1402350F0 (MapGpadl.c)
 *     UnmapGpadl @ 0x1402352A0 (UnmapGpadl.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReadDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  union _LARGE_INTEGER *v4; // r13
  struct _KTHREAD **v5; // rdx
  ULONG *v6; // rsi
  LONG *p_HighPart; // r14
  _QWORD *v8; // r15
  LONG *v9; // rdx
  char *v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  PVOID MappedSystemVa; // rax
  _BYTE v14[24]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v15[88]; // [rsp+68h] [rbp-1h] BYREF
  int CurrentFile; // [rsp+D0h] [rbp+67h] BYREF
  PMDL MemoryDescriptorList; // [rsp+E8h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = (union _LARGE_INTEGER *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v4 )
    {
      v5 = (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 56LL);
      MemoryDescriptorList = 0LL;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, v5);
      v6 = (ULONG *)&v4[4];
      p_HighPart = &v4[4].HighPart;
      v8 = (_QWORD *)((char *)a1 + 96);
      if ( *(_QWORD *)(*((_QWORD *)a1 + 10) + 336LL) )
      {
        CurrentFile = MapGpadl(*v8, (unsigned int)*p_HighPart, *v6, &MemoryDescriptorList);
        if ( CurrentFile >= 0 )
        {
          v9 = &v4[4].HighPart;
          v10 = (char *)a1 + 96;
          if ( *v6 <= MemoryDescriptorList->ByteCount )
          {
            v11 = *v6;
            v12 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 336LL) + 1584LL);
            if ( v11 <= v12 && v4[3].QuadPart <= v12 - v11 )
            {
              if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
              {
                MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
              }
              else
              {
                MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
                v9 = &v4[4].HighPart;
                v10 = (char *)a1 + 96;
              }
              if ( MappedSystemVa )
              {
                CurrentFile = CDriverStoreCopy::ReadCurrentFile(
                                *(const WCHAR **)(*((_QWORD *)a1 + 10) + 336LL),
                                MappedSystemVa,
                                v4[3],
                                *v6);
              }
              else
              {
                CurrentFile = -1073741801;
                p_HighPart = v9;
                v8 = v10;
              }
            }
          }
        }
      }
      else
      {
        CurrentFile = -1073741811;
      }
      if ( MemoryDescriptorList )
        UnmapGpadl(*v8, (unsigned int)*p_HighPart, *v6, MemoryDescriptorList);
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &CurrentFile, 4u);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6040;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      6040LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return 0;
  }
}
