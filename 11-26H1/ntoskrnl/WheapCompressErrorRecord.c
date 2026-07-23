/*
 * XREFs of WheapCompressErrorRecord @ 0x1403E2ED8
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1403E2E58 (WheapGenerateETWEvents.c)
 *     WheaRecoveryBugCheck @ 0x1406D8C30 (WheaRecoveryBugCheck.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall WheapCompressErrorRecord(char a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned int *v3; // rsi
  _QWORD *v6; // rbx
  __int16 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r15d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  __int64 v15; // rax
  void *result; // rax

  v2 = *(_WORD *)(a2 + 10);
  v3 = (unsigned int *)(a2 + 128);
  if ( (a1 & 2) != 0 )
  {
    v6 = (_QWORD *)(a2 + 128);
    v7 = 0;
    v8 = 0;
    if ( v2 )
    {
      v9 = *(_QWORD *)WHEA_ERROR_PACKET_SECTION_GUID.Data4;
      v10 = *(_QWORD *)&WHEA_ERROR_PACKET_SECTION_GUID.Data1;
      do
      {
        v11 = v6[2] - v10;
        if ( !v11 )
          v11 = v6[3] - v9;
        if ( v11 )
        {
          v6 += 9;
        }
        else
        {
          if ( v2 - v8 != 1 )
          {
            memmove(v6, v6 + 9, 72 * (v2 - v8 - 1));
            v2 = *(_WORD *)(a2 + 10);
            v9 = *(_QWORD *)WHEA_ERROR_PACKET_SECTION_GUID.Data4;
            v10 = *(_QWORD *)&WHEA_ERROR_PACKET_SECTION_GUID.Data1;
          }
          ++v7;
        }
        ++v8;
      }
      while ( v8 < v2 );
    }
    v2 -= v7;
    *(_WORD *)(a2 + 10) = v2;
  }
  v12 = a1 & 1;
  if ( v12 )
    v13 = 72 * v2 + 128;
  else
    v13 = *v3;
  v14 = 0;
  if ( v2 )
  {
    do
    {
      v15 = *v3;
      if ( v13 < (unsigned int)v15 )
      {
        memmove((void *)(a2 + v13), (const void *)(a2 + v15), v3[1]);
        *v3 = v13;
      }
      v13 += v3[1];
      ++v14;
      v3 += 18;
    }
    while ( v14 < *(unsigned __int16 *)(a2 + 10) );
  }
  result = memset_0((void *)(a2 + v13), 0, *(_DWORD *)(a2 + 20) - v13);
  if ( v12 )
    *(_DWORD *)(a2 + 20) = v13;
  return result;
}
