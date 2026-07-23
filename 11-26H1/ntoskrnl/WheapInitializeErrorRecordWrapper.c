/*
 * XREFs of WheapInitializeErrorRecordWrapper @ 0x1404EF214
 * Callers:
 *     WheapAllocErrorRecord @ 0x1403E1420 (WheapAllocErrorRecord.c)
 *     WheapInitializeErrorSource @ 0x14084D8E4 (WheapInitializeErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapInitializeErrorRecordWrapper(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  int v5; // ecx
  __int64 result; // rax
  int v7; // r10d

  *(_DWORD *)(a1 + 16) = a2;
  v3 = a1 + 168;
  *(_QWORD *)(a1 + 32) = a3;
  *(GUID *)(a1 + 104) = WHEA_RECORD_CREATOR_GUID;
  *(_DWORD *)(a1 + 40) = 1380274243;
  *(_WORD *)(a1 + 44) = 528;
  *(_DWORD *)(a1 + 46) = -1;
  *(_WORD *)(a1 + 50) = *(_WORD *)(a3 + 64);
  *(_DWORD *)(a1 + 60) = a2 - 40;
  v4 = 0;
  *(_DWORD *)(a1 + 52) = 3;
  v5 = *(_DWORD *)(a3 + 64);
  result = (unsigned int)(9 * v5);
  v7 = 72 * v5 + 128;
  if ( v5 )
  {
    do
    {
      *(_DWORD *)v3 = v7;
      ++v4;
      result = *(unsigned int *)(a3 + 68);
      *(_DWORD *)(v3 + 4) = result;
      *(_WORD *)(v3 + 8) = 768;
      v3 += 72LL;
      v7 += *(_DWORD *)(a3 + 68);
    }
    while ( v4 < *(_DWORD *)(a3 + 64) );
  }
  return result;
}
