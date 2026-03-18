/*
 * XREFs of ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x140157644
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPrimaryPathInCloneGroup(const struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  unsigned int i; // r8d

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); ++i )
  {
    if ( *((_DWORD *)a1 + 74 * i + 60) == *((_DWORD *)a1 + 74 * a2 + 60) )
      return i == a2;
  }
  return 0;
}
