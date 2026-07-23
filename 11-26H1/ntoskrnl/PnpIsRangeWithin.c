/*
 * XREFs of PnpIsRangeWithin @ 0x140B3A7A0
 * Callers:
 *     PnpNeedToReleaseBootResources @ 0x140B3A660 (PnpNeedToReleaseBootResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1404CE0F0 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall PnpIsRangeWithin(
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2)
{
  unsigned int v2; // ebx
  ULONGLONG v5; // rax
  ULONGLONG Vector; // rsi
  ULONGLONG v7; // r14
  ULONGLONG v8; // rax
  ULONGLONG LowPart; // rdx
  ULONGLONG v10; // rax
  ULONGLONG Start; // [rsp+40h] [rbp+8h] BYREF
  ULONGLONG v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  Start = 0LL;
  v13 = 0LL;
  switch ( a1->Type )
  {
    case 1u:
      goto LABEL_7;
    case 2u:
      Vector = a1->u.Interrupt.Vector;
      LowPart = a2->u.Interrupt.Vector;
      goto LABEL_18;
    case 3u:
      goto LABEL_7;
    case 4u:
      Vector = a1->u.Generic.Start.LowPart;
      LowPart = a2->u.Generic.Start.LowPart;
LABEL_18:
      v7 = Vector;
      v10 = LowPart;
      goto LABEL_8;
    case 6u:
      Vector = a1->u.Generic.Start.LowPart;
      v7 = (unsigned int)(Vector + a1->u.Generic.Start.HighPart - 1);
      LowPart = a2->u.Generic.Start.LowPart;
      v10 = (unsigned int)(LowPart + a2->u.Generic.Start.HighPart - 1);
      goto LABEL_8;
    case 7u:
LABEL_7:
      v5 = RtlCmDecodeMemIoResource(a1, &Start);
      Vector = Start;
      v7 = v5 + Start - 1;
      v8 = RtlCmDecodeMemIoResource(a2, &v13);
      LowPart = v13;
      v10 = v13 + v8 - 1;
LABEL_8:
      if ( Vector < LowPart || v7 > v10 )
        return v2;
      break;
  }
  if ( a1->ShareDisposition == a2->ShareDisposition && a1->Flags == a2->Flags )
    return 1;
  return v2;
}
