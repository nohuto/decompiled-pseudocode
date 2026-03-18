/*
 * XREFs of ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x14041BDD4
 * Callers:
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14018CBB4 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int8 (__fastcall *v4)(__int64, _QWORD, __int128 *); // rax
  DxgMonitor::EDIDCACHE *v5; // r14
  __int64 v6; // rbp
  void (__fastcall *v7)(DxgMonitor::EDIDCACHE *, _QWORD, _QWORD, __int64, __int64, _DWORD); // r15
  char v8; // si
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  char v15; // [rsp+80h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( v2 )
  {
    v3 = *(_QWORD *)v2;
    v13 = 0LL;
    v4 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(v3 + 32);
    v14 = 0LL;
    if ( v4(v2, 0LL, &v13) )
    {
      v5 = DxgMonitor::EDIDCACHE::s_pEdidCache;
      v6 = v14;
      v7 = *(void (__fastcall **)(DxgMonitor::EDIDCACHE *, _QWORD, _QWORD, __int64, __int64, _DWORD))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache + 8LL);
      v8 = 1;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14)) != 1
        || (v9 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14)),
            !IsInternalVideoOutput(v9)) )
      {
        v8 = 0;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 8LL))(
                        *((_QWORD *)this + 14),
                        &v15);
      LOBYTE(v12) = v8;
      v7(v5, *v11, v10, v12, v6, DWORD2(v14));
    }
  }
}
