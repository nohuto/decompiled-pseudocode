/*
 * XREFs of MiGetPagingFileHandle @ 0x140871CE8
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 *     MiUpdateExistingPageFile @ 0x140872760 (MiUpdateExistingPageFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiGetPagingFileHandle(__int64 a1)
{
  NTSTATUS result; // eax
  ULONG v3; // ebx
  ULONG v4; // ebx
  int CurrentProcessorColor; // eax
  ACL *PoolMm; // rax
  ACL *v7; // rsi
  NTSTATUS Acl; // ebx
  int File; // r14d
  HANDLE v10; // rcx
  int v11; // eax
  HANDLE v12; // rcx
  SIZE_T Length; // [rsp+50h] [rbp-69h]
  SIZE_T Lengtha; // [rsp+50h] [rbp-69h]
  __int64 FileInformation; // [rsp+80h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-1h]
  int v19[4]; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v20; // [rsp+D0h] [rbp+17h]
  _OWORD *v21; // [rsp+E0h] [rbp+27h]
  __int64 v22; // [rsp+E8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+130h] [rbp+77h] BYREF
  __int64 v25; // [rsp+138h] [rbp+7Fh] BYREF

  v18 = 0LL;
  v21 = 0LL;
  LODWORD(v22) = 0;
  FileInformation = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v25 = 0LL;
  v24 = 0LL;
  *(_OWORD *)v19 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  IoStatusBlock = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v3 = RtlLengthSid(SeAliasAdminsSid);
    v4 = RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + 32 + v3;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (ACL *)ExAllocatePoolMm(256LL, v4, 1818452292, CurrentProcessorColor | 0x80000000);
    v7 = PoolMm;
    if ( PoolMm )
    {
      Acl = RtlCreateAcl(PoolMm, v4, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v7, 2, 0, 2032127, SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v7, 2, 0, 2032127, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
            if ( Acl >= 0 )
            {
              *(_QWORD *)&v20 = a1 + 24;
              v19[0] = 48;
              v21 = SecurityDescriptor;
              LODWORD(Length) = 0;
              v25 = (unsigned __int64)*(unsigned int *)(a1 + 8) << 12;
              FileInformation = v25;
              *(_QWORD *)&v19[2] = 0LL;
              DWORD2(v20) = 576;
              v22 = 0LL;
              File = IopCreateFile(
                       (int)&Handle,
                       1310723,
                       (int)v19,
                       (int)&IoStatusBlock,
                       (__int64)&v25,
                       6,
                       2,
                       0,
                       36872,
                       0LL,
                       Length,
                       0,
                       0LL,
                       274,
                       0,
                       0LL);
              if ( File < 0 )
              {
                LODWORD(Lengtha) = 0;
                v11 = IopCreateFile(
                        (int)&Handle,
                        1048578,
                        (int)v19,
                        (int)&IoStatusBlock,
                        (__int64)&v25,
                        6,
                        3,
                        1,
                        32776,
                        0LL,
                        Lengtha,
                        0,
                        0LL,
                        274,
                        0,
                        0LL);
                Acl = v11;
                if ( v11 >= 0 )
                {
                  v12 = Handle;
                  *(_QWORD *)(a1 + 56) = Handle;
                  Acl = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v12, 0x66506D4Du, (__int64)&v24, 0LL, 0LL);
                  if ( Acl >= 0 )
                  {
                    *(_QWORD *)(a1 + 48) = v24;
                    Acl = MiUpdateExistingPageFile(a1);
                  }
                }
                else if ( v11 == -1073741772 )
                {
                  Acl = File;
                }
              }
              else
              {
                v10 = Handle;
                Acl = IoStatusBlock.Status;
                *(_QWORD *)(a1 + 56) = Handle;
                if ( Acl >= 0 )
                {
                  Acl = ZwSetSecurityObject(v10, 4u, SecurityDescriptor);
                  if ( Acl >= 0 )
                  {
                    Acl = ZwSetInformationFile(Handle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
                    if ( Acl >= 0 )
                    {
                      Acl = IoStatusBlock.Status;
                      if ( IoStatusBlock.Status >= 0 )
                      {
                        Acl = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&v24, 0LL, 0LL);
                        if ( Acl >= 0 )
                        {
                          *(_QWORD *)(a1 + 48) = v24;
                          *(_BYTE *)(a1 + 42) = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v7, 0);
      return Acl;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
