/*
 * XREFs of SepRmReferenceFindCap @ 0x1403BE3D8
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SeComputeCreatorDeniedRights @ 0x1403BDDA0 (SeComputeCreatorDeniedRights.c)
 *     SeRmReferenceFindCapName @ 0x140503264 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     SepRmDereferenceCapTable @ 0x1402ACB40 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceCapTable @ 0x1403BE498 (SepRmReferenceCapTable.c)
 *     RtlLookupEntryHashTable @ 0x140418450 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140471940 (RtlGetNextEntryHashTable.c)
 *     SepComputeSidSignature @ 0x140B0DB5C (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2, __int64 a3)
{
  unsigned int v5; // esi
  struct _RTL_DYNAMIC_HASH_TABLE *v6; // rdi
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rbx
  struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  memset(&Context, 0, sizeof(Context));
  *a2 = 0LL;
  v5 = -1073741275;
  v6 = (struct _RTL_DYNAMIC_HASH_TABLE *)SepRmReferenceCapTable(Sid1, a2, a3);
  if ( v6 )
  {
    if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) )
    {
      v7 = SepComputeSidSignature(Sid1);
      for ( i = RtlLookupEntryHashTable(v6, v7, &Context); ; i = RtlGetNextEntryHashTable(v6, &Context) )
      {
        v9 = i;
        if ( !i )
          break;
        if ( RtlEqualSid(Sid1, i[1].Linkage.Flink) == 1 )
        {
          *a2 = v9;
          return 0;
        }
      }
    }
    SepRmDereferenceCapTable((volatile signed __int64 *)v6);
  }
  return v5;
}
