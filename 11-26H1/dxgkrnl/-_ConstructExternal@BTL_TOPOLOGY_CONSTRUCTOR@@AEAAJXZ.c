/*
 * XREFs of ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026CB5C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140337350 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *((_WORD *)this + 5) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(
         Global,
         BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_,
         this,
         4LL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !*((_WORD *)this + 4) )
    {
      v5 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
             (CCD_TOPOLOGY **)this,
             1,
             (const struct _LUID *)((char *)this + 12),
             0xFFFFFFFF);
      v4 = v5;
      if ( v5 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
        WdLogGlobalForLineNumber = 1079;
      }
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v3, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
    WdLogGlobalForLineNumber = 1060;
  }
  return v4;
}
