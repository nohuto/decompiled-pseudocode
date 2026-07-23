/*
 * XREFs of RtlGetElementGenericTable @ 0x14047D070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall RtlGetElementGenericTable(PRTL_GENERIC_TABLE Table, ULONG I)
{
  ULONG WhichOrderedElement; // r10d
  ULONG v3; // ebx
  PLIST_ENTRY OrderedPointer; // r8
  ULONG v6; // r9d
  ULONG NumberGenericTableElements; // eax
  ULONG v9; // ecx
  unsigned int v10; // eax
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
      if ( v3 > WhichOrderedElement >> 1 )
      {
        for ( i = WhichOrderedElement - v3; i; --i )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        OrderedPointer = &Table->InsertOrderList;
        do
        {
          OrderedPointer = OrderedPointer->Flink;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v9 = v3 - WhichOrderedElement;
      v10 = NumberGenericTableElements - I;
      if ( v3 - WhichOrderedElement > v10 )
      {
        for ( OrderedPointer = &Table->InsertOrderList; v10; --v10 )
          OrderedPointer = OrderedPointer->Blink;
      }
      else
      {
        for ( ; v9; --v9 )
          OrderedPointer = OrderedPointer->Flink;
      }
    }
    Table->OrderedPointer = OrderedPointer;
    Table->WhichOrderedElement = v3;
  }
  return &OrderedPointer[1];
}
