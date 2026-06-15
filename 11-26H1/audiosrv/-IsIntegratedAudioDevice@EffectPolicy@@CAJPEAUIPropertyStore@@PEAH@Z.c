/*
 * XREFs of ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x18014FEF0
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPolicy::IsIntegratedAudioDevice(struct IPropertyStore *a1, int *a2)
{
  struct IPropertyStoreVtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( a2 )
  {
    *a2 = 0;
    v9 = 0LL;
    lpVtbl = a1->lpVtbl;
    *(_OWORD *)pvar = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IPropertyStore *, const DEVPROPKEY *, PROPVARIANT *))lpVtbl->GetValue)(
           a1,
           &DEVPKEY_Device_ContainerId,
           pvar);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 72 )
      {
        v7 = *(_QWORD *)pvar[1];
        if ( !*(_QWORD *)pvar[1] )
          v7 = *((_QWORD *)pvar[1] + 1) + 1LL;
        if ( !v7 )
          *a2 = 1;
      }
      PropVariantClear(pvar);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
