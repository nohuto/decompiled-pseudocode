/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14002BA2C
 * Callers:
 *     NtUserCloseClipboard @ 0x14002B780 (NtUserCloseClipboard.c)
 *     NtUserOpenClipboard @ 0x1401121B0 (NtUserOpenClipboard.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     NtUserSetClipboardData @ 0x14024D260 (NtUserSetClipboardData.c)
 * Callees:
 *     _tlgWriteAgg @ 0x14002BB18 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        const wchar_t **a7)
{
  __int64 v8; // rcx
  const wchar_t *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  _BYTE *v12; // rdx
  int v13; // ecx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-31h] BYREF
  __int64 v16; // [rsp+50h] [rbp-11h]
  __int64 v17; // [rsp+58h] [rbp-9h]
  _BYTE *v18; // [rsp+60h] [rbp-1h]
  int v19; // [rsp+68h] [rbp+7h]
  int v20; // [rsp+6Ch] [rbp+Bh]
  __int64 v21; // [rsp+70h] [rbp+Fh]
  __int64 v22; // [rsp+78h] [rbp+17h]
  const wchar_t *v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+8Ch] [rbp+2Bh]

  v8 = -1LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &pszFormat;
    v11 = 2;
  }
  v24 = v11;
  v21 = a6;
  v23 = v9;
  v25 = 0;
  v22 = 4LL;
  v12 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v12[v8] );
    v13 = v8 + 1;
  }
  else
  {
    v12 = &unk_140351139;
    v13 = 1;
  }
  v18 = v12;
  v19 = v13;
  v16 = a4;
  v20 = 0;
  v17 = 8LL;
  return tlgWriteAgg((int)&dword_14039BB88, a2, 0, 6, &v15);
}
