/*
 * XREFs of HamAssociateActivityContext @ 0x180018A30
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002120 (CempLockAcquireExclusive.c)
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 *     HampIpcChannelAcquireLock @ 0x1800053B0 (HampIpcChannelAcquireLock.c)
 *     HampIpcChannelAddCallbackUnsafe @ 0x180008DE0 (HampIpcChannelAddCallbackUnsafe.c)
 *     HampConnectionObjectCreate @ 0x18000C5C0 (HampConnectionObjectCreate.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000D840 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000E1D0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamAssociateActivityContext(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h] BYREF
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-19h] BYREF
  _QWORD **v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  __int64 *v22; // [rsp+90h] [rbp+27h]
  __int64 v23; // [rsp+98h] [rbp+2Fh]

  if ( (unsigned int)dword_18002D038 > 5 && (byte_18002D048 & 1) != 0 && (qword_18002D050 & 1) == qword_18002D050 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      a1,
      byte_1800267E2);
  v14 = 0LL;
  v6 = HampConnectionObjectCreate(a3, a1, &v14);
  if ( v6 >= 0 )
  {
    CempLockAcquireExclusive(a1 + 120);
    v7 = *(_QWORD *)(a1 + 136);
    if ( v7 )
    {
      if ( (unsigned __int64)a2 >= v7 && v7 + 160LL * *(unsigned int *)(a1 + 152) > (unsigned __int64)a2 )
      {
        v8 = *((_DWORD *)a2 + 38);
        if ( (v8 & 1) == 0 )
        {
          *((_DWORD *)a2 + 38) = v8 | 1;
          *(_DWORD *)(a1 + 128) = 0;
          RtlReleaseSRWLockExclusive(a1 + 120);
          v9 = v14;
          v14[6] = *a2;
          v10 = v9[5];
          HampIpcChannelAcquireLock(v10);
          HampIpcChannelAddCallbackUnsafe((__int64)v9, v11, v12);
          *(_DWORD *)(v10 + 16) = 0;
          RtlReleaseSRWLockExclusive(v10 + 8);
          v6 = 0;
          goto LABEL_16;
        }
      }
      v6 = -1073741584;
    }
    else
    {
      v6 = -1073741436;
    }
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(a1 + 120);
  }
  if ( v14 )
    HamFreeBuffer(v14);
LABEL_16:
  if ( (unsigned int)dword_18002D038 > 4 && (byte_18002D048 & 3) != 0 && (qword_18002D050 & 3) == qword_18002D050 )
  {
    v15 = *a2;
    v16 = a1;
    v22 = &v15;
    LODWORD(v14) = v6;
    v20 = &v16;
    v23 = 8LL;
    v18 = &v14;
    v21 = 8LL;
    v19 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_18002D038, byte_18002680A, 0LL, 0LL, 5u, &v17);
  }
  return (unsigned int)v6;
}
