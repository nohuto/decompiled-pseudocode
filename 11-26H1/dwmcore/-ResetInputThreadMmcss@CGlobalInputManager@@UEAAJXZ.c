/*
 * XREFs of ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x180150830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ @ 0x1801508B0 (-ResetInputThreadMmcss@CInputManager@@UEAAJXZ.c)
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x180150948 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalInputManager::ResetInputThreadMmcss(CKst **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CKst *v5; // rcx
  int v6; // eax

  v2 = CInputManager::ResetInputThreadMmcss((CInputManager *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = this[38];
    if ( v5 )
    {
      v6 = CKst::TriggerMmcss(v5);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x49u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x44u, 0LL);
  }
  return v3;
}
