/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x14044DE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax

  v3 = *a1;
  v4 = 0LL;
  if ( *a1 <= a2 )
  {
    *a3 = a2;
    return 0LL;
  }
  else
  {
    v6 = a1[1];
    v7 = v6 + 8 * ((v3 - 1) >> 6);
    v8 = *(_QWORD *)(v6 + 8 * (a2 >> 6)) | ((1LL << a2) - 1);
    v9 = v6 + 8 * (a2 >> 6);
    for ( i = v9 + 8; ; i += 8LL )
    {
      v11 = ~v8;
      if ( v11 )
        break;
      if ( i > v7 )
      {
        result = 0LL;
        *a3 = v3;
        return result;
      }
      v8 = *(_QWORD *)(v9 + 8);
      v9 += 8LL;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v11);
    v13 = (unsigned int)v12 + ((__int64)(v9 - v6) >> 3 << 6);
    if ( v13 <= v3 )
    {
      v15 = ~(v11 | ((1LL << v12) - 1));
      while ( !v15 )
      {
        if ( v9 + 8 > v7 )
        {
          v16 = 64LL;
          goto LABEL_15;
        }
        v15 = *(_QWORD *)(v9 + 8);
        v9 += 8LL;
      }
      _BitScanForward64((unsigned __int64 *)&v16, v15);
LABEL_15:
      v17 = v3;
      v18 = v16 + ((__int64)(v9 - v6) >> 3 << 6);
      if ( v18 <= v3 )
        v17 = v18;
      v4 = v17 - v13;
    }
    else
    {
      v13 = v3;
    }
    *a3 = v13;
    return v4;
  }
}
