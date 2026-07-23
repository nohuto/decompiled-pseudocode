/*
 * XREFs of KiDispatchUserModeEvent @ 0x140C63200
 * Callers:
 *     KiEnterUserModeEvent @ 0x140C63000 (KiEnterUserModeEvent.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDispatchUserModeEvent @ 0x140C63200 (KiDispatchUserModeEvent.c)
 */

// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall KiDispatchUserModeEvent(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  char v12; // cl
  __int64 v13; // r8

  *(_OWORD *)(v5 - 16) = v8;
  *(_OWORD *)v5 = v9;
  *(_OWORD *)(v5 + 16) = *(_OWORD *)&a3;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)&a4;
  *(_OWORD *)(v5 + 48) = v10;
  *(_OWORD *)(v5 + 64) = v11;
  KiSynchronizeUserIsolationDomainExit(a1, a2);
  while ( 1 )
  {
    v12 = *(_BYTE *)(v5 - 86);
    if ( v12 == 7 )
    {
      if ( *(_BYTE *)(v5 + 268) == 1 )
      {
        if ( (KiTrapFeatures & 8) != 0 )
          __asm { stac }
        *(_QWORD *)(v5 + 192) = v4;
        *(_QWORD *)(v5 + 200) = v6;
        *(_QWORD *)(v5 + 208) = v7;
        *(_BYTE *)(v5 - 85) = 2;
        *(_BYTE *)(v5 - 88) = 1;
        *(_QWORD *)(v5 - 72) = *(_QWORD *)(v5 - 40);
        JUMPOUT(0x140C633B7LL);
      }
    }
    else
    {
      v13 = *(_QWORD *)(v5 - 24);
      if ( v12 != 4 )
        v13 = 8LL;
      if ( (v13 & 0x320000000018LL) != 0 )
        JUMPOUT(0x140C633C0LL);
    }
    *(_DWORD *)(v5 + 264) &= ~0x20000u;
    *(_DWORD *)(v5 + 268) &= 0xFFF0FF00;
    *(_QWORD *)(v5 - 24) = 0x2000LL;
    *(_BYTE *)(v5 - 86) = 3;
    *(_DWORD *)(v5 + 268) |= 0x3000Du;
    *(_WORD *)(v5 + 224) = 0;
  }
}
