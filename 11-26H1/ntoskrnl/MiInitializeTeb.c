/*
 * XREFs of MiInitializeTeb @ 0x14099A1CC
 * Callers:
 *     MmCreateTeb @ 0x140999CF8 (MmCreateTeb.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall MiInitializeTeb(_QWORD *a1, __int64 a2, int a3)
{
  _WORD *v5; // rsi
  _QWORD *v6; // r14
  int v7; // edx
  char *v8; // rcx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  char *Src; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  RtlCopyToUser(a1 + 6, &v12, 8uLL);
  RtlCopyToUser(v12 + 4, (void *)(a2 + 24), 4uLL);
  RtlCopyToUser(v12 + 8, (void *)a2, 8uLL);
  RtlCopyToUser(v12 + 9, (void *)(a2 + 8), 8uLL);
  RtlCopyToUser(v12 + 251, (void *)a2, 8uLL);
  RtlCopyToUser(v12 + 252, (void *)(a2 + 8), 8uLL);
  RtlCopyToUser(v12 + 93, (void *)(a2 + 40), 4uLL);
  v5 = (_WORD *)(a2 + 50);
  RtlCopyToUser((char *)v12 + 4698, (void *)(a2 + 50), 2uLL);
  v6 = (_QWORD *)(a2 + 56);
  RtlCopyToUser(v12 + 588, (void *)(a2 + 56), 8uLL);
  RtlCopyToUser(v12 + 12, (void *)(a2 + 16), 8uLL);
  RtlCopyToUser(v12 + 1, *(void **)(a2 + 112), 8uLL);
  RtlCopyToUser(v12 + 2, (void *)(*(_QWORD *)(a2 + 112) + 8LL), 8uLL);
  RtlCopyToUser(v12 + 655, (void *)(*(_QWORD *)(a2 + 112) + 16LL), 8uLL);
  v7 = (int)v12;
  v8 = (char *)(v12 + 1024);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 112) += 24LL;
  *(_DWORD *)(a2 + 128) = (_DWORD)v8 - v7;
  *(_DWORD *)(a2 + 132) = v7 - (_DWORD)v8;
  if ( a3 == 5 )
  {
    Src = v8;
    *v5 = 522;
    *v6 = v8 + 3072;
    LODWORD(v13) = -1;
    v10 = v7;
    RtlCopyToUser(v8 + 24, &Src, 4uLL);
    RtlCopyToUser(Src + 16, (void *)(a2 + 24), 4uLL);
    RtlCopyToUser(Src + 32, (void *)a2, 4uLL);
    RtlCopyToUser(Src + 36, (void *)(a2 + 8), 4uLL);
    RtlCopyToUser(Src + 1716, (void *)a2, 4uLL);
    RtlCopyToUser(Src + 1720, (void *)(a2 + 8), 4uLL);
    RtlCopyToUser(Src + 464, (void *)(a2 + 40), 4uLL);
    RtlCopyToUser(Src + 3066, (void *)(a2 + 50), 2uLL);
    RtlCopyToUser(Src + 3068, (void *)(a2 + 56), 4uLL);
    RtlCopyToUser(Src + 48, (void *)(a2 + 16), 4uLL);
    RtlCopyToUser(Src + 4, *(void **)(a2 + 112), 4uLL);
    RtlCopyToUser(Src + 8, (void *)(*(_QWORD *)(a2 + 112) + 8LL), 4uLL);
    RtlCopyToUser(Src + 3596, (void *)(*(_QWORD *)(a2 + 112) + 16LL), 4uLL);
    RtlCopyToUser(Src + 4060, (void *)(a2 + 132), 4uLL);
    RtlWriteULong64ToUser(v12, (__int64)Src);
    RtlWriteULongToUser((_DWORD *)v12 + 1539, *(_DWORD *)(a2 + 128));
    RtlCopyToUser(Src, &v13, 4uLL);
    RtlCopyToUser(Src + 3952, &v10, 4uLL);
  }
  else if ( a3 == 6 )
  {
    v13 = v8;
    *v5 = 522;
    *v6 = v8 + 4712;
    RtlCopyToUser(v8 + 48, &v13, 8uLL);
    RtlCopyToUser(v13 + 4, (void *)(a2 + 24), 4uLL);
    RtlCopyToUser(v13 + 8, (void *)a2, 8uLL);
    RtlCopyToUser(v13 + 9, (void *)(a2 + 8), 8uLL);
    RtlCopyToUser(v13 + 251, (void *)a2, 8uLL);
    RtlCopyToUser(v13 + 252, (void *)(a2 + 8), 8uLL);
    RtlCopyToUser(v13 + 93, (void *)(a2 + 40), 4uLL);
    RtlCopyToUser((char *)v13 + 4698, (void *)(a2 + 50), 2uLL);
    RtlCopyToUser(v13 + 588, (void *)(a2 + 56), 8uLL);
    RtlCopyToUser(v13 + 12, (void *)(a2 + 16), 8uLL);
    RtlCopyToUser(v13 + 1, *(void **)(a2 + 112), 8uLL);
    RtlCopyToUser(v13 + 2, (void *)(*(_QWORD *)(a2 + 112) + 8LL), 8uLL);
    RtlCopyToUser(v13 + 655, (void *)(*(_QWORD *)(a2 + 112) + 16LL), 8uLL);
    RtlCopyToUser((char *)v13 + 6156, (void *)(a2 + 132), 4uLL);
    RtlWriteULong64ToUser(v12, (__int64)v13);
    RtlWriteULongToUser((_DWORD *)v12 + 1539, *(_DWORD *)(a2 + 128));
  }
  return 0LL;
}
