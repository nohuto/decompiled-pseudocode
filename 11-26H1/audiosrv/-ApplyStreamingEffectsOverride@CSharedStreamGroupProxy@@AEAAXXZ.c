/*
 * XREFs of ?ApplyStreamingEffectsOverride@CSharedStreamGroupProxy@@AEAAXXZ @ 0x18004E77C
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioModeEffectsWatcher@@@Z @ 0x1800FFA88 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x180100300 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU_tlgWrapperPtrSize@@4@Z @ 0x18004E8CC (--$Write@U-$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSharedStreamGroupProxy::ApplyStreamingEffectsOverride(CSharedStreamGroupProxy *this)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 *v3; // r12
  __int128 **v4; // rdi
  unsigned __int64 v5; // rbx
  __int128 *v6; // r13
  __int128 *i; // r15
  __int64 v8; // rax
  _BOOL8 v9; // r8
  _DWORD *v10; // r8
  int v11; // r9d
  __int128 *v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v15; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  v2 = (unsigned __int64 *)*((_QWORD *)this + 34);
  v3 = (unsigned __int64 *)*((_QWORD *)this + 35);
  v4 = (__int128 **)((char *)this + 296);
  while ( v2 != v3 )
  {
    v5 = *v2;
    v16 = v5;
    if ( v5 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = v4[1];
    for ( i = *v4; i != v6; i = (__int128 *)((char *)i + 20) )
    {
      v8 = *(_QWORD *)v5;
      v9 = *((_DWORD *)i + 4) != 0;
      v14 = *i;
      (*(void (__fastcall **)(unsigned __int64, __int128 *, _BOOL8))(v8 + 64))(v5, &v14, v9);
    }
    if ( v5 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
    ++v2;
  }
  v15 = -13107 * (((char *)v4[1] - (char *)*v4) >> 2);
  v10 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v10 > 4u )
  {
    v12 = *v4;
    v13 = 20 * v15;
    *(_QWORD *)&v14 = &v15;
    DWORD2(v14) = 2;
    v16 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      (_DWORD)v10,
      (unsigned int)&unk_1801A6601,
      (_DWORD)v10,
      v11,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v12);
  }
}
