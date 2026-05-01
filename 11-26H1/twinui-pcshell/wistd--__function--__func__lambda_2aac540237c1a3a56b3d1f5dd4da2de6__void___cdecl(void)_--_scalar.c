/*
 * XREFs of wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180459B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_::___func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_ @ 0x1804594FC (wistd--__function--__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_--___func.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl_void__::___func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl_void__(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
