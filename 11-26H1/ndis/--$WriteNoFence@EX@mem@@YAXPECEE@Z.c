/*
 * XREFs of ??$WriteNoFence@EX@mem@@YAXPECEE@Z @ 0x140090860
 * Callers:
 *     ndisReadCtaPolicy @ 0x14013A998 (ndisReadCtaPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WriteNoFence<unsigned char,void>(_BYTE *a1, char a2)
{
  *a1 = a2;
}
