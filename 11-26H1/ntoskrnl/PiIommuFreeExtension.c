/*
 * XREFs of PiIommuFreeExtension @ 0x1407B7A28
 * Callers:
 *     PipDmgDestroyIommuExtension @ 0x1409DB1F0 (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x140B21D08 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiIommuFreeExtension(_BYTE *P)
{
  void *v2; // rcx

  if ( (P[16] & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, (ULONG_PTR)P, *((unsigned __int16 *)P + 8), 0x1001uLL);
  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    *(_QWORD *)P = 0LL;
  }
  ExFreePoolWithTag(P, 0x64706E50u);
}
