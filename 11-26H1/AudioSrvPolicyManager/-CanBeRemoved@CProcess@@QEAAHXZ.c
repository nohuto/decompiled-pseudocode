/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180020BB8
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020B2C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     __std_find_trivial_4 @ 0x18002F3F0 (__std_find_trivial_4.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // r15d
  DWORD v6; // r14d
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  __int64 v8; // rcx
  struct TSSession *v9; // r14
  __int64 trivial_4; // r15
  __int64 v11; // r14
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD v15; // [rsp+70h] [rbp+8h] BYREF
  struct TSSession *v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( *((_DWORD *)this + 104) != 2 )
    goto LABEL_20;
  if ( *((_QWORD *)this + 10) )
    goto LABEL_20;
  v3 = *((_DWORD *)this + 112);
  v4 = 1;
  if ( (v3 & 1) != 0 || (v3 & 0x1000) != 0 || *((_DWORD *)this + 113) || *((_DWORD *)this + 114) )
    goto LABEL_20;
  v5 = *((_DWORD *)this + 40);
  v6 = *((_DWORD *)this + 41);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v6;
  v16 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v18 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v8,
    &v17,
    &v15);
  if ( v17 == qword_180068A38 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    v13 = TsSessionCreate(v6, &v16);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43C,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v13);
      if ( v7 )
        LeaveCriticalSection(v7);
      goto LABEL_12;
    }
    v9 = v16;
  }
  else
  {
    v9 = *(struct TSSession **)(v17 + 24);
    LeaveCriticalSection(&stru_180068A08);
  }
  trivial_4 = _std_find_trivial_4(*((_QWORD *)v9 + 123), *((_QWORD *)v9 + 124), v5);
  v11 = *((_QWORD *)v9 + 124);
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( trivial_4 != v11 )
    goto LABEL_20;
LABEL_12:
  if ( *((_DWORD *)this + 122)
    || *((_DWORD *)this + 127)
    || *((_DWORD *)this + 128)
    || *((_DWORD *)this + 129)
    || *((_DWORD *)this + 124) )
  {
LABEL_20:
    v4 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
