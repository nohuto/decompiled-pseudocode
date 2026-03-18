/*
 * XREFs of ldevLoadImage @ 0x14000CAA0
 * Callers:
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x140004C4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 *     ldevLoadCdd @ 0x14000CC38 (ldevLoadCdd.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401A2CA0 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     _wcsicmp @ 0x1401C77A8 (_wcsicmp.c)
 */

struct _LDEV *__fastcall ldevLoadImage(PCWSTR Source, int a2, int *a3, int a4, unsigned int a5, const wchar_t **a6)
{
  __int64 v10; // rcx
  __int64 SessionState; // rax
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  struct _LDEV *ImageInternal; // rbx
  const wchar_t **v16; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+64h] [rbp-1Ch] BYREF
  int v22; // [rsp+68h] [rbp-18h] BYREF
  int v23; // [rsp+6Ch] [rbp-14h] BYREF
  const WCHAR *v24; // [rsp+70h] [rbp-10h] BYREF
  __int64 v25; // [rsp+78h] [rbp-8h] BYREF
  struct _LDEV *v26; // [rsp+B0h] [rbp+30h] BYREF

  v26 = 0LL;
  if ( wcsicmp(Source, L"CDD") )
  {
    v12 = a5;
    ImageInternal = ldevLoadImageInternal(Source, a2, a3, a4, a5);
  }
  else
  {
    SessionState = W32GetSessionState(v10);
    v12 = a5;
    v13 = a5;
    v14 = *(_QWORD *)(SessionState + 88);
    *(_DWORD *)(v14 + 1144) = 0;
    if ( (int)ldevLoadCdd(&v26, a3, v13) < 0 )
      *(_DWORD *)(v14 + 1144) = 3;
    ImageInternal = v26;
  }
  if ( !*a3 )
  {
    v16 = a6;
    if ( wcsicmp(*a6, L"CDD") )
    {
      if ( wcsicmp(*v16, L"RDPUDD")
        && (unsigned int)dword_1402A9E08 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1402A9E08, 0x400000000000LL) )
      {
        v22 = *((_DWORD *)v16 + 3);
        v23 = *((_DWORD *)v16 + 2);
        v24 = *v16;
        LODWORD(v26) = v12;
        v20 = a4;
        v21 = a2;
        v25 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1402A9E08,
          (__int64)&unk_140283D68,
          v18,
          v19,
          (__int64)&v25,
          &v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v26);
      }
    }
  }
  return ImageInternal;
}
