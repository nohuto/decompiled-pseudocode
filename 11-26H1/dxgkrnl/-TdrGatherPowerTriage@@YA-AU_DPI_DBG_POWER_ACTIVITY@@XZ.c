/*
 * XREFs of ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x140064470
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x14007A870 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 TdrGatherPowerTriage()
{
  char v0; // di
  char v1; // bl
  _QWORD **v2; // r8
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  bool v5; // zf
  _QWORD *v6; // rcx
  __int64 v7; // rax
  char v8; // al
  char v9; // bl
  char v10; // al
  __int64 v12; // [rsp+30h] [rbp+8h]

  v0 = 0;
  v1 = 0;
  *(_DWORD *)((char *)&v12 + 1) = 0;
  *(_WORD *)((char *)&v12 + 5) = 0;
  HIBYTE(v12) = 0;
  v2 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 808);
  v3 = *v2;
  while ( 1 )
  {
    v4 = 0LL;
    if ( v3 != v2 )
      v4 = v3;
    if ( !v4 )
      break;
    v5 = v3 == v2;
    v6 = v3;
    v3 = (_QWORD *)*v3;
    if ( v5 )
      v6 = 0LL;
    v7 = v6[27];
    if ( v7 && *(_DWORD *)(*(_QWORD *)(v7 + 64) + 4432LL) )
    {
      if ( (v1 & 1) != 0 || (v8 = 0, v6[397]) )
        v8 = 1;
      v9 = v8 | v1 & 0xFE;
      if ( (v9 & 2) != 0 || (v10 = 0, *((_DWORD *)v6 + 1213)) )
        v10 = 2;
      v1 = v10 | v9 & 0xFD;
    }
  }
  if ( (v1 & 1) != 0 || g_TdrRecoveryInProgress )
    v0 = 1;
  LOBYTE(v12) = v0 | v1 & 0xFE;
  return v12;
}
