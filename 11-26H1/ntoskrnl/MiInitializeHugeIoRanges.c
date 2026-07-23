/*
 * XREFs of MiInitializeHugeIoRanges @ 0x14086E0C0
 * Callers:
 *     MiInitializeNuma @ 0x1406E7EDC (MiInitializeNuma.c)
 * Callees:
 *     MiWriteSecureFlags @ 0x1404C73A4 (MiWriteSecureFlags.c)
 */

void __fastcall MiInitializeHugeIoRanges(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r10
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 13896);
  v2 = a1;
  v3 = (unsigned int)dword_140E2D900[0];
  v4 = 2LL;
  v5 = a1 + 13984;
  v6 = *(_QWORD **)(v1 + 17040);
  v7 = (_QWORD *)(v2 + 13960);
  v8 = (16LL * (*(_WORD *)v1 & 0x7FF)) | 1;
  do
  {
    if ( (_DWORD)v3 )
    {
      do
      {
        MiWriteSecureFlags(v6, v8);
        v6 = (_QWORD *)(v9 + 8);
      }
      while ( v10 != 1 );
    }
    *v7 = v5;
    *(v7 - 1) = v3;
    v8 = v8 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    v5 += 32LL;
    v7 += 2;
    --v4;
  }
  while ( v4 );
  MiWriteSecureFlags((_QWORD *)(v2 + 14048), v8 & 0xFFFFFFFFFFFFFFF8uLL | 4);
}
