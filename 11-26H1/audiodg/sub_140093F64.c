/*
 * XREFs of sub_140093F64 @ 0x140093F64
 * Callers:
 *     sub_1400912C0 @ 0x1400912C0 (sub_1400912C0.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 */

__int64 sub_140093F64()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rbx
  _QWORD *i; // rcx
  __int64 v4; // rdi
  RTL_SRWLOCK *v6; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(&stru_1400E97C8);
  v0 = 2LL;
  v6 = &stru_1400E97C8;
  v1 = 0LL;
  for ( i = &unk_1400E97D4; ; ++i )
  {
    while ( (v0 & *i) != 0 )
      v0 *= 2LL;
    if ( _BitScanForward64((unsigned __int64 *)&v4, v0) )
      break;
    v1 = (unsigned int)(v1 + 1);
    v0 = 1LL;
    if ( (unsigned int)v1 >= 4 )
    {
      sub_14003A998(&v6);
      return 0LL;
    }
  }
  *(_QWORD *)((char *)&stru_1400E97C8 + 8 * v1 + 12) |= v0;
  sub_14003A998(&v6);
  return (unsigned int)(v4 + ((_DWORD)v1 << 6));
}
