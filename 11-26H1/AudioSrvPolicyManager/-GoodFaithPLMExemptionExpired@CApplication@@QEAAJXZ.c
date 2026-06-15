/*
 * XREFs of ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800388B0
 * Callers:
 *     ?ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18003B5BC (-ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012930 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180038214 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 */

__int64 __fastcall CApplication::GoodFaithPLMExemptionExpired(CApplication *this)
{
  CApplicationManager *v2; // rcx

  if ( *((_DWORD *)this + 155) == 2 )
  {
    *(_QWORD *)((char *)this + 620) = 0LL;
    *(_QWORD *)((char *)this + 628) = 0LL;
    *(_QWORD *)((char *)this + 636) = 0LL;
    *((_DWORD *)this + 161) = 1;
  }
  if ( (unsigned int)CApplication::Category((__int64)this) != 1 )
  {
    if ( !*((_DWORD *)this + 52) && *((_DWORD *)this + 155) != 1 )
    {
      *((_DWORD *)this + 155) = 1;
      *((_QWORD *)this + 78) = 1LL;
      *((_QWORD *)this + 79) = 1LL;
      *((_DWORD *)this + 160) = 1;
      *((_DWORD *)this + 161) = 1;
    }
    v2 = g_ApplicationManager;
    *((_DWORD *)this + 108) = 0;
    CApplicationManager::ApplyPBMPolicy(v2, this, 0xD1u, 0);
    CApplication::CleanupGoodFaithExemptionTimer(this);
  }
  return 0LL;
}
