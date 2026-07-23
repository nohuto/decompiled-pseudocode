/*
 * XREFs of DifCreateAPIThunkContext @ 0x14064F1E4
 * Callers:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall DifCreateAPIThunkContext(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = ExAllocatePool2(0x40uLL);
  if ( result )
  {
    *(_QWORD *)(result + 8) = *(_QWORD *)((-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + a1 + 24);
    *(_BYTE *)(result + 4) = a2 != 0;
    *(_DWORD *)result = a3;
  }
  return result;
}
