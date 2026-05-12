/*
 * XREFs of StorCreateAnsiString @ 0x140096C1C
 * Callers:
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1400701E0 (RaidBusEnumeratorProcessSerialNumber.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1400C72B8 (StorProcessNVMeEnumeratorFillInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall StorCreateAnsiString(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v8; // rbx
  void *Pool; // rax

  if ( (_DWORD)a3 == -1 )
  {
    a3 = -1LL;
    do
      ++a3;
    while ( a2[a3] );
  }
  if ( (unsigned int)a3 > 0xFFFE )
    return 3221225621LL;
  v8 = (unsigned __int16)a3;
  Pool = (void *)RaidAllocatePool(64LL, (unsigned __int16)a3 + 1LL, 1396990290LL, a5);
  *(_QWORD *)(a1 + 8) = Pool;
  if ( !Pool )
    return 3221225495LL;
  memmove(Pool, a2, v8);
  *(_WORD *)a1 = v8;
  *(_WORD *)(a1 + 2) = v8 + 1;
  return 0LL;
}
