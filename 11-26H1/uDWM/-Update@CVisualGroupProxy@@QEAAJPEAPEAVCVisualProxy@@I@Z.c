/*
 * XREFs of ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z @ 0x180061B78
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800618DC (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18009E9D0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualGroupProxy::Update(CVisualGroupProxy *this, struct CVisualProxy **a2, unsigned int a3)
{
  __int64 v3; // r9
  _DWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  _BYTE v8[112]; // [rsp+30h] [rbp-88h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v4 = v8;
    v5 = (unsigned int)v3;
    do
    {
      v6 = (__int64)*a2++;
      *v4++ = *(_DWORD *)(v6 + 24);
      --v5;
    }
    while ( v5 );
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 2) + 264LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           v8,
           v3);
}
