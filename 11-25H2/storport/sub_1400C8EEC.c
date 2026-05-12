/*
 * XREFs of sub_1400C8EEC @ 0x1400C8EEC
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     sub_14006B1D8 @ 0x14006B1D8 (sub_14006B1D8.c)
 *     sub_140128644 @ 0x140128644 (sub_140128644.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017BAA4 @ 0x14017BAA4 (sub_14017BAA4.c)
 */

__int64 __fastcall sub_1400C8EEC(_DWORD *a1, __int64 a2, char a3)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int64 result; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  PIO_WORKITEM WorkItem; // rax

  memset_0(a1, 0, 0x590uLL);
  a1[14] = -1;
  *a1 = 1314275652;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x6D526152u);
  *((_QWORD *)a1 + 19) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
    return 3221225495LL;
  sub_14017BAA4(a1 + 42);
  sub_14006B1D8((union _SLIST_HEADER *)a1 + 38);
  sub_14006B1D8((union _SLIST_HEADER *)a1 + 46);
  InitializeSListHead((PSLIST_HEADER)a1 + 69);
  *((_BYTE *)a1 + 416) ^= (*((_BYTE *)a1 + 416) ^ (a3 << 6)) & 0x40;
  if ( a3 )
  {
    ExInitializeResourceLite((PERESOURCE)(a1 + 294));
    v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 1);
    a1[326] = 0;
    *((_QWORD *)a1 + 162) = a1 + 322;
    *((_QWORD *)a1 + 161) = a1 + 322;
    *((_BYTE *)a1 + 1280) = 1;
    WorkItem = IoAllocateWorkItem(v8);
    *((_QWORD *)a1 + 164) = WorkItem;
    if ( !WorkItem )
      return 3221225495LL;
  }
  result = sub_140128644(a1, a2);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 416) |= 1u;
    a1[21] = 2;
  }
  return result;
}
