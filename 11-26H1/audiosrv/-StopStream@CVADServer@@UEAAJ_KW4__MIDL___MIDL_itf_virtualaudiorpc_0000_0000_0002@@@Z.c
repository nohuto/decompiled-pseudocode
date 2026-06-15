/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180065D60
 * Callers:
 *     AudioServerStopStream @ 0x180065B80 (AudioServerStopStream.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x18006645C (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?StopStream_Internal@CVADServer@@IEAAJXZ @ 0x180080C20 (-StopStream_Internal@CVADServer@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::StopStream(__int64 a1, unsigned __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v7 = *(_DWORD *)(a1 + 160) == 0;
  v19 = v3;
  if ( !v7 )
  {
    if ( !*(_QWORD *)(a1 + 144) )
    {
      v8 = -2004287487;
      v9 = 1775LL;
      v10 = 2290679809LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v10);
      goto LABEL_19;
    }
    if ( !*(_QWORD *)(a1 + 176) )
    {
      v8 = -2004287487;
      v9 = 1776LL;
      v10 = 2290679809LL;
      goto LABEL_17;
    }
    v11 = CVADServer::ValidateStreamHandle((CVADServer *)a1, a2);
    v13 = v11;
    if ( v11 >= 0 )
    {
      LOBYTE(v12) = a3 == 1;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 144) + 264LL))(
              *(_QWORD *)(a1 + 144),
              *(_QWORD *)(a1 + 176),
              v12);
      v13 = v15;
      if ( v15 >= 0 )
      {
        *(_DWORD *)(a1 + 164) = 0;
        v16 = CVADServer::StopStream_Internal((CVADServer *)a1);
        v8 = v16;
        if ( v16 >= 0 )
        {
          v8 = 0;
          goto LABEL_19;
        }
        v10 = (unsigned int)v16;
        v9 = 1784LL;
        goto LABEL_17;
      }
      v8 = -2004287484;
      if ( v15 != -2004287484 )
      {
        v14 = 1780LL;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = -2005139336;
      if ( v11 != -2005139336 )
      {
        v14 = 1777LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v13);
        v8 = v13;
      }
    }
LABEL_19:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    return v8;
  }
  v8 = -2004287487;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6EE,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890001LL);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
