/*
 * XREFs of sub_14002796C @ 0x14002796C
 * Callers:
 *     sub_140027950 @ 0x140027950 (sub_140027950.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14002796C(__int64 a1, __int64 a2, char a3)
{
  PSLIST_ENTRY v6; // rax
  __int64 v7; // r8
  struct _SLIST_ENTRY *v8; // rbx
  struct _SLIST_ENTRY *Next; // r9
  struct _SLIST_ENTRY *v10; // rdx

  v6 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 96));
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      Next = v6->Next;
      v6->Next = v8;
      v8 = v6;
      v6 = Next;
    }
    while ( Next );
  }
  while ( 1 )
  {
    v10 = v8;
    if ( !v8 )
      break;
    LOBYTE(v7) = a3;
    v8 = v8->Next;
    (*(void (__fastcall **)(__int64, struct _SLIST_ENTRY *, __int64))(a1 + 112))(a2, v10, v7);
  }
  return 0LL;
}
