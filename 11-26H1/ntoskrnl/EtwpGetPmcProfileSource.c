/*
 * XREFs of EtwpGetPmcProfileSource @ 0x140B712FC
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall EtwpGetPmcProfileSource(__int64 a1, unsigned int a2, unsigned int *a3, char a4)
{
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int i; // ebx
  int v11; // edx
  __int64 v12; // rax

  v8 = 0;
  KeWaitForSingleObject(&stru_140F03830.880, Executive, 0, 0, 0LL);
  v9 = 4 * EtwpPmcProfile + 16;
  *a3 = v9;
  if ( a2 > v9 )
  {
    v8 = -1073741789;
  }
  else
  {
    for ( i = 0; i < EtwpPmcProfile; ++i )
    {
      v11 = *((__int16 *)qword_140F03E98 + 308 * i + 304);
      v12 = a1 + 4LL * i;
      if ( a4 )
        RtlWriteULongToUser((_DWORD *)(v12 + 16), v11);
      else
        *(_DWORD *)(v12 + 16) = v11;
    }
  }
  KeReleaseMutex((PRKMUTEX)&stru_140F03830.880, 0);
  return v8;
}
