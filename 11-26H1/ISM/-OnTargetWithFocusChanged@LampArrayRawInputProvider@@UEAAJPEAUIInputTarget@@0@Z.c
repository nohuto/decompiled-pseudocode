/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180083780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180064AD8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x180098044 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        RTL_SRWLOCK *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct LampArrayEndpoint *v8; // r15
  RTL_SRWLOCK *i; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  volatile __int32 *v12; // rbx
  struct LampArrayDevice **j; // rbx
  int active; // eax
  unsigned int v15; // esi
  int v16; // [rsp+20h] [rbp-30h]
  int Ptr; // [rsp+40h] [rbp-10h] BYREF
  const char *v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int32 v20; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0;
  if ( a3 )
  {
    v21 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, RTL_SRWLOCK **))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v21);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 361LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v4,
        v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      return v5;
    }
    v4 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int32 *))v21->Ptr + 4))(v21, &v20);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 363LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  }
  v8 = 0LL;
  AcquireSRWLockExclusive(this + 16);
  v21 = this + 16;
  for ( i = (RTL_SRWLOCK *)this[10].Ptr; i != &this[10]; i = (RTL_SRWLOCK *)i->Ptr )
  {
    if ( LODWORD(i[3].Ptr) == v20 )
    {
      v8 = (struct LampArrayEndpoint *)&i[2];
      break;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v21);
  if ( (unsigned int)dword_180251248 <= 5 )
  {
    v12 = (volatile __int32 *)&this[6];
  }
  else
  {
    LODWORD(v21) = v20;
    v12 = (volatile __int32 *)&this[6];
    Ptr = (int)this[6].Ptr;
    v18 = "FocusChanged";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180251248,
      byte_180216291,
      v10,
      v11,
      (const unsigned __int16 **)&v18,
      (__int64)&Ptr,
      (__int64)&v21);
  }
  _InterlockedExchange(v12, v20);
  AcquireSRWLockExclusive(this + 18);
  v21 = this + 18;
  for ( j = (struct LampArrayDevice **)this[7].Ptr;
        j != (struct LampArrayDevice **)&this[7];
        j = (struct LampArrayDevice **)*j )
  {
    active = LampArrayRawInputProvider::SetActiveViewClient((LampArrayRawInputProvider *)&this[-2], j[2], v8);
    v15 = active;
    if ( active < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x184,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)active,
        v16);
      goto LABEL_22;
    }
  }
  v15 = 0;
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v21);
  return v15;
}
