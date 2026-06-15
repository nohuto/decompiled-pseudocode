/*
 * XREFs of ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180081CD0
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180049CB0 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // edx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  const struct tWAVEFORMATEX *v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17 = 0LL;
  v16 = 0LL;
  if ( a2 == eOffloadConnector )
    return 0LL;
  if ( !a4 )
  {
LABEL_7:
    v19 = 0LL;
    v11 = 0;
    v20 = 0;
    v18 = (__int128)*a3;
    while ( 1 )
    {
      if ( v11 >= 0xA )
      {
        v8 = -2147023728;
        v9 = 8091LL;
        goto LABEL_5;
      }
      v12 = &qword_18018B030[2 * v11];
      v13 = *v12 - v18;
      if ( *v12 == (_QWORD)v18 )
        v13 = v12[1] - *((_QWORD *)&v18 + 1);
      if ( !v13 )
        break;
      ++v11;
    }
    v14 = 602;
    v19 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
    if ( a2 != eKeywordDetectorConnector )
      v14 = 2;
    v15 = *((_QWORD *)this + 9);
    v20 = v11 + v14;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v15 + 48LL))(v15, &v19, &v16);
    if ( v8 < 0 )
    {
      v9 = 8093LL;
      goto LABEL_5;
    }
    return 0LL;
  }
  if ( !(unsigned int)ValidateUncompressedWaveFormatEx(a4) )
  {
    v17 = a4;
    LOWORD(v16) = 65;
    DWORD2(v16) = a4->cbSize + 18;
    goto LABEL_7;
  }
  v8 = -2004287480;
  v9 = 8082LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
