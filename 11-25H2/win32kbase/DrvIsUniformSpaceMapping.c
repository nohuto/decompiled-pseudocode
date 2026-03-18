/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x1400CE9D0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DrvGetUniformSpaceMapping @ 0x1400CE7BC (DrvGetUniformSpaceMapping.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1400CE878 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  __int64 SessionState; // rax
  unsigned int v3; // r8d

  SessionState = W32GetSessionState(a1);
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 1160LL) && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v3;
}
