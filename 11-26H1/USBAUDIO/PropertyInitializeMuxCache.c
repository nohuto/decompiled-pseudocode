/*
 * XREFs of PropertyInitializeMuxCache @ 0x140033440
 * Callers:
 *     TopologyProcessSelectorUnit @ 0x140031FF0 (TopologyProcessSelectorUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PropertyInitializeMuxCache(__int64 a1, __int64 a2, unsigned int *a3)
{
  bool v3; // zf
  __int64 result; // rax
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3[1] == 1;
  v8 = 0;
  v9 = 0;
  if ( v3 )
  {
    *a3 = 1;
    result = 0LL;
    a3[1] = 1;
  }
  else
  {
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, unsigned int *))(a2 + 136))(a1, a2, 131LL, &v8) >= 0 )
      a3[1] = v8;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *))(a2 + 136))(a1, a2, 129LL, &v9);
    if ( (int)result >= 0 )
    {
      if ( a3[1] >= v9 && v9 )
        *a3 = v9;
      else
        return 3221225858LL;
    }
  }
  return result;
}
