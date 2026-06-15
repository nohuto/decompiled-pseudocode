/*
 * XREFs of ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18003BF68
 * Callers:
 *     PbmIsPlaying @ 0x180041C70 (PbmIsPlaying.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180038CD4 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsPlaying(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rbp
  unsigned int IsPlaying; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  CApplication *v6; // rcx
  CApplication *v8; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+68h] [rbp+10h] BYREF

  v8 = this;
  v3 = g_ApplicationManager;
  IsPlaying = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = v5;
  v6 = (CApplication *)*((_QWORD *)a2 + 28);
  v8 = v6;
  if ( v6 )
    goto LABEL_4;
  if ( (int)CApplicationManager::GetApplication(
              v3,
              *((const unsigned __int16 **)a2 + 22),
              *((_QWORD *)a2 + 26),
              *((_DWORD *)a2 + 41),
              &v8,
              0,
              0LL) >= 0 )
  {
    v6 = v8;
LABEL_4:
    IsPlaying = CApplication::IsPlaying(v6);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return IsPlaying;
}
