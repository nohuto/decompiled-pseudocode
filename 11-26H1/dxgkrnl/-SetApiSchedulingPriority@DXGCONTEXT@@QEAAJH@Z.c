/*
 * XREFs of ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x140075918
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x140401A40 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z @ 0x140192EFC (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SetApiSchedulingPriority(DXGCONTEXT *this, int a2)
{
  bool IsDxgmms2; // al
  __int64 result; // rax

  if ( (unsigned int)(a2 + 7) > 0xE )
    return 3221225485LL;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
  DXGCONTEXT::SetSchedulingPriority(this, a2 + *((_DWORD *)this + 104), !IsDxgmms2, 0);
  result = 0LL;
  *((_DWORD *)this + 105) = a2;
  return result;
}
