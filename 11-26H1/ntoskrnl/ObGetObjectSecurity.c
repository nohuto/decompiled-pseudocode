/*
 * XREFs of ObGetObjectSecurity @ 0x140935120
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x140695CA0 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  ULONG_PTR v6; // rbp
  signed __int64 v7; // rdx
  char v8; // r9
  signed __int64 v9; // rax
  void *v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  void *Pool2; // rax
  NTSTATUS v14; // r15d
  void *v15; // rax
  int v16; // [rsp+90h] [rbp+8h]

  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))(v6 + 152) != SeDefaultObjectMethod )
  {
    v16 = ObpDefaultSecurityDescriptorLength;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    *SecurityDescriptor = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *MemoryAllocated = 1;
    v14 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    if ( v14 == -1073741789 )
    {
      ExFreePoolWithTag(*SecurityDescriptor, 0);
      *MemoryAllocated = 0;
      ObpDefaultSecurityDescriptorLength = v16;
      v15 = (void *)ExAllocatePool2(0x100uLL);
      *SecurityDescriptor = v15;
      if ( !v15 )
        return -1073741670;
      *MemoryAllocated = 1;
      v14 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    }
    if ( v14 < 0 )
    {
      ExFreePoolWithTag(*SecurityDescriptor, 0);
      *SecurityDescriptor = 0LL;
      *MemoryAllocated = 0;
      return v14;
    }
    else
    {
      if ( !*SecurityDescriptor && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*((char *)Object - 22) & 2) != 0) )
        goto LABEL_20;
      return v14;
    }
  }
  _m_prefetchw((char *)Object - 8);
  v7 = *((_QWORD *)Object - 1);
  v8 = v7;
  if ( (v7 & 0xF) != 0 )
  {
    do
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)Object - 1, v7 - 1, v7);
      if ( v7 == v9 )
        break;
      v7 = v9;
      v8 = v9;
    }
    while ( (v9 & 0xF) != 0 );
  }
  v10 = (void *)(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v11 = (struct _KLOCK_ENTRIES *)(v8 & 0xF);
  if ( (unsigned int)v11 <= 1 && v10 )
    v10 = (void *)ObpReferenceSecurityDescriptorSlow((__int64)Object - 48, (int)v11, (__int64)v10, v11);
  *SecurityDescriptor = v10;
  *MemoryAllocated = 0;
  if ( !*SecurityDescriptor && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*((char *)Object - 22) & 2) != 0) )
LABEL_20:
    KeBugCheckEx(0x189u, (ULONG_PTR)Object - 48, v6, 1uLL, 0LL);
  return 0;
}
