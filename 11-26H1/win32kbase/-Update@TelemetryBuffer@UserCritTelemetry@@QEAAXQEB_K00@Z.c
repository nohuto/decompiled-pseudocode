/*
 * XREFs of ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x14013EBA0
 * Callers:
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1400205D8 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?ShouldBuffer@TelemetryBuffer@UserCritTelemetry@@CA_NW4BucketType@2@QEB_K1@Z @ 0x14013F024 (-ShouldBuffer@TelemetryBuffer@UserCritTelemetry@@CA_NW4BucketType@2@QEB_K1@Z.c)
 *     ?UpdateCurrentSlot@TelemetryBuffer@UserCritTelemetry@@AEAAXW4BucketType@2@QEB_K11@Z @ 0x14013F05C (-UpdateCurrentSlot@TelemetryBuffer@UserCritTelemetry@@AEAAXW4BucketType@2@QEB_K11@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperPtrSize@@U3@U1@U1@U1@U1@U3@U3@U1@U1@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3333AEBU_tlgWrapperPtrSize@@5333355333355@Z @ 0x14013F120 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperPtrSize@@U3@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@44444444@Z @ 0x140190714 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteT.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall UserCritTelemetry::TelemetryBuffer::Update(
        UserCritTelemetry::TelemetryBuffer *this,
        const unsigned __int64 *a2,
        const unsigned __int64 *a3,
        const unsigned __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+C8h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+100h] [rbp-48h] BYREF
  __int64 v32; // [rsp+108h] [rbp-40h] BYREF
  __int64 v33; // [rsp+110h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+118h] [rbp-30h] BYREF
  __int64 v35; // [rsp+120h] [rbp-28h] BYREF
  unsigned __int64 v36; // [rsp+128h] [rbp-20h] BYREF
  char *v37; // [rsp+130h] [rbp-18h] BYREF
  int v38; // [rsp+138h] [rbp-10h]
  void *v39; // [rsp+140h] [rbp-8h] BYREF
  int v40; // [rsp+148h] [rbp+0h]
  char *v41; // [rsp+150h] [rbp+8h] BYREF
  int v42; // [rsp+158h] [rbp+10h]
  void *v43; // [rsp+160h] [rbp+18h] BYREF
  int v44; // [rsp+168h] [rbp+20h]
  UserCritTelemetry::TelemetryBuffer *v45; // [rsp+170h] [rbp+28h] BYREF
  int v46; // [rsp+178h] [rbp+30h]
  void *v47; // [rsp+180h] [rbp+38h] BYREF
  int v48; // [rsp+188h] [rbp+40h]
  int v49; // [rsp+1C8h] [rbp+80h] BYREF

  if ( *((_WORD *)this + 2196) == 60 )
  {
    if ( (unsigned int)dword_1402A9F58 > 5
      && (qword_1402A9F68 & 0x402000000000LL) != 0
      && (qword_1402A9F70 & 0x402000000000LL) == qword_1402A9F70 )
    {
      v40 = 2;
      v37 = (char *)this + 2880;
      v16 = *((_QWORD *)this + 548);
      v17 = *((_QWORD *)this + 546);
      v38 = 1440;
      v39 = &UserCritTelemetry::TelemetryBuffer::SlotCount;
      v33 = v16;
      if ( v17 )
        v18 = *((_QWORD *)this + 547) / v17;
      else
        v18 = 0LL;
      v34 = v18;
      v35 = *((_QWORD *)this + 547);
      v36 = v17;
      v19 = *((_QWORD *)this + 543);
      v41 = (char *)this + 1440;
      v24 = *((_QWORD *)this + 545);
      v42 = 1440;
      v43 = &UserCritTelemetry::TelemetryBuffer::SlotCount;
      v44 = 2;
      if ( v19 )
        v20 = *((_QWORD *)this + 544) / v19;
      else
        v20 = 0LL;
      v25 = v20;
      v21 = *((_QWORD *)this + 544);
      v27 = v19;
      v22 = *((_QWORD *)this + 540);
      v26 = v21;
      v28 = *((_QWORD *)this + 542);
      v45 = this;
      v46 = 1440;
      v47 = &UserCritTelemetry::TelemetryBuffer::SlotCount;
      v48 = 2;
      if ( v22 )
        v23 = *((_QWORD *)this + 541) / v22;
      else
        v23 = 0LL;
      v29 = v23;
      v30 = *((_QWORD *)this + 541);
      v31 = v22;
      v49 = 1;
      v32 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v22,
        (unsigned int)&unk_140283942,
        1440,
        (unsigned int)&UserCritTelemetry::TelemetryBuffer::SlotCount,
        (__int64)&v32,
        (__int64)&v49,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v47,
        (__int64)&v45,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v43,
        (__int64)&v41,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v39,
        (__int64)&v37);
    }
    memset(this, 0, 0x10E0uLL);
    memset((char *)this + 4320, 0, 0x48uLL);
    *((_WORD *)this + 2196) = 0;
    *((_BYTE *)this + 4394) = 0;
  }
  if ( !*((_BYTE *)this + 4394) )
  {
    if ( !(unsigned __int8)UserCritTelemetry::TelemetryBuffer::ShouldBuffer(0LL, a3, a4)
      && !(unsigned __int8)UserCritTelemetry::TelemetryBuffer::ShouldBuffer(1LL, v11, v12)
      && !(unsigned __int8)UserCritTelemetry::TelemetryBuffer::ShouldBuffer(2LL, v13, v14) )
    {
      return;
    }
    *((_BYTE *)this + 4394) = 1;
  }
  UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(this, 0LL, a2, a3, a4);
  UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(this, 1LL, v8, a3, a4);
  UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(this, 2LL, v9, a3, a4);
  if ( (unsigned int)dword_1402A9F58 > 5
    && (qword_1402A9F68 & 0x2000000000LL) != 0
    && (qword_1402A9F70 & 0x2000000000LL) == qword_1402A9F70 )
  {
    v15 = *((unsigned __int16 *)this + 2196);
    v32 = *((_QWORD *)this + 3 * v15 + 362);
    v31 = *((_QWORD *)this + 3 * v15 + 361);
    v30 = *((_QWORD *)this + 3 * v15 + 360);
    v29 = *((_QWORD *)this + 3 * v15 + 182);
    v28 = *((_QWORD *)this + 3 * v15 + 181);
    v27 = *((_QWORD *)this + 3 * v15 + 180);
    v26 = *((_QWORD *)this + 3 * v15 + 2);
    v25 = *((_QWORD *)this + 3 * v15 + 1);
    v24 = *((_QWORD *)this + 3 * v15);
    LOWORD(v49) = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v27,
      (unsigned int)&unk_14028385A,
      v15,
      v10,
      (__int64)&v49,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v28,
      (__int64)&v29,
      (__int64)&v30,
      (__int64)&v31,
      (__int64)&v32);
  }
  ++*((_WORD *)this + 2196);
}
