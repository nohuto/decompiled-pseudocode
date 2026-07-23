/*
 * XREFs of SepBuildCapeSecurityDescriptor @ 0x1404D5398
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 */

int __fastcall SepBuildCapeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, unsigned __int8 *a2, ACL *a3)
{
  int result; // eax
  __int16 v7; // ax
  __int64 v8; // rax
  ACL *v9; // r8

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
        return RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, a3, 0);
      return result;
    }
LABEL_5:
    v9 = 0LL;
    goto LABEL_6;
  }
  return result;
}
