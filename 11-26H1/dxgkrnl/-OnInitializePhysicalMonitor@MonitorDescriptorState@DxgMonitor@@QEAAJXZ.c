/*
 * XREFs of ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005EB68 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x140098F50 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x140280738 (-CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEA.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140281218 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14040BA9C (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x14041BDD4 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14042B634 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  int v2; // edi
  unsigned int v3; // r15d
  unsigned int i; // r13d
  __int64 v5; // rax
  size_t v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r15d
  unsigned int j; // r13d
  __int64 v22; // rax
  size_t v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // ebx
  void *v35; // rax
  void *v36; // rbx
  __int64 v37; // rax
  __int64 (__fastcall ***v38)(_QWORD, __int64); // rax
  bool v39; // zf
  void *v40; // rax
  void *v41; // rbx
  __int64 v42; // rax
  __int64 (__fastcall ***v43)(_QWORD, __int64); // rax
  __int64 v44; // rcx
  struct DxgMonitor::IMonitorDescriptor **v45; // rbx
  int v46; // eax
  DxgMonitor::MultiMonitorDescriptor *v47; // rax
  __int64 v48; // rax
  void *v50[2]; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  void *v52; // [rsp+88h] [rbp+48h] BYREF
  void *v53; // [rsp+90h] [rbp+50h] BYREF

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 167;
  }
  v52 = 0LL;
  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = 0;
    for ( i = 0; i <= 0x7F00; i += 128 )
    {
      v5 = operator new(0x98uLL, 0x4D677844u, 256LL);
      v6 = v5;
      if ( !v5 )
      {
        Size = 0LL;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 341;
        goto LABEL_24;
      }
      memset((void *)(v5 + 24), 0, 0x80uLL);
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 128LL;
      v7 = *((_QWORD *)this + 14);
      Size = v6;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, size_t))(*(_QWORD *)v8 + 8LL))(v8, i, 128LL, v6 + 24);
      v2 = v9;
      if ( v9 == -1071841279 || v9 == -1071774719 )
      {
        if ( v3 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 365;
        }
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 367;
        goto LABEL_13;
      }
      if ( v9 == -1071841272 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = v3;
        WdLogGlobalForLineNumber = 379;
        goto LABEL_13;
      }
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 393;
LABEL_13:
        v2 = 0;
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
          (void **)&Size,
          0LL);
        break;
      }
      *(_DWORD *)(v6 + 8) = 2;
      *(_DWORD *)(v6 + 12) = v3 != 0 ? 255 : 1;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)v6,
        &v52);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        &v52,
        (void **)&Size);
      ++v3;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        (void **)&Size,
        0LL);
    }
    if ( v52 )
    {
      if ( !v3 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 426;
      }
      v12 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(&v52, (char *)this + 128);
      v2 = v12;
      if ( v12 != -1073741801 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = v12;
        v2 = 0;
        WdLogGlobalForLineNumber = 435;
        goto LABEL_52;
      }
    }
    goto LABEL_51;
  }
  v15 = *((_QWORD *)this + 14);
  *(_OWORD *)v50 = 0LL;
  LODWORD(v50[0]) = 1;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
  v2 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 16LL))(v16, v50);
  if ( v2 != -1073741822 )
  {
    v17 = DxgMonitor::EdidMonitorDescriptor::CreateFromSingleEdidBlob(v50, (char *)this + 128);
    v2 = v17;
    if ( v17 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = v17;
      v2 = 0;
      WdLogGlobalForLineNumber = 197;
    }
    if ( !v50[1] )
      goto LABEL_52;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v50[1]);
    v50[1] = 0LL;
    HIDWORD(v50[0]) = 0;
LABEL_51:
    if ( v2 < 0 )
      goto LABEL_100;
LABEL_52:
    v32 = *((_QWORD *)this + 14);
    LODWORD(Size) = 0;
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 24LL))(v32);
    v34 = (*(__int64 (__fastcall **)(__int64, size_t *, _QWORD))(*(_QWORD *)v33 + 24LL))(v33, &Size, 0LL);
    if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v34 != -1073741789 )
        goto LABEL_82;
      if ( (unsigned int)(Size - 1) > 0xFFFF )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 554;
        goto LABEL_82;
      }
      v35 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL);
      v53 = v35;
      v36 = v35;
      if ( v35 )
      {
        memset(v35, 0, (unsigned int)Size);
        v37 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
        if ( (*(int (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v37 + 24LL))(v37, &Size, v36) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 542;
        }
        else
        {
          v38 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x48uLL, 0x4D677844u, 256LL);
          if ( v38 )
            v38 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                               v38,
                                                               &v53,
                                                               (unsigned int)Size);
          wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
            (__int64 (__fastcall ****)(_QWORD, __int64))this + 17,
            v38);
          if ( !*((_QWORD *)this + 17) )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 528;
          }
          v39 = *((_QWORD *)this + 16) == 0LL;
          *((_BYTE *)this + 152) = 0;
          if ( v39 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 536;
          }
        }
        goto LABEL_66;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 547;
LABEL_65:
      v2 = -1073741801;
LABEL_66:
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v53);
      goto LABEL_81;
    }
    if ( (_DWORD)Size )
    {
      if ( (unsigned int)Size <= 0x10000 )
      {
        v40 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL);
        v53 = v40;
        v41 = v40;
        if ( v40 )
        {
          memset(v40, 0, (unsigned int)Size);
          v42 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
          if ( (*(int (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v42 + 24LL))(v42, &Size, v41) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 487;
          }
          else
          {
            v43 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x48uLL, 0x4D677844u, 256LL);
            if ( v43 )
              v43 = (__int64 (__fastcall ***)(_QWORD, __int64))DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                                 v43,
                                                                 &v53,
                                                                 (unsigned int)Size);
            wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
              (__int64 (__fastcall ****)(_QWORD, __int64))this + 17,
              v43);
            if ( !*((_QWORD *)this + 17) )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 473;
            }
            v39 = *((_QWORD *)this + 16) == 0LL;
            *((_BYTE *)this + 152) = 0;
            if ( v39 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 481;
            }
          }
          goto LABEL_66;
        }
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 492;
        goto LABEL_65;
      }
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 499;
    }
LABEL_81:
    if ( v2 < 0 )
      goto LABEL_100;
LABEL_82:
    v44 = *((_QWORD *)this + 16);
    v45 = (struct DxgMonitor::IMonitorDescriptor **)((char *)this + 136);
    if ( !v44 || *v45 )
    {
LABEL_93:
      if ( *((_QWORD *)this + 16)
        && *v45
        && (*(unsigned int (__fastcall **)(struct DxgMonitor::IMonitorDescriptor *))(*(_QWORD *)*v45 + 48LL))(*v45) == 2 )
      {
        v47 = (DxgMonitor::MultiMonitorDescriptor *)operator new(0x28uLL, 0x4D677844u, 256LL);
        if ( v47 )
          v47 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
                  v47,
                  *((struct DxgMonitor::IMonitorDescriptor **)this + 16),
                  *v45);
        wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))this + 18,
          (__int64 (__fastcall ***)(_QWORD, __int64))v47);
        if ( !*((_QWORD *)this + 18) )
          v2 = -1073741801;
      }
      goto LABEL_100;
    }
    LODWORD(Size) = 0;
    (*(void (__fastcall **)(__int64, void **, size_t *))(*(_QWORD *)v44 + 232LL))(v44, &v53, &Size);
    if ( v53 )
    {
      v46 = DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(&v53, (unsigned int)Size, (char *)this + 136);
      if ( *v45 )
        *((_BYTE *)this + 152) = 1;
      if ( (int)(v46 + 0x80000000) < 0 || v46 == -1073741275 )
      {
LABEL_92:
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v53);
        if ( v2 < 0 )
          goto LABEL_100;
        goto LABEL_93;
      }
    }
    else
    {
      v2 = -1073741801;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 584;
    goto LABEL_92;
  }
  v20 = 0;
  for ( j = 0; ; j += 128 )
  {
    if ( j > 0x7F00 )
    {
      if ( v2 < 0 )
        goto LABEL_100;
      goto LABEL_46;
    }
    v22 = operator new(0x98uLL, 0x4D677844u, 256LL);
    v23 = v22;
    if ( !v22 )
      break;
    memset((void *)(v22 + 24), 0, 0x80uLL);
    *(_QWORD *)v23 = 0LL;
    *(_QWORD *)(v23 + 8) = 0LL;
    *(_QWORD *)(v23 + 16) = 128LL;
    v24 = *((_QWORD *)this + 14);
    Size = v23;
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, size_t))(*(_QWORD *)v25 + 8LL))(v25, j, 128LL, v23 + 24);
    v2 = v26;
    if ( v26 == -1071841279 || v26 == -1071774719 )
    {
      if ( v20 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 250;
      }
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 252;
LABEL_39:
      v2 = 0;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        (void **)&Size,
        0LL);
LABEL_46:
      if ( v52 )
      {
        if ( !v20 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 311;
        }
        v29 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(&v52, (char *)this + 128);
        v2 = v29;
        if ( v29 != -1073741801 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30) + 24) = v29;
          v2 = 0;
          WdLogGlobalForLineNumber = 320;
        }
      }
      goto LABEL_51;
    }
    if ( v26 == -1071841272 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27) + 24) = v20;
      WdLogGlobalForLineNumber = 264;
      goto LABEL_39;
    }
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 278;
      goto LABEL_39;
    }
    *(_DWORD *)(v23 + 8) = 2;
    *(_DWORD *)(v23 + 12) = v20 != 0 ? 255 : 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      (void **)v23,
      &v52);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      &v52,
      (void **)&Size);
    ++v20;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&Size,
      0LL);
  }
  Size = 0LL;
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 226;
LABEL_24:
  v2 = -1073741801;
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    (void **)&Size,
    0LL);
LABEL_100:
  v48 = *((_QWORD *)this + 18);
  if ( v48 || (v48 = *((_QWORD *)this + 16)) != 0 || (v48 = *((_QWORD *)this + 17)) != 0 )
    *((_QWORD *)this + 20) = v48;
  DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(this);
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    &v52,
    0LL);
  return (unsigned int)v2;
}
