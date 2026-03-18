/*
 * XREFs of GetObjectPathNoLock @ 0x14000A9F0
 * Callers:
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     GetObjectPathNoLock @ 0x14000A9F0 (GetObjectPathNoLock.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x14000A9F0 (GetObjectPathNoLock.c)
 */

_BYTE *__fastcall GetObjectPathNoLock(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 ObjectPathNoLock; // rax
  _BYTE *v5; // rsi
  _BYTE *result; // rax
  _BYTE *v7; // rax
  int v8; // ebx
  _BYTE *v9; // rcx
  _BYTE *Pool2; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  _BYTE *v15; // r8
  unsigned __int64 v16; // r9
  _BYTE *v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  _BYTE *v22; // rax
  unsigned __int64 v23; // rax
  char *v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  char *v27; // r9
  char v28; // r8
  char *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  _BYTE *v33; // rax
  unsigned __int64 v34; // rax
  _BYTE *v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r14
  char v39; // r8

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = -1LL;
    if ( v2 )
    {
      ObjectPathNoLock = GetObjectPathNoLock(v2);
      v5 = (_BYTE *)ObjectPathNoLock;
      if ( !ObjectPathNoLock )
        return 0LL;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(ObjectPathNoLock + v11) );
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v11 + 9, 1381258079LL);
      if ( Pool2 )
      {
        v12 = -1LL;
        do
          v13 = v5[++v12] == 0;
        while ( !v13 );
        v14 = v12 + 1;
        if ( v12 != -1 )
        {
          if ( v14 > 0x7FFFFFFF )
          {
            *Pool2 = 0;
          }
          else
          {
            v15 = v5;
            v16 = 2147483646 - v14;
            v17 = Pool2;
            do
            {
              if ( !(v16 + v14) )
                break;
              if ( !*v15 )
                break;
              *v17++ = *v15++;
              --v14;
            }
            while ( v14 );
            v18 = v17 - 1;
            if ( v14 )
              v18 = v17;
            *v18 = 0;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
        {
          v19 = -1LL;
          do
            v13 = v5[++v19] == 0;
          while ( !v13 );
          v20 = v19 + 9;
          if ( v19 != -9 && v20 <= 0x7FFFFFFF )
          {
            v21 = v19 + 9;
            v22 = Pool2;
            do
            {
              if ( !*v22 )
                break;
              ++v22;
              --v21;
            }
            while ( v21 );
            if ( v21 )
            {
              v23 = v20 - v21;
              v24 = &Pool2[v20 - v21];
              v25 = v20 - v23;
              if ( v20 != v23 )
              {
                v26 = 2147483646LL;
                v27 = (char *)("." - v24);
                do
                {
                  if ( !v26 )
                    break;
                  v28 = v27[(_QWORD)v24];
                  if ( !v28 )
                    break;
                  *v24 = v28;
                  --v26;
                  ++v24;
                  --v25;
                }
                while ( v25 );
              }
              v29 = v24 - 1;
              if ( v25 )
                v29 = v24;
              *v29 = 0;
            }
          }
        }
        v30 = -1LL;
        do
          v13 = v5[++v30] == 0;
        while ( !v13 );
        v31 = v30 + 9;
        if ( v30 != -9 && v31 <= 0x7FFFFFFF )
        {
          v32 = v30 + 9;
          v33 = Pool2;
          do
          {
            if ( !*v33 )
              break;
            ++v33;
            --v32;
          }
          while ( v32 );
          v34 = v31 - v32;
          if ( v32 )
          {
            v35 = &Pool2[v34];
            v36 = v31 - v34;
            if ( v31 != v34 )
            {
              v37 = 4LL;
              v38 = a1 - (_QWORD)v35;
              do
              {
                if ( !v37 )
                  break;
                v39 = v35[v38 + 40];
                if ( !v39 )
                  break;
                *v35 = v39;
                --v37;
                ++v35;
                --v36;
              }
              while ( v36 );
            }
            v7 = v35 - 1;
            if ( v36 )
              v7 = v35;
            *v7 = 0;
          }
        }
      }
      ExFreePoolWithTag(v5, 0x5254535Fu);
      if ( !Pool2 )
        return Pool2;
      goto LABEL_9;
    }
    result = (_BYTE *)ExAllocatePool2(64LL, 8LL, 1381258079LL);
    Pool2 = result;
    if ( result )
    {
      *result = 92;
      do
LABEL_9:
        ++v3;
      while ( Pool2[v3] );
      v8 = v3 - 1;
      if ( v8 >= 0 )
      {
        v9 = &Pool2[v8];
        do
        {
          if ( *v9 != 95 )
            break;
          *v9-- = 0;
        }
        while ( v9 - Pool2 >= 0 );
      }
      return Pool2;
    }
  }
  else
  {
    result = (_BYTE *)ExAllocatePool2(64LL, 1LL, 1381258079LL);
    if ( result )
      *result = 0;
  }
  return result;
}
