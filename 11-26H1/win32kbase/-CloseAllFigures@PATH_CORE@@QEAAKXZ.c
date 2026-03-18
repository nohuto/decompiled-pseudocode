/*
 * XREFs of ?CloseAllFigures@PATH_CORE@@QEAAKXZ @ 0x140010080
 * Callers:
 *     EPATHOBJ_vCloseAllFigures @ 0x14000EE70 (EPATHOBJ_vCloseAllFigures.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PATH_CORE::CloseAllFigures(PATH_CORE *this)
{
  __int64 *v1; // rdx
  unsigned int v2; // r8d

  v1 = (__int64 *)*((_QWORD *)this + 1);
  v2 = 0;
  while ( v1 )
  {
    if ( (v1[2] & 0xA) == 2 )
    {
      *((_DWORD *)v1 + 4) |= 8u;
      ++v2;
    }
    v1 = (__int64 *)*v1;
  }
  return v2;
}
