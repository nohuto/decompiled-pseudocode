/*
 * XREFs of ?LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z @ 0x140042610
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1400015A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1400017BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall BLTQUEUE::LogVsyncInterval(BLTQUEUE *this, union _LARGE_INTEGER a2, union _LARGE_INTEGER a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  LONGLONG v6; // rax
  unsigned int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 61);
  v4 = 0LL;
  if ( v3 && *((_DWORD *)this + 34) == 3 )
  {
    v6 = 1000 * (a2.QuadPart - v3) / a3.QuadPart;
    v7 = v6;
    if ( (unsigned int)v6 > 0x28 )
      v7 = 10 * ((unsigned int)v6 / 0xA);
    if ( v7 > 0x64 )
      v7 = 100;
    if ( *(_QWORD *)this )
      v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL) + 412LL);
    v8 = dword_1401665B8;
    if ( (unsigned int)dword_1401665B8 > 5 )
    {
      v9 = qword_1401665C8;
      v10 = 0x400000000800LL;
      v11 = qword_1401665D0;
      if ( (qword_1401665C8 & 0x400000000800LL) != 0 && (qword_1401665D0 & 0x400000000800LL) == qword_1401665D0 )
      {
        v15 = *((_DWORD *)this + 65);
        v12 = v4;
        v16 = v7;
        v13 = 16779264LL;
        v14[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          qword_1401665D0,
          (int)&unk_1401467DA,
          qword_1401665C8,
          (__int64)v14,
          (__int64)&v13,
          (__int64)&v16,
          (__int64)&v12,
          (__int64)&v15);
        v11 = qword_1401665D0;
        v9 = qword_1401665C8;
        v8 = dword_1401665B8;
      }
      if ( v8 > 5 && (v9 & 0x800) != 0 && (v11 & 0x800) == v11 )
      {
        v15 = *((_DWORD *)this + 65);
        v14[0] = v4;
        v16 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v11,
          (__int64)&unk_140146840,
          v9,
          v10,
          (__int64)&v16,
          (__int64)v14,
          (__int64)&v15);
      }
    }
  }
}
