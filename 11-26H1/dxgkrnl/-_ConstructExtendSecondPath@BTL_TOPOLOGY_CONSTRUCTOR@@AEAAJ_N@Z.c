/*
 * XREFs of ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA8C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026CA50 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140424A4C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(BTL_TOPOLOGY_CONSTRUCTOR *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::IterateAdaptersWithCallback(
         Global,
         BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_,
         this,
         4LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_WORD *)this + 4) < 2u )
    {
      if ( a2 )
      {
        v7 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
               (CCD_TOPOLOGY **)this,
               1,
               (const struct _LUID *)((char *)this + 12),
               0xFFFFFFFF);
        v6 = v7;
        if ( v7 < 0 )
        {
          WdLogSingleEntry3(2LL, v7, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
          WdLogGlobalForLineNumber = 1023;
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v5, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
    WdLogGlobalForLineNumber = 1004;
  }
  return v6;
}
