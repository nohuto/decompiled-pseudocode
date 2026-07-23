/*
 * XREFs of ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140492400
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492348 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmHpChunkHeapInitialize @ 0x140492670 (SmHpChunkHeapInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmInitialize(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  memset_0((void *)(a1 + 192), 0, 0x770uLL);
  v5 = 6;
  *(_OWORD *)a1 = 0LL;
  v6 = 2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_OWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  SmHpChunkHeapInitialize(a1 + 192, &v5);
  memset_0((void *)(a1 + 1552), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1624) = a1 + 1616;
  *(_QWORD *)(a1 + 1616) = 0LL;
  *(_DWORD *)(a1 + 1604) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1680) = 0LL;
  memset_0((void *)(a1 + 1688), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1760) = a1 + 1752;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_DWORD *)(a1 + 1740) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1784) = 1;
  *(_QWORD *)(a1 + 1816) = 0LL;
  memset_0((void *)(a1 + 1824), 0, 0x60uLL);
  *(_QWORD *)(a1 + 1896) = a1 + 1888;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_DWORD *)(a1 + 1876) = (__int64)(KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 1784) = 2;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1664) = 1LL;
  *(_QWORD *)(a1 + 1800) = 0x20000000LL;
  v2 = 8LL;
  *(_QWORD *)(a1 + 1792) = 0x20000000LL;
  v3 = (_DWORD *)(a1 + 1424);
  *(_QWORD *)(a1 + 1672) = 0x1FFFFFFFLL;
  *(_QWORD *)(a1 + 1656) = 1LL;
  *(_QWORD *)(a1 + 1808) = 0x3FFFFFFFLL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1944) = 0LL;
  *(_QWORD *)(a1 + 1928) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 1552;
  *(_QWORD *)(a1 + 80) = a1 + 1688;
  *(_QWORD *)(a1 + 144) = a1 + 1824;
  do
  {
    *v3 = -1;
    v3 += 4;
    --v2;
  }
  while ( v2 );
  result = *(_DWORD *)(a1 + 856) & 0xFFFFFFF8 | 6;
  *(_DWORD *)(a1 + 856) = result;
  *(_DWORD *)(a1 + 864) = 2;
  *(_BYTE *)(a1 + 776) = 2;
  return result;
}
