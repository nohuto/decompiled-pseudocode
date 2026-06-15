/*
 * XREFs of ??1?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAA@XZ @ 0x18004F6E8
 * Callers:
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x18004F62C (--1CVolumeStrip@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::~CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 56) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}
