/*
 * XREFs of sub_1400377D8 @ 0x1400377D8
 * Callers:
 *     pfns @ 0x1400377A0 (pfns.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1400377D8(__int64 a1)
{
  if ( Mtx_lock((_Mtx_t)(a1 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 164) == 0x7FFFFFFF )
  {
LABEL_5:
    *(_DWORD *)(a1 + 164) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x140037855LL);
  }
  *(_BYTE *)(a1 + 80) = 1;
  return Mtx_unlock((_Mtx_t)(a1 + 88));
}
