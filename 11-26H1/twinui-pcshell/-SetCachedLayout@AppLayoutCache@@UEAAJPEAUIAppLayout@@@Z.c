/*
 * XREFs of ?SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z @ 0x1800D94A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppLayoutCache::SetCachedLayout(AppLayoutCache *this, struct IAppLayout *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 (__fastcall *v5)(struct IAppLayout *, GUID *, char *); // rsi
  unsigned int v6; // edi

  v4 = (RTL_SRWLOCK *)((char *)this + 56);
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  v5 = *(__int64 (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  v6 = v5(a2, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, (char *)this + 64);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
