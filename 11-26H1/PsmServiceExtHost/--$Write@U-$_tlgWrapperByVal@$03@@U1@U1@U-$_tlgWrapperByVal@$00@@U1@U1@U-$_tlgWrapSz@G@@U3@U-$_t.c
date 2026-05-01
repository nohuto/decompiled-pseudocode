/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002AB8
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800828F0 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        const wchar_t **a11,
        const wchar_t **a12,
        __int64 a13)
{
  __int64 v14; // rcx
  int v15; // r8d
  const wchar_t *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  const wchar_t *v19; // rdx
  _BYTE v21[32]; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v22; // [rsp+50h] [rbp-91h]
  __int64 v23; // [rsp+58h] [rbp-89h]
  __int64 v24; // [rsp+60h] [rbp-81h]
  __int64 v25; // [rsp+68h] [rbp-79h]
  __int64 v26; // [rsp+70h] [rbp-71h]
  __int64 v27; // [rsp+78h] [rbp-69h]
  __int64 v28; // [rsp+80h] [rbp-61h]
  __int64 v29; // [rsp+88h] [rbp-59h]
  __int64 v30; // [rsp+90h] [rbp-51h]
  __int64 v31; // [rsp+98h] [rbp-49h]
  __int64 v32; // [rsp+A0h] [rbp-41h]
  __int64 v33; // [rsp+A8h] [rbp-39h]
  const wchar_t *v34; // [rsp+B0h] [rbp-31h]
  int v35; // [rsp+B8h] [rbp-29h]
  int v36; // [rsp+BCh] [rbp-25h]
  const wchar_t *v37; // [rsp+C0h] [rbp-21h]
  int v38; // [rsp+C8h] [rbp-19h]
  int v39; // [rsp+CCh] [rbp-15h]
  __int64 v40; // [rsp+D0h] [rbp-11h]
  __int64 v41; // [rsp+D8h] [rbp-9h]

  v40 = a13;
  v14 = -1LL;
  v41 = 8LL;
  v15 = 2;
  v16 = *a12;
  if ( *a12 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_1800BBB1C;
    v18 = 2;
  }
  v38 = v18;
  v37 = v16;
  v39 = 0;
  v19 = *a11;
  if ( *a11 )
  {
    do
      ++v14;
    while ( v19[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v19 = &word_1800BBB1C;
  }
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v24 = a6;
  v22 = a5;
  v34 = v19;
  v35 = v15;
  v36 = 0;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 1LL;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(&dword_1800E1278, a2, 0LL, 0LL, 11, v21);
}
