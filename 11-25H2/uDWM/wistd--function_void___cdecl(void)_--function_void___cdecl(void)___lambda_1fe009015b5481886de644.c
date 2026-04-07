/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_1fe009015b5481886de644cd00cd9360__void_ @ 0x180099E98
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180087874 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x180072C30 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_1fe009015b5481886de644cd00cd9360__void_(
        CFadeOut *a1)
{
  __int64 v1; // rcx

  *((_QWORD *)a1 + 14) = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    *(_QWORD *)(v1 + 8) = off_1800F31A8;
    *(_QWORD *)(v1 + 112) = v1 + 8;
  }
  return v1;
}
