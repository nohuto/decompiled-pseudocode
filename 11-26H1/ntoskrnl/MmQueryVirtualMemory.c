/*
 * XREFs of MmQueryVirtualMemory @ 0x1409243E0
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     NtQueryVirtualMemory @ 0x1409243A0 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x140A5D4B0 (PfpVirtualQuery.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfo @ 0x14040E930 (MiGetWorkingSetInfo.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiQueryInitializeRestrictedVa @ 0x140777004 (MiQueryInitializeRestrictedVa.c)
 *     MiQueryBadAddresses @ 0x140870320 (MiQueryBadAddresses.c)
 *     MiQueryMappedFileName @ 0x1409233DC (MiQueryMappedFileName.c)
 *     MiQueryBasicInfo @ 0x140923490 (MiQueryBasicInfo.c)
 *     MiQuerySecureBasicInfo @ 0x140923550 (MiQuerySecureBasicInfo.c)
 *     MiQueryImageInfo @ 0x1409235C4 (MiQueryImageInfo.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MiQueryUpdateBytesWritten @ 0x140923A10 (MiQueryUpdateBytesWritten.c)
 *     MiQueryDetach @ 0x140923A4C (MiQueryDetach.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiQueryValidateParameters @ 0x1409247B0 (MiQueryValidateParameters.c)
 *     MiInitializeQueryVadInfo @ 0x1409249B0 (MiInitializeQueryVadInfo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  int v16; // r15d
  _QWORD *p_Lock; // rcx
  int locked; // edi
  int BadAddresses; // ebx
  __int64 v20; // rdx
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 PreviousMode; // [rsp+70h] [rbp-90h]
  unsigned __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  _QWORD *v29; // [rsp+A0h] [rbp-60h]
  _BYTE v30[48]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v31[3]; // [rsp+D8h] [rbp-28h] BYREF

  Object = 0LL;
  v21 = 0LL;
  HIDWORD(v23[0]) = 0;
  CurrentThread = KeGetCurrentThread();
  memset_0(v23, 0, 0x98uLL);
  v23[2] = a5;
  LODWORD(v23[0]) = a3;
  v23[1] = (__int64)a4;
  v23[3] = (__int64)a6;
  PreviousMode = CurrentThread->PreviousMode;
  v25 = a2;
  result = MiQueryValidateParameters(v23);
  if ( (int)result >= 0 )
  {
    if ( (v28 & 0x100) != 0 && PreviousMode )
    {
      v16 = a7;
      if ( !MiIsUserQueryVmCallerTrusted(CurrentThread, v13, v14, v15) )
        v16 = a7 | 0x40000000;
    }
    else
    {
      v16 = a7;
    }
    if ( a3 != 10 || (result = MiQueryInitializeRestrictedVa((__int64)v23), (int)result >= 0) )
    {
      if ( BugCheckParameter1 == -1LL )
      {
        p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
        if ( (int)result < 0 )
          return result;
        p_Lock = Object;
        if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          return 3221225506LL;
        }
        v28 |= 2u;
      }
      v29 = p_Lock;
      if ( a3 != 11 )
      {
        switch ( a3 )
        {
          case 12:
            BadAddresses = MiQueryBadAddresses((__int64)p_Lock, 12, a4, a5, PreviousMode, a6);
            MiQueryDetach((__int64)v23);
            break;
          case 4:
            BadAddresses = MiGetWorkingSetInfoList((__int64)v23, v16);
            MiQueryDetach((__int64)v23);
            if ( BadAddresses >= 0 )
            {
              if ( a6 )
              {
                v20 = a5;
LABEL_28:
                MiQueryUpdateBytesWritten((__int64)v23, v20);
                return 0LL;
              }
              return 0LL;
            }
            break;
          case 1:
            return MiGetWorkingSetInfo((__int64)v23, v16);
          case 5:
            v21 = p_Lock[213];
            v27 = &v21;
            v26 = 8LL;
            return MiQueryReturnResults((__int64)v23);
          default:
            if ( (v28 & 2) != 0 )
            {
              v28 |= 1u;
              KiStackAttachProcess((_KPROCESS *)p_Lock, 0, (__int64)v30);
            }
            if ( a3 == 8 )
            {
              result = MiQuerySecureBasicInfo(v23);
              if ( (int)result >= 0 )
                return result;
            }
            else if ( a3 == 14 )
            {
              return MiQueryImageExtensionInformation((__int64)v23);
            }
            locked = MiReturnLockedVadOrNextVa(a2, v31, &v21);
            if ( locked >= 0 )
            {
              if ( !v31[0] )
                return MiQueryBasicInfo(v23);
              MiInitializeQueryVadInfo(v23);
              if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
                return MiQueryMemoryRegionInfo((__int64)v23);
              if ( a3 == 6 )
                return MiQueryImageInfo(v23);
              if ( (a3 & 0xFFFFFFF5) != 0 || a3 == 2 )
                return MiQueryMappedFileName((__int64)v23);
              return MiQueryAddressSpan(v23);
            }
            MiQueryDetach((__int64)v23);
            return (unsigned int)locked;
        }
        return (unsigned int)BadAddresses;
      }
      locked = MiQueryMemoryPhysicalContiguity(p_Lock, a4, a5, PreviousMode);
      MiQueryDetach((__int64)v23);
      if ( locked < 0 )
        return (unsigned int)locked;
      if ( a6 )
      {
        v20 = a5;
        goto LABEL_28;
      }
      return 0LL;
    }
  }
  return result;
}
