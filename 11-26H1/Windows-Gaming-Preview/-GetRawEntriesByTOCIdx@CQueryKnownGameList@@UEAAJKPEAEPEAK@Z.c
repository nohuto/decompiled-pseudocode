/*
 * XREFs of ?GetRawEntriesByTOCIdx@CQueryKnownGameList@@UEAAJKPEAEPEAK@Z @ 0x1800408F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180008DB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetRawEntriesByTOCIdx(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebp
  bool v14; // cf
  unsigned int LastError; // edi
  __int64 v16; // rdx
  const char *v17; // r9
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-50h]
  LONG lDistanceToMove[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  NumberOfBytesRead = 0;
  *(_OWORD *)lDistanceToMove = 0LL;
  if ( !a3 )
  {
    v8 = 568LL;
LABEL_3:
    v9 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v9);
    return v9;
  }
  if ( !a4 )
  {
    v8 = 569LL;
    goto LABEL_3;
  }
  if ( a2 >= LODWORD(this[20].DebugInfo) )
  {
    v9 = -2147483637;
    v8 = 571LL;
    goto LABEL_4;
  }
  v11 = this + 19;
  EnterCriticalSection(this + 19);
  v19 = v11;
  v12 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD, LONG *))&this->DebugInfo[1].Flags)(
          this,
          a2,
          lDistanceToMove);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v12);
    if ( v11 )
      LeaveCriticalSection(v11);
    return v13;
  }
  v14 = *a4 < lDistanceToMove[3];
  *a4 = lDistanceToMove[3];
  if ( v14 )
  {
    if ( v11 )
      LeaveCriticalSection(v11);
    return 2147942522LL;
  }
  if ( SetFilePointer(this->LockSemaphore, lDistanceToMove[2], 0LL, 0) == -1 )
  {
    LastError = -2147418113;
    v16 = 587LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)LastError);
LABEL_20:
    if ( v11 )
      LeaveCriticalSection(v11);
    return LastError;
  }
  if ( !ReadFile(this->LockSemaphore, a3, *a4, &NumberOfBytesRead, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x24D,
                  (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                  v17);
    goto LABEL_20;
  }
  if ( NumberOfBytesRead != *a4 )
  {
    LastError = -2147024883;
    v16 = 590LL;
    goto LABEL_19;
  }
  if ( v11 )
    LeaveCriticalSection(v11);
  return 0LL;
}
