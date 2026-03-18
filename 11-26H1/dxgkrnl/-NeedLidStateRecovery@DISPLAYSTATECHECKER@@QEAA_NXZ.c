/*
 * XREFs of ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401CBF24
 * Callers:
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CB8C8 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401CC0B0 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1400761DC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

char __fastcall DISPLAYSTATECHECKER::NeedLidStateRecovery(DISPLAYSTATECHECKER *this)
{
  unsigned int i; // ebx
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  struct DISPLAYDIAGNOSTICADAPTERDATA *v4; // rdx
  unsigned int v5; // r9d
  unsigned int j; // r8d
  __int64 v7; // rax

  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v4 = DisplayAdapterDiagData;
    if ( *((_BYTE *)DisplayAdapterDiagData + 3504) && !*((_BYTE *)DisplayAdapterDiagData + 3506) )
    {
      v5 = *((_DWORD *)DisplayAdapterDiagData + 489);
      for ( j = 0; j < v5; ++j )
      {
        if ( j >= 4 )
          v7 = 8LL;
        else
          v7 = (__int64)v4 + 248 * j + 972;
        if ( *(_DWORD *)v7 > 1u )
          return 1;
      }
      if ( v5 == 1 && *((_BYTE *)v4 + 970) && *((_BYTE *)v4 + 971) )
        return 1;
    }
  }
  return 0;
}
