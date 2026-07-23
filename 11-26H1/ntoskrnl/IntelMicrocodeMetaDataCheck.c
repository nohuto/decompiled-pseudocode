/*
 * XREFs of IntelMicrocodeMetaDataCheck @ 0x1406E2684
 * Callers:
 *     MicrocodeGetRecord @ 0x1406E18B8 (MicrocodeGetRecord.c)
 * Callees:
 *     IntelUpdateMicrocodeGetProcessorFlags @ 0x1406E2750 (IntelUpdateMicrocodeGetProcessorFlags.c)
 */

__int64 __fastcall IntelMicrocodeMetaDataCheck(__int64 a1, unsigned int a2)
{
  unsigned int v8; // r11d
  unsigned __int64 v9; // rdi
  _DWORD *v10; // r10
  unsigned int v11; // r11d
  unsigned int v13; // edx
  __int64 i; // rbx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  v8 = _RAX;
  v9 = __readmsr(0x8Bu) >> 32;
  if ( (int)IntelUpdateMicrocodeGetProcessorFlags(v8, &v15) < 0 )
    return 3221225485LL;
  v13 = -1073741275;
  HIDWORD(CmpContextListLock.Queue) = v15;
  if ( (v15 & v10[5]) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < v10[7]; i = (unsigned int)(i + 1) )
    {
      if ( v10[i + 8] == v11 && v10[6] <= (unsigned int)v9 )
      {
        v13 = 0;
        if ( !CmpContextListLock.WaitBlockFill5[27]
          && *(_QWORD *)&CmpContextListLock.WaitBlockFill11[16]
          && **(_QWORD **)&CmpContextListLock.WaitBlockFill11[16] == __PAIR64__(a2, v11) )
        {
          CmpContextListLock.WaitBlockFill5[27] = *(_DWORD *)(*(_QWORD *)&CmpContextListLock.WaitBlockFill11[16] + 8LL) == v15;
        }
        return v13;
      }
    }
  }
  return v13;
}
