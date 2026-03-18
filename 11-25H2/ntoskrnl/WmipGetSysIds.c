/*
 * XREFs of WmipGetSysIds @ 0x140795210
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140A3CEA0 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MmUnmapIoSpace @ 0x1402AA7A0 (MmUnmapIoSpace.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     WmipFindSMBiosStructure @ 0x140794DA4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140794EC0 (WmipFindSysIdTable.c)
 *     WmipParseSysIdTable @ 0x1407954C8 (WmipParseSysIdTable.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipGetSysIds(_QWORD *a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rdi
  int SMBiosStructure; // edi
  __int64 v9; // r14
  __int64 v10; // rax
  void *v11; // rsi
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  _OWORD *Pool2; // rax
  _BYTE v16[4]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+34h] [rbp-54h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-50h] BYREF
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-48h] BYREF
  int NumberOfBytes_4; // [rsp+44h] [rbp-44h]
  _QWORD v21[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a1;
  v21[0] = 0LL;
  NumberOfBytes = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !WmipSysIdRead )
  {
    if ( (int)WmipFindSysIdTable(v21, v16, &NumberOfBytes) < 0 )
    {
      BaseAddress = 0LL;
      v21[0] = 0LL;
      NumberOfBytes = 0;
      SMBiosStructure = WmipFindSMBiosStructure(1, v21, &BaseAddress, &NumberOfBytes);
      if ( SMBiosStructure >= 0 )
      {
        WmipSysId1394 = 0LL;
        WmipSysId1394Count = 0;
        v14 = v21[0];
        if ( *(_BYTE *)(v21[0] + 1LL) <= 8u )
        {
          WmipSysIdUuid = 0LL;
          WmipSysIdUuidCount = 0;
        }
        else
        {
          Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            *Pool2 = *(_OWORD *)(v14 + 8);
            WmipSysIdUuidCount = 1;
            WmipSysIdUuid = (__int64)Pool2;
            SMBiosStructure = 0;
            NumberOfBytes_4 = 0;
          }
          else
          {
            ExFreePoolWithTag(0LL, 0);
            SMBiosStructure = -1073741823;
            NumberOfBytes_4 = -1073741823;
          }
        }
        if ( BaseAddress )
          MmUnmapIoSpace(BaseAddress, NumberOfBytes);
        ExReleaseResourceLite(&WmipSMBiosLock);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v17 = 0;
      LODWORD(BaseAddress) = 0;
      SMBiosStructure = WmipParseSysIdTable(v21[0], NumberOfBytes, 0, (unsigned int)&v17, 0LL, (__int64)&BaseAddress);
      if ( SMBiosStructure >= 0 )
      {
        v9 = (unsigned int)(16 * v17);
        if ( (_DWORD)v9 + 8 * (_DWORD)BaseAddress )
        {
          v10 = ExAllocatePool2(0x100uLL);
          v11 = (void *)v10;
          if ( !v10 )
          {
            KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
            return 3221225626LL;
          }
          v13 = v10 + v9;
          SMBiosStructure = WmipParseSysIdTable(
                              v21[0],
                              NumberOfBytes,
                              v10,
                              (unsigned int)&v17,
                              v13,
                              (__int64)&BaseAddress);
          if ( SMBiosStructure < 0 )
          {
            ExFreePoolWithTag(v11, 0);
          }
          else
          {
            WmipSysIdUuid = (__int64)v11;
            WmipSysIdUuidCount = v17;
            WmipSysId1394 = v13;
            WmipSysId1394Count = (int)BaseAddress;
          }
        }
      }
    }
    WmipSysIdRead = SMBiosStructure != -1073741670;
    WmipSysIdStatus = SMBiosStructure;
    v7 = a1;
  }
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  result = (unsigned int)WmipSysIdStatus;
  if ( WmipSysIdStatus >= 0 )
  {
    *v7 = WmipSysIdUuid;
    *a2 = WmipSysIdUuidCount;
    *a3 = WmipSysId1394;
    *a4 = WmipSysId1394Count;
  }
  return result;
}
