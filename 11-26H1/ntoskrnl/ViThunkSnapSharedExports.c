/*
 * XREFs of ViThunkSnapSharedExports @ 0x140C44130
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x140C4407C (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x14041D9C0 (RtlFindNextForwardRunClear.c)
 *     ViThunkSnapSharedExportByName @ 0x140C441E8 (ViThunkSnapSharedExportByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExports(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        RTL_BITMAP *a4,
        unsigned int a5,
        __int64 a6)
{
  ULONG v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // r14
  ULONG v12; // eax
  ULONG v13; // ebx
  ULONG StartingRunIndex[14]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  StartingRunIndex[0] = 0;
  if ( a5 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v6, StartingRunIndex) )
        break;
      v13 = StartingRunIndex[0];
      if ( (unsigned int)ViThunkSnapSharedExportByName(a1, a2 + a3 * StartingRunIndex[0], a6 + 24 * v8) )
        v7 = 1;
      v6 = v13 + 1;
      v8 = (unsigned int)(v8 + 1);
      StartingRunIndex[0] = v6;
      v12 = v6;
    }
    while ( (unsigned int)v8 < a5 );
  }
  return v7;
}
