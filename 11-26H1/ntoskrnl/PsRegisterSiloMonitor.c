/*
 * XREFs of PsRegisterSiloMonitor @ 0x140801550
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PspStorageAllocSlot @ 0x140805414 (PspStorageAllocSlot.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRegisterSiloMonitor(__int64 a1, _QWORD *a2)
{
  _WORD *v4; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int16 v7; // bp
  __int64 Pool2; // rax
  char *v9; // rdi
  int v10; // ebx

  if ( !*(_BYTE *)a1 )
    return 3221225485LL;
  v4 = *(_WORD **)(a1 + 8);
  if ( !v4 || !*v4 || !*(_QWORD *)(a1 + 16) && !*(_QWORD *)(a1 + 24) )
    return 3221225485LL;
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
    return 3221225569LL;
  v7 = **(_WORD **)(a1 + 8);
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(Pool2 + 17) = *(_BYTE *)(a1 + 2);
  *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(Pool2 + 48) = Pool2 + 56;
  *(_WORD *)(Pool2 + 42) = v7;
  RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 40), *(PCUNICODE_STRING *)(a1 + 8));
  v10 = PspStorageAllocSlot(v9 + 20);
  if ( v10 >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v9, 0x4D6C6953u);
    return (unsigned int)v10;
  }
}
