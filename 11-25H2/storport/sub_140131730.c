/*
 * XREFs of sub_140131730 @ 0x140131730
 * Callers:
 *     <none>
 * Callees:
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 */

void __fastcall sub_140131730(__int64 IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  PVOID *v7; // rax

  if ( Context )
  {
    v5 = sub_14013115C(IoObject);
    if ( v5 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 24), 1u);
      v6 = (_QWORD *)*Context;
      if ( *(_QWORD **)(*Context + 8LL) != Context || (v7 = (PVOID *)Context[1], *v7 != Context) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      --*(_BYTE *)(v5 + 1);
      ExReleaseResourceLite((PERESOURCE)(v5 + 24));
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(Context, 0x4E456152u);
    }
  }
  IoFreeWorkItem(IoWorkItem);
}
