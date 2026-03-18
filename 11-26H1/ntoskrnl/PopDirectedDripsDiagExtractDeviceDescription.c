/*
 * XREFs of PopDirectedDripsDiagExtractDeviceDescription @ 0x1407E2218
 * Callers:
 *     PopDirectedDripsDiagRundownDevices @ 0x140B08D6C (PopDirectedDripsDiagRundownDevices.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY ***__fastcall PopDirectedDripsDiagExtractDeviceDescription(
        struct _LIST_ENTRY **a1,
        struct _LIST_ENTRY ***a2,
        struct _LIST_ENTRY ***a3,
        struct _LIST_ENTRY ***a4,
        struct _LIST_ENTRY ***a5,
        struct _LIST_ENTRY ***a6,
        struct _LIST_ENTRY ***a7)
{
  struct _LIST_ENTRY **p_Blink; // r10
  struct _LIST_ENTRY **v8; // rax
  struct _LIST_ENTRY **v9; // rax
  struct _LIST_ENTRY **v10; // rax
  struct _LIST_ENTRY **v11; // rdx
  struct _LIST_ENTRY **v12; // rdx
  struct _LIST_ENTRY ***result; // rax

  p_Blink = &PopDirectedDripsUmLock.MutantListHead.Blink;
  v8 = &PopDirectedDripsUmLock.MutantListHead.Blink;
  if ( a1[7] )
    v8 = a1 + 6;
  *a2 = v8;
  v9 = &PopDirectedDripsUmLock.MutantListHead.Blink;
  if ( a1[9] )
    v9 = a1 + 8;
  *a3 = v9;
  v10 = &PopDirectedDripsUmLock.MutantListHead.Blink;
  if ( a1[11] )
    v10 = a1 + 10;
  *a4 = v10;
  v11 = &PopDirectedDripsUmLock.MutantListHead.Blink;
  if ( a1[13] )
    v11 = a1 + 12;
  *a5 = v11;
  v12 = &PopDirectedDripsUmLock.MutantListHead.Blink;
  if ( a1[15] )
    v12 = a1 + 14;
  *a6 = v12;
  if ( a1[17] )
    p_Blink = a1 + 16;
  result = a7;
  *a7 = p_Blink;
  return result;
}
