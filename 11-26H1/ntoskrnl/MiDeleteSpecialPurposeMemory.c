/*
 * XREFs of MiDeleteSpecialPurposeMemory @ 0x140884978
 * Callers:
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSpecialPurposeMemory(__int64 a1)
{
  PVOID *v1; // rdi
  void *v3; // rcx
  char *v4; // rbx
  PVOID *v5; // rax
  char *v6; // rdx
  __int64 v7; // rax
  char **v8; // rcx

  v1 = (PVOID *)(a1 + 21400);
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
  {
    if ( *v1 )
      ObfDereferenceObjectWithTag(*v1, 0x72536D4Du);
    v3 = *(void **)(a1 + 21408);
    if ( v3 )
      ZwClose(v3);
  }
  else
  {
    while ( 1 )
    {
      v4 = (char *)*v1;
      if ( *v1 == v1 )
        break;
      if ( *((PVOID **)v4 + 1) != v1 || (v5 = *(PVOID **)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
LABEL_15:
        __fastfail(3u);
      *v1 = v5;
      v6 = v4 + 72;
      v5[1] = v1;
      v7 = *((_QWORD *)v4 + 9);
      if ( v7 )
      {
        if ( *(char **)(v7 + 8) != v6 )
          goto LABEL_15;
        v8 = (char **)*((_QWORD *)v4 + 10);
        if ( *v8 != v6 )
          goto LABEL_15;
        *v8 = (char *)v7;
        *(_QWORD *)(v7 + 8) = v8;
      }
      ZwClose(*((HANDLE *)v4 + 7));
      ExFreePoolWithTag(v4, 0);
    }
  }
}
