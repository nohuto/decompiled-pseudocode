/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007CC50
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180044D40 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18005BB34 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180081C30 (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 *     ?PowerResumed@CAudioSrv@@UEAAK_J@Z @ 0x1800D9780 (-PowerResumed@CAudioSrv@@UEAAK_J@Z.c)
 *     ?PowerSuspended@CAudioSrv@@UEAAK_J@Z @ 0x1800D9A20 (-PowerSuspended@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // [rsp+30h] [rbp-50h]
  _DWORD v7[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  unsigned __int16 *v9; // [rsp+48h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+54h] [rbp-2Ch]
  unsigned __int8 *v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]

  v15 = a5;
  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = *(unsigned __int16 **)(a1 + 8);
  v16 = 8LL;
  v10 = *v9;
  v13 = *(unsigned __int16 *)(a2 + 11);
  v12 = a2 + 11;
  v11 = 2;
  v14 = 1;
  LODWORD(v6) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v7, 0LL, 0LL, 3, &v9, v6);
}
