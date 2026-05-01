/*
 * XREFs of ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180032630
 * Callers:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800170CC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033598 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A14C (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180078D10 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostHasExternalResourceAccess(_QWORD *a1, int a2)
{
  _QWORD *v2; // r9
  ULONG *v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)a1[76];
  v5 = 0LL;
  if ( v2 != a1 + 76 )
    v5 = (ULONG *)(v2 - 12);
  while ( v5 )
  {
    if ( *((_BYTE *)v5 + 562) == 3 && (v5[138] & 0x48) == 0 )
    {
      BitMapHeader = 0LL;
      RtlInitializeBitMap(&BitMapHeader, v5 + 124, 0x2Fu);
      if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(a2 - 3)) )
        return 1LL;
    }
    v6 = *((_QWORD *)v5 + 12);
    if ( v6 == *((_QWORD *)v5 + 10) + 608LL )
      v5 = 0LL;
    else
      v5 = (ULONG *)(v6 - 96);
  }
  if ( (a1[83] & 0x400000000000000LL) != 0 )
  {
    v8 = a1[99];
    BitMapHeader = 0LL;
    RtlInitializeBitMap(
      &BitMapHeader,
      (PULONG)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v8 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
             + 544),
      0x2Fu);
    if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(a2 - 3)) )
      return 1LL;
  }
  return 0LL;
}
