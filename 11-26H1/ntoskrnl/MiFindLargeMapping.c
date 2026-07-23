/*
 * XREFs of MiFindLargeMapping @ 0x1402509BC
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindLargeMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned __int64 *v5; // r9
  _QWORD *i; // rdx
  _QWORD v8[6]; // [rsp+0h] [rbp-48h]
  char v9; // [rsp+38h] [rbp-10h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 3;
  v5 = (unsigned __int64 *)&v9;
  do
  {
    v5 -= 2;
    *(v5 - 1) = v2;
    *v5 = v3;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
LABEL_3:
  if ( v4 >= 3 )
    return 0LL;
  for ( i = (_QWORD *)v8[2 * v4]; ; ++i )
  {
    if ( (unsigned __int64)i > v8[2 * v4 + 1] )
    {
      ++v4;
      goto LABEL_3;
    }
    if ( (*i & 0x80u) != 0LL )
      break;
  }
  return 1LL;
}
