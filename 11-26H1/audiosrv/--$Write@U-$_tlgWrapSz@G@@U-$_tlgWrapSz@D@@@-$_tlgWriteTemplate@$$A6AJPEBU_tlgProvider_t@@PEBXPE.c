/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x18000352C
 * Callers:
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800FE940 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800FEAB0 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const CHAR **a6)
{
  __int64 v8; // rcx
  const CHAR *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  const wchar_t *v12; // rdx
  int v13; // ecx
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  const CHAR *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = MultiByteStr;
    v11 = 1;
  }
  v20 = v11;
  v19 = v9;
  v21 = 0;
  v12 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v12[v8] );
    v13 = 2 * v8 + 2;
  }
  else
  {
    v12 = &LocaleName;
    v13 = 2;
  }
  v16 = v12;
  v17 = v13;
  v18 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 4, (__int64)v15);
}
