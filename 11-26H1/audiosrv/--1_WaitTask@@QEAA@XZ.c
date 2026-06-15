/*
 * XREFs of ??1_WaitTask@@QEAA@XZ @ 0x180046328
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180044D40 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?reset@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z @ 0x1800462F4 (-reset@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z.c)
 *     ??R?$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z @ 0x18004670C (--R-$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x1800463BC (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 */

void __fastcall _WaitTask::~_WaitTask(PTP_WAIT *this)
{
  struct _TP_WAIT *v2; // rcx
  PTP_WAIT v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *this;
  if ( v2 )
  {
    WaitForThreadpoolWaitCallbacks(v2, 1);
    if ( *this )
    {
      SetThreadpoolWait(*this, 0LL, 0LL);
      CloseThreadpoolWait(*this);
      *this = 0LL;
    }
  }
  v3 = this[3];
  if ( v3 )
  {
    CloseHandle(v3);
    this[3] = 0LL;
  }
  std::shared_ptr<CPowerReference>::reset(this + 1);
  v4 = this[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
