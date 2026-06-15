/*
 * XREFs of sub_140049894 @ 0x140049894
 * Callers:
 *     sub_14002A170 @ 0x14002A170 (sub_14002A170.c)
 *     sub_140033AE4 @ 0x140033AE4 (sub_140033AE4.c)
 *     sub_140039760 @ 0x140039760 (sub_140039760.c)
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 * Callees:
 *     sub_140049948 @ 0x140049948 (sub_140049948.c)
 */

void __fastcall sub_140049894(_DWORD *a1)
{
  EnterCriticalSection(&stru_1400E7CE8);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    sub_140049948();
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 4LL) = dword_1400E7AC0;
LABEL_7:
  LeaveCriticalSection(&stru_1400E7CE8);
}
