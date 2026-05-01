/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003860
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002F80 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180003060 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800033D0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180011EA0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180012450 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x180019380 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800193E0 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 * Callees:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180002FB8 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     CempRpcBindToServer @ 0x180004080 (CempRpcBindToServer.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800041DC (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800149A0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 Windows::System::CMemoryManager::Init(void)
{
  ModernResourceManagerProxy *v1; // rax
  ModernResourceManagerProxy *v2; // rbx
  int v3; // eax
  void (*v4)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v5)(unsigned __int64, unsigned __int64); // r8
  int v6; // edi

  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
    return 0LL;
  }
  else
  {
    v1 = (ModernResourceManagerProxy *)operator new(0x70uLL);
    if ( v1 && (v2 = ModernResourceManagerProxy::ModernResourceManagerProxy(v1)) != 0LL )
    {
      v3 = CempRpcBindToServer(&unk_18001E760);
      v6 = v3 | 0x10000000;
      if ( v3 < 0 || (v6 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v2, v4, v5), v6 < 0) )
      {
        RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
        (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v2 + 16LL))(v2);
        return (unsigned int)v6;
      }
      else
      {
        if ( Windows::System::CMemoryManager::s_pProxy )
          (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                               + 16LL))(Windows::System::CMemoryManager::s_pProxy);
        Windows::System::CMemoryManager::s_pProxy = v2;
        RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
        return 0LL;
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
      return 2147942414LL;
    }
  }
}
