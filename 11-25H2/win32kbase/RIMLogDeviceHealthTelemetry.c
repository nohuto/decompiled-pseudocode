/*
 * XREFs of RIMLogDeviceHealthTelemetry @ 0x1401DBAD8
 * Callers:
 *     RIMFillDeviceHealthInfo @ 0x1401DACC0 (RIMFillDeviceHealthInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444444444AEBU?$_tlgWrapperByVal@$07@@555@Z @ 0x140004498 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapp.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 */

char __fastcall RIMLogDeviceHealthTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v4; // r8
  int v5; // r9d
  char v6; // al
  __int64 v7; // r10
  unsigned int v8; // ecx
  unsigned __int128 v9; // rax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r9
  int v18; // [rsp+B8h] [rbp-80h] BYREF
  int v19; // [rsp+BCh] [rbp-7Ch] BYREF
  int v20; // [rsp+C0h] [rbp-78h] BYREF
  int v21; // [rsp+C4h] [rbp-74h] BYREF
  int v22; // [rsp+C8h] [rbp-70h] BYREF
  int v23; // [rsp+CCh] [rbp-6Ch] BYREF
  int v24; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-48h] BYREF
  const WCHAR *v29; // [rsp+F8h] [rbp-40h] BYREF
  const WCHAR *v30; // [rsp+100h] [rbp-38h] BYREF
  const WCHAR *v31; // [rsp+108h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp-18h] BYREF
  __int64 v33; // [rsp+130h] [rbp-8h] BYREF
  __int64 v34; // [rsp+138h] [rbp+0h] BYREF
  int v35; // [rsp+140h] [rbp+8h] BYREF

  v3 = &retaddr;
  v34 = a3;
  v33 = a2;
  if ( (unsigned int)dword_14029EE58 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL);
    v5 = 0;
    if ( (_BYTE)v3 )
    {
      v6 = *(_BYTE *)(v4 + 184);
      v7 = v4 + 456;
      v25 = 0LL;
      if ( v6 < 0 && *(_QWORD *)v7 )
        v8 = *(_DWORD *)(*(_QWORD *)v7 + 776LL);
      else
        v8 = -1;
      v26 = v8;
      v27 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_QWORD *)(v4 + 72);
      v9 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      LOBYTE(v9) = *(_BYTE *)(v4 + 184);
      v28 = *((_QWORD *)&v9 + 1) - *(_QWORD *)(v4 + 64);
      if ( (v9 & 0x80u) != 0LL && *(_QWORD *)v7 )
        v10 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)v7 + 368LL), 13);
      else
        v10 = 0;
      v11 = *(_DWORD *)(v4 + 168);
      LODWORD(v34) = v10;
      LODWORD(v33) = (v11 & 0x8000000u) >> 27;
      v35 = *(_DWORD *)(v4 + 136);
      v18 = *(_DWORD *)(v4 + 256);
      v19 = *(_DWORD *)(v4 + 272);
      if ( __CFSHR__(v11, 13) || (v11 & 0x800) != 0 || (v12 = 1 - __CFSHR__(v11, 13), (v11 & 0x100) != 0) )
        v12 = 0;
      v20 = v12;
      v21 = (unsigned __int8)(v11 & 0x80) >> 7;
      v13 = *(_DWORD *)(v4 + 48);
      LOBYTE(v5) = __CFSHR__(v11, 13);
      v24 = (unsigned __int16)(v11 & 0x2000) >> 13;
      v22 = v5;
      v23 = (unsigned __int16)(v11 & 0x800) >> 11;
      v29 = RimDeviceTypeToRimInputTypeString(v4, v13);
      v30 = *(const WCHAR **)(v14 + 200);
      v31 = L"RIMFillDeviceHealthInfo";
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v15,
                     (__int64)&unk_14027AD7E,
                     v14,
                     v16,
                     &v31,
                     &v30,
                     &v29,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v35,
                     (__int64)&v33,
                     (__int64)&v34,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v26,
                     (__int64)&v25);
    }
  }
  return (char)v3;
}
