/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1400674F4 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1401D0690 (TriggerSDRWhiteLevelChangedWnf.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1403EB0C8 (-OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140416F3C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DxgMonitor::MonitorDescriptorState **this,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        char *a6,
        unsigned __int64 *a7,
        unsigned int a8)
{
  unsigned __int64 *v8; // r15
  __int64 v11; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int v16; // edx
  int v17; // eax
  DxgMonitor::MonitorDescriptorState *v18; // rax
  struct _LUID *v19; // rdx
  __int64 v20; // r8
  _OWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF

  v8 = a7;
  v11 = (unsigned int)a2;
  v13 = -1073741637;
  *a7 = 0LL;
  v14 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v14 + 24) = v11;
  *(_QWORD *)(v14 + 32) = this;
  WdLogGlobalForLineNumber = 2134;
  if ( (unsigned int)v11 > 0x232423 )
  {
    switch ( (_DWORD)v11 )
    {
      case 0x232427:
      case 0x23242B:
        return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(
                               this[27],
                               (unsigned int)v11,
                               a3,
                               (unsigned __int64 *)a4,
                               a5,
                               a6,
                               v8);
      case 0x2324D3:
        if ( a3 >= 0x20 )
        {
          if ( *(_DWORD *)a4 != 3 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2163;
          }
          DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(this[28], *((_DWORD *)a4 + 1), a8);
          return 0;
        }
        break;
      case 0x2324E3:
        if ( !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
          return v13;
        if ( a5 >= 0x14 )
        {
          *a6 = *((_DWORD *)this[28] + 131) == 1;
          goto LABEL_31;
        }
        break;
      case 0x2324E7:
        if ( !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
          return v13;
        if ( a3 >= 0x14 )
        {
          v16 = *(_DWORD *)a4 / 0x50u;
          if ( v16 - 1000 > 0x1388 )
            return (unsigned int)-1073741811;
          v17 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(this[28], v16);
          if ( v17 >= 0 )
          {
            if ( !v17 )
            {
              TriggerSDRWhiteLevelChangedWnf();
              v18 = this[21];
              a7 = 0LL;
              memset(v21, 0, sizeof(v21));
              LODWORD(v21[0]) = 13;
              DXGADAPTER::IsAdapterSessionized(
                *(DXGADAPTER **)(*((_QWORD *)v18 + 3) + 16LL),
                v19,
                0LL,
                (unsigned __int64 *)&a7);
              SMgrGdiCallout(v21, a7, v20, 0LL, v20, v20);
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 2225;
          }
          return 0;
        }
        break;
      default:
        if ( (_DWORD)v11 != 2303235
          || !(unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
        {
          return v13;
        }
        if ( a5 >= 0x14 )
        {
          *(_DWORD *)a6 = 80 * *((_DWORD *)this[28] + 119);
LABEL_31:
          *v8 = 20LL;
          return 0;
        }
        break;
    }
    return (unsigned int)-1073741789;
  }
  if ( (_DWORD)v11 == 2303011
    || (_DWORD)v11 == 2302979
    || (_DWORD)v11 == 2302991
    || (_DWORD)v11 == 2302995
    || (_DWORD)v11 == 2302999
    || (_DWORD)v11 == 2303003
    || (_DWORD)v11 == 2303007 )
  {
    return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(
                           this[27],
                           (unsigned int)v11,
                           a3,
                           (unsigned __int64 *)a4,
                           a5,
                           a6,
                           v8);
  }
  return v13;
}
