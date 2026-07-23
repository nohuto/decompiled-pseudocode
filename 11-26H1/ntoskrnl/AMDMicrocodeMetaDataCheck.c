/*
 * XREFs of AMDMicrocodeMetaDataCheck @ 0x1406E2908
 * Callers:
 *     MicrocodeGetRecord @ 0x1406E18B8 (MicrocodeGetRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMDMicrocodeMetaDataCheck(_DWORD *a1, unsigned int a2)
{
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  __int64 j; // rcx
  __int64 i; // rcx

  _RAX = 1LL;
  __asm { cpuid }
  v9 = _RAX;
  v10 = -1073741275;
  v11 = __readmsr(0x8Bu);
  if ( *a1 == 1 )
  {
    for ( i = 0LL; (unsigned int)i < a1[6]; i = (unsigned int)(i + 1) )
    {
      if ( a1[i + 7] == v9 && a1[5] <= (unsigned int)v11 )
      {
LABEL_13:
        v10 = 0;
        if ( !CmpContextListLock.WaitBlockFill5[27] && *(_QWORD *)&CmpContextListLock.WaitBlockFill11[16] )
          CmpContextListLock.WaitBlockFill5[27] = **(_QWORD **)&CmpContextListLock.WaitBlockFill11[16] == __PAIR64__(a2, v9);
        return v10;
      }
    }
  }
  else if ( *a1 == 13 )
  {
    for ( j = 0LL; (unsigned int)j < a1[8]; j = (unsigned int)(j + 1) )
    {
      if ( a1[j + 9] == v9 && a1[5] <= (unsigned int)v11 )
        goto LABEL_13;
    }
  }
  return v10;
}
