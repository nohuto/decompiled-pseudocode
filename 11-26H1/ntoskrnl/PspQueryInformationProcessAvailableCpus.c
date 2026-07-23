/*
 * XREFs of PspQueryInformationProcessAvailableCpus @ 0x14052F1C8
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     KeQueryProcessAvailableCpus @ 0x1405E8110 (KeQueryProcessAvailableCpus.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryInformationProcessAvailableCpus(
        HANDLE Handle,
        char *a2,
        int a3,
        KPROCESSOR_MODE a4,
        unsigned __int16 *a5)
{
  NTSTATUS v9; // ebx
  unsigned __int16 *v10; // rsi
  int v11; // eax
  unsigned __int16 UShortFromUser; // ax
  void *v13; // rcx
  size_t v14; // r8
  void *v15; // rdx
  void *v16; // rcx
  unsigned __int16 v17; // cx
  _QWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF
  __int128 v21; // [rsp+60h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  KPROCESSOR_MODE v23; // [rsp+A8h] [rbp+20h]

  v23 = a4;
  v20 = 0LL;
  v21 = 0LL;
  Object = 0LL;
  if ( a3 != 32 )
    return 3221225476LL;
  if ( a4 )
    RtlCopyFromUser(&v20, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v20, a2, 0x20uLL);
  v9 = ObReferenceObjectByHandleWithTag(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = a5;
    v11 = KeQueryProcessAvailableCpus(Object, a5, &v20, (char *)&v20 + 8, &v21);
    v9 = v11;
    if ( v11 == -2147483598 )
      goto LABEL_24;
    if ( v11 >= 0 )
    {
      if ( *((_QWORD *)&v21 + 1) )
      {
        if ( a4 )
          UShortFromUser = RtlReadUShortFromUser(*((_QWORD *)&v21 + 1) + 2LL);
        else
          UShortFromUser = *(_WORD *)(*((_QWORD *)&v21 + 1) + 2LL);
        if ( UShortFromUser < *v10 )
        {
          v9 = -1073741789;
          goto LABEL_30;
        }
        v13 = (void *)(*((_QWORD *)&v21 + 1) + 8LL);
        if ( a4 )
          RtlSetUserMemory(v13);
        else
          RtlSetVolatileMemory(v13, 0, 8LL * UShortFromUser);
        v14 = 8LL * *v10;
        v15 = v10 + 4;
        v16 = (void *)(*((_QWORD *)&v21 + 1) + 8LL);
        if ( a4 )
          RtlCopyToUser(v16, v15, v14);
        else
          RtlCopyVolatileMemory(v16, v15, v14);
        v17 = *v10;
        if ( a4 )
          RtlWriteUShortToUser(*((_QWORD *)&v21 + 1), v17);
        else
          **((_WORD **)&v21 + 1) = v17;
      }
LABEL_24:
      v18 = a2 + 8;
      if ( a4 )
        RtlWriteULong64ToUser(v18, *((_QWORD *)&v20 + 1));
      else
        *v18 = *((_QWORD *)&v20 + 1);
      v19 = a2 + 16;
      if ( a4 )
        RtlWriteULongToUser(v19, (unsigned int)v21);
      else
        *v19 = v21;
    }
  }
LABEL_30:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  return (unsigned int)v9;
}
