/*
 * XREFs of ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800EBB20
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x180065100 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180061DD4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800898D8 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveVendorReport(
        HidLampArrayDevice *this,
        char a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 i; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  size_t v11; // rbp
  void *v12; // rax
  _BYTE *v13; // rbx
  unsigned int v14; // ebx
  const struct std::nothrow_t *v15; // rdx
  void *v16; // rax
  signed int LastError; // eax
  unsigned __int8 v19; // bp
  const struct std::nothrow_t *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v25; // [rsp+70h] [rbp+8h] BYREF
  const char *v26; // [rsp+80h] [rbp+18h] BYREF

  if ( (unsigned int)dword_180251248 > 5 )
  {
    v25 = (char *)this + 24;
    v26 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_180251248,
      byte_180216A64,
      (__int64)a3,
      (__int64)a4,
      (const unsigned __int16 **)&v26,
      (const WCHAR **)&v25);
  }
  *a3 = 0;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 73) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 74) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 75) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 76) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 77) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 78) + 16LL) )
  {
    return 2147942487LL;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 160) )
      return 2147942487LL;
    v9 = *((_QWORD *)this + 79);
    if ( *(_BYTE *)(v9 + 8 * i) == a2 )
      break;
  }
  v10 = *(_DWORD *)(v9 + 8 * i + 4);
  if ( v10 > 0x40 || (int)v10 <= 0 )
    return 2147942487LL;
  v11 = v10;
  v12 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v12;
  v13 = v12;
  if ( !v12 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x205,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
LABEL_20:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v25, v15);
    return v14;
  }
  memset_0(v12, 0, v11);
  *v13 = a2;
  v16 = (void *)std::_Atomic_storage<unsigned __int64,8>::load(*((_QWORD *)this + 2) + 40LL);
  if ( !HidD_GetFeature(v16, v13, v11) )
  {
    LastError = GetLastError();
    v14 = LastError;
    if ( LastError > 0 )
      v14 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_20;
  }
  v19 = v11 - 1;
  *a3 = v19;
  memcpy_0(a4, v13 + 1, v19);
  if ( (unsigned int)dword_180251248 > 5 )
  {
    v26 = (char *)this + 24;
    v23 = "Completed successfully";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_180251248,
      byte_180216AB2,
      v21,
      v22,
      (const unsigned __int16 **)&v23,
      (const WCHAR **)&v26);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v25, v20);
  return 0LL;
}
