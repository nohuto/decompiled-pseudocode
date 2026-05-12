/*
 * XREFs of sub_140066D1C @ 0x140066D1C
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 * Callees:
 *     sub_140055B38 @ 0x140055B38 (sub_140055B38.c)
 */

void __fastcall sub_140066D1C(char *P)
{
  PLIST_ENTRY v2; // rax
  struct _IO_WORKITEM *v3; // rcx
  char *v4; // rdi
  char *v5; // rbp
  char *v6; // rcx
  char **v7; // rax

  if ( P )
  {
    *P |= 1u;
    KeWaitForSingleObject(P + 168, Executive, 0, 0, 0LL);
    while ( 1 )
    {
      v2 = ExInterlockedRemoveHeadList((PLIST_ENTRY)P + 8, (PKSPIN_LOCK)P + 18);
      if ( !v2 )
        break;
      ExFreePoolWithTag(v2, 0x4E456152u);
      _InterlockedDecrement((volatile signed __int32 *)P + 38);
    }
    v3 = (struct _IO_WORKITEM *)*((_QWORD *)P + 20);
    if ( v3 )
    {
      IoFreeWorkItem(v3);
      *((_QWORD *)P + 20) = 0LL;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(P + 24), 1u);
    v4 = (char *)*((_QWORD *)P + 1);
    if ( v4 != P + 8 )
    {
      do
      {
        v5 = *(char **)v4;
        sub_140055B38((__int64)v4, -1073741130);
        v6 = *(char **)v4;
        if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = (char **)*((_QWORD *)v4 + 1), *v7 != v4) )
          __fastfail(3u);
        *v7 = v6;
        *((_QWORD *)v6 + 1) = v7;
        --P[1];
        ExFreePoolWithTag(v4, 0x4E456152u);
        v4 = v5;
      }
      while ( v5 != P + 8 );
    }
    ExReleaseResourceLite((PERESOURCE)(P + 24));
    KeLeaveCriticalRegion();
    ExDeleteResourceLite((PERESOURCE)(P + 24));
    ExFreePoolWithTag(P, 0x4E456152u);
  }
}
