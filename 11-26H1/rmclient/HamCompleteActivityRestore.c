/*
 * XREFs of HamCompleteActivityRestore @ 0x180001BB0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002120 (CempLockAcquireExclusive.c)
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000E1D0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001038C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HamCompleteActivityRestore(__int64 a1, __int64 a2)
{
  int v4; // r15d
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r8
  _QWORD *v8; // r12
  __int64 v9; // r9
  int Pointer; // ebx
  _QWORD *v11; // r13
  __int64 v12; // r10
  CLIENT_CALL_RETURN v13; // rax
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+10h] BYREF
  CLIENT_CALL_RETURN v17; // [rsp+B0h] [rbp+18h]
  __int64 v18; // [rsp+B8h] [rbp+20h]

  v15 = a1;
  if ( (unsigned int)dword_18002D038 > 5 && (byte_18002D048 & 1) != 0 && (qword_18002D050 & 1) == qword_18002D050 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      a1,
      &unk_180026781);
  v4 = 1;
  v5 = a1 + 120;
  CempLockAcquireExclusive(a1 + 120);
  v8 = (_QWORD *)(a1 + 144);
  v18 = a1 + 144;
  v9 = *(_QWORD *)(a1 + 144);
  if ( a2 == v9 )
  {
    v7 = 0LL;
    v11 = (_QWORD *)(a1 + 136);
    while ( (unsigned int)v7 < *(_DWORD *)(a1 + 152) )
    {
      v12 = *v11 + 160 * v7;
      if ( *(_QWORD *)(v9 + 8 * v7) != v12 )
        __int2c();
      if ( (*(_BYTE *)(v12 + 152) & 1) == 0 )
      {
        Pointer = -1073741436;
        goto LABEL_23;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(a1 + 120);
    v4 = 0;
    LODWORD(v16) = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      Pointer = HampInProcCompleteConnection();
    }
    else
    {
      v17.Simple = 0LL;
      v13.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, *(_QWORD *)a1).Pointer;
      Pointer = (int)v13.Pointer;
      v17.Pointer = v13.Pointer;
    }
    if ( Pointer >= 0 )
    {
      CempLockAcquireExclusive(a1 + 120);
      if ( *v11 )
      {
        HamFreeBuffer(*v11);
        *v11 = 0LL;
      }
      if ( *v8 )
      {
        HamFreeBuffer(*v8);
        *v8 = 0LL;
      }
      *(_DWORD *)(a1 + 152) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      RtlReleaseSRWLockExclusive(v5);
      v4 = 0;
      Pointer = 0;
    }
  }
  else
  {
    Pointer = -1073741584;
  }
LABEL_23:
  if ( v4 )
  {
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(v5);
  }
  if ( (unsigned int)dword_18002D038 > 4 && (byte_18002D048 & 3) != 0 && (qword_18002D050 & 3) == qword_18002D050 )
  {
    v16 = a1;
    LODWORD(v15) = Pointer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_1800267A7,
      v7,
      v9,
      (__int64)&v15,
      (__int64)&v16);
  }
  return (unsigned int)Pointer;
}
