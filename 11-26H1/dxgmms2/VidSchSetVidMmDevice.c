/*
 * XREFs of VidSchSetVidMmDevice @ 0x1400471A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetVidMmDevice(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
