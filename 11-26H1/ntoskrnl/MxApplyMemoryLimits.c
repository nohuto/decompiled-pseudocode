/*
 * XREFs of MxApplyMemoryLimits @ 0x140CFB348
 * Callers:
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MxApplyMemoryLimits(__int64 a1)
{
  __int64 *v1; // r15
  __int64 result; // rax
  ULONG_PTR v3; // r11
  __int64 v4; // rbp
  __int64 *v5; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // r9
  _QWORD *v8; // r14
  ULONG_PTR v9; // rsi
  __int64 *v10; // rdi
  ULONG_PTR v11; // rbx
  ULONG_PTR BugCheckParameter4; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // rcx
  bool v17; // zf
  ULONG_PTR v18; // r10
  _QWORD *v19; // r11
  _QWORD *v20; // rsi
  _QWORD *v21; // r8
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rdi
  __int64 v24; // rbx

  v1 = (__int64 *)(a1 + 32);
  result = 0x2000000000LL;
  v3 = qword_140E2D8A0;
  v4 = KeFeatureBits & 0x2000000000LL;
  v5 = *(__int64 **)(a1 + 32);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = qword_140E2D920 + 1;
  while ( v5 != v1 )
  {
    v10 = (__int64 *)*v5;
    v11 = v5[4];
    BugCheckParameter4 = v5[5];
    v13 = *((unsigned int *)v5 + 6);
    if ( !v4 )
    {
      if ( (_DWORD)v13 == 38 )
      {
        v13 = 24LL;
LABEL_8:
        *((_DWORD *)v5 + 6) = v13;
        goto LABEL_9;
      }
      if ( (_DWORD)v13 == 39 )
      {
        v13 = 2LL;
        goto LABEL_8;
      }
    }
LABEL_9:
    *((_DWORD *)v5 + 7) = 0;
    if ( (unsigned int)v13 <= 0x2C )
    {
      v14 = 0x15C5C0C00048LL;
      if ( _bittest64(&v14, v13) )
        goto LABEL_22;
    }
    result = BugCheckParameter4 + v11;
    if ( BugCheckParameter4 + v11 <= v9 )
      goto LABEL_19;
    if ( (unsigned int)v13 > 0x23 || (v15 = 0xA01000134LL, !_bittest64(&v15, v13)) )
      KeBugCheckEx(0x1Au, 0x3030308uLL, v9, v11, BugCheckParameter4);
    if ( v11 < v9 )
    {
      BugCheckParameter4 = v9 - v11;
      v5[5] = v9 - v11;
LABEL_19:
      v6 += BugCheckParameter4;
      if ( (_DWORD)v13 == 2 || (_DWORD)v13 == 24 )
      {
        v5[2] = (__int64)v8;
        v7 += BugCheckParameter4;
        v8 = v5 + 2;
      }
      goto LABEL_22;
    }
    if ( (__int64 *)v10[1] != v5 || (result = v5[1], *(__int64 **)result != v5) )
LABEL_39:
      __fastfail(3u);
    *(_QWORD *)result = v10;
    v10[1] = result;
LABEL_22:
    v5 = v10;
  }
  if ( v6 > v3 )
  {
    result = v6 - v7;
    if ( v6 - v7 > v3 )
      KeBugCheckEx(0x1Au, 0x3030310uLL, v3, v6, v7);
    v16 = 0LL;
    v18 = v6 - v3;
    v17 = v6 == v3;
    v19 = 0LL;
    if ( !v17 )
    {
      do
      {
        v20 = (_QWORD *)*v8;
        v21 = v8 - 2;
        v22 = v8[3];
        v23 = v18 - v16;
        if ( v22 <= v18 - v16 )
          v23 = v8[3];
        result = v22 - v23;
        v21[5] = result;
        if ( result )
        {
          v19 = v8;
        }
        else
        {
          v24 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 )
            goto LABEL_39;
          result = v21[1];
          if ( *(_QWORD **)result != v21 )
            goto LABEL_39;
          *(_QWORD *)result = v24;
          *(_QWORD *)(v24 + 8) = result;
          if ( v19 )
            *v19 = v20;
        }
        v16 += v23;
        v8 = v20;
      }
      while ( v16 != v18 );
    }
    v6 -= v16;
    v7 -= v16;
  }
  qword_14101FBF8 = v7;
  qword_14101FC00 = v6;
  qword_140E3D550 = v6;
  return result;
}
