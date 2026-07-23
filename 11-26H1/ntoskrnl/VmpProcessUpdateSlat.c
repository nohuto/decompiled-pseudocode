/*
 * XREFs of VmpProcessUpdateSlat @ 0x1406C5468
 * Callers:
 *     VmpAccessFaultBatch @ 0x1406C45B0 (VmpAccessFaultBatch.c)
 * Callees:
 *     VmpFillSlat @ 0x1406C4B94 (VmpFillSlat.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall VmpProcessUpdateSlat(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 *v7; // rdi
  int v8; // ebp
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rbx
  int v11; // r10d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r12d
  __int64 v18; // r14
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22[2]; // [rsp+30h] [rbp-148h] BYREF
  char v23; // [rsp+40h] [rbp-138h] BYREF

  v5 = a3;
  v22[0] = 0LL;
  if ( a4 )
  {
    v7 = *(__int64 **)(a4 + 24);
    v8 = *(_DWORD *)a4;
  }
  else
  {
    v7 = (__int64 *)&v23;
    v8 = 16;
  }
  v9 = 0LL;
  v10 = (unsigned __int64 *)(a2 + 32);
  v11 = 0;
  v12 = a2 + 48 * v5;
  while ( (unsigned __int64)(v10 - 4) < v12 )
  {
    v13 = *v10;
    if ( (*v10 & 0x100000000000000LL) == 0 )
    {
      v14 = (v13 >> 51) & 2 | 0xD;
      if ( (v13 & 0x20000000000000LL) == 0 )
        v14 = (v13 >> 51) & 2 | 1;
      v15 = v14 | 0x200000;
      if ( (*v10 & 0x40000000000000LL) == 0 )
        v15 = v14;
      v16 = v15 | 0x8000;
      if ( (*v10 & 0x80000000000000LL) == 0 )
        v16 = v15;
      v17 = v16 | 0x2000000;
      if ( (v13 & 0x800000000000000LL) == 0 && (a5 & 0x20) != 0 )
        v17 = v16;
      if ( v11 != v17 || (_DWORD)v9 == v8 )
      {
        if ( (_DWORD)v9 )
        {
          v18 = (unsigned int)v9;
          result = VmpFillSlat(a1, v11, v9, v7, v22);
          if ( (int)result < 0 )
            return result;
          if ( v22[0] != v18 )
            return 3221225497LL;
          v13 = *v10;
          LODWORD(v9) = 0;
        }
        v11 = v17;
      }
      v20 = 2LL * (unsigned int)v9;
      v9 = (unsigned int)(v9 + 1);
      v7[v20] = v13 & 0xFFFFFFFFFFFFFLL;
      v7[v20 + 1] = v10[1];
    }
    v10 += 6;
  }
  if ( (_DWORD)v9 )
  {
    v21 = (unsigned int)v9;
    result = VmpFillSlat(a1, v11, v9, v7, v22);
    if ( (int)result < 0 )
      return result;
    if ( v22[0] != v21 )
      return 3221225497LL;
  }
  return 0LL;
}
