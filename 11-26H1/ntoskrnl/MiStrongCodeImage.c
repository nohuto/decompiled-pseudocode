/*
 * XREFs of MiStrongCodeImage @ 0x140521118
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 *     MiValidateImageHeader @ 0x14099CC04 (MiValidateImageHeader.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406FC634 (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall MiStrongCodeImage(__int64 a1, unsigned int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // si
  int v6; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  int v8; // r8d

  v2 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( ((*(_DWORD *)(a1 + 92) >> 18) & 3u) < a2 )
  {
    v6 = (a2 & 3) << 18;
    IsEnabledDeviceUsageNoInline = Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline();
    v8 = 786432;
    if ( !IsEnabledDeviceUsageNoInline )
      v8 = v6;
    MiWriteControlAreaFlags2(a1, v6, v8, 1);
  }
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
}
