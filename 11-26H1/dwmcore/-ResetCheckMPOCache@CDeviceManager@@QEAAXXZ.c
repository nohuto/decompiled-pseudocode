/*
 * XREFs of ?ResetCheckMPOCache@CDeviceManager@@QEAAXXZ @ 0x1801CD538
 * Callers:
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x1801CD4D0 (-UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1801272E8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 */

void __fastcall CDeviceManager::ResetCheckMPOCache(CDeviceManager *this)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCriticalSection(&CriticalSection);
  v1 = qword_1803DE688;
  v2 = xmmword_1803DE690;
  while ( v1 != v2 )
  {
    v3 = *(_QWORD **)v1;
    if ( !*(_DWORD *)(*(_QWORD *)v1 + 1124LL) )
    {
      v4 = v3[179];
      v5 = v3[178];
      if ( v5 != v4 )
      {
        std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(v5, v4);
        v3[179] = v3[178];
      }
      v3[181] = 0LL;
    }
    v1 += 16LL;
  }
  LeaveCriticalSection(&CriticalSection);
}
