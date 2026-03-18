/*
 * XREFs of ??1?$unique_ptr@EP6AXPEAX@Z@utl@@QEAA@XZ @ 0x14032FE6C
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1403304B0 (NtGdiCheckBitmapBits.c)
 *     NtGdiCreateColorTransform @ 0x1403308B0 (NtGdiCreateColorTransform.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  return result;
}
