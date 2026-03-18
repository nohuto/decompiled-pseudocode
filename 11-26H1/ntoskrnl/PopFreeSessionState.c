/*
 * XREFs of PopFreeSessionState @ 0x140A3BAAC
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopFreeRegistration @ 0x1407CF698 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // edi
  unsigned int *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // r8
  __int64 *v8; // rax

  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  for ( i = 0; i < 2; ++i )
  {
    v3 = &stru_140F10828.ReservedPreviousReadyTimeValue + 4 * i;
    v4 = *(_QWORD *)v3;
    while ( (unsigned int *)v4 != v3 )
    {
      v5 = v4;
      v6 = *(_QWORD *)v4;
      if ( *(_DWORD *)(v4 + 48) == a1 )
      {
        v7 = (_DWORD *)(v4 + 52);
        v4 = *(_QWORD *)v4;
        if ( (*v7 & 2) != 0 )
        {
          *v7 |= 4u;
        }
        else
        {
          if ( *(_QWORD *)(v6 + 8) != v5 || (v8 = *(__int64 **)(v5 + 8), *v8 != v5) )
            __fastfail(3u);
          *v8 = v6;
          *(_QWORD *)(v6 + 8) = v8;
          PopFreeRegistration((_DWORD *)v5, v6);
        }
      }
      else
      {
        v4 = *(_QWORD *)v4;
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
}
