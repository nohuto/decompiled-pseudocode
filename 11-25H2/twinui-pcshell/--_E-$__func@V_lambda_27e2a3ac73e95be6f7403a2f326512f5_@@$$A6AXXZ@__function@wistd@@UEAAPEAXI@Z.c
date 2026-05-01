/*
 * XREFs of ??_E?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAPEAXI@Z @ 0x18045F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAA@XZ @ 0x18045C5F0 (--1-$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::~__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
