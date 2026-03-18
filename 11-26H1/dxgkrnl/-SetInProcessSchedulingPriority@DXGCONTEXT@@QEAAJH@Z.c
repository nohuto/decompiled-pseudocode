/*
 * XREFs of ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1403F73C8
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1403F7020 (DxgkSetContextInProcessSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::SetInProcessSchedulingPriority(DXGCONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r8

  v3 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, DXGCONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 736LL)
                                                                                         + 8LL)
                                                                             + 368LL))(
             *((_QWORD *)this + 32),
             a2,
             a3,
             this);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 736LL) + 8LL);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, DXGCONTEXT *))(v4 + 376))(
           *((_QWORD *)this + 35),
           a2,
           v4,
           this);
}
