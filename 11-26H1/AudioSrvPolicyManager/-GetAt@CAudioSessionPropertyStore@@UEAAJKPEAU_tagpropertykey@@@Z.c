/*
 * XREFs of ?GetAt@CAudioSessionPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x18003D950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::GetAt(
        CAudioSessionPropertyStore *this,
        int a2,
        struct _tagpropertykey *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    a3->fmtid = 0LL;
    a3->pid = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v8 = *((_QWORD *)this + 4);
    v9 = 0;
    v13 = v7;
    v10 = v8;
    if ( v8 )
    {
      do
      {
        if ( *(_WORD *)(v8 + 24) )
        {
          if ( v9 == a2 )
            break;
          ++v9;
        }
        v8 = *(_QWORD *)(v8 + 48);
        v10 = v8;
      }
      while ( v8 );
      if ( v8 )
      {
        a3->fmtid = *(GUID *)v8;
        a3->pid = *(_DWORD *)(v10 + 16);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
        return 0LL;
      }
    }
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80070057LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  }
  else
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x198,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80004003LL);
  }
  return v6;
}
