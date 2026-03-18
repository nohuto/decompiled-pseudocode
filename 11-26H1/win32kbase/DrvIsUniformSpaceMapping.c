/*
 * XREFs of DrvIsUniformSpaceMapping @ 0x14011D8F0
 * Callers:
 *     DrvGetUniformSpaceMapping @ 0x14011D308 (DrvGetUniformSpaceMapping.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x14011D798 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsUniformSpaceMapping(__int64 a1)
{
  __int64 SessionState; // rax
  unsigned int v3; // r8d

  SessionState = W32GetSessionState(a1);
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 1248LL) && a1 )
    return (*(_DWORD *)(a1 + 16) & 2) != 0;
  return v3;
}
