/*
 * XREFs of SepRmReferenceFindCap @ 0x1403C82D8
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SeComputeCreatorDeniedRights @ 0x1403C7CA0 (SeComputeCreatorDeniedRights.c)
 *     SeRmReferenceFindCapName @ 0x1404FCB34 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x1403AF8B4 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceCapTable @ 0x1403C8398 (SepRmReferenceCapTable.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x14040CA60 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14046B0C0 (RtlGetNextEntryHashTable.c)
 *     SepComputeSidSignature @ 0x140B0F2AC (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2, __int64 a3)
{
  unsigned int v5; // esi
  _RTL_DYNAMIC_HASH_TABLE *v6; // rdi
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  memset(&Context, 0, sizeof(Context));
  *a2 = 0LL;
  v5 = -1073741275;
  v6 = (_RTL_DYNAMIC_HASH_TABLE *)SepRmReferenceCapTable(Sid1, a2, a3);
  if ( v6 )
  {
    if ( SepRmEnforceCap )
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
