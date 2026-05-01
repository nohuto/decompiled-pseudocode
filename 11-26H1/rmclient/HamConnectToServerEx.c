/*
 * XREFs of HamConnectToServerEx @ 0x180010990
 * Callers:
 *     HamConnectToServer @ 0x180010960 (HamConnectToServer.c)
 * Callees:
 *     HampConnectionCreate @ 0x180003930 (HampConnectionCreate.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000E1D0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000FF5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamConnectToServerEx(__int64 a1, unsigned int a2, void *a3, _QWORD *a4, _DWORD *a5, __int64 *a6)
{
  bool v10; // di
  unsigned int v11; // ebx
  BOOL v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  bool v18[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+48h] [rbp-31h] BYREF
  __int128 v20; // [rsp+50h] [rbp-29h] BYREF
  void *v21; // [rsp+60h] [rbp-19h] BYREF
  _OWORD v22[2]; // [rsp+68h] [rbp-11h] BYREF

  if ( (unsigned int)dword_18002D038 > 5 && (byte_18002D048 & 1) != 0 && (qword_18002D050 & 1) == qword_18002D050 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      a1,
      byte_18002699A);
  v10 = 0;
  v19 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( a1 )
  {
    v12 = a3 != 0LL;
    if ( v12 == (a4 != 0LL) && v12 == (a5 != 0LL) )
    {
      v20 = (unsigned __int64)a1;
      *(_QWORD *)&v22[0] = a3;
      v13 = HampConnectionCreate(&v20, &unk_18001DC80, a2, (__int64)v22, &v19);
      v14 = v19;
      v11 = v13;
      if ( v13 >= 0 )
      {
        if ( a4 )
        {
          *a4 = *(_QWORD *)(v19 + 144);
          *a5 = *(_DWORD *)(v14 + 152);
        }
        v15 = *(_QWORD *)(v14 + 8) == 0LL;
        *a6 = v14;
        v10 = !v15;
        v14 = 0LL;
        v11 = 0;
      }
      if ( v14 )
        HampConnectionDestroy(v14);
    }
    else
    {
      v11 = -1073741776;
    }
  }
  else
  {
    v11 = -1073741585;
  }
  v16 = *((_QWORD *)&v22[0] + 1);
  if ( *((_QWORD *)&v22[0] + 1) )
    HamFreeBuffer(*((void **)&v22[0] + 1));
  if ( (unsigned int)dword_18002D038 > 4 && (byte_18002D048 & 3) != 0 && (qword_18002D050 & 3) == qword_18002D050 )
  {
    *(_QWORD *)&v20 = *a6;
    v18[0] = v10;
    v21 = a3;
    LODWORD(v19) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      v16,
      byte_1800268A6,
      (__int64)a3,
      (__int64)a4,
      (__int64)&v19,
      (__int64)&v20,
      &v21,
      (__int64)v18);
  }
  return v11;
}
