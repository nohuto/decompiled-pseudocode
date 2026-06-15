/*
 * XREFs of sub_1400381D8 @ 0x1400381D8
 * Callers:
 *     sub_1400381A0 @ 0x1400381A0 (sub_1400381A0.c)
 * Callees:
 *     sub_1400AD8B8 @ 0x1400AD8B8 (sub_1400AD8B8.c)
 */

int __fastcall sub_1400381D8(__int64 a1)
{
  bool v1; // zf
  __int64 (__fastcall **v2)(); // rax
  void *v4; // rcx
  void *v5; // rcx

  v1 = *(_QWORD *)(a1 + 40) == 0LL;
  v2 = off_1400BA770;
  *(_QWORD *)a1 = off_1400BA770;
  if ( !v1 )
  {
    if ( !*(_BYTE *)(a1 + 52) )
      sub_1400AD8B8();
    WaitForSingleObject(*(HANDLE *)(a1 + 40), 0xFFFFFFFF);
    LODWORD(v2) = CloseHandle(*(HANDLE *)(a1 + 40));
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    LODWORD(v2) = CloseHandle(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    LODWORD(v2) = CloseHandle(v5);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return (int)v2;
}
