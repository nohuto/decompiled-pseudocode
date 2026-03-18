/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x14040EF38
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401DF0E8 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x140035930 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14004DD44 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  char *v3; // rsi
  char *i; // rbx
  char *v5; // rax
  char *v6; // rax
  VIDSCH_EXPORT *v7; // rcx
  _BYTE v8[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+80h] [rbp+8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v10; // [rsp+88h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v8, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v8);
    v3 = (char *)this + 240;
    for ( i = (char *)*((_QWORD *)this + 30); ; i = *(char **)i )
    {
      v5 = 0LL;
      if ( i != v3 )
        v5 = i;
      if ( !v5 )
        break;
      v6 = i;
      if ( i == v3 )
        v6 = 0LL;
      if ( v6[26] )
      {
        v7 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
        v10 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v6 + 4);
        v9 = -1LL;
        VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(v7, 0, 0LL, 0, 0LL, 1u, &v10, 0, &v9, 0);
      }
    }
    if ( v8[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v8);
  }
}
