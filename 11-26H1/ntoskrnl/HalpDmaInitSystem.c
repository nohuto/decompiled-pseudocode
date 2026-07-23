/*
 * XREFs of HalpDmaInitSystem @ 0x140BF1A70
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaInitPowerManagement @ 0x14058DFA4 (HalpDmaInitPowerManagement.c)
 *     HalpDmaFinalizeDoubleBufferingDisposition @ 0x140CB3C34 (HalpDmaFinalizeDoubleBufferingDisposition.c)
 *     HalpDmaInitDiscard @ 0x140CB6094 (HalpDmaInitDiscard.c)
 *     HalpDmaInit @ 0x140CB6740 (HalpDmaInit.c)
 *     HalpDmaInitEarly @ 0x140CB6930 (HalpDmaInitEarly.c)
 */

__int64 __fastcall HalpDmaInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = 0;
  v4 = a1 - 4;
  if ( v4 )
  {
    v5 = v4 - 3;
    if ( !v5 )
    {
      HalpDmaHibernateAdaptersLock = 0LL;
      qword_140FBAB88 = (__int64)&HalpDmaControllers;
      HalpDmaControllers = (__int64)&HalpDmaControllers;
      qword_140FBD588 = (__int64)&HalpDmaHibernateAdapters;
      HalpDmaHibernateAdapters = (__int64)&HalpDmaHibernateAdapters;
      qword_140FBD578 = (__int64)&HalpDmaShadowDumpAdapters;
      HalpDmaShadowDumpAdapters = (__int64)&HalpDmaShadowDumpAdapters;
      qword_140FBD548 = (__int64)&HalpDmaPdoList;
      HalpDmaPdoList = (__int64)&HalpDmaPdoList;
      HalpDmaShadowDumpAdaptersLock = 0LL;
      HalpDmaPdoListLock = 0LL;
      HalpDmaReservedLaRegions = 0LL;
      HalpDmaReservedLaRegionsCount = 0;
      return v3;
    }
    v6 = v5 - 1;
    if ( !v6 )
      return (unsigned int)HalpDmaInitDiscard(a3, 0LL);
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = (unsigned int)(v7 - 16);
      if ( !(_DWORD)v8 )
        return (unsigned int)HalpDmaInit(v8, 0LL);
      v9 = (unsigned int)(v8 - 2);
      if ( !(_DWORD)v9 )
      {
        HalpDmaFinalizeDoubleBufferingDisposition(v9, 0LL);
        return (unsigned int)HalpDmaInitEarly();
      }
      if ( (_DWORD)v9 == 2 )
        return (unsigned int)HalpDmaInitPowerManagement();
    }
  }
  return v3;
}
