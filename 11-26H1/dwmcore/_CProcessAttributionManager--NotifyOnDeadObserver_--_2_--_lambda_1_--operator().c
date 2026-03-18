/*
 * XREFs of _CProcessAttributionManager::NotifyOnDeadObserver_::_2_::_lambda_1_::operator() @ 0x1802343F8
 * Callers:
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x18023447C (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 * Callees:
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1801C4828 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 */

char __fastcall CProcessAttributionManager::NotifyOnDeadObserver_::_2_::_lambda_1_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 160) && !*(_QWORD *)(a2 + 112) )
  {
    v2 = 1;
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)a2);
  }
  return v2;
}
