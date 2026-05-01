/*
 * XREFs of SdbpGetStringTableItemFromStringRef @ 0x180093A30
 * Callers:
 *     SdbpGetMappedStringFromTable @ 0x18009393C (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetStringTableItemFromStringRef(__int64 a1, int a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rbx
  int v9; // ebp
  __int64 v10; // r14
  int v11; // edi
  int v12; // eax
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  unsigned int v16; // edi
  __int64 result; // rax
  int *v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)(a1 + 2640) )
    {
      AslLogCallPrintf(1LL, "SdbpGetStringTableItemFromStringRef", 838LL, "No stringtable in DB");
      v11 = -1073741275;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(a1 + 2640);
    v12 = 6;
  }
  else
  {
    v13 = RtlRunOnceExecuteOnce(a1 + 2624, InitOnceGetStringTableOffset, a1, &v18);
    v11 = v13;
    if ( v13 < 0 )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpGetStringTableItemFromStringRef",
        858LL,
        "RtlRunOnceExecuteOnce failed for InitOnceGetStringTableOffset [%x]",
        v13);
      goto LABEL_14;
    }
    if ( !v18 || (v12 = *v18) == 0 )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpGetStringTableItemFromStringRef",
        874LL,
        "InitOnceGetStringTableOffset succeeded but failed to find string table");
      v11 = -1073741271;
      goto LABEL_14;
    }
    v10 = a1;
  }
  v9 = v12 + a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(v10, (unsigned int)(v12 + a2)) == 0x8801 )
  {
    v11 = 0;
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbpGetStringTableItemFromStringRef", 888LL, "Pulled out a non-stringtable item");
    v11 = -1073741788;
  }
LABEL_14:
  v14 = v11 < 0;
  v15 = 0;
  v16 = ~v11;
  if ( !v14 )
  {
    v15 = v9;
    v4 = v10;
  }
  *a3 = v15;
  result = v16 >> 31;
  *a4 = v4;
  return result;
}
