/*
 * XREFs of ?PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C7B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCMouseProcessor::PostHitTestProcessing(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_DWORD *)this + 1333) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v6 = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 418) + 248LL))(*((_QWORD *)Instance + 418));
    v7 = 3LL;
    v8 = (_OWORD *)((char *)a3 + 240);
    do
    {
      *v8 = *v6;
      v8[1] = v6[1];
      v8[2] = v6[2];
      v8[3] = v6[3];
      v8[4] = v6[4];
      v8[5] = v6[5];
      v8[6] = v6[6];
      v8 += 8;
      v9 = v6[7];
      v6 += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *v6;
    v8[1] = v6[1];
    *((_DWORD *)this + 1333) = 0;
  }
}
