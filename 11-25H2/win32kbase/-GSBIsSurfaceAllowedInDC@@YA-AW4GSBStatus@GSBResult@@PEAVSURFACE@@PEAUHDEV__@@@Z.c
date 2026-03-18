/*
 * XREFs of ?GSBIsSurfaceAllowedInDC@@YA?AW4GSBStatus@GSBResult@@PEAVSURFACE@@PEAUHDEV__@@@Z @ 0x1400CD058
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140002250 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

char __fastcall GSBIsSurfaceAllowedInDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+70h] [rbp+28h] BYREF
  int v13; // [rsp+78h] [rbp+30h] BYREF
  int v14; // [rsp+80h] [rbp+38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( a1 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4264LL) || !a2 || !*(_QWORD *)(a1 + 40) )
    return 0;
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
    {
      v12 = v10;
      v13 = 1;
      v15 = 0x1000000LL;
      v14 = 65303;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_140279A14,
        v10,
        v11,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12);
    }
    return 3;
  }
  else
  {
    if ( !v2 || (*(_DWORD *)(a2 + 40) & 1) == (*(_DWORD *)(v2 + 40) & 1) )
      return 0;
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
    {
      v12 = v7;
      v13 = 2;
      v15 = 0x1000000LL;
      v14 = 65303;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (__int64)&unk_140279A14,
        v7,
        v8,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12);
    }
    return 4;
  }
}
