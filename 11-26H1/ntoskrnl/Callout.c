/*
 * XREFs of Callout @ 0x140A242E0
 * Callers:
 *     <none>
 * Callees:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = SPCall2ServerInternal(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}
