/*
 * XREFs of ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014FFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140069840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140160690 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140167120 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A190 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ExecutionContextCpuKnobCollection::Open(
        ExecutionContextCpuKnobCollection *this,
        unsigned int a2,
        KRegKey *a3)
{
  __int64 result; // rax
  void *m_ptr; // r9
  unsigned int v8; // r15d
  int ValueString; // edi
  int v10; // esi
  struct Rtl::KString *v11; // rax
  KRegKey *v12; // rcx
  struct _UNICODE_STRING *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Dst[256]; // [rsp+50h] [rbp-B0h] BYREF

  result = RegistryKnobCollection::Open(this, a2, (struct KnobTransaction *)a3);
  if ( (int)result < 0 )
    return result;
  m_ptr = a3->m_ptr;
  LOBYTE(a3[2].m_ptr) = 0;
  v8 = *(_DWORD *)(*((_QWORD *)this + 3) + 12LL);
  ValueString = KRegKey::Open(a3, a2, L"Reserved\\ExecutionContextProfiles", m_ptr);
  if ( (int)(ValueString + 0x80000000) >= 0 && ValueString != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_da913e0c9d2b3c6c30c213c9db82f56b_Traceguids,
        v8,
        ValueString);
    return (unsigned int)ValueString;
  }
  v10 = -1073741790;
  if ( (a2 & 2) != 0
    || (v10 = KRegKey::Open(a3 + 1, a2, L"Reserved\\ExecutionContextProfiles", a3[1].m_ptr), (int)(v10 + 0x80000000) < 0)
    || v10 == -1073741772 )
  {
    swprintf_s(Dst, 0x100uLL, L"cpu_%lu", v8);
    v13[0] = 0LL;
    if ( (ValueString == -1073741772
       || (ValueString = KRegKey::QueryValueString(a3, Dst, v13), ValueString == -1073741772)
       && (ValueString = KRegKey::QueryValueString(a3, L"Default", v13), ValueString == -1073741772))
      && (v10 < 0
       || (ValueString = KRegKey::QueryValueString(&a3[1], Dst, v13), ValueString == -1073741772)
       && (ValueString = KRegKey::QueryValueString(&a3[1], L"Default", v13), ValueString == -1073741772)) )
    {
      v11 = Rtl::KString::Initialize(L"Balanced");
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)v13, v11);
    }
    else if ( ValueString < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_da913e0c9d2b3c6c30c213c9db82f56b_Traceguids,
          ValueString);
      goto LABEL_22;
    }
    ValueString = KRegKey::Open(a3, a2, v13[0], a3->m_ptr);
    if ( ValueString < 0 )
    {
      if ( (a2 & 2) != 0 )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)v13, 0LL);
        return 3221225506LL;
      }
      ValueString = KRegKey::Open(a3 + 1, a2, v13[0], a3[1].m_ptr);
      if ( ValueString < 0 )
      {
        LOBYTE(a3[2].m_ptr) = 0;
        goto LABEL_22;
      }
      v12 = a3;
    }
    else
    {
      v12 = a3 + 1;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v12->m_ptr,
      0LL);
    LOBYTE(a3[2].m_ptr) = 1;
LABEL_22:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)v13, 0LL);
    return (unsigned int)ValueString;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      (a2 & 2) + 1,
      (a2 & 2) + 11,
      (struct _GUID *)&WPP_da913e0c9d2b3c6c30c213c9db82f56b_Traceguids,
      v8,
      v10);
  return (unsigned int)v10;
}
