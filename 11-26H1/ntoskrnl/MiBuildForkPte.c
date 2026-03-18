/*
 * XREFs of MiBuildForkPte @ 0x14030AB74
 * Callers:
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiHandleForkZeroPte @ 0x14030AD68 (MiHandleForkZeroPte.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiUnlockClonePageTable @ 0x14030B67C (MiUnlockClonePageTable.c)
 *     MiHandleForkPagefilePte @ 0x14030CE54 (MiHandleForkPagefilePte.c)
 *     MiHandleForkValidPteCopy @ 0x14030DAD8 (MiHandleForkValidPteCopy.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     MiHandleForkDemandZeroPte @ 0x14049AABC (MiHandleForkDemandZeroPte.c)
 */

__int64 __fastcall MiBuildForkPte(__int64 *a1)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v6; // r14
  int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v3 = a1[38];
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    v6 = v2 + 1024;
    v7 = 0;
    while ( 1 )
    {
      if ( (v4 & 1) != 0 )
      {
        v8 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v7 || (unsigned __int16)*(_DWORD *)(v8 + 32) > 1u && *(__int64 *)(v8 + 40) >= 0 )
          return MiHandleForkValidPteCopy(a1);
        v9 = *(_QWORD *)(v8 + 16);
        if ( (v9 & 0x400) == 0 && (v9 & 0x8000000) != 0 )
          return MiHandleForkValidPteCopy(a1);
        if ( *(__int64 *)(v8 + 40) < 0 )
        {
          MiHandleForkValidProtoPte(a1);
          return 0LL;
        }
        if ( (unsigned int)MiHandleForkValidPrivatePte(a1) != -1073741267 )
          return 0LL;
        MiUnlockClonePageTable(a1, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v7 = 1;
      }
      else
      {
        if ( (v4 & 0x400) != 0 )
        {
          MiHandleForkProtoPte(a1);
          return 0LL;
        }
        if ( (v4 & 0x800) != 0 )
        {
          if ( (int)MiHandleForkTransitionPte(a1) >= 0 )
            return 0LL;
        }
        else
        {
          v10 = v4;
          if ( qword_140E2D740 && (v4 & 0x10) == 0 )
            v10 = v4 & qword_140E2D748;
          if ( (v10 & 0x400) == 0 && (v10 & 0x800) == 0 && (v10 & 8) == 0 )
          {
            MiHandleForkDemandZeroPte(a1);
            return 0LL;
          }
          if ( ((v4 >> 5) & 0x18) != 0x10 && (v4 & 0x8000000) == 0 )
          {
            MiHandleForkPagefilePte(a1);
            return 0LL;
          }
          MiUnlockClonePageTable(a1, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          LOBYTE(v11) = *((_BYTE *)a1 + 40);
          MiUnlockWorkingSetShared(v6, v11);
          v14[1] = 4096LL;
          v14[0] = (__int64)(v3 << 25) >> 16;
          MiPrefetchVirtualMemory(1LL, v14, v6);
          *((_BYTE *)a1 + 40) = MiLockWorkingSetShared(v6, v12, v13);
        }
      }
      MiMakeSystemAddressValid(v3, 0, *((_BYTE *)a1 + 40), 0);
      v4 = *(_QWORD *)v3;
    }
  }
  MiHandleForkZeroPte(a1);
  return 0LL;
}
