/*
 * XREFs of sub_14003DDA4 @ 0x14003DDA4
 * Callers:
 *     sub_14003DCC0 @ 0x14003DCC0 (sub_14003DCC0.c)
 * Callees:
 *     <none>
 */

__int64 sub_14003DDA4()
{
  _QWORD v1[3]; // [rsp+40h] [rbp-18h] BYREF

  v1[1] = 0LL;
  v1[0] = &unk_1400C7890;
  dword_1400B700C = 1;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64 (__fastcall *)(), _QWORD, void *, __int64, _QWORD *, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
                        sub_1400405B0,
                        0LL,
                        &unk_1400F7000,
                        1LL,
                        v1,
                        0LL,
                        0LL,
                        &qword_1400B7020) )
    return 1LL;
  dword_1400B700C = 0;
  return 0LL;
}
