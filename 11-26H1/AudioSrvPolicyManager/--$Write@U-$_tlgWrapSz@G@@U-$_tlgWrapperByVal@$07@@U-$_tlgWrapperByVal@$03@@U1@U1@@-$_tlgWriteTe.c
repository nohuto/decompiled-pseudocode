/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180027844
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        _BYTE **a5,
        __int64 a6,
        __int64 a7,
        _BYTE **a8,
        _BYTE **a9)
{
  __int64 v10; // rcx
  _BYTE *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // rdx
  int v19; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v23; // [rsp+60h] [rbp-41h]
  int v24; // [rsp+68h] [rbp-39h]
  int v25; // [rsp+6Ch] [rbp-35h]
  _BYTE *v26; // [rsp+70h] [rbp-31h]
  int v27; // [rsp+78h] [rbp-29h]
  int v28; // [rsp+7Ch] [rbp-25h]
  __int64 v29; // [rsp+80h] [rbp-21h]
  __int64 v30; // [rsp+88h] [rbp-19h]
  __int64 v31; // [rsp+90h] [rbp-11h]
  __int64 v32; // [rsp+98h] [rbp-9h]
  _BYTE *v33; // [rsp+A0h] [rbp-1h]
  int v34; // [rsp+A8h] [rbp+7h]
  int v35; // [rsp+ACh] [rbp+Bh]
  _BYTE *v36; // [rsp+B0h] [rbp+Fh]
  int v37; // [rsp+B8h] [rbp+17h]
  int v38; // [rsp+BCh] [rbp+1Bh]

  v10 = -1LL;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&v12[2 * v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = byte_180056CEC;
    v14 = 2;
  }
  v37 = v14;
  v36 = v12;
  v38 = 0;
  v15 = *a8;
  if ( *a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)&v15[2 * v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = byte_180056CEC;
    v17 = 2;
  }
  v34 = v17;
  v31 = a7;
  v29 = a6;
  v33 = v15;
  v35 = 0;
  v32 = 4LL;
  v18 = *a5;
  v30 = 8LL;
  if ( v18 )
  {
    do
      ++v10;
    while ( *(_WORD *)&v18[2 * v10] );
    v19 = 2 * v10 + 2;
  }
  else
  {
    v18 = byte_180056CEC;
    v19 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v27 = v19;
  v26 = v18;
  v28 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v24 = *(unsigned __int16 *)(a2 + 11);
  v23 = a2 + 11;
  UserData.Reserved = 2;
  v25 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
