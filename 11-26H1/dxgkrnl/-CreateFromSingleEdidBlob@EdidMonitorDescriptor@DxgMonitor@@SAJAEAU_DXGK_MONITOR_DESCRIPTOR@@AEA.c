/*
 * XREFs of ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x140280738
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400613C0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14006D89C (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     ??4?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140098C40 (--4-$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U-$default_delete@UIMonitorDescriptor@DxgMonitor.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromSingleEdidBlob(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  int v2; // eax
  __int64 result; // rax
  int IsEDIDBaseBlock; // ebx
  _QWORD *v6; // rax
  char **v7; // rdi
  _QWORD *v8; // r15
  unsigned int v9; // r14d
  __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rbx
  unsigned int v15; // r13d
  __int64 v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  DxgMonitor::EdidMonitorDescriptor *v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ****v23)(_QWORD, __int64); // [rsp+68h] [rbp+10h]

  v23 = a2;
  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 185;
    return 0LL;
  }
  if ( (v2 & 0x7F) != 0 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 192;
  }
  else
  {
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(*(const unsigned __int8 **)(a1 + 8), (bool)a2);
    if ( IsEDIDBaseBlock >= 0 )
    {
      v6 = (_QWORD *)operator new(0x20uLL, 0x4D677844u, 256LL);
      v7 = (char **)v6;
      if ( v6 )
      {
        v6[2] = 0LL;
        *v6 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
        v8 = v6 + 3;
        v22 = (DxgMonitor::EdidMonitorDescriptor *)v6;
        v6[1] = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
        v6[3] = 0LL;
        v9 = *(_DWORD *)(a1 + 4) >> 7;
        v10 = 8LL * v9;
        if ( !is_mul_ok(v9, 8uLL) )
          v10 = -1LL;
        v11 = __CFADD__(v10, 8LL);
        v12 = v10 + 8;
        if ( v11 )
          v12 = -1LL;
        v13 = operator new[](v12, 0x4D677844u, 256LL);
        if ( v13 )
        {
          v14 = (char *)(v13 + 8);
          *(_QWORD *)v13 = v9;
          `vector constructor iterator'(
            (char *)(v13 + 8),
            8LL,
            v9,
            (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        }
        else
        {
          v14 = 0LL;
        }
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
          v7 + 3,
          v14);
        if ( *v8 )
        {
          *((_DWORD *)v7 + 4) = v9;
          v15 = 0;
          while ( v15 < v9 )
          {
            v16 = operator new(0x98uLL, 0x4D677844u, 256LL);
            v17 = (_QWORD *)v16;
            if ( !v16 )
            {
              IsEDIDBaseBlock = -1073741801;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 221;
              goto LABEL_22;
            }
            memset((void *)(v16 + 24), 0, 0x80uLL);
            *v17 = 0LL;
            v17[1] = 0LL;
            v17[2] = 128LL;
            v18 = v15;
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              (void **)(*v8 + 8LL * v15),
              v17);
            v19 = *(_QWORD *)(a1 + 8);
            v20 = v15++ << 7;
            v21 = *(_QWORD *)(*v8 + 8 * v18);
            *(_OWORD *)(v21 + 24) = *(_OWORD *)(v20 + v19);
            *(_OWORD *)(v21 + 40) = *(_OWORD *)(v20 + v19 + 16);
            *(_OWORD *)(v21 + 56) = *(_OWORD *)(v20 + v19 + 32);
            *(_OWORD *)(v21 + 72) = *(_OWORD *)(v20 + v19 + 48);
            *(_OWORD *)(v21 + 88) = *(_OWORD *)(v20 + v19 + 64);
            *(_OWORD *)(v21 + 104) = *(_OWORD *)(v20 + v19 + 80);
            *(_OWORD *)(v21 + 120) = *(_OWORD *)(v20 + v19 + 96);
            *(_OWORD *)(v21 + 136) = *(_OWORD *)(v20 + v19 + 112);
            *(_DWORD *)(*(_QWORD *)(*v8 + 8 * v18) + 8LL) = 2;
            *(_DWORD *)(*(_QWORD *)(*v8 + 8 * v18) + 12LL) = 1;
          }
          wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::operator=(
            v23,
            (__int64 (__fastcall ****)(_QWORD, __int64))&v22);
          if ( v22 )
            DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v22, 1);
          return 0LL;
        }
        IsEDIDBaseBlock = -1073741801;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 213;
LABEL_22:
        DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v7, 1);
      }
      else
      {
        IsEDIDBaseBlock = -1073741801;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 207;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 200;
      MonitorLogBadEDID(IsEDIDBaseBlock);
    }
    return (unsigned int)IsEDIDBaseBlock;
  }
  return result;
}
