/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14019C554
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1401329F0 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rcx
  char v3; // al
  int v4; // eax
  int v5; // eax

  memset(a1, 0, 0x138uLL);
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 34) = (char *)a1 + 264;
  *((_QWORD *)a1 + 33) = (char *)a1 + 264;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 112) & 0xF9 | 2;
  *((_DWORD *)a1 + 50) = 1;
  *((_BYTE *)a1 + 112) = v3;
  *((_DWORD *)a1 + 52) = v2;
  *((_DWORD *)a1 + 53) = v2;
  v4 = *((_DWORD *)a1 + 56);
  if ( v4 >= 0 )
    *((_DWORD *)a1 + 56) = (v4 + 1) | 0x80000000;
  *((_DWORD *)a1 + 58) = v2;
  *((_DWORD *)a1 + 59) = v2;
  v5 = *((_DWORD *)a1 + 62);
  if ( v5 >= 0 )
    *((_DWORD *)a1 + 62) = (v5 + 1) | 0x80000000;
  *((_DWORD *)a1 + 34) = v2;
  *((_DWORD *)a1 + 72) = v2;
  *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
}
