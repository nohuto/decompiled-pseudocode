/*
 * XREFs of sub_14003E4C0 @ 0x14003E4C0
 * Callers:
 *     sub_140039B20 @ 0x140039B20 (sub_140039B20.c)
 * Callees:
 *     sub_14004DADC @ 0x14004DADC (sub_14004DADC.c)
 */

bool __fastcall sub_14003E4C0(volatile void *a1, DWORD a2)
{
  BOOL v2; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  CompareAddress = 0;
  v2 = WaitOnAddress(a1, &CompareAddress, 4uLL, a2);
  if ( !v2 && GetLastError() != 1460 )
    sub_14004DADC(retaddr, 3496LL);
  return v2;
}
