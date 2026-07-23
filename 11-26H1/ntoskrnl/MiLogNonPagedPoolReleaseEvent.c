/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x14070082C
 * Callers:
 *     MiFreeNonPagedPoolPages @ 0x140365080 (MiFreeNonPagedPoolPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  _QWORD v8[2]; // [rsp+48h] [rbp-20h] BYREF

  v1 = (_QWORD *)*a1;
  do
  {
    v6 = 0LL;
    v7 = 0LL;
    v2 = v1[1] | 0x8000000000000000uLL;
    v3 = (__int64)(v2 << 25) >> 16;
    if ( v3 >= 0xFFFFF68000000000uLL )
    {
      result = 0xFFFFF6FFFFFFFFFFuLL;
      if ( v3 <= 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v5 = v1[1] | 0x8000000000000000uLL;
    do
    {
      v1 = (_QWORD *)*v1;
      v2 -= 8LL;
    }
    while ( v1 && (v1[1] | 0x8000000000000000uLL) == v2 );
    v7 = (__int64)(v5 - v2) >> 3;
    *(_QWORD *)&v6 = v6 & 0xFFFFFFFFFFFFFFF0uLL | 5;
    v8[1] = 24LL;
    *((_QWORD *)&v6 + 1) = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v8[0] = &v6;
    result = EtwTraceKernelEvent((int)v8, 1, 0x20000001u, 633, 290462468);
  }
  while ( v1 );
  return result;
}
