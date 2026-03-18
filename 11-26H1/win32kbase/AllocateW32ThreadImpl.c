/*
 * XREFs of AllocateW32ThreadImpl @ 0x140102ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ReferenceW32Thread @ 0x140102FC0 (ReferenceW32Thread.c)
 *     ??0tagTHREADINFO@@QEAA@PEAU_ETHREAD@@@Z @ 0x140102FF4 (--0tagTHREADINFO@@QEAA@PEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall AllocateW32ThreadImpl(struct _ETHREAD *a1)
{
  int v2; // ecx
  tagTHREADINFO **Pool2; // rbx
  tagTHREADINFO *v4; // rdi

  Pool2 = (tagTHREADINFO **)ExAllocatePool2(64LL, 248LL, 1853125461LL);
  if ( Pool2 )
  {
    v4 = (tagTHREADINFO *)Win32AllocPoolWithQuotaZInitImpl(v2, 0x6E0uLL, 0x69747355u);
    if ( v4 )
    {
      ExInitializeFastOwnerEntry(Pool2 + 4);
      ExInitializeFastOwnerEntry(Pool2 + 13);
      ExInitializeFastOwnerEntry(Pool2 + 22);
      tagTHREADINFO::tagTHREADINFO(v4, a1);
      *Pool2 = v4;
      PsSetThreadWin32Thread(a1, Pool2, 0LL);
      ReferenceW32Thread(v4);
      return 0LL;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return 3221225495LL;
}
