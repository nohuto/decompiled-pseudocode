/*
 * XREFs of BootApplicationPersistentDataInitialize @ 0x140CE9E48
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall BootApplicationPersistentDataInitialize(__int64 a1)
{
  _QWORD **v1; // r14
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  struct _LIST_ENTRY *Pool2; // rbx
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *Blink; // rax

  stru_140E62450.Header.WaitListHead.Blink = &stru_140E62450.Header.WaitListHead;
  stru_140E62450.Header.WaitListHead.Flink = &stru_140E62450.Header.WaitListHead;
  v1 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 232LL);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v3 + 6) )
    {
      Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 0x1CuLL, 0x64506142u);
      if ( !Pool2 )
        return;
      v5 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, *((unsigned int *)v3 + 6), 0x64506142u);
      if ( !v5 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return;
      }
      LODWORD(Pool2[1].Blink) = *((_DWORD *)v3 + 6);
      Pool2[1].Flink = v5;
      memmove(v5, (const void *)v3[2], *((unsigned int *)v3 + 6));
      Blink = stru_140E62450.Header.WaitListHead.Blink;
      if ( stru_140E62450.Header.WaitListHead.Blink->Flink != &stru_140E62450.Header.WaitListHead )
        __fastfail(3u);
      Pool2->Flink = &stru_140E62450.Header.WaitListHead;
      Pool2->Blink = Blink;
      Blink->Flink = Pool2;
      stru_140E62450.Header.WaitListHead.Blink = Pool2;
    }
  }
}
