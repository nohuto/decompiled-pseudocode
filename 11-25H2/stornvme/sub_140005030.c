/*
 * XREFs of sub_140005030 @ 0x140005030
 * Callers:
 *     sub_140004AF0 @ 0x140004AF0 (sub_140004AF0.c)
 * Callees:
 *     sub_140019038 @ 0x140019038 (sub_140019038.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140005030(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned int v3; // r12d
  __int64 v4; // r8
  __int64 v5; // r14
  _DWORD *ScatterGatherList; // rdx
  __int64 v7; // rbx
  _QWORD *v8; // r13
  _QWORD *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r15
  int v12; // ebx
  _QWORD *v13; // rax
  bool v14; // zf
  _QWORD *v15; // rax
  __int64 PhysicalAddress; // rax
  __int64 v18; // [rsp+60h] [rbp+8h]
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v18 = a1;
  v2 = 0;
  v3 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v5 + 4225) & 6) == 2 )
  {
    ScatterGatherList = *(_DWORD **)(v5 + 4176);
    if ( !ScatterGatherList )
    {
      ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(a1, v4);
      *(_QWORD *)(v5 + 4176) = ScatterGatherList;
    }
    v7 = 0LL;
    v8 = (_QWORD *)(v5 + 4120);
    v9 = (_QWORD *)(v5 + 4120);
    v20 = 0;
    if ( *ScatterGatherList )
    {
      v4 = 1LL;
      do
      {
        if ( v2 )
        {
          sub_140032C80(v5, 0LL, 4096LL);
          ScatterGatherList = *(_DWORD **)(v5 + 4176);
          v2 = 0;
          v4 = 1LL;
        }
        a1 = 3 * v7;
        v10 = *(_QWORD *)&ScatterGatherList[6 * v7 + 4];
        v11 = (unsigned int)ScatterGatherList[6 * v7 + 6];
        if ( v11 + v10 % 4096 > 4096 )
        {
          if ( (_DWORD)v11 )
          {
            do
            {
              v12 = v10 & 0xFFF;
              if ( v2 )
              {
                sub_140032C80(v5, 0LL, 4096LL);
                v2 = 0;
              }
              *v9 = v10;
              v4 = 1LL;
              if ( (unsigned int)(v12 + v11) <= 0x1000 )
                break;
              LODWORD(v11) = v12 + v11 - 4096;
              v10 += (unsigned int)(4096 - v12);
              v13 = v9 + 1;
              if ( v9 == v8 )
                v2 = 1;
              ++v3;
              v14 = v9 == v8;
              v9 = (_QWORD *)v5;
              if ( !v14 )
                v9 = v13;
            }
            while ( (_DWORD)v11 );
            LODWORD(v7) = v20;
          }
        }
        else
        {
          *v9 = v10;
        }
        ScatterGatherList = *(_DWORD **)(v5 + 4176);
        v15 = v9 + 1;
        if ( v9 == v8 )
          v2 = 1;
        v7 = (unsigned int)(v7 + 1);
        ++v3;
        v20 = v7;
        v14 = v9 == v8;
        v9 = (_QWORD *)v5;
        if ( !v14 )
          v9 = v15;
      }
      while ( (unsigned int)v7 < *ScatterGatherList );
      if ( v3 >= 2 )
      {
        if ( v3 == 2 )
        {
          PhysicalAddress = *(_QWORD *)v5;
        }
        else
        {
          v20 = 0;
          PhysicalAddress = StorPortGetPhysicalAddress(v18, a2, v5, &v20);
        }
        *(_QWORD *)(v5 + 4128) = PhysicalAddress;
      }
    }
    if ( (unsigned int)sub_140019038(a1, ScatterGatherList, v4) )
      *(_DWORD *)(v5 + 4220) = v3;
  }
  return 0LL;
}
