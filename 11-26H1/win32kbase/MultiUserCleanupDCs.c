/*
 * XREFs of MultiUserCleanupDCs @ 0x1400C9D30
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  unsigned int v1; // ebp
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v10 = 0LL;
  v1 = 0;
  v2 = 0;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  v5 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  if ( *(_QWORD *)(v5 + 8) )
  {
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v5 + 8) + 32LL))(
             *(_QWORD *)(v5 + 8),
             v1,
             &v10);
      v1 = v6;
      if ( !v6 )
        break;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 8) + 16LL))(*(_QWORD *)(v5 + 8), v6);
      v10 = v8;
      if ( *(_BYTE *)(v8 + 14) == 1 && (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) != v3 )
      {
        *(_DWORD *)(v8 + 8) = v3;
        ++v2;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v2;
    vCleanupDCs(v3);
  }
}
