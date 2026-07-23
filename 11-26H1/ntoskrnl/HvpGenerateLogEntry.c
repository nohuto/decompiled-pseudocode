/*
 * XREFs of HvpGenerateLogEntry @ 0x1408BD3E8
 * Callers:
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 * Callees:
 *     HvpGenerateLogEntryMetadata @ 0x1403580A8 (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntryDirtyData @ 0x140358118 (HvpGenerateLogEntryDirtyData.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryHeader @ 0x1404AC60C (HvpGenerateLogEntryHeader.c)
 *     HvpAllocateLogBuffers @ 0x1404BD54C (HvpAllocateLogBuffers.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpCountSetRangesInVector @ 0x1408BD754 (HvpCountSetRangesInVector.c)
 *     CmpLogDirtyVectorUse @ 0x1408BD7B8 (CmpLogDirtyVectorUse.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpGenerateLogEntry(__int64 a1, char a2, __int64 *a3, _DWORD *a4, unsigned int *a5)
{
  unsigned int v7; // r12d
  ULONG v8; // eax
  unsigned int v9; // edi
  void *Pool2; // r15
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r14
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // eax
  PVOID *v19; // rdi
  PVOID *v21; // rbx
  int v22; // [rsp+28h] [rbp-30h]
  unsigned int v23; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-14h] BYREF
  PVOID *v25; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+48h] BYREF
  char v27; // [rsp+A8h] [rbp+50h]
  __int64 *v28; // [rsp+B0h] [rbp+58h]
  _DWORD *v29; // [rsp+B8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v25 = 0LL;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v7 = HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 88));
  v8 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 88));
  CmpLogDirtyVectorUse(a1, 1LL, v7, v8);
  v9 = (8 * v7 + (a2 != 0 ? 4647 : 4135) + (*(_DWORD *)(a1 + 104) << 9)) & 0xFFFFF000;
  Pool2 = (void *)ExAllocatePool2(0x108uLL);
  if ( Pool2 )
  {
    v11 = HvpAllocateLogBuffers((__int64 *)&v25, &v24, v9);
    v13 = v24;
    v14 = v11;
    if ( v11 < 0 )
    {
      v19 = v25;
    }
    else
    {
      v15 = (__int64)v25;
      HvpGenerateLogEntryHeader(a1, (__int64)v25, v12, &v26, &v23, v9, v7, v27);
      HvpGenerateLogEntryMetadata(a1, v15, v16, (__int64)&v26, (__int64)&v23, (__int64)Pool2, v7);
      HvpGenerateLogEntryDirtyData(a1, v15, v17, (__int64)&v26, (__int64)&v23, v22);
      v18 = *(_DWORD *)(v15 + 24LL * v26 + 16);
      if ( v23 < v18 )
        memset_0((void *)(*(_QWORD *)(v15 + 24LL * v26 + 8) + v23), 0, v18 - v23);
      *v28 = v15;
      *v29 = v13;
      *a5 = v9;
      v19 = 0LL;
      v14 = 0;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v19 )
    {
      if ( (_DWORD)v13 )
      {
        v21 = v19 + 1;
        do
        {
          if ( *v21 )
          {
            ExFreePoolWithTag(*v21, 0);
            *v21 = 0LL;
          }
          v21 += 3;
          --v13;
        }
        while ( v13 );
      }
      ExFreePoolWithTag(v19, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v14;
}
