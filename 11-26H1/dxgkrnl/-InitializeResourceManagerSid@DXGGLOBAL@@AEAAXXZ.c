/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1401DEE5C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::InitializeResourceManagerSid(DXGGLOBAL *this)
{
  ULONG v2; // eax
  void *v3; // rax
  void *v4; // rcx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v3 = (void *)operator new[](v2, 0x4B677844u, 256LL);
  *((_QWORD *)this + 38111) = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    if ( RtlInitializeSid(v3, &IdentifierAuthority, 6u) < 0 )
    {
      WdLogSingleEntry1(3LL);
      v4 = (void *)*((_QWORD *)this + 38111);
      WdLogGlobalForLineNumber = 7264;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      *((_QWORD *)this + 38111) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 38111), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 38111), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 38111), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 38111), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 38111), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 38111), 5u) = 890457928;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7272;
  }
}
