/*
 * XREFs of DbgkPostEnclaveModuleMessages @ 0x1405B64B8
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140B290F8 (DbgkpPostModuleMessages.c)
 * Callees:
 *     DbgkPostModuleMessage @ 0x1404C083C (DbgkPostModuleMessage.c)
 */

NTSTATUS __fastcall DbgkPostEnclaveModuleMessages(void *a1, void *a2, struct _KEVENT *a3, __int64 a4, unsigned int a5)
{
  NTSTATUS result; // eax
  int *v9; // rbx
  __int64 v10; // rdi

  result = a5;
  if ( a5 )
  {
    v9 = (int *)(a4 + 16);
    v10 = a5;
    do
    {
      result = DbgkPostModuleMessage(a1, a2, *((void **)v9 - 2), *v9, v9[1], a3);
      v9 += 6;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
