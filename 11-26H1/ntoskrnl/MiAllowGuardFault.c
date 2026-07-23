/*
 * XREFs of MiAllowGuardFault @ 0x1403A8A00
 * Callers:
 *     MiAccessCheck @ 0x1403A8730 (MiAccessCheck.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v2; // rax
  bool v3; // zf
  char v5; // cl

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex != 1 )
  {
    v2 = (char *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1 & 1) != 0 )
    {
      v5 = *v2;
      if ( *v2 != 1 && v5 != 3 && v5 != 6 )
        goto LABEL_5;
      v3 = v5 == 6;
    }
    else
    {
      LODWORD(v2) = KeInvalidAccessAllowed(a1, 0LL);
      v3 = (_BYTE)v2 == 0;
    }
    if ( v3 )
    {
LABEL_5:
      LOBYTE(v2) = ~CurrentThread->SameThreadTransientFlags;
      return ((unsigned int)v2 >> 2) & 1;
    }
  }
  return 0LL;
}
