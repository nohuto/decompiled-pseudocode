/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180070D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180013780 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int16 *a2,
        const struct _GUID *a3)
{
  const struct _GUID *v3; // r15
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx
  __int64 *p_OwningThread; // rsi
  __int64 v8; // rax
  char *v9; // rdx
  int v10; // r8d
  int v11; // ecx
  int *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-58h] BYREF
  ATL::CAtlException *v15; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v16[9])(_QWORD, void **); // [rsp+30h] [rbp-48h] BYREF
  __int64 *v19; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = this;
  v6 = 0;
  p_OwningThread = (__int64 *)&this[6].OwningThread;
  v19 = (__int64 *)&this[6].OwningThread;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v8 = *p_OwningThread;
  v9 = (char *)a2 - *p_OwningThread;
  do
  {
    v10 = *(unsigned __int16 *)&v9[v8];
    v11 = *(unsigned __int16 *)v8 - v10;
    if ( v11 )
      break;
    v8 += 2LL;
  }
  while ( v10 );
  if ( v11 )
  {
    EnterCriticalSection(v5 + 7);
    try
    {
      v14 = v5 + 7;
      v6 = 0;
      ATL::CSimpleStringT<unsigned short,0>::SetString(p_OwningThread, a2);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = (int *)v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v13;
      p_OwningThread = v19;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 306, v6);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      v16[0] = (void (__fastcall **)(_QWORD, void **))&CAudioSessionIconPathChanged::`vftable';
      v16[1] = (void (__fastcall **)(_QWORD, void **))v5;
      v16[2] = (void (__fastcall **)(_QWORD, void **))*p_OwningThread;
      v16[3] = (void (__fastcall **)(_QWORD, void **))v3;
      CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 432),
        v16);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
    }
  }
  return (unsigned int)v6;
}
