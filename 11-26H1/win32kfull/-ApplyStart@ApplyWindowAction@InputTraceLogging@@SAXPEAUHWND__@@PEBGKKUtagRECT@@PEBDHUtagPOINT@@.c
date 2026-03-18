/*
 * XREFs of ?ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@UtagSIZE@@032I422@Z @ 0x1402E73BC
 * Callers:
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402E7E40 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U1@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@44444435444444444444444@Z @ 0x140003AE4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D_ea_140003AE4.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ApplyWindowAction::ApplyStart(
        HWND a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        struct tagRECT *a5,
        const char *a6,
        int a7,
        struct tagPOINT a8,
        struct tagSIZE a9,
        HWND a10,
        const char *a11,
        struct tagRECT *a12,
        unsigned int a13,
        struct tagPOINT a14,
        struct tagRECT *a15,
        struct tagRECT *a16)
{
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r10d
  const wchar_t *v20; // r11
  LONG bottom; // [rsp+120h] [rbp-80h] BYREF
  LONG right; // [rsp+124h] [rbp-7Ch] BYREF
  LONG top; // [rsp+128h] [rbp-78h] BYREF
  LONG left; // [rsp+12Ch] [rbp-74h] BYREF
  LONG v25; // [rsp+130h] [rbp-70h] BYREF
  LONG v26; // [rsp+134h] [rbp-6Ch] BYREF
  LONG v27; // [rsp+138h] [rbp-68h] BYREF
  LONG v28; // [rsp+13Ch] [rbp-64h] BYREF
  LONG y; // [rsp+140h] [rbp-60h] BYREF
  LONG x; // [rsp+144h] [rbp-5Ch] BYREF
  unsigned int v31; // [rsp+148h] [rbp-58h] BYREF
  LONG v32; // [rsp+14Ch] [rbp-54h] BYREF
  LONG v33; // [rsp+150h] [rbp-50h] BYREF
  LONG v34; // [rsp+154h] [rbp-4Ch] BYREF
  LONG v35; // [rsp+158h] [rbp-48h] BYREF
  LONG cy; // [rsp+15Ch] [rbp-44h] BYREF
  LONG cx; // [rsp+160h] [rbp-40h] BYREF
  LONG v38; // [rsp+164h] [rbp-3Ch] BYREF
  LONG v39; // [rsp+168h] [rbp-38h] BYREF
  int v40; // [rsp+16Ch] [rbp-34h] BYREF
  int v41; // [rsp+170h] [rbp-30h] BYREF
  int v42; // [rsp+174h] [rbp-2Ch] BYREF
  LONG v43; // [rsp+178h] [rbp-28h] BYREF
  LONG v44; // [rsp+17Ch] [rbp-24h] BYREF
  LONG v45; // [rsp+180h] [rbp-20h] BYREF
  LONG v46; // [rsp+184h] [rbp-1Ch] BYREF
  void *v47; // [rsp+188h] [rbp-18h] BYREF
  HWND v48; // [rsp+190h] [rbp-10h] BYREF
  const wchar_t *v49; // [rsp+198h] [rbp-8h] BYREF
  void *v50; // [rsp+1A0h] [rbp+0h] BYREF
  HWND v51; // [rsp+1A8h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x80000LL) )
    {
      v40 = v18;
      v41 = v19;
      v49 = v20;
      bottom = a16->bottom;
      right = a16->right;
      top = a16->top;
      left = a16->left;
      v51 = a1;
      v25 = a15->bottom;
      v26 = a15->right;
      v27 = a15->top;
      v28 = a15->left;
      x = a14.x;
      v31 = a13;
      y = a14.y;
      v32 = a12->bottom;
      v33 = a12->right;
      v34 = a12->top;
      v35 = a12->left;
      v47 = (void *)a11;
      v48 = a10;
      cx = a9.cx;
      v39 = a8.x;
      cy = a9.cy;
      v42 = a7;
      v50 = (void *)a6;
      v38 = a8.y;
      v43 = a5->bottom;
      v44 = a5->right;
      v45 = a5->top;
      v46 = a5->left;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_140378113,
        v17,
        v18,
        (__int64)&v51,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        &v50,
        (__int64)&v42,
        &v49,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&cx,
        (__int64)&cy,
        (__int64)&v48,
        &v47,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&x,
        (__int64)&y,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&bottom);
    }
  }
}
