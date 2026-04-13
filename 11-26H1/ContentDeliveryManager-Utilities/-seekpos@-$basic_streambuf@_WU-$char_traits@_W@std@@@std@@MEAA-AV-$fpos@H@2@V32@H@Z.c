/*
 * XREFs of ?seekpos@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@MEAA?AV?$fpos@H@2@V32@H@Z @ 0x18005EF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstreambuf::seekpos(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = std::_BADOFF;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
