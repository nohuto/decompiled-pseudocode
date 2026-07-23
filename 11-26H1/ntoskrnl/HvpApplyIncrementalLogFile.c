/*
 * XREFs of HvpApplyIncrementalLogFile @ 0x140ADD93C
 * Callers:
 *     HvApplyLogFiles @ 0x140AEE6F0 (HvApplyLogFiles.c)
 * Callees:
 *     CmpTraceHiveMountLogEntryApplied @ 0x14085B8EC (CmpTraceHiveMountLogEntryApplied.c)
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140ADDB38 (HvpIncrementalLogFileEnumeratorAdvance.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140B10798 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpUpdateRecoveryVector @ 0x140B47574 (HvpUpdateRecoveryVector.c)
 */

__int64 HvpApplyIncrementalLogFile(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // r14
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  _DWORD *v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+28h]
  __int64 v14; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  BugCheckParameter2 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  v7[1] = *(_DWORD *)(a3 + 8);
  LODWORD(v11) = 0;
  v10 = 0LL;
  v7[0] = 512;
  while ( 1 )
  {
    result = HvpIncrementalLogFileEnumeratorAdvance(v7, &v10);
    if ( (_DWORD)result == -2147483622 )
      break;
    if ( (int)result < 0 )
      return result;
    v5 = v10;
    v6 = v10 + 10;
    result = HvpApplyLogEntryDataToFileBackedHive(BugCheckParameter2, v10[1] - (8 * v10[5] + 40), (__int64)va);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 40) = v5[4];
    if ( (v5[2] & 1) != 0 )
      *(_DWORD *)(a1 + 144) |= 1u;
    CmpTraceHiveMountLogEntryApplied(v5[1], v11);
    if ( v14 )
      HvpUpdateRecoveryVector(v6, (unsigned int)v5[5], v14);
  }
  return 1073741833LL;
}
