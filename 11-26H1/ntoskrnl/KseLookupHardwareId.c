/*
 * XREFs of KseLookupHardwareId @ 0x1407BE31C
 * Callers:
 *     AhcCacheQueryHwId @ 0x140776338 (AhcCacheQueryHwId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x1409E4F4C (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409E5030 (KsepCacheUnlock.c)
 *     AslStringPatternMatchExW @ 0x1409E7030 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall KseLookupHardwareId(PCWSTR SourceString)
{
  WCHAR v1; // r15
  PCWSTR v2; // rbp
  struct _KTHREAD *QuantumTarget; // rdi
  unsigned int v5; // esi
  _WORD *v6; // rcx
  __int16 v7; // ax
  unsigned __int64 *i; // rbx
  _WORD *v9; // rdx
  UNICODE_STRING v11[2]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-28h]

  v1 = *SourceString;
  v2 = SourceString + 1;
  QuantumTarget = (struct _KTHREAD *)stru_140E66B30.QuantumTarget;
  v13 = 0;
  v5 = -1073741275;
  if ( v1 != 42 )
    v2 = SourceString;
  v6 = v2;
  memset(v11, 0, sizeof(v11));
  DestinationString = 0LL;
  while ( 1 )
  {
    v7 = *v6;
    if ( !*v6 )
      break;
    if ( v7 == 42 || v7 == 63 )
    {
      KsepCacheLock(stru_140E66B30.QuantumTarget);
      for ( i = (unsigned __int64 *)QuantumTarget->QuantumTarget; ; i = (unsigned __int64 *)*i )
      {
        if ( i == &QuantumTarget->QuantumTarget )
          goto LABEL_17;
        v9 = (_WORD *)i[3];
        if ( v1 == 42 )
        {
          if ( *v9 != 42 )
            continue;
          ++v9;
        }
        if ( (unsigned int)AslStringPatternMatchExW(v2, v9) )
        {
          v5 = 0;
          goto LABEL_17;
        }
      }
    }
    ++v6;
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  KsepCacheLock(QuantumTarget);
  v5 = KsepCacheLookup(QuantumTarget, v11) == 0 ? 0xC0000225 : 0;
LABEL_17:
  KsepCacheUnlock(QuantumTarget);
  return v5;
}
