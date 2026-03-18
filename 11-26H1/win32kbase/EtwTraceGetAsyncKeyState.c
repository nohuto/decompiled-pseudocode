/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1400E8B98
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     EtwInitializeAsyncKeyMonitor @ 0x1400E8E5C (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(__int64 a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rax
  int v11; // ecx

  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x400) != 0
    && (qword_1402A9DC8 & 0x400) == qword_1402A9DC8 )
  {
    v7 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(a1, 1024, a3) + 14488) || (int)EtwInitializeAsyncKeyMonitor() >= 0 )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 14488);
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 56LL);
      ExAcquirePushLockExclusiveEx(v8 + 96, 0LL);
      v10 = *(unsigned int *)(v8 + 4);
      *(_BYTE *)(v8 + 88) = 1;
      if ( *(_DWORD *)(v8 + 8 * v10 + 8) != v9 )
      {
        if ( !*(_DWORD *)v8 )
          *(_DWORD *)v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        while ( 1 )
        {
          if ( v7 >= 0xA )
            goto LABEL_8;
          v11 = *(_DWORD *)(v8 + 8LL * v7 + 8);
          if ( v11 == v9 )
            break;
          if ( v11 == -1 )
          {
            *(_DWORD *)(v8 + 8LL * v7 + 8) = v9;
            *(_DWORD *)(v8 + 8LL * v7 + 12) = 1;
            goto LABEL_17;
          }
          ++v7;
        }
        ++*(_DWORD *)(v8 + 8LL * v7 + 12);
LABEL_17:
        *(_DWORD *)(v8 + 4) = v7;
        goto LABEL_8;
      }
      ++*(_DWORD *)(v8 + 8 * v10 + 12);
LABEL_8:
      ExReleasePushLockExclusiveEx(v8 + 96);
    }
  }
}
