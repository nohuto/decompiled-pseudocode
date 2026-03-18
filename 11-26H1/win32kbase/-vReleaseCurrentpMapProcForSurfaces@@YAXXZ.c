/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x14017DE9C
 * Callers:
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0LL;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  while ( 1 )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v2 + 8) + 32LL))(
           *(_QWORD *)(v2 + 8),
           v1,
           &v7);
    if ( !v1 )
      break;
    if ( *(_BYTE *)(v7 + 14) == 5 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 8) + 96LL))(*(_QWORD *)(v2 + 8), v1);
      v5 = v3;
      if ( v3 )
      {
        if ( *(_QWORD *)(v3 + 248) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          if ( *(_QWORD *)(v5 + 264) == CurrentProcessWin32Process )
          {
            *(_QWORD *)(v5 + 264) = 0LL;
            *(_QWORD *)(v5 + 256) = 0LL;
          }
        }
      }
    }
  }
}
