/*
 * XREFs of sub_14001CCAC @ 0x14001CCAC
 * Callers:
 *     sub_14001C89C @ 0x14001C89C (sub_14001C89C.c)
 *     sub_14001C940 @ 0x14001C940 (sub_14001C940.c)
 *     sub_14007DE90 @ 0x14007DE90 (sub_14007DE90.c)
 * Callees:
 *     sub_14001CDE4 @ 0x14001CDE4 (sub_14001CDE4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001CCAC(
        __int64 a1,
        void *a2,
        DWORD a3,
        void *a4,
        DWORD nOutBufferSize,
        DWORD *lpBytesReturned)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  RTL_SRWLOCK *v12; // rbx
  unsigned int v13; // esi
  int v15; // eax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    v15 = sub_1400B6010(v8);
    if ( v15 < 0 )
      return (unsigned int)v15;
    return v7;
  }
  else
  {
    v12 = (RTL_SRWLOCK *)(a1 + 200);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 200));
    v16 = a1 + 200;
    if ( *(_BYTE *)(a1 + 208) )
    {
      if ( a1 != -200 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 200));
      return 2147944017LL;
    }
    else if ( DeviceIoControl(*(HANDLE *)(a1 + 112), 0x2F0003u, a2, a3, a4, nOutBufferSize, lpBytesReturned, 0LL) )
    {
      sub_14003A998(&v16);
      return 0LL;
    }
    else
    {
      v13 = sub_14001CDE4();
      if ( v12 )
        ReleaseSRWLockExclusive(v12);
      return v13;
    }
  }
}
