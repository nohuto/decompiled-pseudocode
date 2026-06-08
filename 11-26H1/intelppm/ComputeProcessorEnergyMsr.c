/*
 * XREFs of ComputeProcessorEnergyMsr @ 0x140002920
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x140006200 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

void __fastcall ComputeProcessorEnergyMsr(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  int SystemArgument1_high; // r8d
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // ecx
  int v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  v5 = 0LL;
  if ( !a1 )
  {
    SystemArgument1_high = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
    v7 = __readmsr(HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
    v11 = SystemArgument1_high;
    v8 = (unsigned int)(v7 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock));
    v9 = v7;
    v12 = v8;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE) )
    {
      UserData.Ptr = (unsigned __int64)&v11;
      *(_QWORD *)&UserData.Size = 4LL;
      v14 = &v12;
      v15 = 8LL;
      EtwWrite(
        (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
        &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE,
        0LL,
        (ULONG)2,
        &UserData);
    }
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v9;
    if ( (unsigned int)v8 <= 0x7FFFFFFF )
    {
      v10 = (*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
      {
        if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 )
          v5 = (unsigned __int64)(1000000 * v8) >> v10;
      }
      else
      {
        v5 = v8 << v10;
      }
    }
  }
  *a5 = v5;
}
