/*
 * XREFs of ?VidSchiSetupKnownProcessBoost@@YAJPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PROCESS@@PEAUVIDSCH_PROCESS_ADAPTER_INFO@@@Z @ 0x140041BB0
 * Callers:
 *     VidSchiOpenProcessAdapterInfo @ 0x1400FCC58 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$00@@QEAAPEAEI@Z @ 0x1400C05DC (-AllocateElements@-$PagedPoolZeroedArray@E$00@@QEAAPEAEI@Z.c)
 */

__int64 __fastcall VidSchiSetupKnownProcessBoost(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PROCESS *a2,
        struct VIDSCH_PROCESS_ADAPTER_INFO *a3)
{
  __int64 v5; // rbx
  const char *v6; // rcx
  char v7; // r15
  char v8; // si
  int v10; // ebx
  ULONG v11; // eax
  void *v12; // rax
  void *v13; // rbx
  _BYTE v14[4]; // [rsp+20h] [rbp-30h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v17[4]; // [rsp+38h] [rbp-18h] BYREF
  int v18; // [rsp+3Ch] [rbp-14h]

  if ( !*((_BYTE *)a1 + 7076) )
    return 0LL;
  v5 = *((_QWORD *)a2 + 332);
  if ( v5 != PsGetCurrentProcess() )
    return 0LL;
  v6 = (const char *)*((_QWORD *)a2 + 331);
  if ( !v6 )
    return 0LL;
  v7 = 0;
  v8 = 0;
  if ( !_strnicmp(v6, "audiodg.exe", 0xBuLL) )
  {
    v7 = 1;
  }
  else
  {
    if ( _strnicmp(*((const char **)a2 + 331), "svchost.exe", 0xBuLL) )
      return 0LL;
    v8 = 1;
  }
  v14[0] = 0;
  v10 = RtlCheckTokenMembership(0LL, SeExports->SeLocalServiceSid, v14);
  if ( v10 >= 0 && v14[0] )
  {
    if ( v8 )
    {
      P = 0LL;
      v18 = 0;
      v11 = RtlLengthRequiredSid(6u);
      v12 = (void *)PagedPoolZeroedArray<unsigned char,1>::AllocateElements(&P, v11);
      v13 = v12;
      if ( !v12 )
      {
        v10 = -1073741801;
        goto LABEL_15;
      }
      *(_DWORD *)IdentifierAuthority.Value = 0;
      *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
      RtlInitializeSid(v12, &IdentifierAuthority, 6u);
      *RtlSubAuthoritySid(v13, 0) = 80;
      *RtlSubAuthoritySid(v13, 1u) = -379073292;
      *RtlSubAuthoritySid(v13, 2u) = 2104103821;
      *RtlSubAuthoritySid(v13, 3u) = -1247697674;
      *RtlSubAuthoritySid(v13, 4u) = 1811662266;
      *RtlSubAuthoritySid(v13, 5u) = 774708259;
      v10 = RtlCheckTokenMembership(0LL, v13, v14);
      if ( v10 < 0 || !v14[0] )
      {
        v10 = 0;
LABEL_15:
        if ( P != v17 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        return (unsigned int)v10;
      }
      if ( P != v17 && P )
        ExFreePoolWithTag(P, 0);
    }
    *((_BYTE *)a3 + 5) = v7;
    *((_BYTE *)a3 + 4) = v8;
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
