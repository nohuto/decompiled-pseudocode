/*
 * XREFs of HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140591F94
 * Callers:
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x14057DD10 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedSecondaryInterrupts(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // si
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 i; // r14
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int8 v13; // [rsp+78h] [rbp+20h]

  if ( !SecondaryIcServicesEnabled )
    return 3221225659LL;
  v6 = 1;
  v7 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v8 = SecondaryIcList;
  v13 = v7;
  do
  {
    if ( (__int64 *)v8 == &SecondaryIcList )
      break;
    v9 = 0;
    for ( i = *(_QWORD *)(v8 + 32); v9 < *(_DWORD *)(v8 + 20); ++v9 )
    {
      if ( *(_BYTE *)(v8 + 16 * (v9 + 10LL) + 12) )
      {
        v11 = *(_DWORD *)(v8 + 16);
        *(_WORD *)(a3 + 4) = 1;
        v12 = v9 + v11;
        *(_DWORD *)(a3 + 16) = v12;
        *(_DWORD *)(a3 + 8) = *(_DWORD *)(v8 + 16 * (v9 + 10LL) + 4);
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v8 + 16 * (v9 + 10LL));
        if ( (int)guard_dispatch_icall_no_overrides(i, v12) >= 0 )
        {
          v6 = guard_dispatch_icall_no_overrides(a2, a3);
          if ( !v6 )
            break;
        }
      }
    }
    v8 = *(_QWORD *)v8;
  }
  while ( v6 );
  HalpReleaseHighLevelLock(&SecondaryIcListSpinLock, v13);
  return 0LL;
}
