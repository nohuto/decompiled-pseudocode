/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x180068550
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18004A1A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v14[5]; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = a4;
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 2LL) )
  {
    v15 = v4;
    v13 = v7;
    v14[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E1278,
      byte_1800CB42F,
      v7,
      a4,
      (__int64)v14,
      (__int64)&v13,
      (__int64)&v15);
  }
  LOBYTE(a4) = v4 != 0;
  v8 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _QWORD, __int64))(*(_QWORD *)g_pResourceManager
                                                                                             + 24LL))(
         g_pResourceManager,
         a2,
         a3,
         a4);
  v9 = 0;
  if ( v8 < 0 )
    v9 = v8;
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 2LL) )
  {
    v15 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E1278,
      byte_1800CB34D,
      v10,
      v11,
      (__int64)&v15);
  }
  return v9;
}
