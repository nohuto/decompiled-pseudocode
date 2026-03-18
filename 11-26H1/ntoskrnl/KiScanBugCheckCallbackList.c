/*
 * XREFs of KiScanBugCheckCallbackList @ 0x1405E8A4C
 * Callers:
 *     IopWriteTriageDumpToFirmware @ 0x1405CA3D8 (IopWriteTriageDumpToFirmware.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void KiScanBugCheckCallbackList()
{
  __int64 v0; // rbx
  __int64 *v1; // r15
  __int64 v2; // r14
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rdx

  v0 = KeBugCheckCallbackListHead;
  if ( KeBugCheckCallbackListHead && qword_140F26CE8 )
  {
    v1 = &KeBugCheckCallbackListHead;
LABEL_4:
    if ( (__int64 *)v0 != &KeBugCheckCallbackListHead && (v0 & 7) == 0 )
    {
      v2 = v0;
      v3 = 0;
      while ( MmIsAddressValidEx(v2) )
      {
        ++v2;
        if ( (unsigned int)++v3 >= 0x40 )
        {
          if ( *(__int64 **)(v0 + 8) != v1 )
            return;
          v4 = *(_QWORD *)(v0 + 24);
          v5 = *(unsigned int *)(v0 + 32);
          if ( *(_BYTE *)(v0 + 56) == 1 && *(_QWORD *)(v0 + 48) == *(_QWORD *)(v0 + 16) + v4 + v5 + *(_QWORD *)(v0 + 40) )
          {
            *(_BYTE *)(v0 + 56) = 2;
            guard_dispatch_icall_no_overrides(v4, v5);
            *(_BYTE *)(v0 + 56) = 3;
          }
          v1 = (__int64 *)v0;
          v0 = *(_QWORD *)v0;
          goto LABEL_4;
        }
      }
    }
  }
}
