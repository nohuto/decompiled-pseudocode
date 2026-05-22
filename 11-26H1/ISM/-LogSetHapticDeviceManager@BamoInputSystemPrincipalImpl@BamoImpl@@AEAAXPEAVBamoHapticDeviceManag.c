/*
 * XREFs of ?LogSetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x1801310E0
 * Callers:
 *     ?SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x180131648 (-SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::LogSetHapticDeviceManager(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoHapticDeviceManagerPrincipal *a2)
{
  __int64 v3; // rdi
  int ItemId; // ebx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  Microsoft::BamoImpl::BamoImplObject *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  ItemId = 0;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    if ( v5 )
    {
      v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(v5 + 16);
      Microsoft::BamoImpl::InternalLock::InternalLock(
        v11,
        *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v5 + 32));
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v6);
      Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)v11, v7, v8);
    }
    v12 = ItemId;
    v13 = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_18021DC9A,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&v12);
  }
}
