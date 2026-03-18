/*
 * XREFs of ?Test@CLastWokenThread@@QEAA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x1400FEDEC
 * Callers:
 *     ?Test@LastWokenThread@@YA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x1400FEDC0 (-Test@LastWokenThread@@YA-AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLastWokenThread::Test(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( v6 )
  {
    if ( !a3 || *(_BYTE *)(a1 + 16) )
    {
      v7 = 3;
      if ( *(_QWORD *)(v6 + 464) != a2 )
        v7 = 1;
    }
    else
    {
      v7 = 2;
    }
  }
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
