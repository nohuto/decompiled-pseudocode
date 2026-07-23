/*
 * XREFs of RaspDestroySegmentList @ 0x140357ACC
 * Callers:
 *     RaspScanConvert @ 0x140356F8C (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x14035778C (RaspCreateSegmentList.c)
 * Callees:
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 */

__int64 __fastcall RaspDestroySegmentList(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  _BYTE *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v11; // rcx

  v3 = 0;
  if ( a2 )
  {
    v7 = (_BYTE *)(a1 + 24);
    do
    {
      v8 = v7 - 24;
      if ( v7 == (_BYTE *)24 )
        break;
      if ( *v7 == 3 && *v8 )
        RaspFreeMemory(*v8, a3);
      if ( *v7 == 4 )
      {
        v11 = *((_QWORD *)v7 - 1);
        if ( v11 )
          RaspFreeMemory(v11, a3);
      }
      if ( *v7 == 5 )
      {
        if ( *v8 )
          RaspFreeMemory(*v8, a3);
        v9 = *((_QWORD *)v7 - 1);
        if ( v9 )
          RaspFreeMemory(v9, a3);
      }
      v7 += 25;
      ++v3;
    }
    while ( v3 < a2 );
  }
  return RaspFreeMemory(a1, a3);
}
