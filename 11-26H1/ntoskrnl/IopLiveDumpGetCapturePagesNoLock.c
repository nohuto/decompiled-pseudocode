/*
 * XREFs of IopLiveDumpGetCapturePagesNoLock @ 0x1405D21E0
 * Callers:
 *     IopLiveDumpGetCapturePages @ 0x1405D20F0 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1405D26D8 (IopLiveDumpGetNtMergePages.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall IopLiveDumpGetCapturePagesNoLock(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6,
        char a7)
{
  __int64 v8; // r8
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 i; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-88h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-80h]
  _QWORD v24[3]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-60h] BYREF

  v8 = -1LL;
  v22 = a4;
  v23 = a1;
  *a5 = 0;
  v10 = *(_QWORD *)(a2 + 48);
  if ( v10 != -1LL )
  {
    v11 = 0;
    while ( v11 < a4 )
    {
      v12 = *a1;
      v13 = a1[1];
      v14 = v10 & -(__int64)(v10 < *a1);
      v15 = *a1 - 1;
      while ( 1 )
      {
        if ( v15 - v14 == -1LL )
          goto LABEL_6;
        v17 = (_QWORD *)(v13 + 8 * (v14 >> 6));
        for ( i = ~*v17 | ((1LL << v14) - 1); i == -1; i = ~*v17 )
        {
          if ( (unsigned __int64)++v17 > v13 + 8 * (v15 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v19, ~i);
        v16 = ((__int64)((__int64)v17 - v13) >> 3 << 6) + v19;
        if ( v16 > v15 )
        {
LABEL_6:
          v16 = -1LL;
        }
        else if ( v16 != -1LL )
        {
          break;
        }
        if ( !v14 )
          break;
        v20 = v10 + 1;
        if ( v10 + 1 > v12 )
          v20 = v12;
        v15 = v20 - 1;
        v14 = 0LL;
      }
      if ( v16 < v10 || v16 == -1LL )
        goto LABEL_21;
      v10 = v16 + 1;
      a4 = v22;
      *(_QWORD *)(a3 + 8LL * (*a5)++) = v16;
      v11 = *a5;
      a1 = v23;
    }
    v8 = *(_QWORD *)(a3 + 8LL * (v11 - 1)) + 1LL;
  }
LABEL_21:
  *(_QWORD *)(a2 + 48) = v8;
  if ( *a5 )
  {
    *a6 = *(_QWORD *)(a2 + 56);
    v21 = *(_QWORD *)(a2 + 56) + 1LL;
    *(_QWORD *)(a2 + 56) = v21;
    *(_DWORD *)(a2 + 40) = *a5;
    if ( a7 )
    {
      v25[2] = v21;
      v24[0] = L"ChunkIndex";
      v24[1] = L"PageCount";
      v24[2] = L"NACI";
      v25[0] = *a6;
      v25[1] = *a5;
      IopLiveDumpTraceEventGeneric(L"IopLiveDumpGetCapturePagesResult", 3LL, v24, v25);
    }
  }
}
