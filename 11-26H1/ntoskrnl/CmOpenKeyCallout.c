/*
 * XREFs of CmOpenKeyCallout @ 0x140937130
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 */

void __fastcall CmOpenKeyCallout(_BYTE *Parameter)
{
  char v1; // [rsp+28h] [rbp-10h]

  v1 = Parameter[48];
  *(_DWORD *)Parameter = CmOpenKey(
                           *((_QWORD *)Parameter + 1),
                           *((unsigned int *)Parameter + 4),
                           *((_QWORD *)Parameter + 3),
                           *((unsigned int *)Parameter + 8),
                           *((_QWORD *)Parameter + 5),
                           v1);
}
