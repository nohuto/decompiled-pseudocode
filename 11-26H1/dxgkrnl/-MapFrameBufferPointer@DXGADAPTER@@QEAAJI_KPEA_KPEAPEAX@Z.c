/*
 * XREFs of ?MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z @ 0x14019CD78
 * Callers:
 *     DxgkMapFrameBufferPointerCB @ 0x14007CA40 (DxgkMapFrameBufferPointerCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::MapFrameBufferPointer(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        void **a5)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  __int64 v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // r9
  int v12; // esi
  __int64 result; // rax
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  void *v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = a3;
  v6 = *a4;
  if ( a2 >= *((_DWORD *)this + 74) )
  {
    v7 = a2;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11708;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"MapFrameBufferPointer Invalid physical adapter index. Index=%u",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL);
    v8 = L"MapFrameBufferPointer Size (%I64u) is not a multiple of PAGE_SIZE";
    v15 = 0LL;
    v14 = 0LL;
    WdLogGlobalForLineNumber = 11714;
LABEL_11:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v17, v14, v15, 0LL, 0LL);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 379);
  v10 = 352LL * a2;
  v11 = *(_QWORD *)(v9 + v10 + 56);
  if ( v6 + a3 > v11 || v6 + a3 < v6 )
  {
    WdLogSingleEntry3(2LL, a3, v6, v11);
    v8 = L"MapFrameBufferPointer Size (%I64u) and Offset (%I64u) is invalid. Maximum frame buffer size is %I64u";
    v15 = *(_QWORD *)(v9 + v10 + 56);
    v14 = v6;
    WdLogGlobalForLineNumber = 11726;
    goto LABEL_11;
  }
  v18 = v6;
  v16 = 0LL;
  v12 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v9 + v10 + 64), &v16, &v17, &v18, 0LL);
  if ( v12 >= 0 )
  {
    *a5 = v16;
    *a4 -= v18;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = (unsigned int)v12;
    WdLogGlobalForLineNumber = 11743;
  }
  return result;
}
