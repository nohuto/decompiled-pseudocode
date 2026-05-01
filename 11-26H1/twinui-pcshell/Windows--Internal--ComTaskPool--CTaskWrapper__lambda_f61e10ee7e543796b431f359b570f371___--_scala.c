/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f61e10ee7e543796b431f359b570f371___::_scalar_deleting_destructor_ @ 0x180344F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f61e10ee7e543796b431f359b570f371___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
