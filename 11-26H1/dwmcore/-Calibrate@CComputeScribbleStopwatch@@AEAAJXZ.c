/*
 * XREFs of ?Calibrate@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801C9D04
 * Callers:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801C9C9C (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Calibrate(CComputeScribbleStopwatch *this)
{
  int v2; // edi
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**(_QWORD **)this + 136LL))(
         *(_QWORD *)this,
         (char *)this + 16,
         (char *)this + 24);
  if ( v2 < 0 )
  {
    v6 = 132LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v3 = *(_QWORD *)this;
  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 128LL))(v3, &v8);
  if ( v2 < 0 )
  {
    v6 = 136LL;
    goto LABEL_7;
  }
  if ( v8 < 0 )
    v4 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
       + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
  else
    v4 = (float)(int)v8;
  *((float *)this + 3) = v4;
  return 0LL;
}
