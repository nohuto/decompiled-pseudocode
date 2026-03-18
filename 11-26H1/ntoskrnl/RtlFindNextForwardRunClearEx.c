/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x140456B40
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
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r11
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax

  v3 = *a1;
  result = 0LL;
  if ( *a1 <= a2 )
  {
    *a3 = a2;
  }
  else
  {
    v6 = a1[1];
    v7 = v6 + 8 * ((v3 - 1) >> 6);
    v8 = (_QWORD *)(v6 + 8 * (a2 >> 6));
    v9 = v8 + 1;
    v10 = *v8 | ((1LL << a2) - 1);
    while ( 1 )
    {
      v11 = ~v10;
      if ( v11 )
        break;
      if ( (unsigned __int64)v9 > v7 )
      {
        *a3 = v3;
        return result;
      }
      v10 = v8[1];
      ++v8;
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v11);
    v13 = (unsigned int)v12 + ((__int64)((__int64)v8 - v6) >> 3 << 6);
    if ( v13 <= v3 )
    {
      v14 = ~(v11 | ((1LL << v12) - 1));
      while ( !v14 )
      {
        result += 64LL;
        if ( (unsigned __int64)(v8 + 1) > v7 )
        {
          v15 = 64LL;
          goto LABEL_14;
        }
        v14 = v8[1];
        ++v8;
      }
      _BitScanForward64((unsigned __int64 *)&v15, v14);
LABEL_14:
      v16 = v15 + ((__int64)((__int64)v8 - v6) >> 3 << 6);
      v17 = v3;
      if ( v16 <= v3 )
        v17 = v16;
      result = v17 - v13;
    }
    else
    {
      v13 = v3;
    }
    *a3 = v13;
  }
  return result;
}
