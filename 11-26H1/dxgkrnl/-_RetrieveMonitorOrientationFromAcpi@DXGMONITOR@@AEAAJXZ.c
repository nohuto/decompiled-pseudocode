/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x14027694C
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1403E2954 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x14027FB70 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rbx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  Data = *((_DWORD *)this + 76);
  v2 = 1LL;
  v3 = *((_QWORD *)this + 25);
  RequiredSize = 0;
  Type = 0;
  if ( !*(_BYTE *)(v3 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1258;
  }
  if ( *((_DWORD *)this + 77) != *((_DWORD *)this + 76) )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 25) + 8LL),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v8 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = this;
    WdLogGlobalForLineNumber = 1284;
    return 0LL;
  }
  if ( DevicePropertyData >= 0 )
  {
    if ( RequiredSize != 4 || Type != 7 )
    {
      v8 = -1073741823;
      WdLogSingleEntry4(2LL, Type, RequiredSize, this, -1073741823LL);
      WdLogGlobalForLineNumber = 1302;
      return v8;
    }
    if ( Data )
    {
      if ( Data == 90 )
      {
        LODWORD(v9) = 1;
      }
      else
      {
        if ( Data == 180 )
        {
          v9 = 2LL;
        }
        else
        {
          if ( Data != 270 )
          {
            v8 = -1073741823;
            WdLogSingleEntry3(2LL, Data, this, -1073741823LL);
            WdLogGlobalForLineNumber = 1326;
            return v8;
          }
          v9 = 3LL;
        }
        v2 = v9;
      }
    }
    else
    {
      LODWORD(v9) = 0;
      v2 = 0LL;
    }
    Data = v9;
    if ( DXGMONITOR::_ValidateMonitorOrientation(this, v9) )
    {
      *((_DWORD *)this + 77) = v9;
      *((_DWORD *)this + 78) = v9;
      return 0LL;
    }
    v8 = -1073741823;
    WdLogSingleEntry3(2LL, v2, this, -1073741823LL);
    WdLogGlobalForLineNumber = 1340;
  }
  else
  {
    WdLogSingleEntry2(2LL, this, DevicePropertyData);
    WdLogGlobalForLineNumber = 1290;
  }
  return v8;
}
