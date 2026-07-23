/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x140481AA0
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     MiValidateSectionUnmap @ 0x1408817F8 (MiValidateSectionUnmap.c)
 *     MiRelocateCleanup @ 0x14099B9E4 (MiRelocateCleanup.c)
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 *     MiValidateSectionMap @ 0x14099CAFC (MiValidateSectionMap.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall PsRevertToUserPagePriorityThread(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax

  --*(_WORD *)(a1 + 486);
  if ( (_DWORD)a2 == -1 )
  {
    LODWORD(v2) = *(_DWORD *)(a1 + 1448) & 0xFFFFF0FF;
  }
  else
  {
    a2 = (unsigned int)((_DWORD)a2 << 9);
    LODWORD(v2) = a2 | *(_DWORD *)(a1 + 1448) & 0xFFFFF1FF;
  }
  *(_DWORD *)(a1 + 1448) = (_DWORD)v2;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LODWORD(v2) = KiCheckForKernelApcDelivery(a1, a2);
  }
  return (int)v2;
}
