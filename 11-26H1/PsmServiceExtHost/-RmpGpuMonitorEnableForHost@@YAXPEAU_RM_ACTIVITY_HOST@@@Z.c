/*
 * XREFs of ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089F38
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180044DD0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800034F4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180089EAC (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpGpuMonitorEnableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r9
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v9 = 0LL;
  if ( (*(_BYTE *)(v1 + 3536) & 1) == 0 )
  {
    v3 = v1 + 48;
    if ( (*(int (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, __int64 *))(*(_QWORD *)(v1 + 40) + 88LL))(
           (char *)a1 + 544,
           *((unsigned int *)a1 + 153),
           (char *)a1 + 80,
           *((unsigned int *)a1 + 154),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
           &v9) >= 0 )
    {
      v4 = v9;
    }
    else
    {
      v4 = 0LL;
      v9 = 0LL;
    }
    *((_QWORD *)a1 + 153) = v4;
    ++*(_DWORD *)(v3 + 32);
    if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    {
      v10 = v9;
      v11 = *((_QWORD *)a1 + 4);
      v8 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_1800D3780,
        v6,
        v7,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v8);
    }
    if ( (*(_BYTE *)(v3 + 44) & 1) == 0 )
      RmpGpuMonitorEnable((struct _RM_GPU_MONITOR *)v3);
  }
}
