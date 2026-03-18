/*
 * XREFs of ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14021263C
 * Callers:
 *     ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x140211310 (-InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA804 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsageNoInline @ 0x14021273C (Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CInertiaManager::StopInertiaAtPoint(__int64 a1, __int64 a2, struct tagPOINT a3)
{
  CInertiaManager *v6; // rcx
  __int64 *Inertia; // r14
  CInertiaManager *v9; // rcx

  if ( (unsigned int)Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsageNoInline() )
  {
    Inertia = (__int64 *)CInertiaManager::QueryInertia(a1, a2, 4);
    if ( Inertia
      && CInertiaManager::PostInertiaMessage(
           v6,
           571LL,
           (const struct INERTIA_INFO_INTERNAL *)(a1 + 8),
           (struct tagPOINT)a2,
           a3) )
    {
      return CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)a1, *Inertia, Inertia[1]);
    }
  }
  else if ( CInertiaManager::QueryInertia(a1, a2, 4) )
  {
    return CInertiaManager::PostInertiaMessage(
             v9,
             571LL,
             (const struct INERTIA_INFO_INTERNAL *)(a1 + 8),
             (struct tagPOINT)a2,
             a3);
  }
  return 0;
}
