/*
 * XREFs of RtlGetElementGenericTable @ 0x1800E6200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlGetElementGenericTable(PRTL_GENERIC_TABLE Table, ULONG I)
{
  ULONG WhichOrderedElement; // r10d
  ULONG v3; // ebx
  PLIST_ENTRY OrderedPointer; // r8
  ULONG v6; // r9d
  ULONG NumberGenericTableElements; // eax
  ULONG v8; // ecx
  unsigned int v9; // eax
  ULONG i; // r10d

  WhichOrderedElement = Table->WhichOrderedElement;
  v3 = I + 1;
  OrderedPointer = Table->OrderedPointer;
  v6 = I + 1;
  if ( I == -1 )
    return 0LL;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  if ( v3 > NumberGenericTableElements )
    return 0LL;
  if ( v3 != WhichOrderedElement )
  {
    if ( v3 < WhichOrderedElement )
    {
      if ( v3 <= WhichOrderedElement >> 1 )
      {
        OrderedPointer = &Table->InsertOrderList;
        do
        {
          OrderedPointer = OrderedPointer->Flink;
          --v6;
        }
        while ( v6 );
      }
      else
      {
        for ( i = WhichOrderedElement - v3; i; --i )
          OrderedPointer = OrderedPointer->Blink;
      }
    }
    else
    {
      v8 = v3 - WhichOrderedElement;
      v9 = NumberGenericTableElements - I;
      if ( v3 - WhichOrderedElement > v9 )
      {
        for ( OrderedPointer = &Table->InsertOrderList; v9; --v9 )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        for ( ; v8; --v8 )
          OrderedPointer = OrderedPointer->Flink;
      }
    }
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = v3;
  }
  return &OrderedPointer[1];
}
