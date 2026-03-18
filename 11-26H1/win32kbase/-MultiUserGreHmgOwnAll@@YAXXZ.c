/*
 * XREFs of ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x14017CE54
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void MultiUserGreHmgOwnAll(void)
{
  unsigned int CurrentProcessId; // eax
  unsigned int v1; // ebp
  unsigned int v2; // esi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v8; // ecx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v9 = 0LL;
  v1 = 0;
  v2 = CurrentProcessId;
  v3 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  if ( *(_QWORD *)(v5 + 8) )
  {
    while ( 1 )
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v5 + 8) + 32LL))(
             *(_QWORD *)(v5 + 8),
             v1,
             &v9);
      if ( !v1 )
        break;
      if ( (unsigned __int8)(*(_BYTE *)(v9 + 14) - 1) <= 0x1Du )
      {
        *(_DWORD *)(v9 + 8) = v2 & 0xFFFFFFFC;
        ++v3;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        v8 = *(_DWORD *)(CurrentProcessWin32Process + 64);
        *(_DWORD *)(CurrentProcessWin32Process + 60) = v3;
        if ( v3 <= v8 )
          v3 = v8;
        *(_DWORD *)(CurrentProcessWin32Process + 64) = v3;
      }
    }
  }
}
