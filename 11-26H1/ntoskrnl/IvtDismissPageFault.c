/*
 * XREFs of IvtDismissPageFault @ 0x1405A8860
 * Callers:
 *     <none>
 * Callees:
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall IvtDismissPageFault(__int64 a1, unsigned int a2, __int16 a3, unsigned __int16 a4, int a5)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  v9 = 0LL;
  v8 = 9LL;
  WORD1(v8) = a3;
  v6 = v8;
  v10 = 0LL;
  if ( a2 != -1 )
  {
    v6 = ((unsigned __int64)a2 << 32) & 0xFFFFF00000000LL ^ (v8 & 0xFFF00000FFFFFFEFuLL | 0x10);
    v8 = v6;
  }
  *(_QWORD *)&v9 = (8LL * a4) ^ (v9 ^ (8LL * a4)) & 0xFFFFFFFFFFFFF007uLL | 4;
  if ( a5 < 0 )
    v8 = v6 & 0xFFFFFFFFFFFF0FFFuLL | 0x1000;
  return IvtIommuSendCommand(a1, &v8, 0);
}
