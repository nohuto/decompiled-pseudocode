/*
 * XREFs of ?FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x180139020
 * Callers:
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::FindCriticalAPO(EffectPack *this, struct IAudioSystemEffects2 *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  v7 = HIDWORD(this);
  pv = 0LL;
  v6 = 0;
  if ( ((int (__fastcall *)(struct IAudioSystemEffects2 *, LPVOID *, unsigned int *, _QWORD))a2->lpVtbl->GetEffectsList)(
         a2,
         &pv,
         &v6,
         0LL) >= 0 )
  {
    v2 = 0;
    v3 = 1;
    while ( v2 < v6 )
    {
      v4 = *((_QWORD *)pv + 2 * v2) - *(_QWORD *)&GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data1;
      if ( !v4 )
        v4 = *((_QWORD *)pv + 2 * v2 + 1) - *(_QWORD *)GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data4;
      if ( !v4 )
        goto LABEL_9;
      ++v2;
    }
  }
  v3 = 0;
LABEL_9:
  CoTaskMemFree(pv);
  return v3;
}
