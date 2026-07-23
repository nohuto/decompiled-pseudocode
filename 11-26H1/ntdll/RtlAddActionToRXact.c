/*
 * XREFs of RtlAddActionToRXact @ 0x180101CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAttributeActionToRXact @ 0x180101CF0 (RtlAddAttributeActionToRXact.c)
 */

__int64 __fastcall RtlAddActionToRXact(int a1, int a2, int a3, int a4, void *a5, size_t a6)
{
  size_t Size; // [rsp+38h] [rbp-20h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  LODWORD(Size) = a6;
  v8[0] = 0LL;
  v8[1] = 0LL;
  return RtlAddAttributeActionToRXact(a1, a2, a3, -1, (__int64)v8, a4, a5, Size);
}
