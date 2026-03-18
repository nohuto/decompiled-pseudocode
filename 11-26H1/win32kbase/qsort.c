/*
 * XREFs of qsort @ 0x1401C6DA0
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDD10 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x14014E340 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     _guard_check_icall @ 0x1401C9300 (_guard_check_icall.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rdi
  char *v11; // rbx
  char *i; // rdi
  int v13; // eax
  char *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  char v18; // cl
  char *v19; // rdi
  size_t v20; // r8
  char *v21; // rdx
  signed __int64 v22; // r9
  char v23; // cl
  size_t v24; // r8
  _BYTE *v25; // rdx
  char *v26; // r9
  char v27; // cl
  size_t v28; // r8
  _BYTE *v29; // rdx
  __int64 v30; // r9
  char v31; // cl
  char *v32; // rbx
  char *v33; // rsi
  unsigned __int64 v34; // rbp
  char *v35; // rdx
  signed __int64 v36; // r9
  char v37; // cl
  char *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-448h]
  _QWORD v40[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v41[62]; // [rsp+230h] [rbp-248h] BYREF

  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = (char *)Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; v11 = v14 )
                {
                  v13 = ((__int64 (__fastcall *)(char *, char *))PtFuncCompare)(i, v11);
                  v14 = i;
                  if ( v13 <= 0 )
                    v14 = v11;
                  i += SizeOfElements;
                }
                v15 = SizeOfElements;
                v16 = v8;
                if ( v11 != v8 )
                {
                  v17 = v11 - v8;
                  do
                  {
                    v18 = v16[v17];
                    v16[v17] = *v16;
                    *v16++ = v18;
                    --v15;
                  }
                  while ( v15 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v39;
            }
            goto LABEL_18;
          }
          v19 = (char *)Base + SizeOfElements * (v10 >> 1);
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, v19) > 0 )
          {
            v20 = SizeOfElements;
            v21 = v19;
            if ( Base != v19 )
            {
              v22 = (_BYTE *)Base - v19;
              do
              {
                v23 = v21[v22];
                v21[v22] = *v21;
                *v21++ = v23;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, size_t))PtFuncCompare)(Base, v8, v20) > 0 )
          {
            v24 = SizeOfElements;
            v25 = v8;
            if ( Base != v8 )
            {
              v26 = (char *)((_BYTE *)Base - v8);
              do
              {
                v27 = v25[(_QWORD)v26];
                v25[(_QWORD)v26] = *v25;
                *v25++ = v27;
                --v24;
              }
              while ( v24 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v19, v8, v24) > 0 )
          {
            v28 = SizeOfElements;
            v29 = v8;
            if ( v19 != v8 )
            {
              v30 = v19 - v8;
              do
              {
                v31 = v29[v30];
                v29[v30] = *v29;
                *v29++ = v31;
                --v28;
              }
              while ( v28 );
            }
          }
          v32 = (char *)Base;
          v33 = v8;
          while ( 1 )
          {
            if ( v19 > v32 )
            {
              while ( 1 )
              {
                v32 += SizeOfElements;
                if ( v32 >= v19 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v19, v28) > 0 )
                  goto LABEL_39;
              }
            }
            do
              v32 += SizeOfElements;
            while ( v32 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v19, v28) <= 0 );
            do
            {
LABEL_39:
              v34 = (unsigned __int64)v33;
              v33 -= SizeOfElements;
            }
            while ( v33 > v19 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v33, v19) > 0 );
            if ( v33 < v32 )
              break;
            v28 = SizeOfElements;
            v35 = v33;
            if ( v33 != v32 )
            {
              v36 = v32 - v33;
              do
              {
                v37 = v35[v36];
                v35[v36] = *v35;
                *v35++ = v37;
                --v28;
              }
              while ( v28 );
            }
            v38 = v32;
            if ( v19 != v33 )
              v38 = v19;
            v19 = v38;
          }
          if ( (unsigned __int64)v19 < v34 )
          {
            while ( 1 )
            {
              v34 -= SizeOfElements;
              if ( v34 <= (unsigned __int64)v19 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v19) )
                goto LABEL_54;
            }
          }
          do
            v34 -= SizeOfElements;
          while ( v34 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v19) );
LABEL_54:
          v9 = v39;
          if ( (__int64)(v34 - (_QWORD)Base) >= v8 - v32 )
            break;
          if ( v32 < v8 )
          {
            v40[v39] = v32;
            v41[v39] = v8;
            v9 = ++v39;
          }
          if ( (unsigned __int64)Base >= v34 )
          {
LABEL_18:
            v39 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v40[v9];
            v8 = (char *)v41[v9];
          }
          else
          {
            v8 = (char *)v34;
          }
        }
        if ( (unsigned __int64)Base < v34 )
        {
          v40[v39] = Base;
          v41[v39] = v34;
          v9 = ++v39;
        }
        if ( v32 >= v8 )
          goto LABEL_18;
        Base = v32;
      }
    }
  }
  else
  {
    CIgnoreInputQueue::MarkInvalid(0LL);
  }
}
