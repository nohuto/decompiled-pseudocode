/*
 * XREFs of SepSddlSecurityDescriptorFromSDDLString @ 0x1400DB100
 * Callers:
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1400DA86C (SeSddlSecurityDescriptorFromSDDL.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     SepSddlDaclFromSDDLString @ 0x1400DAA50 (SepSddlDaclFromSDDLString.c)
 */

__int64 __fastcall SepSddlSecurityDescriptorFromSDDLString(
        wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptor,
        _SECURITY_DESCRIPTOR **a3)
{
  __int64 (__fastcall *SystemRoutineAddress)(wchar_t *, __int64, _SECURITY_DESCRIPTOR **); // rax
  unsigned int v6; // edx
  __int64 result; // rax
  _SECURITY_DESCRIPTOR *v8; // rdi
  int v9; // ebx
  _SECURITY_DESCRIPTOR *PoolWithTag; // rax
  _ACL *DiscretionaryAcl; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING procName; // [rsp+38h] [rbp-38h] BYREF
  _SECURITY_DESCRIPTOR LocalSecurityDescriptor; // [rsp+48h] [rbp-28h] BYREF
  unsigned int BufferLength; // [rsp+98h] [rbp+28h] BYREF
  unsigned int SecurityDescriptorControlFlags; // [rsp+A8h] [rbp+38h] BYREF

  BufferLength = SecurityDescriptor;
  procName = 0LL;
  RtlInitUnicodeString(&procName, L"SeConvertStringSecurityDescriptorToSecurityDescriptor");
  SystemRoutineAddress = (__int64 (__fastcall *)(wchar_t *, __int64, _SECURITY_DESCRIPTOR **))MmGetSystemRoutineAddress(&procName);
  if ( !SystemRoutineAddress )
  {
    SecurityDescriptorControlFlags = 0;
    memset(&LocalSecurityDescriptor, 0, sizeof(LocalSecurityDescriptor));
    BufferLength = 0;
    v8 = 0LL;
    DiscretionaryAcl = 0LL;
    *a3 = 0LL;
    v9 = SepSddlDaclFromSDDLString(SecurityDescriptorString, v6, &SecurityDescriptorControlFlags, &DiscretionaryAcl);
    if ( v9 >= 0 )
    {
      RtlCreateSecurityDescriptor(&LocalSecurityDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(&LocalSecurityDescriptor, 1u, DiscretionaryAcl, 0);
      LocalSecurityDescriptor.Control |= SecurityDescriptorControlFlags;
      RtlAbsoluteToSelfRelativeSD(&LocalSecurityDescriptor, 0LL, &BufferLength);
      PoolWithTag = (_SECURITY_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, BufferLength, 0x64536553u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, BufferLength);
        v9 = RtlAbsoluteToSelfRelativeSD(&LocalSecurityDescriptor, v8, &BufferLength);
        if ( v9 >= 0 )
        {
          ExFreePoolWithTag(DiscretionaryAcl, 0);
          *a3 = v8;
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    if ( DiscretionaryAcl )
      ExFreePoolWithTag(DiscretionaryAcl, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  result = SystemRoutineAddress(SecurityDescriptorString, 1LL, a3);
  if ( (int)result >= 0 )
    (*a3)->Control |= 8u;
  return result;
}
