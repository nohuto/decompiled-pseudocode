/*
 * XREFs of ?SetOpacityMode@CVisualProxy@@QEAAJW4DCOMPOSITION_OPACITY_MODE@@@Z @ 0x18005D46C
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18005D290 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetOpacityMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 160LL))(*(_QWORD *)(a1 + 32), 1LL);
}
