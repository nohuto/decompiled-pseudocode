/*
 * XREFs of ObpGetPoolTags @ 0x14077C264
 * Callers:
 *     ObQueryRefTraceInformationEx @ 0x1407C424C (ObQueryRefTraceInformationEx.c)
 *     ObQueryRefTraceInformation @ 0x140B5E750 (ObQueryRefTraceInformation.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 */

__int64 __fastcall ObpGetPoolTags(__int64 a1)
{
  int v1; // edx
  unsigned __int16 v3; // dx
  __int64 Memory; // rdx
  unsigned int v6; // eax
  unsigned int *QuadPart; // r8
  _WORD *v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int16 v11; // ax

  v1 = *(_DWORD *)&stru_140F132C8.AffinityPrimaryGroup;
  *(_OWORD *)a1 = 0LL;
  if ( v1 )
  {
    v3 = 10 * v1;
    *(_WORD *)a1 = v3;
    v3 += 2;
    *(_WORD *)(a1 + 2) = v3;
    Memory = ObpTraceAllocateMemory(v3);
    if ( !Memory )
      return 3221225495LL;
    v6 = *(_DWORD *)&stru_140F132C8.AffinityPrimaryGroup;
    *(_QWORD *)(a1 + 8) = Memory;
    if ( v6 )
    {
      QuadPart = (unsigned int *)stru_140F132C8.Timer.DueTime.QuadPart;
      v8 = (_WORD *)(Memory + 4);
      v9 = v6;
      do
      {
        v10 = *QuadPart;
        v11 = (unsigned __int8)*QuadPart;
        v8[2] = 59;
        *(v8 - 2) = v11;
        ++QuadPart;
        *(v8 - 1) = BYTE1(v10);
        *v8 = BYTE2(v10);
        v8[1] = HIBYTE(v10);
        v8 += 5;
        --v9;
      }
      while ( v9 );
    }
  }
  return 0LL;
}
