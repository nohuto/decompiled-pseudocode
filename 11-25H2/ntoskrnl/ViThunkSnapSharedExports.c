/*
 * XREFs of ViThunkSnapSharedExports @ 0x140B9645C
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x140B963AC (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1403DCC50 (RtlFindNextForwardRunClear.c)
 *     ViThunkSnapSharedExportByName @ 0x140B965EC (ViThunkSnapSharedExportByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExports(void *a1, __int64 a2, __int64 a3, _RTL_BITMAP *a4, unsigned int a5)
{
  ULONG v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // r14d
  ULONG v9; // eax
  ULONG v10; // ebx
  ULONG StartingRunIndex[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0;
  StartingRunIndex[0] = 0;
  if ( a5 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v5, StartingRunIndex) )
        break;
      v10 = StartingRunIndex[0];
      if ( (unsigned int)ViThunkSnapSharedExportByName(a1) )
        v6 = 1;
      v5 = v10 + 1;
      ++v7;
      StartingRunIndex[0] = v5;
      v9 = v5;
    }
    while ( v7 < a5 );
  }
  return v6;
}
