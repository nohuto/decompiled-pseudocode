/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180114220
 * Callers:
 *     AudioServerStartStream @ 0x1800658F0 (AudioServerStartStream.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x18005A40C (-StartStream_Internal@CVADServer@@IEAAJXZ.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x18006645C (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // r9
  int v13; // eax
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v7 = *(_DWORD *)(a1 + 160) == 0;
  v17 = v3;
  if ( v7 )
  {
    v8 = -2004287487;
    v9 = 1624LL;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 176) )
  {
    v8 = -2004287487;
    v9 = 1625LL;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v8 = -2004287487;
    v9 = 1626LL;
    goto LABEL_12;
  }
  v10 = CVADServer::ValidateStreamHandle((CVADServer *)a1, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 264LL))(
              *(_QWORD *)(a1 + 144),
              *(_QWORD *)(a1 + 176),
              0LL);
      v8 = v13;
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a1 + 164) = 1;
        if ( _InterlockedCompareExchange(&g_PoBlockAudioPlayback, 1, 1)
          || (started = CVADServer::StartStream_Internal((CVADServer *)a1), v8 = started, started >= 0) )
        {
          v8 = 0;
          goto LABEL_20;
        }
        v12 = (unsigned int)started;
        v9 = 1641LL;
      }
      else
      {
        v12 = (unsigned int)v13;
        v9 = 1633LL;
      }
      goto LABEL_13;
    }
    v8 = -2147418113;
    v9 = 1630LL;
LABEL_12:
    v12 = v8;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12);
    goto LABEL_20;
  }
  v8 = -2005139336;
  if ( v10 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    v8 = v11;
  }
LABEL_20:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v8;
}
