/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x14020A960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x14011169C (-IsFmtBlocked@@YAHI@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x140112E94 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1401138D4 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG64 v9; // rcx
  struct tagWINDOWSTATION *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // r9d
  _DWORD *v13; // r8
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // rdx
  int v22; // [rsp+20h] [rbp-B8h]
  __int64 v23; // [rsp+40h] [rbp-98h] BYREF
  int v24; // [rsp+48h] [rbp-90h]
  __int64 v25; // [rsp+50h] [rbp-88h] BYREF
  int v26; // [rsp+58h] [rbp-80h]
  __int64 v27; // [rsp+60h] [rbp-78h] BYREF
  int v28; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  int v30; // [rsp+78h] [rbp-60h]
  _BYTE v31[88]; // [rsp+80h] [rbp-58h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  v6 = 0;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  EnterLeaveCritShared::EnterLeaveCritShared(v31, 1LL);
  v10 = CheckClipboardAccess(v8, v7);
  if ( v10 )
  {
    v11 = PsGetCurrentProcessWin32Process(v9);
    if ( v11 )
      v11 &= -(__int64)(*(_QWORD *)v11 != 0LL);
    v23 = *(_QWORD *)(v11 + 864);
    v24 = *(_DWORD *)(v11 + 872);
    v12 = CountNumClipFormatForIL(&v23, (__int64)v10);
    v13 = a3;
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    *a3 = v12;
    if ( a2 >= v12 )
    {
      v14 = 0;
      v15 = 0;
      v22 = 0;
      while ( v14 < *((_DWORD *)v10 + 34) && v15 < a2 )
      {
        v25 = *(_QWORD *)(v5 + 864);
        v26 = *(_DWORD *)(v5 + 872);
        v16 = 32LL * v14;
        v17 = *((_QWORD *)v10 + 16);
        v27 = *(_QWORD *)(v17 + v16 + 20);
        v28 = *(_DWORD *)(v17 + v16 + 28);
        if ( CheckClipboardAccessForIntegrityLevel(&v27, (const struct tagUIPI_INFO *)&v25)
          || !(unsigned int)IsFmtBlocked(*(unsigned int *)(v16 + *((_QWORD *)v10 + 16)), v18) )
        {
          v20 = (_DWORD *)(4LL * v15 + a1);
          if ( (unsigned __int64)v20 >= MmUserProbeAddress )
            v20 = (_DWORD *)MmUserProbeAddress;
          *v20 = *v20;
          v9 = *(unsigned int *)(v16 + *((_QWORD *)v10 + 16));
          *(_DWORD *)(a1 + 4LL * v15) = v9;
          v15 = ++v22;
        }
        else
        {
          v19 = *((_QWORD *)v10 + 16);
          v29 = *(_QWORD *)(v16 + v19 + 20);
          v30 = *(_DWORD *)(v16 + v19 + 28);
          EtwTraceUIPIClipboardError(0LL, v5, *(unsigned int *)(v16 + v19), &v29);
        }
        ++v14;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122);
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
