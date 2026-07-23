/*
 * XREFs of DbgkpLkmdSnapThreadInContext @ 0x14078E5DC
 * Callers:
 *     DbgkpLkmdSnapThreadApc @ 0x14078E560 (DbgkpLkmdSnapThreadApc.c)
 * Callees:
 *     RtlCaptureContext @ 0x140536E40 (RtlCaptureContext.c)
 *     DbgkpLkmdSnapDataEx @ 0x1405B65AC (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1405B66C0 (DbgkpLkmdSnapKernelStack.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall DbgkpLkmdSnapThreadInContext(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  char v7; // di
  __int64 v8; // rcx
  _CONTEXT ContextRecord; // [rsp+40h] [rbp-4F8h] BYREF

  result = DbgkpLkmdSnapDataEx((__int64)a1, a2);
  if ( (int)result >= 0 )
  {
    a3[1] |= 1u;
    v7 = 1;
    *a3 = 0;
    v8 = *a1;
    if ( *a1 )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 8) = a2;
        v7 = 0;
        MEMORY[0x218] = 0;
      }
      *(_QWORD *)(v8 + 36864) = 0LL;
    }
    RtlCaptureContext(&ContextRecord);
    DbgkpLkmdSnapDataEx((__int64)a1, (__int64)&ContextRecord);
    DbgkpLkmdSnapKernelStack((__int64)a1, a2, 0LL, v7, (__int64)&ContextRecord);
    return 0LL;
  }
  else
  {
    *a3 = result;
  }
  return result;
}
