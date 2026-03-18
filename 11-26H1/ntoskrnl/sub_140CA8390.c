/*
 * XREFs of sub_140CA8390 @ 0x140CA8390
 * Callers:
 *     <none>
 * Callees:
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 */

void __fastcall sub_140CA8390(_BYTE *Parameter)
{
  Parameter[28] = sub_140C82940(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
