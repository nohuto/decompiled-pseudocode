/*
 * XREFs of sub_140CAE390 @ 0x140CAE390
 * Callers:
 *     <none>
 * Callees:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 */

void __fastcall sub_140CAE390(_BYTE *Parameter)
{
  Parameter[28] = sub_140C88940(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
