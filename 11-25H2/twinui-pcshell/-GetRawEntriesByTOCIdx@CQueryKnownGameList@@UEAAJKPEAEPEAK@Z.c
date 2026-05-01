/*
 * XREFs of ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x18018A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetRawEntriesByTOCIdx(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebp
  bool v11; // cf
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v16; // r9
  unsigned int LastError; // edi
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-50h] BYREF
  LONG lDistanceToMove[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  NumberOfBytesRead = 0;
  *(_OWORD *)lDistanceToMove = 0LL;
  if ( !a3 )
  {
    v14 = 568LL;
LABEL_28:
    v12 = -2147467261;
    goto LABEL_10;
  }
  if ( !a4 )
  {
    v14 = 569LL;
    goto LABEL_28;
  }
  if ( a2 >= LODWORD(this[20].DebugInfo) )
  {
    v12 = -2147483637;
    v14 = 571LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v12);
    return v12;
  }
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  v19 = v8;
  v9 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD, LONG *))&this->DebugInfo[1].Flags)(
         this,
         a2,
         lDistanceToMove);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 )
      LeaveCriticalSection(v8);
    return v10;
  }
  else
  {
    v11 = *a4 < lDistanceToMove[3];
    *a4 = lDistanceToMove[3];
    if ( v11 )
    {
      if ( v8 )
        LeaveCriticalSection(v8);
      return 2147942522LL;
    }
    else
    {
      if ( SetFilePointer(this->LockSemaphore, lDistanceToMove[2], 0LL, 0) == -1 )
      {
        v12 = -2147418113;
        v13 = 587LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)v12);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
        return v12;
      }
      if ( ReadFile(this->LockSemaphore, a3, *a4, &NumberOfBytesRead, 0LL) )
      {
        if ( NumberOfBytesRead != *a4 )
        {
          v12 = -2147024883;
          v13 = 590LL;
          goto LABEL_8;
        }
        if ( v8 )
          LeaveCriticalSection(v8);
        return 0LL;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x24D,
                      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                      v16);
        if ( v8 )
          LeaveCriticalSection(v8);
        return LastError;
      }
    }
  }
}
