/*
 * XREFs of ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18018D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801AAD1C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::PostMessageToClient(RTL_SRWLOCK *this, const struct UCE_RDP_HEADER *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v5; // eax
  HANDLE *v6; // rdx
  unsigned int LastError; // ebx
  _OWORD *v9; // rcx
  char *v10; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  HANDLE *v14; // rcx
  const char *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 16;
  v20 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  if ( !LOBYTE(this[3].Ptr) )
    goto LABEL_7;
  if ( *((_DWORD *)a2 + 1) >= 0x44u && *(_DWORD *)a2 == 10 )
  {
    v5 = *((_DWORD *)a2 + 4);
    if ( !v5 )
      goto LABEL_7;
    if ( v5 >= HIDWORD(this[7].Ptr) )
      goto LABEL_7;
    v6 = (HANDLE *)((char *)this[9].Ptr + LODWORD(this[7].Ptr) * v5);
    if ( !*(_DWORD *)v6 || !v6 )
      goto LABEL_7;
    if ( *((_DWORD *)a2 + 10) == 1 )
    {
      if ( SetEvent(v6[2]) )
        goto LABEL_7;
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x63,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
                    v15);
    }
    else
    {
      if ( *((_DWORD *)a2 + 10) == 2 || *((_DWORD *)a2 + 10) == 17 || *((_DWORD *)a2 + 10) == 19 )
      {
        v9 = v6[1];
        v9[9] = *(_OWORD *)((char *)a2 + 40);
        *((_QWORD *)v9 + 20) = *((_QWORD *)a2 + 7);
        *((_DWORD *)v9 + 42) = *((_DWORD *)a2 + 16);
LABEL_7:
        LODWORD(v2[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v2);
        return 0LL;
      }
      v10 = (char *)v6[1];
      ProcessHeap = GetProcessHeap();
      v12 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
      v13 = v12;
      if ( v12 )
      {
        *((_OWORD *)v12 + 1) = *(_OWORD *)((char *)a2 + 40);
        v12[4] = *((_QWORD *)a2 + 7);
        *((_DWORD *)v12 + 10) = *((_DWORD *)a2 + 16);
        EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 104));
        v14 = (HANDLE *)*((_QWORD *)v10 + 11);
        if ( *v14 != v10 + 80 )
          __fastfail(3u);
        *v13 = v10 + 80;
        v13[1] = v14;
        *v14 = v13;
        *((_QWORD *)v10 + 11) = v13;
        SetEvent(*((HANDLE *)v10 + 12));
        LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 104));
        goto LABEL_7;
      }
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x179,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)0x8007000ELL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
        (const char *)0x8007000ELL);
    }
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v20, v16, v17, v18);
  }
  else
  {
    LastError = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x73u, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)0x88980403LL);
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
  }
  return LastError;
}
