/*
 * XREFs of ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x18023447C
 * Callers:
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180234368 (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     _CProcessAttributionManager::NotifyOnDeadObserver_::_2_::_lambda_1_::operator() @ 0x1802343F8 (_CProcessAttributionManager--NotifyOnDeadObserver_--_2_--_lambda_1_--operator().c)
 */

void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v3; // rcx
  struct CProcessAttributionObserver **i; // r8
  struct CProcessAttributionObserver **j; // rax
  __int64 v6; // rdx
  __int64 k; // rcx
  __int64 *v8; // rdi
  __int64 *m; // rbx
  __int64 *n; // rsi

  v3 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 4);
  for ( i = (struct CProcessAttributionObserver **)*((_QWORD *)this + 3); i != v3 && *i != a2; ++i )
    ;
  if ( i != v3 )
  {
    for ( j = i + 1; j != v3; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
    if ( i != v3 )
      *((_QWORD *)this + 4) = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
                                v3,
                                *((_QWORD *)this + 4),
                                i);
  }
  v6 = *((_QWORD *)this + 1);
  for ( k = *(_QWORD *)this; k != v6; k += 8LL )
    --*(_DWORD *)(*(_QWORD *)k + 160LL);
  v8 = (__int64 *)*((_QWORD *)this + 1);
  for ( m = *(__int64 **)this;
        m != v8 && !CProcessAttributionManager::NotifyOnDeadObserver_::_2_::_lambda_1_::operator()(k, *m);
        ++m )
  {
    ;
  }
  if ( m != v8 )
  {
    for ( n = m + 1; n != v8; ++n )
    {
      if ( !CProcessAttributionManager::NotifyOnDeadObserver_::_2_::_lambda_1_::operator()(k, *n) )
        *m++ = *n;
    }
    if ( m != v8 )
      *((_QWORD *)this + 1) = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
                                v8,
                                *((_QWORD *)this + 1),
                                m);
  }
}
