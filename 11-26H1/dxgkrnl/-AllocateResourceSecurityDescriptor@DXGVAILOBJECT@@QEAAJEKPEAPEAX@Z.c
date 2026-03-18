/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x14020CE30
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020D9F0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x14020E350 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        char a2,
        ACCESS_MASK a3,
        void **a4)
{
  int v5; // r12d
  ULONG v6; // esi
  __int64 v7; // r14
  unsigned int ProcessSessionId; // r15d
  NTSTATUS ObjectSecurity; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  WORD i; // di
  ULONG v14; // r12d
  char *v15; // rax
  char *v16; // rdi
  struct _ACL *v17; // r14
  WORD j; // si
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int8 MemoryAllocated[6]; // [rsp+32h] [rbp-47h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-41h] BYREF
  PVOID Ace[2]; // [rsp+40h] [rbp-39h] BYREF
  ACCESS_MASK AccessMask; // [rsp+50h] [rbp-29h]
  PSID Owner; // [rsp+58h] [rbp-21h] BYREF
  PSID Group; // [rsp+60h] [rbp-19h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-11h] BYREF
  void **v29; // [rsp+70h] [rbp-9h]
  _BYTE Sid[24]; // [rsp+78h] [rbp-1h] BYREF

  AccessMask = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  v5 = 0;
  Owner = 0LL;
  v6 = 0;
  Group = 0LL;
  v7 = 0LL;
  v29 = a4;
  ProcessSessionId = -1;
  ObjectSecurity = ObGetObjectSecurity(this, &SecurityDescriptor, MemoryAllocated);
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741786;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 374;
    goto LABEL_56;
  }
  if ( ObjectSecurity >= 0 )
  {
    DaclPresent = 0;
    DaclDefaulted = 0;
    ObjectSecurity = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( ObjectSecurity < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 391;
      goto LABEL_56;
    }
    if ( !DaclPresent || DaclDefaulted )
    {
      ObjectSecurity = -1073741786;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 400;
    }
    else
    {
      ObjectSecurity = 0;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)Ace, (DXGVAILOBJECT *)((char *)this + 40), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Ace);
      v11 = *((_QWORD *)this + 12);
      if ( v11 )
        ProcessSessionId = PsGetProcessSessionIdEx(v11);
      else
        ObjectSecurity = -1073741275;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)Ace);
      if ( ObjectSecurity < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 412;
        goto LABEL_56;
      }
      v12 = *((_DWORD *)this + 34);
      if ( v12 != ProcessSessionId )
      {
        ObjectSecurity = -1073741790;
        WdLogSingleEntry3(3LL, -1073741790LL, v12, ProcessSessionId);
        WdLogGlobalForLineNumber = 421;
        goto LABEL_56;
      }
      if ( a2 )
      {
        DaclDefaulted = 0;
        ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &DaclDefaulted);
        if ( ObjectSecurity < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 437;
          goto LABEL_56;
        }
        if ( Owner )
          v6 = RtlLengthSid(Owner);
        DaclPresent = 0;
        ObjectSecurity = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &DaclPresent);
        if ( ObjectSecurity < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 458;
          goto LABEL_56;
        }
        if ( Group )
          v7 = RtlLengthSid(Group);
      }
      Ace[0] = 0LL;
      for ( i = 0; i < Dacl->AceCount; ++i )
      {
        ObjectSecurity = RtlGetAce(Dacl, i, Ace);
        if ( ObjectSecurity < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 480;
          goto LABEL_56;
        }
        v5 += RtlLengthSid((char *)Ace[0] + 8) + 12;
      }
      DXGVAILOBJECT::InitializeDWMSid((DXGVAILOBJECT *)Dacl, ProcessSessionId, Sid);
      v14 = RtlLengthSid(Sid) + v5;
      v15 = (char *)operator new[](v6 + (_DWORD)v7 + v14 + 60, 0x4B677844u, 256LL);
      v16 = v15;
      if ( v15 )
      {
        ObjectSecurity = RtlCreateSecurityDescriptor(v15, 1u);
        if ( ObjectSecurity >= 0 )
        {
          if ( Owner
            && (RtlCopySid(v6, v16 + 40, Owner),
                ObjectSecurity = RtlSetOwnerSecurityDescriptor(v16, v16 + 40, 0),
                ObjectSecurity < 0) )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 548;
          }
          else if ( Group
                 && (RtlCopySid(v7, &v16[v6 + 40], Group),
                     ObjectSecurity = RtlSetGroupSecurityDescriptor(v16, &v16[v6 + 40], 0),
                     ObjectSecurity < 0) )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 566;
          }
          else
          {
            v17 = (struct _ACL *)&v16[v7 + 40 + v6];
            ObjectSecurity = RtlCreateAcl(v17, v14 + 12, 4u);
            if ( ObjectSecurity >= 0 )
            {
              Ace[0] = 0LL;
              for ( j = 0; j < Dacl->AceCount; ++j )
              {
                ObjectSecurity = RtlGetAce(Dacl, j, Ace);
                if ( ObjectSecurity < 0 )
                {
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 599;
                  goto LABEL_52;
                }
                ObjectSecurity = RtlAddAce(v17, 4u, 0, Ace[0], *((unsigned __int16 *)Ace[0] + 1));
                if ( ObjectSecurity < 0 )
                {
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 607;
                  goto LABEL_52;
                }
              }
              ObjectSecurity = RtlAddAccessAllowedAce(v17, 4u, AccessMask, Sid);
              if ( ObjectSecurity >= 0 )
              {
                ObjectSecurity = RtlSetDaclSecurityDescriptor(v16, 1u, v17, 0);
                if ( ObjectSecurity < 0 )
                {
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 638;
                }
              }
              else
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 625;
              }
            }
            else
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 582;
            }
          }
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 530;
        }
LABEL_52:
        if ( ObjectSecurity < 0 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
        else
          *v29 = v16;
      }
      else
      {
        ObjectSecurity = -1073741801;
        WdLogSingleEntry2(3LL, v6 + (_DWORD)v7 + v14 + 60, -1073741801LL);
        WdLogGlobalForLineNumber = 518;
      }
    }
  }
LABEL_56:
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  return (unsigned int)ObjectSecurity;
}
