/*
 * XREFs of MiAssignSystemVa @ 0x140CFF388
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140CFF498 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToSet, __int64 a2, int a3)
{
  unsigned int v4; // r14d
  ULONG v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // al
  ULONG ClearBits; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ebx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  BitMapHeader.Buffer = (unsigned int *)&stru_140E2DAB0.ThreadListEntry;
  v4 = a2;
  if ( NumberToSet <= 2 )
  {
    v8 = ExGenRandom(1, a2);
    v7 = 8;
    goto LABEL_4;
  }
  v6 = *(_DWORD *)&stru_140E2DAB0.AbWaitEntryCount;
  v7 = (unsigned int)a2 >= 4 ? 0x10 : 0;
  while ( 1 )
  {
    while ( 1 )
    {
      ClearBits = RtlFindClearBits(&BitMapHeader, NumberToSet, v6);
      v11 = ClearBits;
      if ( ClearBits == -1 )
        return 0LL;
      if ( !a3 )
        break;
      v10 = ClearBits % NumberToSet;
      if ( !(ClearBits % NumberToSet) )
        break;
      v6 = (-NumberToSet & (ClearBits + NumberToSet - 1)) < 0x100 ? -NumberToSet & (ClearBits + NumberToSet - 1) : 0;
    }
    if ( ClearBits == v6 || !v7 )
      break;
    --v7;
    v8 = ExGenRandom(1, v10);
LABEL_4:
    v6 = v8;
  }
  RtlSetBits(&BitMapHeader, ClearBits, NumberToSet);
  v13 = v11 + NumberToSet;
  if ( v4 != 1 )
    v13 = (unsigned __int8)(v13 + (unsigned int)ExGenRandom(1, v12) % v4);
  *(_DWORD *)&stru_140E2DAB0.AbWaitEntryCount = v13;
  return (v11 - 256) << 39;
}
