/*
 * XREFs of SmmAllocatePhysicalObject @ 0x140040308
 * Callers:
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x14003FE3C (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 *     SmmCreatePhysicalObjectInternal @ 0x140040160 (SmmCreatePhysicalObjectInternal.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

_QWORD *SmmAllocatePhysicalObject()
{
  __int64 v0; // rdi
  _QWORD *Pool2; // rbx
  __int64 v3; // rax
  const wchar_t *v4; // r9

  v0 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 104LL, 829651012LL);
  if ( Pool2 )
  {
    if ( (dword_1401696C0 & 0x20) == 0 || (v0 = operator new(0x90uLL, 0x31737844u, 64LL)) != 0 )
    {
      Pool2[3] = v0;
      return Pool2;
    }
    _InterlockedIncrement(&dword_140169728);
    WdLogSingleEntry0(6LL);
    v3 = 352LL;
    v4 = L"Failed to allocate SYSMM_PHYSICAL_OBJECT_DEBUG";
  }
  else
  {
    _InterlockedIncrement(&dword_140169724);
    WdLogSingleEntry0(6LL);
    v3 = 343LL;
    v4 = L"Failed to allocate (NonPaged) SYSMM_PHYSICAL_OBJECT";
  }
  WdLogGlobalForLineNumber = v3;
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
  if ( Pool2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Pool2);
  return 0LL;
}
