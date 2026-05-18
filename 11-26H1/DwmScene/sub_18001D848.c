/*
 * XREFs of sub_18001D848 @ 0x18001D848
 * Callers:
 *     sub_18001D8D4 @ 0x18001D8D4 (sub_18001D8D4.c)
 * Callees:
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_18001D1C4 @ 0x18001D1C4 (sub_18001D1C4.c)
 */

__int64 sub_18001D848()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  sub_180012B20(&v2);
  v0 = v2;
  if ( dword_1801C8F3C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801C8F3C);
    if ( dword_1801C8F3C == -1 )
    {
      qword_1801C8F40 = v0;
      sub_18000D4CC(&dword_1801C8F3C);
    }
  }
  v2 = v0 - qword_1801C8F40;
  return *sub_18001D1C4(&v3, &v2);
}
