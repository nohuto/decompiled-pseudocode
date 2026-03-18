/*
 * XREFs of SeQueryMandatoryLabel @ 0x140AB7D2C
 * Callers:
 *     MiAllowImageMap @ 0x140B1FE0C (MiAllowImageMap.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404330E0 (RtlFindAceByType.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 */

__int64 __fastcall SeQueryMandatoryLabel(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _LIST_ENTRY *Blink; // rsi
  unsigned __int8 *AceByType; // rax
  int v7; // ecx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    goto LABEL_11;
  if ( v1 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    goto LABEL_5;
  }
  v3 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v3 )
    v4 = a1 + v3;
  else
LABEL_11:
    v4 = 0LL;
LABEL_5:
  Blink = RtlpBootStatHandleLock.SavedApcState.ApcListHead[1].Blink;
  v9 = 0;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(v4, 17, &v9);
    if ( AceByType )
    {
      if ( (AceByType[1] & 8) == 0 )
        break;
    }
    ++v9;
    if ( !AceByType )
      goto LABEL_8;
  }
  Blink = (struct _LIST_ENTRY *)(AceByType + 8);
LABEL_8:
  v7 = *RtlSubAuthorityCountSid(Blink);
  if ( (_BYTE)v7 )
    return *RtlSubAuthoritySid(Blink, v7 - 1);
  return v2;
}
