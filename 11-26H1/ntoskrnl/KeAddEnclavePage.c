/*
 * XREFs of KeAddEnclavePage @ 0x1403439B0
 * Callers:
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeAddEnclavePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  _DWORD *v6; // rbp
  bool v11; // zf
  unsigned int v12; // r10d
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  _DWORD v18[4]; // [rsp+60h] [rbp+0h] BYREF

  v6 = (_DWORD *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL);
  memset_0((void *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  v11 = (KeFeatureBits & 0x10000000000LL) == 0;
  *a6 = 0;
  if ( v11 )
    return 3221225659LL;
  if ( (a5 & 0x40) != 0 )
  {
    if ( !_bittest64(&KeFeatureBits, 0x2Bu) )
      return 3221225496LL;
    v12 = 13;
    if ( (a5 & 0xF) != 3 )
      return 3221225541LL;
    *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  }
  else
  {
    v12 = 1;
    v13 = a5 & 1 | 2;
    if ( (a5 & 2) == 0 )
      v13 = a5 & 1;
    v14 = v13 | 4;
    if ( (a5 & 4) == 0 )
      v14 = v13;
    if ( (a5 & 8) != 0 )
      v15 = v14 | 0x100;
    else
      v15 = v14 | 0x200;
    *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v15;
    *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a2;
    *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 64;
  }
  *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = a4;
  *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = a1;
  KiEncls(v12, v6 + 8, a3, 0LL);
  if ( (a5 & 0x50) == 0 )
  {
    v16 = 4096;
    *v6 = 4096;
    do
    {
      KiEncls(6LL, a1, a3, 0LL);
      a3 += 256LL;
      *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a3;
      v11 = v16 == 256;
      v16 -= 256;
      *v6 = v16;
    }
    while ( !v11 );
  }
  return 0LL;
}
