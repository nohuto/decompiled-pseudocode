/*
 * XREFs of AcpiArblibUnpackResource @ 0x1400AD850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiArblibUnpackResource(
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1,
        unsigned __int64 *a2,
        ULONGLONG *a3)
{
  unsigned __int8 Type; // r9

  Type = a1->Type;
  if ( a1->Type == 1 || ((Type - 3) & 0xFB) == 0 )
  {
    *a3 = RtlCmDecodeMemIoResource(a1, a2);
  }
  else if ( Type == 6 )
  {
    *a2 = a1->u.Generic.Start.LowPart;
    *a3 = a1->u.Interrupt.Vector;
  }
  return 0LL;
}
