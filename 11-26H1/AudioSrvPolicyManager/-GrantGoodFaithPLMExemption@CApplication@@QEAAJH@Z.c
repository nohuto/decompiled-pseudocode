/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800389C0
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18003BC24 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18003A200 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // edx
  int started; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = v2;
  if ( *((_DWORD *)this + 108) )
  {
    started = -2147024809;
  }
  else
  {
    *((_DWORD *)this + 155) = 2;
    *((_QWORD *)this + 78) = 1LL;
    *((_DWORD *)this + 158) = 1;
    *((_DWORD *)this + 159) = 2;
    *((_DWORD *)this + 160) = 1;
    *((_DWORD *)this + 161) = 2;
    started = CApplication::StartGoodFaithPLMExemptionTimer(this, v3);
    if ( started >= 0 )
    {
      *((_DWORD *)this + 108) = 1;
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xA3u, 0);
      goto LABEL_4;
    }
  }
  AudPolicyLogError("CApplication::GrantGoodFaithPLMExemption", 1216, started);
LABEL_4:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  return (unsigned int)started;
}
