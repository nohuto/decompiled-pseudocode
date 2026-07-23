/*
 * XREFs of CmEnumerateKeyCallout @ 0x1408C86D0
 * Callers:
 *     <none>
 * Callees:
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 */

void __fastcall CmEnumerateKeyCallout(_QWORD *Parameter)
{
  *(_DWORD *)Parameter = CmEnumerateKey(
                           Parameter[1],
                           Parameter[2],
                           *((_DWORD *)Parameter + 6),
                           *((_DWORD *)Parameter + 7),
                           Parameter[4],
                           *((_DWORD *)Parameter + 10),
                           Parameter[6]);
}
