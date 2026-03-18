/*
 * XREFs of sub_140BF7680 @ 0x140BF7680
 * Callers:
 *     <none>
 * Callees:
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 */

void __fastcall sub_140BF7680(_BYTE *Parameter)
{
  Parameter[28] = sub_140BD00B0(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
