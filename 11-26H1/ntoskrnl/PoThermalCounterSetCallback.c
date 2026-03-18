/*
 * XREFs of PoThermalCounterSetCallback @ 0x140A691E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     wcspbrk @ 0x140538B34 (wcspbrk.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x140A69670 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x140A696F8 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  NTSTATUS v6; // esi
  struct _PCW_BUFFER *v8; // r13
  bool v9; // r12
  void **i; // rbx
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *v12; // rdi
  const UNICODE_STRING *v13; // rbp
  char *v14; // rax
  signed __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  ULONG v18; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF

  v20 = 0LL;
  v6 = 0;
  PopAcquireRwLockShared((volatile signed __int64 *)&unk_140F10E30.Header.Lock, (__int64)a2, a3, a4);
  if ( a1 == 2 )
  {
    v8 = (struct _PCW_BUFFER *)a2[3];
    v9 = 1;
  }
  else
  {
    if ( a1 != 3 )
      goto LABEL_3;
    v8 = (struct _PCW_BUFFER *)a2[3];
    v9 = wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") != 0LL;
  }
  for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
  {
    if ( (*((_BYTE *)i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)i[6], 0x6D546F50u);
      v12 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag
        && (v13 = *(const UNICODE_STRING **)(DeviceAttachmentBaseRefWithTag[39] + 40LL)) != 0LL )
      {
        if ( v9 )
          goto LABEL_18;
        v14 = *(char **)(a2[1] + 8LL);
        v15 = (char *)v13[8].Buffer - v14;
        do
        {
          v16 = *(unsigned __int16 *)&v14[v15];
          v17 = *(unsigned __int16 *)v14 - v16;
          if ( v17 )
            break;
          v14 += 2;
        }
        while ( v16 );
        if ( !v17 )
        {
LABEL_18:
          v20 = 0LL;
          if ( a1 == 3 )
          {
            v6 = PopThermalReadCounters(i, *a2, &v20);
            if ( v6 < 0 )
            {
              ObfDereferenceObjectWithTag(v12, 0x6D546F50u);
              break;
            }
          }
          v18 = *((_DWORD *)i + 124);
          Data.Data = &v20;
          Data.Size = 16;
          v6 = PcwAddInstance(v8, v13 + 8, v18, 1u, &Data);
        }
        ObfDereferenceObjectWithTag(v12, 0x6D546F50u);
        if ( v6 < 0 )
          break;
      }
      else
      {
        ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x6D546F50u);
      }
    }
  }
LABEL_3:
  PopReleaseRwLock(&unk_140F10E30);
  return (unsigned int)v6;
}
