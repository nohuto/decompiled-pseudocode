/*
 * XREFs of IvtGrowPasidTable @ 0x1405A9220
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     IvtExtendScalableModePasidTables @ 0x1405A8BA0 (IvtExtendScalableModePasidTables.c)
 */

__int64 __fastcall IvtGrowPasidTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  int v6; // r15d
  __int64 result; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  int v13; // r12d
  unsigned int v14; // r14d
  size_t Size; // [rsp+90h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF

  v6 = *(_DWORD *)(a3 + 48);
  if ( a4 >= 0x100000 )
    return 3221225485LL;
  v11 = *(_DWORD **)(a2 + 80);
  v12 = 0LL;
  v13 = a5;
  v16 = 0LL;
  Size = (size_t)v11;
  if ( v11 )
  {
    v14 = v11[9];
    if ( v11[11] != v6 )
      return 3221225659LL;
    result = IvtExtendScalableModePasidTables(a1, (__int64)v11, a4, 1);
    if ( (int)result >= 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = 0;
    result = 3221225473LL;
  }
  if ( a4 < v14 )
    return result;
  result = IvtAllocateScalableModePasidTables(a1, a2, v6, a4, a4, v13, 1, (size_t *)&v16, &Size);
  if ( (int)result < 0 )
    return result;
  v11 = (_DWORD *)Size;
  v12 = v16;
LABEL_12:
  if ( v11 != (_DWORD *)v12 )
    *(_QWORD *)(a2 + 88) = v12;
  if ( v11 && v11[12] != v13 )
  {
    if ( v12 )
      *(_DWORD *)(v12 + 48) = 1;
    else
      v11[12] = 1;
  }
  *(_DWORD *)(a2 + 96) = a6;
  return result;
}
