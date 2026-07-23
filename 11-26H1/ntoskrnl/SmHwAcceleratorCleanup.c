/*
 * XREFs of SmHwAcceleratorCleanup @ 0x140820A24
 * Callers:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x140643798 (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x1408216D0 (SmHwAcceleratorMgrReleaseAccelerators.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall SmHwAcceleratorCleanup(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rdi

  ExWaitForRundownProtectionRelease(a1 + 4);
  v2 = a1 + 2;
  v3 = 2LL;
  do
  {
    if ( v2->Count )
      AccelCloseResource(v2->Count);
    ++v2;
    --v3;
  }
  while ( v3 );
}
