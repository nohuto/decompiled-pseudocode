/*
 * XREFs of ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1801B03E8
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801B04E4 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_atan2f_0 @ 0x18009AB24 (_o_atan2f_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801B0644 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnFlick(EdgyProcessorTarget *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  double v8; // xmm0_8
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  v2 = *((_QWORD *)this + 19);
  v10 = 12;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 88LL))(v2, 7LL, &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = HIDWORD(v11);
    if ( v11 )
    {
      v8 = o_atan2f_0();
      if ( (*(float *)&v8 < 0.78539819 || *(float *)&v8 > 2.3561945)
        && (*(float *)&v8 < -2.3561945 || *(float *)&v8 > -0.78539819) )
      {
        v9 = (unsigned int)v11;
        LOBYTE(v7) = 1;
      }
      else
      {
        v9 = v6;
        v7 = 0LL;
      }
      *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe(this, v7, v9);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
