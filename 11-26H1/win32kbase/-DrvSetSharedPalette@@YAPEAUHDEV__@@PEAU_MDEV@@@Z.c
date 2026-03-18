/*
 * XREFs of ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1401A2194
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1401F64D4 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DrvSetSharedPalette(struct _MDEV *a1)
{
  __int64 v1; // rdx
  struct PALETTE *v2; // rdi
  unsigned int v4; // esi
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2156LL) & 0x100) != 0 )
    v2 = *(struct PALETTE **)(v1 + 1792);
  v4 = 0;
  for ( i = v1 & -(__int64)((*(_DWORD *)(*(_QWORD *)a1 + 2156LL) & 0x100) != 0); v4 < *((_DWORD *)a1 + 5); ++v4 )
  {
    v6 = *((_QWORD *)a1 + 7 * v4 + 5);
    if ( (*(_DWORD *)(v6 + 2156) & 0x100) != 0 )
    {
      *(_QWORD *)(v6 + 1752) = MulSetPalette;
      if ( v2 )
      {
        if ( *(struct PALETTE **)(v6 + 1792) != v2 )
        {
          v8 = *(_QWORD *)(v6 + 1792);
          XEPALOBJ::apalColorSet((XEPALOBJ *)&v8, v2);
        }
      }
      else
      {
        v2 = *(struct PALETTE **)(v6 + 1792);
        i = v6;
      }
    }
  }
  return i;
}
