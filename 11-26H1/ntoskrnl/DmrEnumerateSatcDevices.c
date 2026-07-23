/*
 * XREFs of DmrEnumerateSatcDevices @ 0x1405B2734
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x1405B1244 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     DmrGetNextDeviceScope @ 0x1405B2894 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x1405B28DC (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrEnumerateSatcDevices(__int64 a1, _DWORD *a2)
{
  _WORD *NextRemappingStructure; // rax
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  char *v6; // r14
  _BYTE *v7; // r8
  _BYTE *NextDeviceScope; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rcx
  __int16 v11; // bp
  _WORD *v12; // rcx
  _QWORD *KernelStack; // rax
  _DWORD *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, 0LL);
  v4 = 0;
  while ( 1 )
  {
    v5 = NextRemappingStructure;
    if ( !NextRemappingStructure )
      return v4;
    if ( *NextRemappingStructure == 5 )
    {
      v6 = (char *)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
      v7 = 0LL;
      while ( 2 )
      {
        NextDeviceScope = (_BYTE *)DmrGetNextDeviceScope(v5 + 4, v6, v7);
        v9 = NextDeviceScope;
        if ( NextDeviceScope )
        {
          if ( *NextDeviceScope == 1 && NextDeviceScope[1] == 8 )
          {
            v10 = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.CurrentRunTime;
            v11 = (unsigned __int8)NextDeviceScope[7] | (unsigned __int16)(8
                                                                         * ((unsigned __int8)NextDeviceScope[6] | (unsigned __int16)(32 * (unsigned __int8)NextDeviceScope[5])));
            while ( (unsigned int *)v10 != &HalpDeviceBlockUnblockPushLock.CurrentRunTime )
            {
              if ( *(_WORD *)(v10 + 24) == v5[3] && *(_WORD *)(v10 + 28) == v11 )
                goto LABEL_16;
              v10 = *(_QWORD *)v10;
            }
            v15 = 0LL;
            ExtEnvAllocateMemory(v10, 0x30u, &v15);
            v12 = v15;
            if ( v15 )
            {
              v15[4] = 1;
              v12[14] = v11;
              v12[12] = v5[3];
              *((_DWORD *)v12 + 10) = *((unsigned __int8 *)v5 + 4);
              KernelStack = HalpDeviceBlockUnblockPushLock.KernelStack;
              if ( *(struct _KTHREAD **)HalpDeviceBlockUnblockPushLock.KernelStack != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.CurrentRunTime )
                __fastfail(3u);
              *(_QWORD *)v12 = &HalpDeviceBlockUnblockPushLock.CurrentRunTime;
              *((_QWORD *)v12 + 1) = KernelStack;
              *KernelStack = v12;
              HalpDeviceBlockUnblockPushLock.KernelStack = v12;
LABEL_16:
              v7 = v9;
              continue;
            }
            return (unsigned int)-1073741670;
          }
          else
          {
            return (unsigned int)-1073741637;
          }
        }
        break;
      }
    }
    NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v5);
  }
}
