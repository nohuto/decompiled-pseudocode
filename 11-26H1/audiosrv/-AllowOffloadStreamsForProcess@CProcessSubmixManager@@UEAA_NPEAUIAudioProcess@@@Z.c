/*
 * XREFs of ?AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z @ 0x180079C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CProcessSubmixManager::AllowOffloadStreamsForProcess(
        CProcessSubmixManager *this,
        struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  LPCWCH **v5; // rbx
  LPCWCH *v6; // rbp
  const WCHAR *v7; // rax
  int v8; // edi
  int v9; // eax
  int v10; // edi
  unsigned int v11; // edi
  bool v12; // zf
  int v13; // edi
  int v15; // edi
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = (LPCWCH **)*((_QWORD *)this + 7);
  v16 = v2;
  while ( v5 != *((LPCWCH ***)this + 8) )
  {
    v6 = *v5;
    if ( *((_DWORD *)*v5 + 3) == 1 )
    {
      v15 = *((_DWORD *)v6 + 4);
      if ( v15 != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
        || !*((_DWORD *)v6 + 2) )
      {
        goto LABEL_20;
      }
      v8 = *((_DWORD *)*v5 + 2);
      v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
LABEL_18:
      v12 = v8 == v9;
      goto LABEL_19;
    }
    if ( *((_DWORD *)*v5 + 3) != 2 )
    {
      if ( *((_DWORD *)*v5 + 3) != 3 )
      {
        if ( *((_DWORD *)*v5 + 3) != 4 )
          goto LABEL_20;
        v7 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        if ( CompareStringOrdinal(**v5, -1, v7, -1, 1) != 2 )
          goto LABEL_20;
        v8 = *((_DWORD *)*v5 + 4);
        v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
        goto LABEL_18;
      }
      v10 = *((_DWORD *)v6 + 4);
      if ( v10 != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2) )
        goto LABEL_20;
      v11 = *((_DWORD *)v6 + 2);
      if ( v11 == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
        goto LABEL_20;
      v12 = (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(a2, v11) == 0;
LABEL_19:
      if ( v12 )
        goto LABEL_14;
      goto LABEL_20;
    }
    v13 = *((_DWORD *)v6 + 4);
    if ( v13 == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
      && (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(
           a2,
           *((unsigned int *)v6 + 2)) )
    {
LABEL_14:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
      return 0;
    }
LABEL_20:
    ++v5;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 1;
}
