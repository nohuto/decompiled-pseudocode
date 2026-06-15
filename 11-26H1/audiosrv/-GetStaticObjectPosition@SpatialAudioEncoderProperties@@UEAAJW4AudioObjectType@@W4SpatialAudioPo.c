/*
 * XREFs of ?GetStaticObjectPosition@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@W4SpatialAudioPositionType@@PEAM22@Z @ 0x18012F550
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetStaticObjectPosition(
        __int64 a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rsi
  _DWORD *v16; // rbp
  const CHAR *v18; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 656);
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 656));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( a3 )
  {
    if ( a3 == 1 )
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _QWORD))(*(_QWORD *)a1 + 48LL))(
                             a1,
                             a2,
                             a4,
                             a5,
                             a6,
                             0LL);
    else
      return (unsigned int)-2147024809;
  }
  else if ( a4 && (v15 = a5) != 0LL && (v16 = a6) != 0LL )
  {
    if ( !*(_BYTE *)(a1 + 1149) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 1136) + 24LL))(
              *(_QWORD *)(a1 + 1136),
              a1 + 726,
              a1 + 352,
              304LL);
      if ( v11 >= 0 )
        *(_BYTE *)(a1 + 1149) = 1;
    }
    *a4 = *(_OWORD *)(a1
                    + 16
                    * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)(a2 & 0xFFFFD | 2))) >> 20) - 1024 + 22LL));
    *v15 = *(_DWORD *)(a1
                     + 16
                     * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)(a2 & 0xFFFFD | 2))) >> 20) - 1024 + 22LL)
                     + 4);
    *v16 = *(_DWORD *)(a1
                     + 16
                     * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)(a2 & 0xFFFFD | 2))) >> 20) - 1024 + 22LL)
                     + 8);
  }
  else
  {
    v11 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 > 2 )
    {
      v20 = -2147024809;
      v18 = "SpatialAudioEncoderProperties::GetStaticObjectPosition";
      v19 = 676;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_1801A985A,
        v13,
        v14,
        &v18,
        (__int64)&v19,
        (__int64)&v20);
    }
  }
  return (unsigned int)v11;
}
