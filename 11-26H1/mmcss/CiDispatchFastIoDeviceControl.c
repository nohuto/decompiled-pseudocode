/*
 * XREFs of CiDispatchFastIoDeviceControl @ 0x14000FA60
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerCommitPriority @ 0x1400014B0 (CiSchedulerCommitPriority.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1400025B0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerSetMultimediaMode @ 0x140002700 (CiSchedulerSetMultimediaMode.c)
 *     CiSchedulerTaskIndexYield @ 0x1400028B0 (CiSchedulerTaskIndexYield.c)
 *     RtlCopyFromUser @ 0x140004420 (RtlCopyFromUser.c)
 *     WPP_SF_dd @ 0x140004888 (WPP_SF_dd.c)
 *     CiSchedulerQueryTaskIndexDebugInformation @ 0x14000563C (CiSchedulerQueryTaskIndexDebugInformation.c)
 *     RtlCopyVolatileMemory @ 0x140005810 (RtlCopyVolatileMemory.c)
 *     RtlWriteULongToUser @ 0x14000D1F4 (RtlWriteULongToUser.c)
 *     CiThreadUpdatePriorities @ 0x14000EDB0 (CiThreadUpdatePriorities.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000F850 (CiCreateTaskIndexClientFromThread.c)
 */

char __fastcall CiDispatchFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        int *Address,
        unsigned int Length,
        unsigned int a7,
        __int64 a8)
{
  size_t v8; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rsi
  KPROCESSOR_MODE PreviousMode; // al
  int v15; // edx
  char v16; // r14
  int *v17; // rbx
  unsigned __int8 v18; // r15
  _BYTE *v19; // r12
  PEPROCESS ThreadProcess; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbx
  int TaskIndexClientFromThread; // eax
  int v24; // eax
  __int64 v25; // r8
  int v27; // [rsp+30h] [rbp-48h]
  ULONG ReturnLength[4]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v29; // [rsp+48h] [rbp-30h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-28h] BYREF
  int Src; // [rsp+58h] [rbp-20h] BYREF

  v8 = a4;
  v29 = 0LL;
  v11 = -1073741811;
  KeEnterCriticalRegion();
  v12 = (a7 >> 2) & 0x7FF;
  v27 = v12;
  if ( (unsigned int)v12 < 9 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v13 == CiApiTypeTable[v12]
      && (_DWORD)v8 == CiApiBufferSizeTable[2 * v12]
      && Length == dword_1400096F4[2 * v12] )
    {
      PreviousMode = ExGetPreviousMode();
      v16 = PreviousMode;
      if ( (_DWORD)v8 )
      {
        if ( PreviousMode && ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( PreviousMode )
          RtlCopyFromUser(&v29, a3, v8);
        else
          RtlCopyVolatileMemory(&v29, a3, v8);
      }
      if ( v16 && Length )
      {
        v17 = Address;
        ProbeForWrite(Address, Length, 4u);
      }
      else
      {
        v17 = Address;
      }
      switch ( v15 )
      {
        case 0:
          v18 = v29;
          if ( (unsigned __int8)(v29 + 2) <= 4u )
          {
            v19 = *(_BYTE **)(v13 + 64);
            ExAcquirePushLockExclusiveEx(v13 + 16, 0LL);
            *(_QWORD *)(v13 + 24) = KeGetCurrentThread();
            if ( (*(_BYTE *)(v13 + 148) & 2) == 0 )
            {
              ThreadProcess = PsGetThreadProcess(*(PETHREAD *)(v13 + 96));
              if ( ThreadProcess == (PEPROCESS)PsGetCurrentProcess() )
              {
                CiThreadUpdatePriorities((_BYTE *)v13, v19, v18);
                CiSchedulerCommitPriority(v21);
                v11 = 0;
              }
            }
            *(_QWORD *)(v13 + 24) = 0LL;
            ExReleasePushLockExclusiveEx(v13 + 16, 0LL);
          }
          break;
        case 1:
          v11 = 0;
          if ( v16 )
            RtlWriteULongToUser(v17, CiSystemResponsiveness);
          else
            *v17 = CiSystemResponsiveness;
          break;
        case 2:
          v22 = *(_QWORD *)(v13 + 80);
          if ( v22 == PsGetCurrentProcess() )
            goto LABEL_27;
          break;
        case 3:
          TaskIndexClientFromThread = CiCreateTaskIndexClientFromThread(v13, v16, v17);
          goto LABEL_41;
        case 4:
          v11 = 0;
          v24 = *(_DWORD *)(v13 + 144);
          if ( v16 )
            RtlWriteULongToUser(v17, v24);
          else
            *v17 = v24;
          break;
        case 5:
          v11 = 0;
          CiSchedulerTaskIndexYield(v13, v29, HIDWORD(v29));
          break;
        case 6:
          v11 = 0;
          CiSchedulerCancelTaskIndexYield(v13);
          break;
        case 7:
          TaskIndexClientFromThread = CiSchedulerSetMultimediaMode(v13, v29);
LABEL_41:
          v11 = TaskIndexClientFromThread;
          break;
        case 8:
          Src = 0;
          ReturnLength[0] = 0;
          SystemInformation = 8LL;
          if ( ZwQuerySystemInformation(
                 MaxSystemInfoClass|SystemProcessInformation,
                 &SystemInformation,
                 8u,
                 ReturnLength) >= 0
            && (SystemInformation & 0x200000000LL) != 0 )
          {
            CiSchedulerQueryTaskIndexDebugInformation(v13, &Src);
            if ( v16 )
              RtlWriteULongToUser(v17, Src);
            else
              RtlCopyVolatileMemory(v17, &Src, 4uLL);
LABEL_27:
            v11 = 0;
          }
          else
          {
            v11 = -1073741790;
          }
          break;
        default:
          break;
      }
    }
  }
  KeLeaveCriticalRegion();
  if ( v11 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0x12u, v25, v27, v11);
  *(_DWORD *)a8 = v11;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
