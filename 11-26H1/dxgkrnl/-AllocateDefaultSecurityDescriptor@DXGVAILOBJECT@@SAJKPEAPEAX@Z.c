/*
 * XREFs of ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x14020CBC0
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x14020D5EC (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020D9F0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  NTSTATUS SecurityDescriptor; // ebx
  ULONG v5; // eax
  ULONG v6; // r13d
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-20h] BYREF
  _BYTE Sid[16]; // [rsp+58h] [rbp-18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  SecurityDescriptor = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  if ( SecurityDescriptor >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v5 = RtlLengthSid(Sid);
    v6 = v5 + 20;
    v7 = (struct _ACL *)operator new[](v5 + 60, 0x4B677844u, 256LL);
    v8 = v7;
    if ( v7 )
    {
      SecurityDescriptor = RtlCreateSecurityDescriptor(v7, 1u);
      if ( SecurityDescriptor >= 0 )
      {
        SecurityDescriptor = RtlCreateAcl(v8 + 5, v6, 4u);
        if ( SecurityDescriptor >= 0 )
        {
          SecurityDescriptor = RtlAddAccessAllowedAce(v8 + 5, 4u, AccessMask, Sid);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, 0);
            if ( SecurityDescriptor >= 0 )
            {
              *a2 = v8;
              return (unsigned int)SecurityDescriptor;
            }
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 284;
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 275;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 262;
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 251;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    }
    else
    {
      SecurityDescriptor = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 242;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"new failed. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 225;
  }
  return (unsigned int)SecurityDescriptor;
}
