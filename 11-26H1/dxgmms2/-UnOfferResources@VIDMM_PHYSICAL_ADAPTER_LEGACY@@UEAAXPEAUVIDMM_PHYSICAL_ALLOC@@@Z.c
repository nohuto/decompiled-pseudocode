/*
 * XREFs of ?UnOfferResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011A130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::UnOfferResources(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  __int64 **v4; // rcx

  v2 = (__int64 *)((char *)a2 + 96);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
  }
}
