/*
 * XREFs of ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180030210
 * Callers:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180030184 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     RmpWnfGetPublisherSid @ 0x180030848 (RmpWnfGetPublisherSid.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateSecurityDescriptorForApplicationWnf(PSID pSid, void **a2)
{
  NTSTATUS PublisherSid; // ebx
  void *Heap; // rax
  void *v6; // rdi
  DWORD LastError; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 *v11; // rdx
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v13; // [rsp+34h] [rbp-CCh] BYREF
  DWORD cbSid; // [rsp+38h] [rbp-C8h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  _BYTE Owner[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[80]; // [rsp+C0h] [rbp-40h] BYREF
  _ACL Acl; // [rsp+110h] [rbp+10h] BYREF

  memset_0(v19, 0, 0x44uLL);
  memset_0(&Acl, 0, 0x138uLL);
  v17 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  BufferLength = 0;
  memset_0(Owner, 0, 0x44uLL);
  cbSid = 0;
  Sid = 0LL;
  PublisherSid = RmpWnfGetPublisherSid(Owner);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlCreateAcl(&Acl, 0x138u, 2u);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v19, &cbSid) )
  {
    if ( (unsigned int)dword_1800E1278 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
      goto LABEL_23;
    LastError = GetLastError();
    v11 = (unsigned __int8 *)&unk_1800D10E4;
    goto LABEL_22;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v19);
  if ( PublisherSid < 0 )
    goto LABEL_15;
  if ( !ConvertStringSidToSidW(
          L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
          &Sid) )
  {
    if ( (unsigned int)dword_1800E1278 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
      goto LABEL_23;
    LastError = GetLastError();
    v11 = (unsigned __int8 *)&unk_1800D1118;
LABEL_22:
    v13 = LastError;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E1278,
      v11,
      v9,
      v10,
      (__int64)&v13);
LABEL_23:
    PublisherSid = -1073741823;
    goto LABEL_15;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
  if ( PublisherSid >= 0 )
  {
    PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid);
    if ( PublisherSid >= 0 )
    {
      PublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( PublisherSid >= 0 )
      {
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
        Heap = HampAllocateHeap(BufferLength);
        v6 = Heap;
        if ( Heap )
        {
          PublisherSid = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
          if ( PublisherSid < 0 )
          {
            HampFreeHeap(v6);
          }
          else
          {
            *a2 = v6;
            PublisherSid = 0;
          }
        }
        else
        {
          PublisherSid = -1073741801;
        }
      }
    }
  }
LABEL_15:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)PublisherSid;
}
