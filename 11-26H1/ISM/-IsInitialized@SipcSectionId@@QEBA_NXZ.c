/*
 * XREFs of ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x180112378
 * Callers:
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x180110154 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1801113C0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 *     ?InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x1801121BC (-InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z.c)
 *     ?SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z @ 0x1801130CC (-SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SipcSectionId::IsInitialized(SipcSectionId *this)
{
  unsigned __int64 i; // rax

  for ( i = 0LL; i < 0x20; ++i )
  {
    if ( *((_BYTE *)this + i) )
      return 1;
  }
  return 0;
}
