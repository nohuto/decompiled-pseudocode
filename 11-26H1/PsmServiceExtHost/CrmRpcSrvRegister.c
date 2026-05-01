/*
 * XREFs of CrmRpcSrvRegister @ 0x180031660
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003900 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     CrmRegistrationInitialize @ 0x1800309EC (CrmRegistrationInitialize.c)
 *     CrmLogRegistrationStart @ 0x180030AC8 (CrmLogRegistrationStart.c)
 *     CempStringDuplicate @ 0x180030BA0 (CempStringDuplicate.c)
 *     CrmGlobalsRegistrationAdd @ 0x180030C60 (CrmGlobalsRegistrationAdd.c)
 *     CrmLogSrvRegisterStart @ 0x180031810 (CrmLogSrvRegisterStart.c)
 *     CempRpcQueryClientInformation @ 0x1800318A4 (CempRpcQueryClientInformation.c)
 *     CrmLogSrvRegisterStop @ 0x180031A90 (CrmLogSrvRegisterStop.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvRegister(
        RPC_BINDING_HANDLE ClientBinding,
        __int64 *a2,
        __int64 *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int ClientInformation; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  _QWORD *Heap; // rax
  __int64 v16; // rbx
  signed __int64 v17; // rax
  ULONG v18; // eax
  int v20; // [rsp+30h] [rbp-59h] BYREF
  UUID *v21; // [rsp+38h] [rbp-51h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-49h] BYREF

  memset_0(Sid, 0, 0x44uLL);
  v20 = 0;
  *a3 = 0LL;
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, Sid, 0LL, 0LL, 0LL);
  v14 = ClientInformation;
  if ( ClientInformation < 0 )
  {
    if ( (unsigned int)dword_1800E12E8 > 5 )
    {
      v20 = ClientInformation;
      v21 = &Uuid;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_1800D4CB1,
        v12,
        v13,
        &v21,
        (__int64)&v20);
    }
  }
  else
  {
    CrmLogSrvRegisterStart();
    if ( a4 >= 309 )
    {
      v14 = -1073741811;
    }
    else
    {
      Heap = HampAllocateHeap(0x98uLL);
      v16 = (__int64)Heap;
      if ( Heap )
      {
        CrmRegistrationInitialize(Heap);
        v17 = _InterlockedIncrement64(&qword_1800E3928);
        *(_DWORD *)(v16 + 24) = a4;
        *(_QWORD *)(v16 + 16) = v17;
        v18 = RtlLengthSid(Sid);
        memcpy_0((void *)(v16 + 72), Sid, v18);
        *(_QWORD *)(v16 + 144) = CempStringDuplicate(a6);
        CrmGlobalsRegistrationAdd(v16);
        CrmLogRegistrationStart(v16);
        *a2 = v16;
        v14 = 0;
      }
      else
      {
        v14 = -1073741801;
      }
    }
    CrmLogSrvRegisterStop((unsigned int)a4, a5, Sid, (unsigned int)v14);
    if ( v14 >= 0 )
    {
      if ( v20 == GetCurrentProcessId() )
        *a3 = *a2;
      return 0;
    }
  }
  return (unsigned int)v14;
}
