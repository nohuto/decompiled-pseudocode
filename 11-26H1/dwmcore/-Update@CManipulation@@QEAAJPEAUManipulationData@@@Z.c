/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180107B08
 * Callers:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180107D3C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?Thunk_UpdateManipulation_110@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1802265A0 (-Thunk_UpdateManipulation_110@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444@Z @ 0x1801BF2D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1801BF2D8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2)
{
  _OWORD *v2; // r8
  int v3; // esi
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  char *v11; // rcx
  __int128 v12; // xmm0
  char *v13; // rdx
  int v14; // eax
  CManipulation *v15; // r8
  __int64 v16; // rdx
  int *v18; // r8
  int v19; // r9d
  unsigned __int8 v20; // cl
  int v21; // [rsp+118h] [rbp-80h] BYREF
  int v22; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v23; // [rsp+120h] [rbp-78h] BYREF
  int v24; // [rsp+124h] [rbp-74h] BYREF
  int v25; // [rsp+128h] [rbp-70h] BYREF
  int v26; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v27; // [rsp+130h] [rbp-68h] BYREF
  int v28; // [rsp+134h] [rbp-64h] BYREF
  int v29; // [rsp+138h] [rbp-60h] BYREF
  int v30; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v31; // [rsp+140h] [rbp-58h] BYREF
  int v32; // [rsp+144h] [rbp-54h] BYREF
  int v33; // [rsp+148h] [rbp-50h] BYREF
  int v34; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v35; // [rsp+150h] [rbp-48h] BYREF
  int v36; // [rsp+154h] [rbp-44h] BYREF
  int v37; // [rsp+158h] [rbp-40h] BYREF
  int v38; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v39; // [rsp+160h] [rbp-38h] BYREF
  int v40; // [rsp+164h] [rbp-34h] BYREF
  int v41; // [rsp+168h] [rbp-30h] BYREF
  int v42; // [rsp+16Ch] [rbp-2Ch] BYREF
  int v43; // [rsp+170h] [rbp-28h] BYREF
  int v44; // [rsp+174h] [rbp-24h] BYREF
  int v45; // [rsp+178h] [rbp-20h] BYREF
  CManipulation *v46; // [rsp+180h] [rbp-18h] BYREF
  int v47; // [rsp+1C8h] [rbp+30h] BYREF
  int v48; // [rsp+1D0h] [rbp+38h] BYREF
  int v49; // [rsp+1D8h] [rbp+40h] BYREF
  int v50; // [rsp+1E0h] [rbp+48h] BYREF

  v2 = (_OWORD *)((char *)this + 272);
  v3 = *((_DWORD *)this + 107);
  v5 = *((float *)a2 + 5) + *((float *)this + 73);
  v6 = *((float *)a2 + 9) * *((float *)this + 77);
  v7 = *((float *)a2 + 10) * *((float *)this + 78);
  v8 = *((float *)a2 + 11) * *((float *)this + 79);
  v9 = *((float *)a2 + 4) + *((float *)this + 72);
  v10 = *((float *)this + 71) + *((float *)a2 + 3);
  *((_OWORD *)this + 17) = *(_OWORD *)a2;
  v11 = (char *)this + 400;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
  v2[4] = *((_OWORD *)a2 + 4);
  v2[5] = *((_OWORD *)a2 + 5);
  v2[6] = *((_OWORD *)a2 + 6);
  v12 = *((_OWORD *)a2 + 7);
  v13 = (char *)a2 + 128;
  *((_OWORD *)v11 - 1) = v12;
  *(_OWORD *)v11 = *(_OWORD *)v13;
  *((_OWORD *)v11 + 1) = *((_OWORD *)v13 + 1);
  *((_OWORD *)v11 + 2) = *((_OWORD *)v13 + 2);
  *((_QWORD *)v11 + 6) = *((_QWORD *)v13 + 6);
  *((float *)this + 71) = v10;
  *((float *)this + 72) = v9;
  *((float *)this + 73) = v5;
  *((float *)this + 77) = v6;
  *((float *)this + 78) = v7;
  *((float *)this + 79) = v8;
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v20 = *((_BYTE *)this + 452);
    v46 = this;
    v47 = (v20 >> 1) & 1;
    v49 = *((_DWORD *)this + 112);
    v50 = *((_DWORD *)this + 111);
    v21 = *((_DWORD *)this + 110);
    v22 = *((_DWORD *)this + 107);
    v23 = *((_DWORD *)this + 105);
    v24 = *((_DWORD *)this + 104);
    v25 = *((_DWORD *)this + 103);
    v26 = *((_DWORD *)this + 102);
    v27 = *((_DWORD *)this + 101);
    v28 = *((_DWORD *)this + 100);
    v29 = *((_DWORD *)this + 106);
    v30 = *((_DWORD *)this + 80);
    v31 = *((_DWORD *)this + 83);
    v32 = *((_DWORD *)this + 82);
    v33 = *((_DWORD *)this + 81);
    v34 = *((_DWORD *)this + 79);
    v35 = *((_DWORD *)this + 78);
    v36 = *((_DWORD *)this + 77);
    v37 = *((_DWORD *)this + 76);
    v38 = *((_DWORD *)this + 75);
    v39 = *((_DWORD *)this + 74);
    v40 = *((_DWORD *)this + 73);
    v41 = *((_DWORD *)this + 72);
    v42 = *((_DWORD *)this + 71);
    v43 = *((_DWORD *)this + 70);
    v44 = *((_DWORD *)this + 69);
    v45 = *v18;
    v48 = v20 & 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v48,
      (unsigned int)&unk_1803B305B,
      (_DWORD)v18,
      v19,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47);
  }
  v14 = *((_DWORD *)this + 107);
  if ( v14 == v3 )
  {
    if ( v14 || v3 )
    {
      v15 = 0LL;
      v16 = 0LL;
    }
    else
    {
      v15 = this;
      v16 = 10LL;
    }
  }
  else
  {
    v15 = this;
    v16 = 7LL;
  }
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 80LL))(this, v16, v15);
  if ( *((_QWORD *)this + 6) )
  {
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    if ( *((_QWORD *)this + 6) )
    {
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
      if ( *((_QWORD *)this + 6) )
      {
        CResource::InvalidateConsumingAnimationsInternal((__int64)this);
        if ( *((_QWORD *)this + 6) )
        {
          CResource::InvalidateConsumingAnimationsInternal((__int64)this);
          if ( *((_QWORD *)this + 6) )
          {
            CResource::InvalidateConsumingAnimationsInternal((__int64)this);
            if ( *((_QWORD *)this + 6) )
            {
              CResource::InvalidateConsumingAnimationsInternal((__int64)this);
              if ( *((_QWORD *)this + 6) )
              {
                CResource::InvalidateConsumingAnimationsInternal((__int64)this);
                if ( *((_QWORD *)this + 6) )
                  CResource::InvalidateConsumingAnimationsInternal((__int64)this);
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
