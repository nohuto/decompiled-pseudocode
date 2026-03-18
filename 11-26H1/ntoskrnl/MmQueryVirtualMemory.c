/*
 * XREFs of MmQueryVirtualMemory @ 0x14091F870
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140391240 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     NtQueryVirtualMemory @ 0x14091F830 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x140A541C0 (PfpVirtualQuery.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiQueryAddressSpan @ 0x140304F70 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfo @ 0x14040F210 (MiGetWorkingSetInfo.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiQueryInitializeRestrictedVa @ 0x140774004 (MiQueryInitializeRestrictedVa.c)
 *     MiQueryBadAddresses @ 0x140869F40 (MiQueryBadAddresses.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MiQuerySecureBasicInfo @ 0x14091F660 (MiQuerySecureBasicInfo.c)
 *     MiQueryImageInfo @ 0x14091F6D4 (MiQueryImageInfo.c)
 *     MiQueryValidateParameters @ 0x14091FC40 (MiQueryValidateParameters.c)
 *     MiInitializeQueryVadInfo @ 0x14091FE40 (MiInitializeQueryVadInfo.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MiQueryReturnResults @ 0x140920250 (MiQueryReturnResults.c)
 *     MiQueryUpdateBytesWritten @ 0x1409202CC (MiQueryUpdateBytesWritten.c)
 *     MiQueryDetach @ 0x140920308 (MiQueryDetach.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140920364 (MiIsUserQueryVmCallerTrusted.c)
 *     MiQueryMappedFileName @ 0x1409FE7DC (MiQueryMappedFileName.c)
 *     MiQueryBasicInfo @ 0x140AA3200 (MiQueryBasicInfo.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        char *a4,
        unsigned __int64 a5,
        __int64 *a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  int v13; // r15d
  _QWORD *p_Lock; // rcx
  int locked; // edi
  int BadAddresses; // ebx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 PreviousMode; // [rsp+70h] [rbp-90h]
  unsigned __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  _QWORD *v27; // [rsp+A0h] [rbp-60h]
  _BYTE v28[48]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v29[3]; // [rsp+D8h] [rbp-28h] BYREF

  Object = 0LL;
  v19 = 0LL;
  HIDWORD(v21[0]) = 0;
  CurrentThread = KeGetCurrentThread();
  memset_0(v21, 0, 0x98uLL);
  v21[2] = a5;
  LODWORD(v21[0]) = a3;
  v21[1] = (__int64)a4;
  v21[3] = (__int64)a6;
  PreviousMode = CurrentThread->PreviousMode;
  v23 = a2;
  result = MiQueryValidateParameters(v21);
  if ( (int)result >= 0 )
  {
    if ( (v26 & 0x100) != 0 && PreviousMode )
    {
      v13 = a7;
      if ( !(unsigned int)MiIsUserQueryVmCallerTrusted(CurrentThread) )
        v13 = a7 | 0x40000000;
    }
    else
    {
      v13 = a7;
    }
    if ( a3 != 10 || (result = MiQueryInitializeRestrictedVa((__int64)v21), (int)result >= 0) )
    {
      if ( BugCheckParameter1 == -1LL )
      {
        p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
        goto LABEL_7;
      }
      v18 = 1024LL;
      if ( (v13 & 0x40000000) == 0 )
        v18 = 4096LL;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 v18,
                 PsProcessType,
                 PreviousMode,
                 0x6D566D4Du,
                 &Object,
                 0LL,
                 0LL);
      if ( (int)result >= 0 )
      {
        p_Lock = Object;
        if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          return 3221225506LL;
        }
        v26 |= 2u;
LABEL_7:
        v27 = p_Lock;
        if ( a3 != 11 )
        {
          switch ( a3 )
          {
            case 12:
              BadAddresses = MiQueryBadAddresses((__int64)p_Lock, 12, a4, a5, PreviousMode, a6);
              MiQueryDetach(v21);
              break;
            case 4:
              BadAddresses = MiGetWorkingSetInfoList((__int64)v21, v13);
              MiQueryDetach(v21);
              if ( BadAddresses >= 0 )
              {
                if ( a6 )
                {
                  v17 = a5;
LABEL_28:
                  MiQueryUpdateBytesWritten(v21, v17);
                  return 0LL;
                }
                return 0LL;
              }
              break;
            case 1:
              return MiGetWorkingSetInfo((__int64)v21, v13);
            case 5:
              v19 = p_Lock[213];
              v25 = &v19;
              v24 = 8LL;
              return MiQueryReturnResults(v21);
            default:
              if ( (v26 & 2) != 0 )
              {
                v26 |= 1u;
                KiStackAttachProcess((_KPROCESS *)p_Lock, 0, (__int64)v28);
              }
              if ( a3 == 8 )
              {
                result = MiQuerySecureBasicInfo(v21);
                if ( (int)result >= 0 )
                  return result;
              }
              else if ( a3 == 14 )
              {
                return MiQueryImageExtensionInformation((__int64)v21);
              }
              locked = MiReturnLockedVadOrNextVa(a2, v29, &v19);
              if ( locked >= 0 )
              {
                if ( !v29[0] )
                  return MiQueryBasicInfo(v21, v19);
                MiInitializeQueryVadInfo(v21);
                if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
                  return MiQueryMemoryRegionInfo(v21);
                if ( a3 == 6 )
                  return MiQueryImageInfo(v21);
                if ( (a3 & 0xFFFFFFF5) != 0 || a3 == 2 )
                  return MiQueryMappedFileName(v21);
                return MiQueryAddressSpan(v21);
              }
              MiQueryDetach(v21);
              return (unsigned int)locked;
          }
          return (unsigned int)BadAddresses;
        }
        locked = MiQueryMemoryPhysicalContiguity(p_Lock, a4, a5, PreviousMode);
        MiQueryDetach(v21);
        if ( locked < 0 )
          return (unsigned int)locked;
        if ( a6 )
        {
          v17 = a5;
          goto LABEL_28;
        }
        return 0LL;
      }
    }
  }
  return result;
}
