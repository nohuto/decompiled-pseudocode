/*
 * XREFs of ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x18022E020
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801B4CBC (-RemoveElement@-$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CCompositionSurfaceManager *__fastcall CCompositionSurfaceManager::`scalar deleting destructor'(
        CCompositionSurfaceManager *this,
        char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  _QWORD *v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CCompositionSurfaceManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
        ;
        CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::RemoveElement(i, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v5 )
      break;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
