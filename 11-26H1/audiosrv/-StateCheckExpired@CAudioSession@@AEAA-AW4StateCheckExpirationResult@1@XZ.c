/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x1800140B0
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x1800142A0 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1800CF92C (WPP_SF_Sd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::StateCheckExpired(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 v3; // rdi
  int v4; // edi
  unsigned int v5; // ebp

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
  if ( *(_DWORD *)(a1 + 104) )
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 1LL;
  }
  else if ( *(int *)(a1 + 332) > 0 )
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 2LL;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 664));
    v3 = (__int64)(*(_QWORD *)(a1 + 712) - *(_QWORD *)(a1 + 704)) >> 3;
    if ( a1 != -664 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 664));
    if ( !v3 )
    {
LABEL_16:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 2LL);
      if ( v1 )
        LeaveCriticalSection(v1);
      return 0LL;
    }
    v4 = *(_DWORD *)(a1 + 320);
    v5 = GetTickCount64() - v4;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        51,
        (unsigned int)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
        *(_QWORD *)(a1 + 656),
        v5);
    }
    if ( *(int *)(a1 + 328) <= 0 )
    {
      if ( v5 < *(_DWORD *)(a1 + 240) - 16 )
      {
        if ( v1 )
          LeaveCriticalSection(v1);
        return 4LL;
      }
      goto LABEL_16;
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 3LL;
  }
}
