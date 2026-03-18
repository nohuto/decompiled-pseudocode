/*
 * XREFs of ?Unlock@CWarpLockSubresource@@QEAAJXZ @ 0x1801C22D8
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18012BCBC (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 32LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         *((unsigned int *)this + 8));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\WarpLockSubresource.h",
    (const char *)(unsigned int)v1);
  return v2;
}
