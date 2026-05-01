/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x180015B80
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18001C04E (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x68uLL);
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return 0LL;
}
