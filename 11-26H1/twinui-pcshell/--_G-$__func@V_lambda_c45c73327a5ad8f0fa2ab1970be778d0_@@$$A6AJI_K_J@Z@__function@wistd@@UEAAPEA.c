/*
 * XREFs of ??_G?$__func@V_lambda_c45c73327a5ad8f0fa2ab1970be778d0_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180371E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$__func@V_lambda_f597752f4ab951f1160aea92caa7c9ee_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x1802DA70C (--1-$__func@V_lambda_f597752f4ab951f1160aea92caa7c9ee_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_c45c73327a5ad8f0fa2ab1970be778d0_,long (unsigned int,unsigned __int64,__int64)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>::~__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
