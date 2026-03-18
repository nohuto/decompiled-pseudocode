/*
 * XREFs of _RegRtlCreateTreeTransacted @ 0x14091E278
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _SysCtxRegCreateTree @ 0x14091E188 (_SysCtxRegCreateTree.c)
 *     _PnpCtxRegCreateTree @ 0x14091E1FC (_PnpCtxRegCreateTree.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14045AB50 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     wcschr @ 0x140537F60 (wcschr.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x14089DB44 (NtCreateKeyTransacted_Stub.c)
 *     _RegRtlCreateKeyTransacted @ 0x14091E5D4 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x14091E728 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE8C08 (_RegRtlOpenPredefinedKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlCreateTreeTransacted(
        HANDLE Handle,
        NTSTRSAFE_PCWSTR pszSrc,
        ULONG CreateOptions,
        ACCESS_MASK DesiredAccess,
        void *a5,
        char a6,
        PHANDLE KeyHandle,
        PULONG Disposition,
        __int64 a9)
{
  __int64 v13; // rcx
  signed int inited; // ebx
  HANDLE v15; // rcx
  ULONG v16; // edx
  NTSTRSAFE_PCWSTR v18; // rax
  __int64 v19; // rcx
  size_t v20; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // r14
  unsigned __int64 v25; // rbx
  wchar_t *v26; // rax
  __int64 v27; // r9
  char v28; // cl
  PULONG v29; // r10
  void *v30; // rax
  __int64 v31; // r8
  int CreateOptionsa; // [rsp+30h] [rbp-69h]
  HANDLE Handlea; // [rsp+58h] [rbp-41h] BYREF
  void *v34; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF

  v34 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Handlea = 0LL;
  DestinationString = 0LL;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey(Handle) || (inited = RegRtlOpenPredefinedKey(v13, &Handlea), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v15 = Handle;
      v16 = (32 * (CreateOptions & 8 | 6)) | 2;
      if ( !a6 )
        v16 = 32 * (CreateOptions & 8 | 6);
      if ( Handlea )
        v15 = Handlea;
      ObjectAttributes.RootDirectory = v15;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = a5;
      ObjectAttributes.Attributes = v16 | 0x200;
      if ( a9 )
      {
        inited = NtCreateKeyTransacted_Stub((__int64)KeyHandle, DesiredAccess);
        if ( inited == -1073741702 )
          inited = -1072103420;
      }
      else
      {
        inited = ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, Disposition);
      }
    }
  }
  if ( Handlea )
    ZwClose(Handlea);
  if ( inited == -1073741772 )
  {
    if ( pszSrc )
    {
      v18 = pszSrc;
      v19 = 0x7FFFLL;
      do
      {
        if ( !*v18 )
          break;
        ++v18;
        --v19;
      }
      while ( v19 );
      inited = v19 == 0 ? 0xC000000D : 0;
      if ( v19 )
      {
        v20 = ((0x7FFF - v19) & -(__int64)(v19 != 0)) + 1;
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v22 = Pool2;
        if ( Pool2 )
        {
          inited = RtlStringCchCopyExW(Pool2, v20, pszSrc, 0LL, 0LL, 0x100u);
          if ( !inited )
          {
            v23 = (unsigned __int64)v22;
            v24 = (__int64)Handle;
            if ( !Handle && !wcsnicmp(v22, L"\\REGISTRY\\MACHINE\\", 0x12uLL) )
            {
              v24 = 2147483650LL;
              v23 = (unsigned __int64)(v22 + 18);
            }
            while ( 1 )
            {
              v25 = v23;
              v26 = wcschr((const wchar_t *)v23, 0x5Cu);
              v23 = (unsigned __int64)v26;
              if ( v26 )
              {
                *v26 = 0;
                do
                  v23 += 2LL;
                while ( *(_WORD *)v23 == 92 );
                v23 &= -(__int64)(*(_WORD *)v23 != 0);
              }
              v27 = DesiredAccess;
              v28 = a6;
              v29 = Disposition;
              if ( v23 )
              {
                v27 = 4LL;
                v28 = 0;
              }
              v30 = a5;
              if ( v23 )
                v29 = 0LL;
              v31 = CreateOptions;
              if ( v23 )
                v30 = 0LL;
              LOBYTE(CreateOptionsa) = v28;
              if ( v23 )
                v31 = CreateOptions & 0xFFFFFFFC;
              inited = RegRtlCreateKeyTransacted(v24, v25, v31, v27, v30, CreateOptionsa, &v34, v29, a9);
              if ( (HANDLE)v24 != Handle && v24 != 2147483650LL )
                ZwClose((HANDLE)v24);
              if ( inited )
                break;
              if ( !v23 )
              {
                *KeyHandle = v34;
                break;
              }
              v24 = (__int64)v34;
            }
          }
          ExFreePoolWithTag(v22, 0);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)inited;
}
