/*
 * XREFs of WmipFindMRByNames @ 0x140B1A194
 * Callers:
 *     WmipAddMofResource @ 0x140B19FC8 (WmipAddMofResource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x140A0FB50 (WmipReferenceEntry.c)
 */

struct _LIST_ENTRY *__fastcall WmipFindMRByNames(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // edx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  for ( i = EtwpSecurityLock.GlobalUpdateVpThreadPriorityListEntry.Flink->Flink;
        i != EtwpSecurityLock.GlobalUpdateVpThreadPriorityListEntry.Flink;
        i = i->Flink )
  {
    Blink = i[2].Blink;
    v6 = a1 - (_QWORD)Blink;
    do
    {
      v7 = *(unsigned __int16 *)((char *)&Blink->Flink + v6);
      v8 = LOWORD(Blink->Flink) - v7;
      if ( v8 )
        break;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 2);
    }
    while ( v7 );
    if ( !v8 )
    {
      Flink = i[3].Flink;
      v10 = a2 - (_QWORD)Flink;
      do
      {
        v11 = *(unsigned __int16 *)((char *)&Flink->Flink + v10);
        v12 = LOWORD(Flink->Flink) - v11;
        if ( v12 )
          break;
        Flink = (struct _LIST_ENTRY *)((char *)Flink + 2);
      }
      while ( v11 );
      if ( !v12 )
      {
        WmipReferenceEntry((ULONG_PTR)i);
        goto LABEL_14;
      }
    }
  }
  i = 0LL;
LABEL_14:
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  return i;
}
