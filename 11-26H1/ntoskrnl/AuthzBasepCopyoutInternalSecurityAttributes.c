/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A4F30C
 * Callers:
 *     SepGetTokenAccessInformationBufferSize @ 0x140A4EF60 (SepGetTokenAccessInformationBufferSize.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140A4F210 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14040DD0C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x140A4F4E8 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, char *a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  int inserted; // ecx
  unsigned __int64 v10; // rbp
  unsigned int *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rcx
  wchar_t *v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v17; // [rsp+30h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+10h] BYREF
  wchar_t *v20; // [rsp+A8h] [rbp+20h]

  if ( !a2 || !a3 || (v6 = (unsigned __int64)&a2[a3], v6 < (unsigned __int64)a2) )
  {
    inserted = -1073741811;
LABEL_16:
    if ( a3 >= 0x30 )
    {
      *(_OWORD *)a2 = 0LL;
      *((_OWORD *)a2 + 1) = 0LL;
      *((_OWORD *)a2 + 2) = 0LL;
    }
    return (unsigned int)inserted;
  }
  memset_0(a2, 0, a3);
  v7 = (__int64)(a2 + 48);
  if ( (unsigned __int64)(a2 + 48) > v6 )
    goto LABEL_14;
  *(_DWORD *)a2 = 0;
  *((_QWORD *)a2 + 2) = a2 + 8;
  *((_QWORD *)a2 + 1) = a2 + 8;
  *((_DWORD *)a2 + 6) = 0;
  *((_QWORD *)a2 + 5) = a2 + 32;
  *((_QWORD *)a2 + 4) = a2 + 32;
  v8 = 112LL * *a1;
  if ( v8 > 0xFFFFFFFF )
  {
    inserted = -1073741675;
    goto LABEL_16;
  }
  inserted = 0;
  v10 = v7 + (unsigned int)v8;
  if ( v10 > v6 )
  {
LABEL_14:
    inserted = -2147483643;
    goto LABEL_16;
  }
  v11 = a1 + 2;
  v12 = *((_QWORD *)a1 + 1);
  while ( (unsigned int *)v12 != v11 )
  {
    inserted = AuthzBasepProbeAndInsertTailList(a2 + 8, v7);
    if ( inserted < 0 )
      goto LABEL_16;
    ++*(_DWORD *)a2;
    *(_WORD *)(v7 + 48) = *(_WORD *)(v12 + 48);
    *(_DWORD *)(v7 + 52) = *(_DWORD *)(v12 + 52);
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_DWORD *)(v7 + 64) = 0;
    *(_QWORD *)(v7 + 80) = v7 + 72;
    *(_QWORD *)(v7 + 72) = v7 + 72;
    *(_DWORD *)(v7 + 88) = 0;
    *(_QWORD *)(v7 + 104) = v7 + 96;
    *(_QWORD *)(v7 + 96) = v7 + 96;
    v13 = *(unsigned __int16 *)(v12 + 32);
    v14 = (wchar_t *)((v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    v17 = v13;
    v19 = *(unsigned __int16 *)(v12 + 32);
    v20 = v14;
    v15 = (unsigned __int64)v14 + v13;
    if ( (unsigned __int64)v14 + v13 > v6 )
      goto LABEL_14;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.MaximumLength = v13;
    DestinationString.Buffer = v14;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 32));
    *(UNICODE_STRING *)(v7 + 32) = DestinationString;
    inserted = AuthzBasepCopyoutInternalSecurityAttributeValues(v12, v7, v15, (int)v6 - (int)v15, &v19);
    if ( inserted < 0 )
      goto LABEL_16;
    v12 = *(_QWORD *)v12;
    v10 = (unsigned __int64)v20 + v17 + v19;
    v7 += 112LL;
  }
  return (unsigned int)inserted;
}
