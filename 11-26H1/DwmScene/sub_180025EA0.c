/*
 * XREFs of sub_180025EA0 @ 0x180025EA0
 * Callers:
 *     sub_18003E504 @ 0x18003E504 (sub_18003E504.c)
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 *     sub_1800D47E0 @ 0x1800D47E0 (sub_1800D47E0.c)
 *     sub_1800D4AA0 @ 0x1800D4AA0 (sub_1800D4AA0.c)
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025EA0(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
