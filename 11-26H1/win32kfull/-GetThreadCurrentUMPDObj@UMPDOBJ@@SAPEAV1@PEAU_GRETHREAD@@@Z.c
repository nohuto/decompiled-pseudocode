/*
 * XREFs of ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D6EAC
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 *     UMPDThreadCleanup @ 0x1400D6E20 (UMPDThreadCleanup.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentUMPDObj(struct _GRETHREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( a1 && (v1 = (char *)a1 + 72, v2 = (char *)*((_QWORD *)a1 + 9), v2 != v1) )
    return (struct UMPDOBJ *)(v2 - 40);
  else
    return 0LL;
}
