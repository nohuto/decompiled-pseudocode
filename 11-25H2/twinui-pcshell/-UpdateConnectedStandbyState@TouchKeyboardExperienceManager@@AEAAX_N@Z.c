/*
 * XREFs of ?UpdateConnectedStandbyState@TouchKeyboardExperienceManager@@AEAAX_N@Z @ 0x180467B7C
 * Callers:
 *     wistd::__function::__func__lambda_7d0739256fada0ff8c98c9de4f75de3b__void___cdecl(unsigned_char_const_&)_::operator() @ 0x18045F310 (wistd--__function--__func__lambda_7d0739256fada0ff8c98c9de4f75de3b__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180005B8C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a425cb1f9a85c2275f94348d493772b0___ @ 0x180459348 (Windows--Internal--ComTaskPool--QueueTask__lambda_a425cb1f9a85c2275f94348d493772b0___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::UpdateConnectedStandbyState(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  char v4; // r14
  int v5; // esi
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  char v14; // [rsp+88h] [rbp+38h]
  __int64 *v15; // [rsp+90h] [rbp+40h] BYREF
  const char *v16; // [rsp+98h] [rbp+48h] BYREF

  v4 = *((_BYTE *)this + 1013);
  v5 = *((_DWORD *)this + 251);
  *((_BYTE *)this + 1013) = a2;
  if ( a2 != (v5 != 0) )
  {
    v6 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      LODWORD(v15) = *((_DWORD *)this + 251);
      v14 = v4;
      LOBYTE(v13) = a2;
      v16 = "TouchKeyboardExperienceManager::UpdateConnectedStandbyState";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        (__int64)&unk_1807D1B8C,
        v7,
        v8,
        &v16);
    }
  }
  if ( v4 && !a2 && v5 )
  {
    v13 = 0LL;
    v15 = &v13;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    if ( (int)Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v9) >= 0 )
    {
      v11 = v13;
      v12[0] = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v12[1] = (__int64)this;
      Windows::Internal::ComTaskPool::QueueTask__lambda_a425cb1f9a85c2275f94348d493772b0___(
        v11,
        v10,
        *((_DWORD *)this + 243),
        (volatile signed __int32 *)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
}
