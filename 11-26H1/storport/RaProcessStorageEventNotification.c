/*
 * XREFs of RaProcessStorageEventNotification @ 0x1400922D0
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzqxxqqq_EtwWriteTransfer @ 0x14008DF3C (McTemplateK0qjzqxxqqq_EtwWriteTransfer.c)
 *     StorEnqueueEventNotificationForProcessing @ 0x140097200 (StorEnqueueEventNotificationForProcessing.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int16 __fastcall RaProcessStorageEventNotification(__int64 a1, _WORD *a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rdi
  unsigned int v6; // r15d
  int v7; // edx
  unsigned int v8; // r8d
  int v9; // eax
  char v10; // bl
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 Pool; // rax
  void *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int128 v20; // [rsp+60h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  v2 = &retaddr;
  LOBYTE(v3) = 0;
  LOBYTE(v6) = 0;
  v20 = 0LL;
  if ( !*(_QWORD *)(a1 + 6272) )
    return (__int16)v2;
  if ( a2 )
  {
    v7 = 1;
    if ( *a2 == 1 )
    {
      v8 = *((_DWORD *)a2 + 8);
      v9 = (unsigned __int16)a2[1];
      if ( v8 )
      {
        if ( v9 != v8 + 36 || v8 > 0x1000 )
          goto LABEL_6;
      }
      else if ( v9 != 40 )
      {
LABEL_6:
        v10 = 6;
        goto LABEL_21;
      }
      v11 = *((_QWORD *)a2 + 1);
      if ( !v11 || (v12 = 1, ((v11 - 1) & v11) != 0) )
        v12 = 0;
      v13 = *((_QWORD *)a2 + 2);
      if ( !v13 || ((v13 - 1) & v13) != 0 )
        v7 = 0;
      if ( v12 != v7 )
      {
        v6 = (unsigned __int16)a2[1] + 16;
        Pool = RaidAllocatePool(64LL, v6, 1313169746LL, *(_QWORD *)(a1 + 8));
        v15 = (void *)Pool;
        if ( Pool )
        {
          memmove((void *)(Pool + 16), a2, (unsigned __int16)a2[1]);
          LODWORD(v2) = StorEnqueueEventNotificationForProcessing(*(_QWORD *)(a1 + 6272), v15);
          v10 = (char)v2;
          if ( (int)v2 >= 0 )
            return (__int16)v2;
          ExFreePoolWithTag(v15, 0x4E456152u);
        }
        else
        {
          v10 = -102;
        }
        goto LABEL_21;
      }
    }
  }
  v10 = 13;
LABEL_21:
  LOWORD(v2) = RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v20);
  if ( (byte_140173448 & 0x40) != 0 )
  {
    if ( a2 )
    {
      v17 = *((unsigned int *)a2 + 8);
      v18 = *((_QWORD *)a2 + 2);
      v3 = *((_QWORD *)a2 + 1);
    }
    else
    {
      v17 = 0LL;
      LOBYTE(v18) = 0;
    }
    LOWORD(v2) = McTemplateK0qjzqxxqqq_EtwWriteTransfer(
                   a1 + 5128,
                   v17,
                   v16,
                   *(_DWORD *)(a1 + 56),
                   a1 + 5128,
                   *((const wchar_t **)&v20 + 1),
                   *(_DWORD *)(a1 + 4340),
                   v3,
                   v18,
                   v17,
                   v6,
                   v10);
  }
  return (__int16)v2;
}
