/*
 * XREFs of MiReadImageHeaders @ 0x140A64D58
 * Callers:
 *     MiCreateImageMapSectionHeaders @ 0x140A630B4 (MiCreateImageMapSectionHeaders.c)
 *     MiCreateImageMapReadNtHeader @ 0x140A632A0 (MiCreateImageMapReadNtHeader.c)
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 * Callees:
 *     MiPageRead @ 0x14026AC78 (MiPageRead.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCopyFromDirectMapExtent @ 0x1407798AC (MiCopyFromDirectMapExtent.c)
 */

__int64 __fastcall MiReadImageHeaders(struct _FILE_OBJECT *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r14
  NTSTATUS v10; // ebx
  __int64 v11; // rcx
  __int64 **i; // rdi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  size_t v18; // r8
  __int64 *v19; // rdx
  void *v20; // rcx
  unsigned __int64 v21; // r9
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  v6 = (*(_DWORD *)(a3 + 24) & 0xFFF) + *(unsigned int *)(a3 + 40) + 4095LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = v6 >> 12;
  v23 = v5 << 12;
  if ( a2 )
  {
    v10 = MiCopyFromDirectMapExtent(a2, a3, (ULONG_PTR *)&v23, a4);
  }
  else
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = MiPageRead(a1, a3, (__int64)&v23, (__int64)&Event, a4, 2, 0LL);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      v10 = *(_DWORD *)a4;
    }
  }
  if ( v10 < 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 32;
    if ( !MiIsRetryIoStatus(v10, 0LL) && v10 != -1073741740 && v10 != -1073741209 )
      return (unsigned int)-1073741792;
  }
  else
  {
    v11 = *(_QWORD *)(a4 + 8);
    if ( v11 != v7 << 12 )
      memset_0((void *)(*(_QWORD *)(a3 + 24) + v11), 0, (v7 << 12) - v11);
    for ( i = *(__int64 ***)a3; i; i = (__int64 **)*i )
    {
      v14 = (unsigned __int64)i[2];
      v15 = (((_DWORD)i[3] & 0xFFF) + (unsigned __int64)*((unsigned int *)i + 10) + 4095) >> 12;
      if ( v5 < v15 + v14 && v7 + v5 > v14 )
      {
        if ( v14 > v5 )
        {
          v21 = v14 - v5;
          v19 = i[3];
          if ( v7 - v21 <= v15 )
            v15 = v7 - v21;
          v18 = v15 << 12;
          v20 = (void *)(*(_QWORD *)(a3 + 24) + (v21 << 12));
        }
        else
        {
          v16 = v7;
          v17 = v15 - (v5 - v14);
          if ( v17 <= v7 )
            v16 = v17;
          v18 = v16 << 12;
          v19 = &i[3][512 * (v5 - v14)];
          v20 = *(void **)(a3 + 24);
        }
        memmove(v20, v19, v18);
      }
    }
  }
  return (unsigned int)v10;
}
