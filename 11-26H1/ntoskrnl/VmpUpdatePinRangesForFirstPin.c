/*
 * XREFs of VmpUpdatePinRangesForFirstPin @ 0x1406C1DFC
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall VmpUpdatePinRangesForFirstPin(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // edi
  _QWORD **v8; // rax
  _QWORD *v9; // rbx
  bool v10; // r14
  _QWORD *v11; // rax
  __int64 Pool2; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // esi
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned __int64 v21; // [rsp+68h] [rbp+10h]
  unsigned __int64 v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v5 = 0;
  if ( a5 )
    v8 = (_QWORD **)a4;
  else
    v8 = (_QWORD **)(a1 + 56);
  v21 = (unsigned __int64)v8;
  while ( 2 )
  {
    v9 = *v8;
    v10 = 0;
    if ( !*v8 )
      goto LABEL_13;
    while ( 1 )
    {
      if ( a2 < v9[3] )
      {
        v11 = (_QWORD *)*v9;
        if ( !*v9 )
          goto LABEL_13;
        goto LABEL_11;
      }
      if ( a2 <= v9[4] )
        goto LABEL_24;
      v11 = (_QWORD *)v9[1];
      if ( !v11 )
        break;
LABEL_11:
      v9 = v11;
    }
    v10 = 1;
LABEL_13:
    if ( a5 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v14 = *(_QWORD *)(a4 + 8);
      if ( (v14 & 1) != 0 )
      {
        if ( v14 == 1 )
          Pool2 = 0LL;
        else
          Pool2 = v14 ^ (a4 | 1);
      }
      else
      {
        Pool2 = *(_QWORD *)(a4 + 8);
      }
      RtlRbRemoveNode(a4, Pool2);
    }
    v15 = a2 - (a2 & (*(_QWORD *)(a1 + 80) - 1LL));
    *(_QWORD *)(Pool2 + 24) = v15;
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 80) - 1LL + v15;
    RtlRbInsertNodeEx(v21, (unsigned __int64)v9, v10, Pool2);
    a3 = v22;
    v9 = (_QWORD *)Pool2;
LABEL_24:
    if ( !a5 )
    {
      if ( a2 <= v9[3] )
        v16 = 0;
      else
        v16 = a2 - *((_DWORD *)v9 + 6);
      v17 = a3;
      if ( a3 >= v9[4] )
        v17 = *((_DWORD *)v9 + 8);
      v18 = v17 - *((_DWORD *)v9 + 6);
      while ( v16 <= v18 )
        ++*((_BYTE *)v9 + v16++ + 40);
    }
    v19 = v9[4];
    if ( a3 > v19 )
    {
      v8 = (_QWORD **)v21;
      a2 = v19 + 1;
      continue;
    }
    return v5;
  }
}
