/*
 * XREFs of WheapPersistPageForMemoryError @ 0x1406D8EB0
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheaRecoveryBugCheck @ 0x1406D8C30 (WheaRecoveryBugCheck.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 */

void __fastcall WheapPersistPageForMemoryError(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int *v3; // r9
  char v4; // r10
  unsigned int i; // r8d
  unsigned int *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 104) & 0x20) != 0 )
  {
    v2 = *(unsigned __int16 *)(a1 + 10);
    if ( (_WORD)v2 )
    {
      v3 = 0LL;
      v4 = 0;
      for ( i = 0; i < v2; ++i )
      {
        v3 = (unsigned int *)(a1 + 8 * (i + 8 * (i + 2LL)));
        if ( (v3[3] & 1) != 0 )
        {
          v4 = 1;
          break;
        }
      }
      v6 = (unsigned int *)(a1 + 128);
      if ( v4 )
        v6 = v3;
      v7 = *((_QWORD *)v6 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
      if ( !v7 )
        v7 = *((_QWORD *)v6 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
      if ( !v7 )
      {
        v8 = a1 + *v6;
        if ( v8 )
        {
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
            v9 = *(_QWORD *)(v8 + 16) >> 12;
            HalSetEnvironmentVariableEx(L"UncorrectedBadMemoryPage", (int)&WheapHardwareErrorGuid, (__int64)&v9, 8, 7);
          }
        }
      }
    }
  }
}
