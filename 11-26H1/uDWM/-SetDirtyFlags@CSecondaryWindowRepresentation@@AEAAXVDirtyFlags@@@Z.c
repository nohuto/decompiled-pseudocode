/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z @ 0x180029674
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800282E4 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x18004AD70 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800640B4 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::SetDirtyFlags(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2 | *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 24) != (_DWORD)result )
  {
    *(_DWORD *)(a1 + 24) = result;
    return (***(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 168))(*(_QWORD *)(a1 + 168), a1);
  }
  return result;
}
