/*
 * XREFs of ExpScanGeneralLookasideList @ 0x140428840
 * Callers:
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 *     ?ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140B47830 (-ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExpScanGeneralLookasideList(__int64 **a1, KSPIN_LOCK *a2, int a3)
{
  KIRQL v6; // al
  __int64 *v7; // r9
  KIRQL i; // bp
  int v9; // edx
  unsigned int v10; // r8d
  signed int v11; // r11d
  unsigned int v12; // ecx
  __int16 v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // edx

  v6 = KeAcquireSpinLockRaiseToDpc(a2);
  v7 = *a1;
  for ( i = v6; v7 != (__int64 *)a1; v7 = (__int64 *)*v7 )
  {
    v9 = *((_DWORD *)v7 - 10) - *((_DWORD *)v7 + 5);
    *((_DWORD *)v7 + 5) = *((_DWORD *)v7 - 10);
    v10 = *((_DWORD *)v7 - 11) - *((_DWORD *)v7 + 4);
    v11 = *((unsigned __int16 *)v7 - 23);
    *((_DWORD *)v7 + 4) = *((_DWORD *)v7 - 11);
    if ( (_WORD)v11 != 0xFFFF )
    {
      v12 = *((unsigned __int16 *)v7 - 24);
      if ( v10 >= 25 * a3 )
      {
        v14 = 1000 * v9 / v10;
        if ( v14 >= 5 )
        {
          v15 = v14 * (v11 - v12) / 0x7D0 + 5;
          if ( v15 > 0x1E )
            v15 = 30;
          v13 = v15 + v12;
          if ( (int)(v15 + v12) > v11 )
            v13 = v11;
        }
        else
        {
          v13 = v12 - 1;
          if ( v12 < 5 )
            v13 = 4;
        }
      }
      else
      {
        v13 = v12 - 10;
        if ( v12 < 0xE )
          v13 = 4;
      }
      *((_WORD *)v7 - 24) = v13;
    }
  }
  KeReleaseSpinLock(a2, i);
}
