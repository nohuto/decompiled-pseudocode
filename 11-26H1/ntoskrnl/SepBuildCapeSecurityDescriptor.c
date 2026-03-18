/*
 * XREFs of SepBuildCapeSecurityDescriptor @ 0x1404DBCB8
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 */

NTSTATUS __fastcall SepBuildCapeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        unsigned __int8 *a2,
        __int64 a3)
{
  NTSTATUS result; // eax
  __int16 v7; // ax
  __int64 v8; // rax
  ACL *v9; // r8
  __int64 v10; // rdx

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, *a2);
  if ( result >= 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= 3u;
    v7 = *((_WORD *)a2 + 1);
    if ( (v7 & 4) != 0 )
    {
      if ( v7 >= 0 )
      {
        v9 = (ACL *)*((_QWORD *)a2 + 4);
      }
      else
      {
        v8 = *((unsigned int *)a2 + 4);
        if ( !(_DWORD)v8 )
          goto LABEL_5;
        v9 = (ACL *)&a2[v8];
      }
LABEL_6:
      result = RtlSetDaclSecurityDescriptor(
                 SecurityDescriptor,
                 (*((_WORD *)a2 + 1) & 4) != 0,
                 v9,
                 (*((_WORD *)a2 + 1) & 8) != 0);
      if ( result >= 0 )
      {
        LOBYTE(v10) = 1;
        return RtlSetSaclSecurityDescriptor(SecurityDescriptor, v10, a3, 0LL);
      }
      return result;
    }
LABEL_5:
    v9 = 0LL;
    goto LABEL_6;
  }
  return result;
}
