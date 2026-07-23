/*
 * XREFs of ExHeapQueryPoolUsage @ 0x1404A477C
 * Callers:
 *     ExQueryPoolUsage @ 0x1404A4738 (ExQueryPoolUsage.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ExHeapQueryPoolUsage(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  unsigned int v8; // r10d
  __int64 v12; // rbx
  void **v13; // r9
  __int64 *v14; // r8
  __int64 v15; // r11
  int v16; // edx
  __int64 v17; // r11
  _QWORD *v18; // r8
  int v19; // edx
  _DWORD *result; // rax

  *a1 = 0;
  v8 = 0;
  for ( *a2 = 0; v8 < HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink); ++v8 )
  {
    v12 = 2LL;
    v13 = &stru_140E6BFE8.SListFaultAddress + 1048 * v8;
    v14 = (__int64 *)(v13 + 2);
    do
    {
      v15 = *v14;
      if ( *v14 )
      {
        v16 = *a1 + *(_QWORD *)(v15 + 136);
        *a1 = v16;
        *a1 = v16 + *(_QWORD *)(v15 + 96);
      }
      ++v14;
      --v12;
    }
    while ( v12 );
    v17 = 2LL;
    do
    {
      v18 = *v13;
      if ( *v13 )
      {
        v19 = *a2 + v18[17];
        *a2 = v19;
        *a2 = v19 + v18[12];
      }
      ++v13;
      --v17;
    }
    while ( v17 );
  }
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  result = a8;
  *a8 = 0;
  return result;
}
