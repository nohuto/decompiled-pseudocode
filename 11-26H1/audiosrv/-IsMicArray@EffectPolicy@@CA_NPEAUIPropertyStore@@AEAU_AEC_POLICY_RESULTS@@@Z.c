/*
 * XREFs of ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009EB4
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall EffectPolicy::IsMicArray(struct IPropertyStore *a1, struct _AEC_POLICY_RESULTS *a2)
{
  struct IPropertyStoreVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetValue)(IPropertyStore *, const PROPERTYKEY *const, PROPVARIANT *); // rax
  BOOL v5; // eax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  lpVtbl = a1->lpVtbl;
  iid = GUID_00000000_0000_0000_0000_000000000000;
  GetValue = lpVtbl->GetValue;
  *(_OWORD *)lpsz = 0LL;
  v5 = ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, LPCOLESTR *))GetValue)(
         a1,
         &PKEY_AudioEndpoint_JackSubType,
         lpsz) >= 0
    && LOWORD(lpsz[0]) == 31
    && IIDFromString(lpsz[1], &iid) >= 0
    && !memcmp_0(&iid, &GUID_dff21be5_f70f_11d0_b917_00a0c9223196, 0x10uLL);
  *((_DWORD *)a2 + 5) = v5;
  PropVariantClear((PROPVARIANT *)lpsz);
  return *((_DWORD *)a2 + 5) != 0;
}
