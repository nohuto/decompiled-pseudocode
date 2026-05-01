/*
 * XREFs of HamCompleteActivityRestore @ 0x1800027C0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     HamFreeBuffer @ 0x1800091F0 (HamFreeBuffer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000EF00 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011084 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HamCompleteActivityRestore(__int64 a1, __int64 a2)
{
  int v4; // r12d
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r9d
  _QWORD *v8; // r15
  __int64 v9; // r8
  CLIENT_CALL_RETURN v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // r13
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+10h] BYREF
  CLIENT_CALL_RETURN v16; // [rsp+B0h] [rbp+18h]
  __int64 v17; // [rsp+B8h] [rbp+20h]

  v14 = a1;
  if ( (unsigned int)dword_18002F038 > 5 && (byte_18002F048 & 1) != 0 && (qword_18002F050 & 1) == qword_18002F050 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      a1,
      &unk_180028471);
  v4 = 1;
  v5 = a1 + 120;
  CempLockAcquireExclusive(a1 + 120);
  v8 = (_QWORD *)(a1 + 144);
  v17 = a1 + 144;
  v9 = *(_QWORD *)(a1 + 144);
  if ( a2 == v9 )
  {
    v11 = 0LL;
    v7 = *(_DWORD *)(a1 + 152);
    v12 = (_QWORD *)(a1 + 136);
    while ( (unsigned int)v11 < v7 )
    {
      v6 = *v12 + 160 * v11;
      if ( *(_QWORD *)(v9 + 8 * v11) != v6 )
        __int2c();
      if ( (*(_BYTE *)(v6 + 152) & 1) == 0 )
      {
        LODWORD(v10.Pointer) = -1073741436;
        goto LABEL_23;
      }
      v11 = (unsigned int)(v11 + 1);
    }
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(a1 + 120);
    v4 = 0;
    LODWORD(v15) = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      LODWORD(v10.Pointer) = HampInProcCompleteConnection();
    }
    else
    {
      v16.Simple = 0LL;
      v10.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, *(_QWORD *)a1).Pointer;
      v16.Pointer = v10.Pointer;
    }
    if ( SLODWORD(v10.Simple) >= 0 )
    {
      CempLockAcquireExclusive(a1 + 120);
      if ( *v12 )
      {
        HamFreeBuffer(*v12);
        *v12 = 0LL;
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
      LODWORD(v10.Pointer) = 0;
    }
  }
  else
  {
    LODWORD(v10.Pointer) = -1073741584;
  }
LABEL_23:
  if ( v4 )
  {
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(v5);
  }
  if ( (unsigned int)dword_18002F038 > 4 && (byte_18002F048 & 3) != 0 && (qword_18002F050 & 3) == qword_18002F050 )
  {
    v15 = a1;
    LODWORD(v14) = v10.Pointer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_180028497,
      v9,
      v7,
      (__int64)&v14,
      (__int64)&v15);
  }
  return LODWORD(v10.Pointer);
}
