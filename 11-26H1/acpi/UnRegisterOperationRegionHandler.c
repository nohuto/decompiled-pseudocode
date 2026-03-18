/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1400B56D4
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x140062FF4 (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1400AF134 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1400B5630 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIRegEventHandler @ 0x140051350 (AMLIRegEventHandler.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall UnRegisterOperationRegionHandler(__int64 *a1, __int64 *a2)
{
  __int64 *i; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  char v8; // si
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rdx
  __int64 **v14; // rcx
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  for ( i = (__int64 *)AcpiOpRegionHandlerList; ; i = (__int64 *)*i )
  {
    if ( i == &AcpiOpRegionHandlerList )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
      return 3221225712LL;
    }
    if ( i == a2 )
      break;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return 3221225558LL;
  }
  else
  {
    v6 = a2[1];
    v7 = (unsigned int *)a2 + 9;
    v8 = 0;
    *((_BYTE *)a2 + 40) = 1;
    if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *v7)
      && ((v9 = *v7, (__int64 *)*a2 == &AcpiOpRegionHandlerList) || *(_DWORD *)(*a2 + 36) != v9) )
    {
      if ( v9 < 0x1F )
      {
        AcpiRegisteredOpRegionMask &= ~(1 << v9);
      }
      else
      {
        if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList || *(_DWORD *)(qword_14008FA68 + 36) < 0x1Fu )
          AcpiRegisteredOpRegionMask &= ~0x80000000;
        v7 = (unsigned int *)a2 + 9;
      }
    }
    else
    {
      v8 = 1;
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    if ( !v8 )
    {
      v10 = *v7;
      if ( *v7 == 8 || v10 == 9 )
      {
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v10, 0);
      }
      else if ( a1 && (int)AMLIGetNameSpaceObject("_REG", a1, &v16, 1) >= 0 )
      {
        memset(v15, 0, sizeof(v15));
        v11 = *v7;
        WORD1(v15[0]) = 1;
        v15[2] = v11;
        WORD1(v15[5]) = 1;
        v15[7] = 0LL;
        AMLIEvalNameSpaceObject(v16, 0LL, 2, (__int64)v15);
        AMLIDereferenceHandleEx((__int64)v16);
      }
    }
    v12 = AMLIRegEventHandler(*((_DWORD *)a2 + 8), *v7, 0LL, 0LL);
    ExAcquireFastMutex(&AcpiOpRegionLock);
    v13 = *a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v14 = (__int64 **)a2[1], *v14 != a2) )
      __fastfail(3u);
    *v14 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    ExReleaseFastMutex(&AcpiOpRegionLock);
    ExFreePoolWithTag(a2, 0);
    return v12 != 0 ? 0xC0000001 : 0;
  }
}
