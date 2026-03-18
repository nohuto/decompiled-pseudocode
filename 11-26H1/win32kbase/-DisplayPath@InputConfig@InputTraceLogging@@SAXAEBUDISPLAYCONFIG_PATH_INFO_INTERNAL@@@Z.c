/*
 * XREFs of ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14008E9DC
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x14008D61C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14008E5EC (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344444444444444444AEBU?$_tlgWrapSz@D@@55444444444444344444444@Z @ 0x140195258 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z @ 0x1401BC188 (-ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401C0094 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::InputConfig::DisplayPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 *v12; // r8
  int v13; // r9d
  int v14; // [rsp+190h] [rbp-80h] BYREF
  int v15; // [rsp+194h] [rbp-7Ch] BYREF
  int v16; // [rsp+198h] [rbp-78h] BYREF
  int v17; // [rsp+19Ch] [rbp-74h] BYREF
  int v18; // [rsp+1A0h] [rbp-70h] BYREF
  int v19; // [rsp+1A4h] [rbp-6Ch] BYREF
  int v20; // [rsp+1A8h] [rbp-68h] BYREF
  int v21; // [rsp+1ACh] [rbp-64h] BYREF
  int v22; // [rsp+1B0h] [rbp-60h] BYREF
  int v23; // [rsp+1B4h] [rbp-5Ch] BYREF
  int v24; // [rsp+1B8h] [rbp-58h] BYREF
  int v25; // [rsp+1BCh] [rbp-54h] BYREF
  int v26; // [rsp+1C0h] [rbp-50h] BYREF
  int v27; // [rsp+1C4h] [rbp-4Ch] BYREF
  int v28; // [rsp+1C8h] [rbp-48h] BYREF
  int v29; // [rsp+1CCh] [rbp-44h] BYREF
  int v30; // [rsp+1D0h] [rbp-40h] BYREF
  int v31; // [rsp+1D4h] [rbp-3Ch] BYREF
  int v32; // [rsp+1D8h] [rbp-38h] BYREF
  int v33; // [rsp+1DCh] [rbp-34h] BYREF
  int v34; // [rsp+1E0h] [rbp-30h] BYREF
  int v35; // [rsp+1E4h] [rbp-2Ch] BYREF
  int v36; // [rsp+1E8h] [rbp-28h] BYREF
  int v37; // [rsp+1ECh] [rbp-24h] BYREF
  int v38; // [rsp+1F0h] [rbp-20h] BYREF
  int v39; // [rsp+1F4h] [rbp-1Ch] BYREF
  int v40; // [rsp+1F8h] [rbp-18h] BYREF
  int v41; // [rsp+1FCh] [rbp-14h] BYREF
  int v42; // [rsp+200h] [rbp-10h] BYREF
  int v43; // [rsp+204h] [rbp-Ch] BYREF
  int v44; // [rsp+208h] [rbp-8h] BYREF
  int v45; // [rsp+20Ch] [rbp-4h] BYREF
  int v46; // [rsp+210h] [rbp+0h] BYREF
  int v47; // [rsp+214h] [rbp+4h] BYREF
  int v48; // [rsp+218h] [rbp+8h] BYREF
  int v49; // [rsp+21Ch] [rbp+Ch] BYREF
  __int64 v50; // [rsp+220h] [rbp+10h] BYREF
  __int64 v51; // [rsp+228h] [rbp+18h] BYREF
  __int64 v52; // [rsp+230h] [rbp+20h] BYREF
  const char *v53; // [rsp+238h] [rbp+28h] BYREF
  __int64 v54; // [rsp+240h] [rbp+30h] BYREF
  __int64 v55; // [rsp+248h] [rbp+38h] BYREF
  __int64 v56; // [rsp+250h] [rbp+40h] BYREF
  int v57; // [rsp+278h] [rbp+68h] BYREF
  int v58; // [rsp+280h] [rbp+70h] BYREF
  int v59; // [rsp+288h] [rbp+78h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v57 = *((_DWORD *)a1 + 53);
    v58 = *((_DWORD *)a1 + 50);
    v59 = *((_DWORD *)a1 + 49);
    v14 = *((_DWORD *)a1 + 48);
    v15 = *((_DWORD *)a1 + 47);
    v16 = *((_DWORD *)a1 + 46);
    v17 = *((_DWORD *)a1 + 45);
    v18 = *((_DWORD *)a1 + 44);
    v50 = *((_QWORD *)a1 + 21);
    v19 = *((_DWORD *)a1 + 41);
    v20 = *((_DWORD *)a1 + 40);
    v21 = *((_DWORD *)a1 + 38);
    v22 = *((_DWORD *)a1 + 37);
    v23 = *((_DWORD *)a1 + 36);
    v24 = *((_DWORD *)a1 + 35);
    v25 = *((_DWORD *)a1 + 34);
    v26 = *((_DWORD *)a1 + 33);
    v27 = *((_DWORD *)a1 + 32);
    v28 = *((_DWORD *)a1 + 31);
    v29 = *((_DWORD *)a1 + 30);
    v3 = *((_DWORD *)a1 + 29);
    v4 = *((unsigned int *)a1 + 28);
    v30 = v3;
    v5 = InputTraceLogging::ScalingToString(v4, a2, a1);
    v7 = *(unsigned int *)(v6 + 108);
    v51 = v5;
    v9 = InputTraceLogging::ScalingToString(v7, v8, v6);
    v11 = *(_DWORD *)(v10 + 104);
    v52 = v9;
    v53 = InputTraceLogging::OrientationToString(v11);
    v31 = *((unsigned __int8 *)v12 + 101);
    v32 = *((unsigned __int8 *)v12 + 100);
    v33 = *((_DWORD *)v12 + 24);
    v34 = *((_DWORD *)v12 + 23);
    v35 = *((_DWORD *)v12 + 22);
    v36 = *((_DWORD *)v12 + 21);
    v37 = *((_DWORD *)v12 + 20);
    v38 = *((_DWORD *)v12 + 19);
    v39 = *((_DWORD *)v12 + 18);
    v40 = *((_DWORD *)v12 + 17);
    v41 = *((_DWORD *)v12 + 16);
    v42 = *((_DWORD *)v12 + 15);
    v43 = *((_DWORD *)v12 + 14);
    v44 = *((_DWORD *)v12 + 13);
    v45 = *((_DWORD *)v12 + 12);
    v46 = *((_DWORD *)v12 + 11);
    v47 = *((_DWORD *)v12 + 10);
    v54 = v12[4];
    v48 = *((_DWORD *)v12 + 7);
    v49 = *((_DWORD *)v12 + 6);
    v55 = v12[1];
    v56 = *v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_1402883A1,
      (_DWORD)v12,
      v13,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v54,
      (__int64)&v47,
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
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
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
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v50,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57);
  }
}
