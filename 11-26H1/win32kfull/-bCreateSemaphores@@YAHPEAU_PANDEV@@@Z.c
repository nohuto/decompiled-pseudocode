/*
 * XREFs of ?bCreateSemaphores@@YAHPEAU_PANDEV@@@Z @ 0x1403228DC
 * Callers:
 *     ?PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140321890 (-PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCreateSemaphores(struct _PANDEV *a1)
{
  Gre::Semaphore *v2; // rax
  __int64 v3; // rsi
  unsigned int i; // edi
  HSEMAPHORE Semaphore; // rax

  *((_QWORD *)a1 + 14) = EngCreateSemaphore();
  *((_QWORD *)a1 + 97) = EngCreateSemaphore();
  v2 = (Gre::Semaphore *)EngAllocMem(7u, 0x30u, 0x6F6C5350u);
  *((_QWORD *)a1 + 98) = v2;
  if ( v2 )
  {
    if ( !Gre::Semaphore::Initialize(v2) )
      return 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL) = GreCreateFastMutex();
    v2 = (Gre::Semaphore *)*((_QWORD *)a1 + 98);
    if ( !*((_QWORD *)v2 + 4) )
      return 0LL;
  }
  if ( !*((_QWORD *)a1 + 14) || !*((_QWORD *)a1 + 97) || !v2 )
    return 0LL;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)a1 + 192) = *((_DWORD *)a1 + 2) / 8;
  v3 = 0LL;
  *((_DWORD *)a1 + 193) = *((_DWORD *)a1 + 3) / 8;
  while ( (unsigned int)v3 < 9 )
  {
    for ( i = 0; i < 9; ++i )
    {
      Semaphore = EngCreateSemaphore();
      *((_QWORD *)a1 + 9 * v3 + i + 15) = Semaphore;
      if ( !Semaphore )
        return 0LL;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return 1LL;
}
