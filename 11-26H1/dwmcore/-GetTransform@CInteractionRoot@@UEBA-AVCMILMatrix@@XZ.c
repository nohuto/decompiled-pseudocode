/*
 * XREFs of ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ @ 0x1801C2350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetTransform(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 60) = 1065353216LL;
  *(_QWORD *)a2 = 1065353216LL;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 65) &= 0xE9u;
  *(_BYTE *)(a2 + 65) |= 0x29u;
  *(_BYTE *)(a2 + 64) = -86;
  return result;
}
