/*
 * XREFs of ReadMSRValue @ 0x1400024F0
 * Callers:
 *     RefreshPkgIdleStateMSRValues @ 0x140002440 (RefreshPkgIdleStateMSRValues.c)
 *     InitPkgIdleStateStats @ 0x1400474C0 (InitPkgIdleStateStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadMSRValue(unsigned __int64 *a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rax

  if ( a3 == 64 )
    v4 = -1LL;
  else
    v4 = ((1LL << a3) - 1) << a4;
  if ( a1 )
    v5 = *a1;
  else
    v5 = __readmsr(a2);
  return (v4 & v5) >> a4;
}
