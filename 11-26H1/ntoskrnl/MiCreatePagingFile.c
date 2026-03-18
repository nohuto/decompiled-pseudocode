/*
 * XREFs of MiCreatePagingFile @ 0x14086B464
 * Callers:
 *     NtManagePartition @ 0x1407FD4C0 (NtManagePartition.c)
 *     NtCreatePagingFile @ 0x14086CCE0 (NtCreatePagingFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     MiCheckPageFileMapping @ 0x1406F8CBC (MiCheckPageFileMapping.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IoCheckPagefileDisableReservations @ 0x140795E9C (IoCheckPagefileDisableReservations.c)
 *     IoIsPagingFileUsable @ 0x140796504 (IoIsPagingFileUsable.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     MiCreatePagefile @ 0x14086B0C0 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x14086B6A4 (MiDeletePagefile.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MiValidatePageFileCreationParameters @ 0x14086C85C (MiValidatePageFileCreationParameters.c)
 *     MiZeroPageFileFirstPage @ 0x14086CA9C (MiZeroPageFileFirstPage.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14087E48C (MiCreateSpecialPurposeMemoryPageFile.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFile(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, ULONG *a6)
{
  int v10; // r15d
  __int64 v11; // r9
  __int64 result; // rax
  int PagingFileHandle; // ebx
  struct _FILE_OBJECT *v14; // rdi
  int IsPagingFileUsable; // eax
  _BYTE *v16; // rax
  _BYTE *v17; // rdi
  void *v18; // rcx
  _DWORD v19[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-1h]
  unsigned int v23; // [rsp+74h] [rbp+3h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+Fh] BYREF
  char v25; // [rsp+92h] [rbp+21h]
  PVOID Object[2]; // [rsp+98h] [rbp+27h]

  memset_0(&v21, 0, 0x40uLL);
  v10 = a5;
  LOBYTE(v11) = a4;
  result = MiValidatePageFileCreationParameters(a1, a2, a3, v11, a5, a6, &v21);
  if ( (int)result < 0 )
    return result;
  if ( (a5 & 0x800000) != 0 )
  {
    PagingFileHandle = MiCreateSpecialPurposeMemoryPageFile(v21, v22, v23, &DestinationString);
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  else
  {
    PagingFileHandle = MiGetPagingFileHandle(&v21);
    if ( PagingFileHandle >= 0 )
    {
      if ( v25 )
      {
        v14 = (struct _FILE_OBJECT *)Object[0];
        IsPagingFileUsable = MiCheckPageFileMapping((__int64)Object[0]);
        if ( IsPagingFileUsable >= 0 )
        {
          IsPagingFileUsable = IoIsPagingFileUsable(v14);
          if ( IsPagingFileUsable >= 0 && a6 == &MiSystemPartition )
          {
            IsPagingFileUsable = MiZeroPageFileFirstPage(v14);
            PagingFileHandle = IsPagingFileUsable;
            if ( IsPagingFileUsable < 0 )
            {
              PiPagePathSetState(v14, 0);
              goto LABEL_25;
            }
          }
        }
        PagingFileHandle = IsPagingFileUsable;
        if ( IsPagingFileUsable < 0 )
          goto LABEL_25;
        if ( (a5 & 0x40000000) == 0 )
        {
          v19[0] = 0;
          PagingFileHandle = IoCheckPagefileDisableReservations((__int64)Object[0], v19);
          if ( PagingFileHandle < 0 )
            goto LABEL_25;
          if ( v19[0] )
            v10 = a5 | 0x40000000;
        }
        v16 = MiCreatePagefile(
                (__int64)a6,
                (__int64)Object[0],
                (__int64)Object[1],
                v22,
                v23,
                &DestinationString,
                v10,
                1);
        *(_OWORD *)Object = 0LL;
        v17 = v16;
        RtlInitUnicodeString(&DestinationString, 0LL);
        if ( !v17 )
        {
          PagingFileHandle = -1073741670;
          goto LABEL_25;
        }
        PagingFileHandle = MiInsertPageFileInList(v17);
        if ( PagingFileHandle < 0 )
        {
          MiDeletePagefile(v17);
          goto LABEL_25;
        }
        if ( a6 == &MiSystemPartition && !LOBYTE(stru_140E2EB88.RelativeTimerBias) && (v17[172] & 0x10) == 0 )
        {
          v18 = (void *)*((_QWORD *)v17 + 24);
          v20 = *((_OWORD *)v17 + 4);
          LOBYTE(stru_140E2EB88.RelativeTimerBias) = IoInitializeCrashDump(v18);
        }
      }
      PagingFileHandle = 0;
    }
  }
LABEL_25:
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x66506D4Du);
  if ( Object[1] )
    ObCloseHandle(Object[1], 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)PagingFileHandle;
}
