/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1400C6FD4
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     EtwInitializeAsyncKeyMonitor @ 0x1400C711C (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rax
  int v8; // ecx

  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x400) != 0
    && (qword_14029EDA8 & 0x400) == qword_14029EDA8 )
  {
    v4 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(a1, 1024LL) + 14496) || (int)EtwInitializeAsyncKeyMonitor() >= 0 )
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 14496);
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 56LL);
      ExAcquirePushLockExclusiveEx(v5 + 96, 0LL);
      v7 = *(unsigned int *)(v5 + 4);
      *(_BYTE *)(v5 + 88) = 1;
      if ( *(_DWORD *)(v5 + 8 * v7 + 8) != v6 )
      {
        if ( !*(_DWORD *)v5 )
          *(_DWORD *)v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        while ( 1 )
        {
          if ( v4 >= 0xA )
            goto LABEL_8;
          v8 = *(_DWORD *)(v5 + 8LL * v4 + 8);
          if ( v8 == v6 )
            break;
          if ( v8 == -1 )
          {
            *(_DWORD *)(v5 + 8LL * v4 + 8) = v6;
            *(_DWORD *)(v5 + 8LL * v4 + 12) = 1;
            goto LABEL_17;
          }
          ++v4;
        }
        ++*(_DWORD *)(v5 + 8LL * v4 + 12);
LABEL_17:
        *(_DWORD *)(v5 + 4) = v4;
        goto LABEL_8;
      }
      ++*(_DWORD *)(v5 + 8 * v7 + 12);
LABEL_8:
      ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    }
  }
}
