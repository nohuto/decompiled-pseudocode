/*
 * XREFs of PspQueryRateControlHistory @ 0x140A7F83C
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140A7F730 (PspEnforceLimitsJobPreCallback.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     PspJobIoRateQueryHistory @ 0x14048EED4 (PspJobIoRateQueryHistory.c)
 *     RtlCopyBitMap @ 0x140492FF0 (RtlCopyBitMap.c)
 *     KeQuerySchedulingGroupHistory @ 0x1404A134C (KeQuerySchedulingGroupHistory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspNetRateControlDispatch @ 0x1407F8EB0 (PspNetRateControlDispatch.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  __int64 result; // rax
  char v7; // r15
  __int64 v9; // rdi
  unsigned int v10; // ecx
  ULONG v11; // esi
  __int64 v12; // r12
  int v13; // ebx
  int v14; // eax
  void *v15; // r8
  unsigned int v16; // r13d
  unsigned int v17; // ebx
  __int64 *v18; // rdx
  unsigned int v20; // [rsp+24h] [rbp-4Ch] BYREF
  ULONG NumberToClear; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  __int128 v24; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+58h] [rbp-18h]

  result = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  v20 = 0;
  v7 = a3;
  NumberToClear = 0;
  v22 = 0LL;
  *a4 = 0;
  v24 = 0LL;
  v25 = 0LL;
  if ( a5 == 1 )
  {
    v9 = a1 + 1592;
  }
  else
  {
    result = (unsigned int)-a5;
    v9 = *(_QWORD *)((-(__int64)(a5 != 0) & 0xFFFFFFFFFFFFFED0uLL) + a1 + 1544);
  }
  if ( !v9 )
    return result;
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      result = PspJobIoRateQueryHistory(a1, &v22, &v20, &NumberToClear);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      KeQuerySchedulingGroupHistory(v9 + 128, &v22, &v20, &NumberToClear);
    }
    v10 = v20;
    v11 = NumberToClear;
    v12 = v22;
  }
  else
  {
    DWORD2(v24) = 1;
    *(_QWORD *)&v24 = *(_QWORD *)(v9 + 56);
    result = PspNetRateControlDispatch((__int64)&v24);
    if ( (int)result < 0 )
      return result;
    v12 = v25;
    v10 = DWORD2(v25);
    v11 = HIDWORD(v25);
  }
  v13 = a2 - 2;
  if ( v13 )
  {
    if ( v13 == 1 )
      v14 = 600000;
    else
      v14 = 10000;
  }
  else
  {
    v14 = 60000;
  }
  v15 = *(void **)(v9 + 24);
  v16 = (v10 + v14 - 1) / v10;
  v17 = (((v16 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( v15 && *(_QWORD *)(v9 + 32) < (unsigned __int64)v17 )
  {
    ExFreePoolWithTag(v15, 0x624A7350u);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    goto LABEL_32;
  }
  if ( !v15 )
  {
LABEL_32:
    result = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v9 + 24) = result;
    if ( !result )
      return result;
    *(_QWORD *)(v9 + 16) = result;
    *(_DWORD *)(v9 + 8) = 8 * v17;
    *(_QWORD *)(v9 + 32) = v17;
    v7 = a3;
    goto LABEL_21;
  }
  if ( v11 >= 8 * v17 )
  {
    memset_0(v15, 0, v17);
  }
  else if ( v11 )
  {
    RtlCopyBitMap((unsigned int *)(v9 + 8), v9 + 8, v11);
    RtlClearBits((PRTL_BITMAP)(v9 + 8), 0, v11);
  }
LABEL_21:
  v18 = *(__int64 **)(v9 + 24);
  BitMapHeader.SizeOfBitMap = v16;
  if ( v11 > 0x40 )
    LOBYTE(v11) = 64;
  *v18 = v12 & ((1LL << v11) - 1) | *v18 & ~((1LL << v11) - 1);
  BitMapHeader.Buffer = *(unsigned int **)(v9 + 24);
  result = 100 * RtlNumberOfSetBits(&BitMapHeader) / v16;
  if ( (unsigned int)result >= 0x3C )
  {
    *a4 = 3;
  }
  else if ( (unsigned int)result >= 0x28 )
  {
    *a4 = 2;
  }
  else if ( (unsigned int)result >= 0x14 )
  {
    *a4 = 1;
  }
  if ( v7 )
    return (__int64)memset_0(*(void **)(v9 + 24), 0, *(_QWORD *)(v9 + 32));
  return result;
}
