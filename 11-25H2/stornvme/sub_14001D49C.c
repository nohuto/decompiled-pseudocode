/*
 * XREFs of sub_14001D49C @ 0x14001D49C
 * Callers:
 *     sub_14001C664 @ 0x14001C664 (sub_14001C664.c)
 * Callees:
 *     sub_14001B750 @ 0x14001B750 (sub_14001B750.c)
 *     sub_14001DD70 @ 0x14001DD70 (sub_14001DD70.c)
 *     sub_14001DE08 @ 0x14001DE08 (sub_14001DE08.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14001D49C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // si
  unsigned int v6; // edi
  __int64 v7; // rdx
  char v8; // al
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int8 v11; // si
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // r10d
  unsigned int v16; // r9d

  result = *(unsigned __int16 *)(a1 + 332);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)result )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 944) + 392LL * v6;
      *(_DWORD *)(v7 + 244) &= 0xFFFFFFF0;
      if ( *(_DWORD *)(v7 + 180) )
      {
        sub_14001DE08(a1, v7, a3, 0LL);
        v8 = v5;
        if ( !v5 )
          v8 = 1;
        v5 = v8;
      }
      a3 = *(unsigned __int16 *)(a1 + 332);
      ++v6;
    }
    while ( v6 < (unsigned int)a3 );
    result = (unsigned __int16)a3;
    if ( v5 )
    {
      v9 = *(unsigned __int16 *)(a1 + 330);
      if ( (unsigned __int16)v9 >= *(_WORD *)(a1 + 234) )
        v9 = *(unsigned __int16 *)(a1 + 234);
      v10 = (8 * (unsigned int)a3 * (unsigned __int16)((v9 - 1) / (int)a3 + 1)) >> 2;
      if ( v10 )
      {
        sub_140032C80(*(_QWORD *)(*(_QWORD *)(a1 + 944) + 192LL), 0LL, 4LL * v10);
        a3 = *(unsigned __int16 *)(a1 + 332);
      }
      result = (unsigned __int16)a3;
    }
  }
  v11 = 0;
  v12 = 0;
  if ( (_WORD)result )
  {
    do
    {
      result = v12;
      v13 = *(_QWORD *)(a1 + 944) + 392LL * v12;
      if ( *(_DWORD *)(v13 + 212) )
      {
        sub_14001DD70(a1, v13, a3, 0LL);
        result = v11;
        if ( !v11 )
          result = 1LL;
        v11 = result;
      }
      ++v12;
    }
    while ( v12 < *(unsigned __int16 *)(a1 + 332) );
    if ( v11 )
    {
      v14 = (unsigned __int16)sub_14001B750((unsigned __int16 *)a1);
      result = *(_QWORD *)(a1 + 944);
      v16 = (unsigned int)(8 * v15 * v14) >> 2;
      if ( v16 )
        return sub_140032C80(*(_QWORD *)(result + 224), 0LL, 4LL * v16);
    }
  }
  return result;
}
