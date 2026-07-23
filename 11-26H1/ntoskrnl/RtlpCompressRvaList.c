/*
 * XREFs of RtlpCompressRvaList @ 0x140A20E50
 * Callers:
 *     RtlCreateRvaList @ 0x140A20C94 (RtlCreateRvaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpSetRvaListRvaStateBits @ 0x140A21070 (RtlpSetRvaListRvaStateBits.c)
 */

__int64 __fastcall RtlpCompressRvaList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _QWORD *a6, int *a7)
{
  _DWORD *v7; // rdi
  unsigned __int32 *v8; // r13
  unsigned int v9; // r15d
  int v11; // r12d
  _BYTE *v12; // rsi
  unsigned int v13; // r14d
  int v14; // eax
  int v15; // ebx
  __int64 v16; // r8
  int v17; // r10d
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  __int64 result; // rax
  unsigned __int32 v27[18]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int32 v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v7 = a5;
  v8 = &v29;
  v9 = 0;
  v29 = 0;
  v11 = 0;
  if ( !a5 )
    v8 = 0LL;
  v12 = a5;
  v13 = 0;
  v14 = guard_dispatch_icall_no_overrides(a2, (__int64)v8);
  v15 = v14;
  if ( !v14 )
  {
    v9 = -1073741811;
    goto LABEL_34;
  }
  if ( v7 )
  {
    v16 = v29;
    v12 = v7 + 1;
    *v7 = v14;
    RtlpSetRvaListRvaStateBits(a1, 0LL, v16);
  }
  v13 = 4;
  v11 = 1;
  v17 = v15;
LABEL_7:
  while ( v15 != v17 )
  {
LABEL_18:
    v22 = 0;
    v23 = v17 - v15;
    while ( v22 < 4 )
    {
      v24 = *((_DWORD *)RtlpRvaCompressionTableScales + v22);
      if ( v23 >= v24 )
      {
        v25 = v23 / v24;
        if ( v25 >= 0x3F )
          v25 = 63;
        if ( v12 )
          *v12++ = v25 | ((_BYTE)v22 << 6);
        ++v13;
        v15 += v25 * v24;
        if ( v15 == v17 )
        {
          if ( v22 != 3 )
          {
            if ( v12 )
              *v12++ = -64;
            ++v13;
          }
          goto LABEL_7;
        }
        goto LABEL_18;
      }
      ++v22;
    }
  }
  v18 = v17;
  v19 = guard_dispatch_icall_no_overrides(a2, (__int64)v8);
  v17 = v19;
  if ( !v19 )
    goto LABEL_33;
  if ( v19 > v18 )
  {
    if ( v12 )
    {
      v27[0] = v29;
      if ( v29 )
      {
        v20 = *(_DWORD *)(a1 + 8);
        if ( v20 > 1 )
        {
          v21 = 0;
          do
          {
            if ( _bittest((const signed __int32 *)v27, v21) )
              *(_BYTE *)(*(_QWORD *)(a1 + 40) + ((v11 * v20 + (unsigned __int64)v21) >> 3)) |= 1 << ((v11 * v20 + v21) & 7);
            ++v21;
          }
          while ( v21 < *(_DWORD *)(a1 + 8) );
        }
      }
    }
    ++v11;
    goto LABEL_18;
  }
  v9 = -1073741701;
LABEL_33:
  v7 = a5;
LABEL_34:
  if ( !v7 )
    *a6 = v13;
  result = v9;
  if ( a7 )
    *a7 = v11;
  return result;
}
