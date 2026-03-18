/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x140053BB8 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x1400678B0 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x140211DC4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x140212610 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x140212D40 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E7C4C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402EAA6C (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1403A0420 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // r9d
  int v7; // edx
  char v8; // cl
  __int64 v9; // rdx

  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 261;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_FreeCount < m_TableSize", 261LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 262;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeCount >= HMGRTABLE_MIN_FREE_ENTRIES",
      262LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)this + 4) )
  {
    v5 = 16LL * v4;
    v6 = *(_DWORD *)(*(_QWORD *)this + v5 + 8);
    v7 = (v6 >> 5) & 3;
    if ( a2 >> 30 == v7 && (v6 & 0x1F) != 0 )
    {
      v8 = v7 + 1;
      if ( v7 == 3 )
        v8 = 1;
      *(_DWORD *)(*(_QWORD *)this + v5 + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(32 * v8)) & 0x60;
      *(_DWORD *)(v5 + *(_QWORD *)this + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(v5 + *(_QWORD *)this + 8) &= ~0x2000u;
      v9 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v9 + 16LL * v4) = *(_DWORD *)(v9 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v4;
    }
  }
}
