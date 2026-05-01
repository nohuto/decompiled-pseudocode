/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d71cce0086fd906470872e2ae29f8c4a___::_scalar_deleting_destructor_ @ 0x1803426B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d71cce0086fd906470872e2ae29f8c4a___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
