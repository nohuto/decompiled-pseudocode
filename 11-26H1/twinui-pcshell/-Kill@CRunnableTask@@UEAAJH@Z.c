/*
 * XREFs of ?Kill@CRunnableTask@@UEAAJH@Z @ 0x180602B10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x180603264 (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
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
