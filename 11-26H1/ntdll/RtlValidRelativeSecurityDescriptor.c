/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x1800DEBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 */

bool __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v14; // rax
  unsigned int v15; // ebx

  if ( a2 < 0x14 || *(_BYTE *)a1 != 1 || *(__int16 *)(a1 + 2) >= 0 )
    return 0;
  v5 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 < 0x14 )
      return 0;
    if ( (unsigned int)v5 >= a2 )
      return 0;
    v6 = a2 - v5;
    if ( a2 - (unsigned int)v5 < 0xC )
      return 0;
    if ( (v5 & 3) != 0 )
      return 0;
    if ( *(_BYTE *)(v5 + a1) != 1 )
      return 0;
    v7 = *(unsigned __int8 *)(v5 + a1 + 1);
    if ( (unsigned __int8)v7 > 0xFu || v6 < 4 * v7 + 8 )
      return 0;
  }
  else if ( (a3 & 1) != 0 )
  {
    return 0;
  }
  v8 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 < 0x14 )
      return 0;
    if ( (unsigned int)v8 >= a2 )
      return 0;
    v9 = a2 - v8;
    if ( a2 - (unsigned int)v8 < 0xC )
      return 0;
    if ( (v8 & 3) != 0 )
      return 0;
    if ( *(_BYTE *)(v8 + a1) != 1 )
      return 0;
    v10 = *(unsigned __int8 *)(v8 + a1 + 1);
    if ( (unsigned __int8)v10 > 0xFu || v9 < 4 * v10 + 8 )
      return 0;
  }
  else if ( (a3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)v11 < 0x14 )
        return 0;
      if ( (unsigned int)v11 >= a2 )
        return 0;
      v12 = a2 - v11;
      if ( v12 < 8 || (v11 & 3) != 0 || v12 < *(unsigned __int16 *)(a1 + v11 + 2) || !RtlValidAcl(a1 + v11) )
        return 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    return 1;
  v14 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v14 )
    return 1;
  if ( (unsigned int)v14 < 0x14 )
    return 0;
  if ( (unsigned int)v14 >= a2 )
    return 0;
  v15 = a2 - v14;
  if ( v15 < 8 || (v14 & 3) != 0 || v15 < *(unsigned __int16 *)(a1 + v14 + 2) )
    return 0;
  return RtlValidAcl(a1 + v14) != 0;
}
