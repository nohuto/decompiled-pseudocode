/*
 * XREFs of RaidGetSrbIoctlFromIrp @ 0x14001CB38
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x140019FE0 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetSrbIoctlFromIrp(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4, int a5)
{
  __int64 v5; // r10
  __int64 v7; // rcx
  unsigned __int64 v9; // r11
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax

  v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 184);
  v9 = *(unsigned int *)(v7 + 16);
  if ( (unsigned int)v9 >= 0x1C )
  {
    if ( *(_DWORD *)v5 != 28 )
      return 3221225561LL;
    v11 = *(unsigned int *)(v5 + 24) + 28LL;
    if ( v11 <= 0xFFFFFFFF )
    {
      v12 = *(_DWORD *)(v7 + 8);
      if ( v12 < (unsigned int)v11 && (unsigned int)v9 < (unsigned int)v11 )
        return 3221225507LL;
      if ( a2 )
        *a2 = v5;
      if ( a3 )
        *a3 = v11;
      if ( a4 )
        *a4 = v12;
      if ( a5 == 1 )
      {
        v13 = *(_QWORD *)(v5 + 4);
        if ( v13 != 0x4B53494452425948LL
          && v13 != 0x4B53494449534353LL
          && v13 != 0x455241574D524946LL
          && v13 != 0x464E494555455551LL
          && v13 != 0x5551455441455243LL
          && v13 != 0x55514554454C4544LL
          && v13 != 0x464E495255444E45LL
          && v13 != 0x524F545350534155LL )
        {
          return 3221225488LL;
        }
        v14 = *(_QWORD *)(v5 + 4);
        if ( v14 != 0x4B53494452425948LL
          && v14 != 0x455241574D524946LL
          && v14 != 0x464E494555455551LL
          && v14 != 0x5551455441455243LL
          && v14 != 0x55514554454C4544LL
          && v14 != 0x464E495255444E45LL
          && *(_BYTE *)(a1 + 64) )
        {
          return 3221225506LL;
        }
      }
      v15 = *(_DWORD *)(v5 + 16);
      if ( v15 == 1771008 )
      {
        if ( (unsigned int)v9 >= 0x22 )
        {
          if ( *(_WORD *)(v5 + 32) != 224 || !*(_BYTE *)(a1 + 64) )
            return 0LL;
          return 3221225506LL;
        }
        return 3221225485LL;
      }
      if ( v15 != 1771040 )
        return 0LL;
      if ( (unsigned int)v9 >= 0x34 )
      {
        if ( *(_DWORD *)(v5 + 36) != 1 && *(_BYTE *)(a1 + 64) )
          return 3221225506LL;
        if ( (unsigned int)v9 >= (unsigned int)v11 )
          return v9 < *(unsigned int *)(v5 + 44) + (unsigned __int64)*(unsigned int *)(v5 + 48) ? 0xC000000D : 0;
      }
    }
  }
  return 3221225485LL;
}
