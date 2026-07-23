/*
 * XREFs of MiFindFreePageFileSpaceForward @ 0x1404442BC
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x140444EC4 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiFindFreePageFileSpaceForward(__int64 a1, int *a2, unsigned int a3, char a4)
{
  int v4; // r12d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v8; // edi
  int v9; // r14d
  __int64 v10; // r13
  unsigned int NextClearRunUlong; // eax
  int v12; // edx
  int v13; // esi
  int v14; // r8d
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-18h]
  _DWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  int v21; // [rsp+90h] [rbp+40h]
  int v23; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = 0;
  LODWORD(v18) = 0;
  v17 = 0LL;
  v8 = a3;
  v19[1] = 0;
  v9 = 0;
  v23 = 0;
  v10 = v5;
  v19[0] = *(_DWORD *)a1;
  v20 = *(_QWORD *)(v5 + 32);
  while ( 1 )
  {
    NextClearRunUlong = RtlFindNextClearRunUlong((unsigned int)v19, v4, a3, -1, (__int64)&v23);
    a3 = NextClearRunUlong;
    if ( !NextClearRunUlong )
      break;
    v4 = v23 + NextClearRunUlong;
    if ( NextClearRunUlong >= v6 && (NextClearRunUlong >= v8 || a4 >= 0) )
    {
      v12 = v23 & 0x1F;
      v13 = v23 - v12;
      v18 = *(_QWORD *)(v10 + 16) + 4 * ((unsigned __int64)(unsigned int)(v23 - v12) >> 5);
      LODWORD(v17) = v12 + NextClearRunUlong;
      v14 = v8;
      if ( v8 <= 0x20 )
        v14 = 32;
      v21 = v14;
      while ( 1 )
      {
        v15 = RtlFindNextClearRunUlong((unsigned int)&v17, v12, v14, v14, (__int64)&v23);
        if ( !v15 )
          break;
        v14 = v21;
        v12 = v23 + v15;
        if ( v15 > v6 )
        {
          v9 = v13 + v23;
          v6 = v15;
          if ( v15 > v8 )
            v6 = v8;
          if ( v6 == v8 )
            goto LABEL_15;
        }
      }
      if ( v6 == v8 )
        break;
    }
  }
LABEL_15:
  if ( a4 < 0 && v6 < v8 )
  {
    v6 = 0;
    v9 = 0;
  }
  result = v6;
  *a2 = v9;
  return result;
}
