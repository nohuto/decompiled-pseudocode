/*
 * XREFs of ?ReleaseInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x1800D7680
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D5324 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::ReleaseInterestInHeadEvent(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  const char *v3; // r9
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2848);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2848));
  v4 = *((_DWORD *)this + 724);
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x157,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v3);
  v5 = v4 - 1;
  *((_DWORD *)this + 724) = v5;
  if ( !v5 )
    SpatialRimDeviceCollection::DisableHeadEventHandler(this);
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
