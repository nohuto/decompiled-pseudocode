/*
 * XREFs of ?Kill@CRunnableTask@@UEAAJH@Z @ 0x1805DE030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x1805DE774 (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
 */

__int64 __fastcall CRunnableTask::Kill(CRunnableTask *this)
{
  if ( (*((_BYTE *)this + 48) & 2) == 0 )
    return 2147500033LL;
  if ( *((_DWORD *)this + 11) != 1 )
    return 1LL;
  if ( _InterlockedExchange((volatile __int32 *)this + 11, 3) != 4 )
    CRunnableTask::SetAbort(this, 1);
  return 0LL;
}
