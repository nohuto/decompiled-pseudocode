/*
 * XREFs of VidSchSetCrossAdapterData @ 0x1400C3AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetCrossAdapterData(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 2008) = a2;
}
