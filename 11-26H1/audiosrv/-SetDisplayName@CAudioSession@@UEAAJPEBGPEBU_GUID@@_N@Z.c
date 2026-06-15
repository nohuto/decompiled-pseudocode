/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18006D4D0
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
__int64 __fastcall CAudioSession::SetDisplayName(
        struct _RTL_CRITICAL_SECTION *this,
        char *a2,
        const struct _GUID *a3,
        char a4)
{
  const struct _GUID *v4; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebx
  __int64 *p_LockCount; // r15
  char *v9; // rax
  char *v10; // rdx
  int v11; // r8d
  int v12; // ecx
  ATL::CAtlException *v14; // rbx
  ATL::CAtlException *v15; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall **v16[10])(_QWORD, void **); // [rsp+28h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+88h] [rbp+10h] BYREF
  const struct _GUID *v19; // [rsp+90h] [rbp+18h]
  int v20; // [rsp+98h] [rbp+20h]

  v19 = a3;
  v4 = a3;
  v6 = this;
  v7 = 0;
  if ( a4 )
    BYTE5(this[5].LockSemaphore) = 1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  p_LockCount = (__int64 *)&this[6].LockCount;
  v9 = *(char **)&this[6].LockCount;
  v10 = (char *)(a2 - v9);
  do
  {
    v11 = *(unsigned __int16 *)&v10[(_QWORD)v9];
    v12 = *(unsigned __int16 *)v9 - v11;
    if ( v12 )
      break;
    v9 += 2;
  }
  while ( v11 );
  if ( v12 && (a4 || !BYTE5(v6[5].LockSemaphore)) )
  {
    EnterCriticalSection(v6 + 7);
    try
    {
      v18 = v6 + 7;
      v7 = 0;
      ATL::CSimpleStringT<unsigned short,0>::SetString(p_LockCount, a2);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v14 = v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v14;
      v6 = this;
      v4 = v19;
      v7 = v20;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    if ( v7 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 182, v7);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v6->DebugInfo->CriticalSection)(v6);
      v16[0] = (void (__fastcall **)(_QWORD, void **))&CAudioSessionDisplayNameChanged::`vftable';
      v16[1] = (void (__fastcall **)(_QWORD, void **))v6;
      v16[2] = *(void (__fastcall ***)(_QWORD, void **))&v6[6].LockCount;
      v16[3] = (void (__fastcall **)(_QWORD, void **))v4;
      CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 432),
        v16);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v6->DebugInfo->ProcessLocksList.Flink)(v6);
    }
  }
  return (unsigned int)v7;
}
