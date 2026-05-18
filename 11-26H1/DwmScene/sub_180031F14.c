/*
 * XREFs of sub_180031F14 @ 0x180031F14
 * Callers:
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 *     sub_180054CD4 @ 0x180054CD4 (sub_180054CD4.c)
 *     sub_180055168 @ 0x180055168 (sub_180055168.c)
 *     sub_1800D9AFB @ 0x1800D9AFB (sub_1800D9AFB.c)
 *     sub_1800D9DCC @ 0x1800D9DCC (sub_1800D9DCC.c)
 *     sub_1800DBC39 @ 0x1800DBC39 (sub_1800DBC39.c)
 *     sub_1800DBC91 @ 0x1800DBC91 (sub_1800DBC91.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031F14(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    result = o_abort();
    __debugbreak();
  }
  return result;
}
