/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1401646C0
 * Callers:
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 * Callees:
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     FreeThreadBufferWithTag @ 0x140041C20 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1400B5520 (AllocThreadBufferWithTag.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(volatile void **a1)
{
  _WORD *v2; // r13
  volatile void *v3; // r15
  volatile void *v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v12; // rdi
  char *v13; // rbx
  char *v14; // rax
  void *v15; // rcx
  size_t v16; // [rsp+78h] [rbp+10h]
  size_t v17; // [rsp+80h] [rbp+18h]
  size_t v18; // [rsp+88h] [rbp+20h]

  ProbeForRead(a1, 0x30uLL, 1u);
  v2 = a1[1];
  if ( !v2 )
    return 0LL;
  v3 = a1[3];
  if ( !v3 )
    return 0LL;
  v4 = a1[4];
  if ( !v4 )
    return 0LL;
  ProbeForRead(a1[1], 2uLL, 2u);
  ProbeForRead(v3, 2uLL, 2u);
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( v2[v6] );
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)v3 + v7) );
  if ( v6 + 1 < v6 )
    return 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v8, 2uLL) )
    return 0LL;
  v16 = 2 * v6;
  v9 = 2 * v6 + 50;
  if ( v9 < 0x30 )
    return 0LL;
  v17 = 2 * v7;
  v10 = v9 + 2 * v7 + 2;
  if ( v10 < v9 )
    return 0LL;
  ProbeForRead(v4, (unsigned int)((v8 * (unsigned __int128)2u) >> 64) + 2, ((v8 * (unsigned __int128)2u) >> 64) + 2);
  do
    ++v5;
  while ( *((_WORD *)v4 + v5) );
  if ( v5 + 1 < v5 )
    return 0LL;
  if ( !is_mul_ok(v5 + 1, 2uLL) )
    return 0LL;
  v18 = 2 * v5;
  v12 = v10 + 2 * v5 + 2;
  if ( v12 < v10 || v12 - 48 > 0x270FFD0 )
    return 0LL;
  v13 = 0LL;
  if ( (_DWORD)v12 )
  {
    v14 = (char *)AllocThreadBufferWithTag(v12, 0x706D7447u, 0);
    v13 = v14;
    if ( v14 )
      memset(v14, 0, (unsigned int)v12);
  }
  if ( v13 )
  {
    *(_DWORD *)v13 = *(_DWORD *)a1;
    *((_QWORD *)v13 + 5) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 1) = v13 + 48;
    *((_QWORD *)v13 + 3) = &v13[v16 + 50];
    GreProbeAndReadFromUntrustedVa(v13 + 48, v16, v2, v16, 1uLL);
    GreProbeAndReadFromUntrustedVa(*((void **)v13 + 3), v17, (void *)v3, v17, 1uLL);
    v15 = (void *)(*((_QWORD *)v13 + 3) + v17 + 2);
    *((_QWORD *)v13 + 4) = v15;
    GreProbeAndReadFromUntrustedVa(v15, v18, (void *)v4, v18, 1uLL);
  }
  return (struct _DRIVER_INFO_2W *)v13;
}
