/*
 * XREFs of sub_14017ADA0 @ 0x14017ADA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140069314 @ 0x140069314 (sub_140069314.c)
 *     sub_14006AE00 @ 0x14006AE00 (sub_14006AE00.c)
 *     sub_14017A9D0 @ 0x14017A9D0 (sub_14017A9D0.c)
 */

__int64 __fastcall sub_14017ADA0(char *NotificationStructure, PVOID Context)
{
  _QWORD *v2; // rsi
  int v3; // edi
  PVOID *i; // rdi
  int v6; // eax
  int v7; // eax
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)sub_1400567A0() )
    ExAcquireResourceExclusiveLite(&Resource, 1u);
  if ( *(_QWORD *)(NotificationStructure + 20) == 0x40174FFE0D08B5D3LL
    && *(_QWORD *)(NotificationStructure + 28) == 0x8C6489F362EA998CuLL )
  {
    if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4004LL
      && *(_QWORD *)(NotificationStructure + 12) == 0x3F05139760008FB0LL )
    {
      if ( !(unsigned int)sub_1400567A0() )
      {
        for ( i = (PVOID *)qword_140169290; i != &qword_140169290; i = (PVOID *)*i )
        {
          if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 3), *((PCUNICODE_STRING *)NotificationStructure + 5), 1u) )
          {
            v3 = 0;
            goto LABEL_19;
          }
        }
      }
      v6 = sub_14017A9D0(*((struct _UNICODE_STRING **)NotificationStructure + 5), &v9, &v10);
      v2 = v9;
      v3 = v6;
      if ( v6 >= 0 )
      {
        v7 = sub_140069314(*((PCUNICODE_STRING *)NotificationStructure + 5), v9, v10);
LABEL_18:
        v3 = v7;
      }
    }
    else if ( *(_QWORD *)(NotificationStructure + 4) == 0x11D046F0CB3A4005LL
           && *(_QWORD *)(NotificationStructure + 12) == 0x3F05139760008FB0LL )
    {
      v7 = sub_14006AE00(*((PCUNICODE_STRING *)NotificationStructure + 5));
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( !(unsigned int)sub_1400567A0() )
    ExReleaseResourceLite(&Resource);
  if ( v3 < 0 && v2 )
    ExFreePoolWithTag(v2, 0x72436152u);
  return (unsigned int)v3;
}
