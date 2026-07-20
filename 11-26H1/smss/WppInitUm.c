/*
 * XREFs of WppInitUm @ 0x140001200
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 * Callees:
 *     <none>
 */

__int64 WppInitUm()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rdi
  __int64 v2; // r8
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF

  v0 = WPP_GLOBAL_Control;
  v1 = &WPP_REGISTRATION_GUIDS;
  if ( WPP_GLOBAL_Control )
  {
    do
    {
      v2 = *v1;
      v4[0] = v2;
      ++v1;
      v4[1] = 0LL;
      v0[4] = v2;
      result = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), _QWORD *, __int64, __int64, _QWORD *, _QWORD, _QWORD, _QWORD *))EtwRegisterTraceGuidsW)(
                 WppControlCallback,
                 v0,
                 v2,
                 1LL,
                 v4,
                 0LL,
                 0LL,
                 v0 + 1);
      v0 = (_QWORD *)*v0;
    }
    while ( v0 );
  }
  return result;
}
