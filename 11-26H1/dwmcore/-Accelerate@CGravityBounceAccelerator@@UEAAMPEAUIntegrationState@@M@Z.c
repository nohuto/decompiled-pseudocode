/*
 * XREFs of ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x18028F080
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x180004CC0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 */

float __fastcall CGravityBounceAccelerator::Accelerate(
        CGravityBounceAccelerator *this,
        struct IntegrationState *a2,
        float a3)
{
  __int32 v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm3_4
  __int64 v8; // rcx

  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v5 = 0.0;
  if ( COERCE_FLOAT(*((_DWORD *)a2 + 1) & v4) < 0.000099999997
    && COERCE_FLOAT(*((_DWORD *)this + 4) & v4) < 0.000099999997
    || (v6 = *((float *)a2 + 1) - *((float *)this + 4), COERCE_FLOAT(LODWORD(v6) & v4) <= 0.0049999999) )
  {
    v7 = *((float *)a2 + 2);
    if ( *((float *)a2 + 3) <= COERCE_FLOAT(LODWORD(v7) & v4) )
    {
      if ( COERCE_FLOAT(LODWORD(a3) & v4) >= 0.0000011920929 )
      {
        v5 = v7 * *((float *)this + 8);
        if ( *((_BYTE *)this + 40) )
        {
          if ( COERCE_FLOAT(LODWORD(v5) & v4) > COERCE_FLOAT(*((_DWORD *)this + 9) & v4) )
          {
            if ( (float)(*((float *)this + 11) > 0.0) == (float)(v7 > 0.0) )
              v5 = *((float *)this + 9) * *((float *)this + 7);
            else
              v5 = COERCE_FLOAT(LODWORD(v7) ^ _xmm) / 0.0099999998;
          }
        }
        else
        {
          *((_BYTE *)this + 40) = 1;
        }
        *((float *)this + 9) = v5;
        *((_DWORD *)this + 11) = *((_DWORD *)a2 + 2);
      }
    }
    else
    {
      v5 = COERCE_FLOAT(LODWORD(v7) ^ _xmm) / 0.0099999998;
    }
  }
  else
  {
    v5 = (float)(v6 > 0.0) * COERCE_FLOAT(*((_DWORD *)this + 6) ^ _xmm);
  }
  if ( *((_DWORD *)this + 12) && (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_1803B6467);
  return v5;
}
