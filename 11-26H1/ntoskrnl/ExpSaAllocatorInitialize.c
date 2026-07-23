/*
 * XREFs of ExpSaAllocatorInitialize @ 0x1406D71B4
 * Callers:
 *     ExpSaInitialize @ 0x1406D7200 (ExpSaInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSaAllocatorInitialize(__int64 a1, char a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  result = a1 + 24;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 52) = 4;
  return result;
}
