/*
 * XREFs of ??_E?$__func@V_lambda_6880c51ab46d13359335fd5725fb047c_@@$$A6AXAEBUPenButtonActionData@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1804EFDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_6880c51ab46d13359335fd5725fb047c_,void (PenButtonActionData const &)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
