/*
 * XREFs of sub_14004A170 @ 0x14004A170
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate @ 0x14004A67C (_o_terminate.c)
 *     __current_exception @ 0x14004A6C4 (__current_exception.c)
 *     __current_exception_context @ 0x14004A6D0 (__current_exception_context.c)
 */

__int64 __fastcall sub_14004A170(_QWORD *a1)
{
  _DWORD *v1; // rbx
  int v3; // edx
  __int64 v5; // rbx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( v3 == 429065504 || (unsigned int)(v3 - 429065505) <= 1 || v3 == 26820608 )
    {
      *(_QWORD *)_current_exception() = v1;
      v5 = a1[1];
      *(_QWORD *)_current_exception_context() = v5;
      o_terminate();
      JUMPOUT(0x14004A1D2LL);
    }
  }
  return 0LL;
}
