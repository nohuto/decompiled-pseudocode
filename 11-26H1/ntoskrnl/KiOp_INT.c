/*
 * XREFs of KiOp_INT @ 0x1404EDC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOp_INT(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 && VslVsmEnabled && !*(_BYTE *)(a1 + 81) )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( v2 == 44 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      ++LODWORD(KsepShimDbLock.ReadTransferCount);
      *(_BYTE *)(a1 + 97) = 1;
      v8 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)v8 = -1073740768;
      *(_DWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 248);
    }
    else if ( v2 == 45 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(a1 + 32);
      *(_BYTE *)(a1 + 97) = 1;
      v5 = *(_DWORD *)(v3 + 48);
      *(_QWORD *)(v3 + 248) += 2LL;
      if ( (v5 & 0x100080) == 0x100080 )
        *(_QWORD *)(*(int *)(v3 + 1256) + v3 + 1240) += 2LL;
      *(_DWORD *)v4 = -2147483645;
      *(_DWORD *)(v4 + 24) = 1;
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v3 + 120);
      v6 = *(_QWORD *)(v3 + 248) + 1LL;
      ++HIDWORD(KsepShimDbLock.ReadTransferCount);
      *(_QWORD *)(v4 + 16) = v6;
    }
  }
  return 0LL;
}
