/*
 * XREFs of ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x180603264
 * Callers:
 *     ?Run@CRunnableTask@@UEAAJXZ @ 0x1801FC300 (-Run@CRunnableTask@@UEAAJXZ.c)
 *     ?Kill@CRunnableTask@@UEAAJH@Z @ 0x180602B10 (-Kill@CRunnableTask@@UEAAJH@Z.c)
 *     ?Resume@CRunnableTask@@UEAAJXZ @ 0x180603220 (-Resume@CRunnableTask@@UEAAJXZ.c)
 *     ?Suspend@CRunnableTask@@UEAAJXZ @ 0x180603A20 (-Suspend@CRunnableTask@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRunnableTask::SetAbort(CRunnableTask *this, __int32 a2)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 16) != a2 )
  {
    _InterlockedExchange((volatile __int32 *)this + 16, a2);
    v2 = (void *)*((_QWORD *)this + 7);
    if ( v2 )
    {
      if ( a2 )
        SetEvent(v2);
      else
        ResetEvent(v2);
    }
  }
}
