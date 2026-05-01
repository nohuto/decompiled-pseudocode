/*
 * XREFs of SdbpSafeAllocAndConcatW @ 0x18008F4D0
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCopyNW @ 0x18008D2AC (RtlStringCchCopyNW.c)
 *     RtlStringCchLengthW @ 0x18008D2FC (RtlStringCchLengthW.c)
 *     RtlStringCopyWorkerW_0 @ 0x18008D330 (RtlStringCopyWorkerW_0.c)
 *     RtlStringLengthWorkerW @ 0x18008D38C (RtlStringLengthWorkerW.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 __fastcall SdbpSafeAllocAndConcatW(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // rdi
  int v7; // r15d
  __int64 v10; // r11
  int v11; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  _WORD *Heap; // rax
  _WORD *v19; // r14
  int v20; // eax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp+18h] BYREF

  v27 = a3;
  v6 = a3;
  v7 = a2;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a4 )
    return 3221225714LL;
  v10 = 0x7FFFFFFFLL;
  if ( !a3 )
  {
    v11 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v27);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = "RtlStringCchLengthW failed [%x]";
      v14 = 1617LL;
LABEL_33:
      AslLogCallPrintf(1LL, "SdbpSafeAllocAndConcatW", v14, v13, v11);
      return v12;
    }
    v6 = v27;
  }
  v15 = a5;
  if ( !a5 )
  {
    v11 = RtlStringCchLengthW(a4, v10, &a5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = "RtlStringCchLengthW failed [%x]";
      v14 = 1625LL;
      goto LABEL_33;
    }
    v15 = a5;
  }
  v16 = v6 + v15;
  if ( v6 + v15 < v6 )
  {
    v14 = 1635LL;
    goto LABEL_32;
  }
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    v14 = 1642LL;
LABEL_32:
    v11 = -1073741675;
    v13 = "RtlSizeTAdd failed [%x]";
    v12 = -1073741675;
    goto LABEL_33;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v17);
  v19 = Heap;
  if ( Heap )
  {
    v20 = RtlStringCchCopyNW(Heap, v17, v7, v6);
    v12 = v20;
    if ( v20 < 0 )
    {
      v21 = 1657LL;
      v22 = "RtlStringCchCopyW failed to copy first string [%x]";
LABEL_28:
      LODWORD(v25) = v20;
      AslLogCallPrintf(1LL, "SdbpSafeAllocAndConcatW", v21, v22, v25);
      AslFree(NtCurrentPeb()->ProcessHeap, v19);
      return v12;
    }
    v26 = 0LL;
    if ( (unsigned __int64)(v17 - 1) > 0x7FFFFFFE )
      goto LABEL_24;
    v20 = RtlStringLengthWorkerW(v19, v17, &v26);
    if ( v20 >= 0 )
    {
      if ( v15 > v24 )
      {
LABEL_24:
        v12 = -1073741811;
        v20 = -1073741811;
LABEL_27:
        v21 = 1666LL;
        v22 = "RtlStringCchCatW failed to cat second string [%x]";
        goto LABEL_28;
      }
      v20 = RtlStringCopyWorkerW_0(&v19[v26], v17 - v26, v23, a4, v15);
    }
    v12 = v20;
    if ( v20 >= 0 )
    {
      *a1 = v19;
      return v12;
    }
    goto LABEL_27;
  }
  return (unsigned int)-1073741801;
}
