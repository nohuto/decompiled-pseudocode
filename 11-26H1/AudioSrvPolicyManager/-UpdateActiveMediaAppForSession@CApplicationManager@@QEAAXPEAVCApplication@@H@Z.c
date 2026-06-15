/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180015DB4
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180017840 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z @ 0x18003C4F8 (-OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18003CB20 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180014F08 (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015490 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180015510 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 *     __std_find_trivial_8 @ 0x18002F400 (__std_find_trivial_8.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180044144 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  unsigned int v6; // r15d
  int v7; // ebp
  _QWORD *v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebp
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // esi
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  __int64 v16; // rcx
  struct TSSession *v17; // rsi
  __int64 trivial_8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+88h] [rbp+20h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = *((_DWORD *)a2 + 53);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)a2 + 9);
  v9 = 1;
  while ( v8 )
  {
    v10 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( !*(_DWORD *)(v10 + 416) && *(_DWORD *)(v10 + 496) )
    {
      v7 = 1;
      break;
    }
  }
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( v7 && *((_DWORD *)a2 + 52) )
    goto LABEL_34;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v11 = 0;
  v12 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v12 )
  {
    v13 = v12[2];
    v12 = (_QWORD *)*v12;
    if ( !*(_DWORD *)(v13 + 416) && *(_DWORD *)(v13 + 500) )
    {
      v11 = 1;
      break;
    }
  }
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( v11 && (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
LABEL_34:
    v14 = 1;
  else
    v14 = 0;
  if ( !a3 && !(unsigned int)CApplication::HasPlayToStreams(a2) )
    v9 = 0;
  if ( !v14 || v9 )
  {
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v20 = v6;
    EnterCriticalSection(&stru_180068A08);
    v22 = &stru_180068A08;
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
      v16,
      &v21,
      &v20);
    if ( v21 == qword_180068A38 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v22);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x530,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x80070490LL);
    }
    else
    {
      v17 = *(struct TSSession **)(v21 + 24);
      LeaveCriticalSection(&stru_180068A08);
      trivial_8 = _std_find_trivial_8(*((_QWORD *)v17 + 6), *((_QWORD *)v17 + 7), a2);
      if ( trivial_8 != *((_QWORD *)v17 + 7) )
      {
        std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>((void *)(trivial_8 + 8));
        *((_QWORD *)v17 + 7) -= 8LL;
        TsSessionSendAppManagerNotification(v17);
      }
    }
    if ( v15 )
      LeaveCriticalSection(v15);
  }
  else
  {
    TsSessionIdAddActiveMediaApp(v6, a2);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
}
