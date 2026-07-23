/*
 * XREFs of LdrpReadMemory @ 0x1800C9200
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800F8610 (LdrQueryModuleInfoFromLdrEntry32.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  if ( (int)result >= 0 )
  {
    result = 2147483661LL;
    if ( !a4 )
      return 0LL;
  }
  return result;
}
