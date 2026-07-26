/*
 * XREFs of ??$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1400CB748
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008F1E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x14000315C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 */

char __fastcall NdisAllocateSharedMemoryTelemetry::AggregateEvent<4>(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v9; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v10; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v12; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v13; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v14; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v15; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+100h] [rbp-40h] BYREF
  __int64 v18; // [rsp+108h] [rbp-38h] BYREF
  __int64 v19; // [rsp+110h] [rbp-30h] BYREF
  __int64 v20; // [rsp+118h] [rbp-28h] BYREF
  __int64 v21; // [rsp+120h] [rbp-20h] BYREF
  __int64 v22; // [rsp+128h] [rbp-18h] BYREF
  __int64 v23; // [rsp+130h] [rbp-10h] BYREF
  __int64 v24; // [rsp+138h] [rbp-8h] BYREF
  int *v25; // [rsp+140h] [rbp+0h] BYREF
  int v26; // [rsp+148h] [rbp+8h]
  int v27; // [rsp+170h] [rbp+30h] BYREF
  int v28; // [rsp+178h] [rbp+38h] BYREF
  int v29; // [rsp+180h] [rbp+40h] BYREF
  int v30; // [rsp+188h] [rbp+48h] BYREF
  int v31; // [rsp+18Ch] [rbp+4Ch]

  if ( *(_BYTE *)(a1 + 184) )
    v1 = *(_QWORD *)(a1 + 192);
  else
    v1 = 0LL;
  v30 = *(_DWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 44);
  v31 = v2;
  if ( (unsigned int)dword_14011C6C0 > 4 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14011C6C0, 2048LL);
    if ( (_BYTE)v2 )
    {
      v27 = *(_DWORD *)(v4 + 52);
      v25 = &v30;
      v28 = *(_DWORD *)(v4 + 32);
      v29 = *(_DWORD *)(v4 + 36);
      v9 = v4 + 16;
      v22 = *(_QWORD *)(v4 + 8);
      v23 = v22;
      v19 = v5;
      v20 = v5;
      v21 = v5;
      v26 = 8;
      v10 = v7;
      v11 = v7;
      v12 = v7;
      v13 = v1;
      v14 = v1;
      v15 = v1;
      v16 = v6;
      v17 = v6;
      v18 = v6;
      v24 = 1LL;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
                     v3,
                     (int)&unk_140104754,
                     v4,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v11,
                     (__int64)&v10,
                     &v9,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64 *)&v25,
                     (__int64)&v27);
    }
  }
  return v2;
}
