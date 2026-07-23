/*
 * XREFs of BiDoesHiveKeyExist @ 0x14089915C
 * Callers:
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     BiOpenKeyNonBcd @ 0x1409A447C (BiOpenKeyNonBcd.c)
 */

bool __fastcall BiDoesHiveKeyExist(const wchar_t *a1)
{
  void *v1; // rbx
  bool v3; // di
  int v4; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  v7 = 0LL;
  v3 = 0;
  Handle = 0LL;
  if ( !wcschr(a1, 0x5Cu) )
  {
    if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 131097LL, &Handle) >= 0 )
    {
      v4 = BiOpenKeyNonBcd(Handle, a1, 131097LL, &v7);
      v1 = v7;
      v3 = v4 >= 0;
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      ZwClose(v1);
  }
  return v3;
}
