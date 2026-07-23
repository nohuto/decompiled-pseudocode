/*
 * XREFs of qsort_s @ 0x140539760
 * Callers:
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD_EX@1@@Z @ 0x140210840 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     WheapFormatBadPageList @ 0x1406DA37C (WheapFormatBadPageList.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  char *v7; // rsi
  char *v9; // r15
  __int64 v10; // rcx
  rsize_t v11; // rdi
  char *v12; // rbx
  char *i; // rdi
  int v14; // eax
  char *v15; // rcx
  rsize_t v16; // r8
  char *v17; // rdx
  rsize_t v18; // rbx
  char v19; // cl
  char *v20; // rdi
  rsize_t v21; // r8
  char *v22; // rdx
  char *v23; // r9
  char v24; // cl
  rsize_t v25; // r8
  char *v26; // rdx
  char *v27; // r9
  char v28; // cl
  rsize_t v29; // r8
  char *v30; // rdx
  signed __int64 v31; // r9
  char v32; // cl
  char *v33; // rbx
  char *v34; // rsi
  char *v35; // rbp
  rsize_t v36; // r8
  char *v37; // rdx
  __int64 v38; // r9
  char v39; // cl
  char *v40; // rax
  __int64 v41; // [rsp+30h] [rbp-448h]
  char *v42; // [rsp+38h] [rbp-440h]
  _QWORD v43[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v44[62]; // [rsp+230h] [rbp-248h] BYREF

  v42 = (char *)Base;
  v7 = (char *)Base;
  memset_0(v43, 0, sizeof(v43));
  memset_0(v44, 0, sizeof(v44));
  if ( (v7 || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      guard_check_icall_no_overrides(PtFuncCompare);
      v9 = &v7[SizeOfElements * (NumOfElements - 1)];
      v10 = 0LL;
      v41 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = (v9 - v7) / SizeOfElements + 1;
          if ( v11 <= 8 )
          {
            if ( v9 > v7 )
            {
              do
              {
                v12 = v7;
                for ( i = &v7[SizeOfElements]; i <= v9; v12 = v15 )
                {
                  v14 = guard_dispatch_icall_no_overrides(Context, i);
                  v15 = i;
                  if ( v14 <= 0 )
                    v15 = v12;
                  i += SizeOfElements;
                }
                v16 = SizeOfElements;
                v17 = v9;
                if ( v12 != v9 )
                {
                  v18 = v12 - v9;
                  do
                  {
                    v19 = v17[v18];
                    v17[v18] = *v17;
                    *v17++ = v19;
                    --v16;
                  }
                  while ( v16 );
                }
                v9 -= SizeOfElements;
              }
              while ( v9 > v7 );
              v10 = v41;
            }
            goto LABEL_18;
          }
          v20 = &v7[SizeOfElements * (v11 >> 1)];
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v7, v20) > 0 )
          {
            v21 = SizeOfElements;
            v22 = v20;
            if ( v7 != v20 )
            {
              v23 = (char *)(v7 - v20);
              do
              {
                v24 = v22[(_QWORD)v23];
                v22[(_QWORD)v23] = *v22;
                *v22++ = v24;
                --v21;
              }
              while ( v21 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v7, v9) > 0 )
          {
            v25 = SizeOfElements;
            v26 = v9;
            if ( v7 != v9 )
            {
              v27 = (char *)(v7 - v9);
              do
              {
                v28 = v26[(_QWORD)v27];
                v26[(_QWORD)v27] = *v26;
                *v26++ = v28;
                --v25;
              }
              while ( v25 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v20, v9) > 0 )
          {
            v29 = SizeOfElements;
            v30 = v9;
            if ( v20 != v9 )
            {
              v31 = v20 - v9;
              do
              {
                v32 = v30[v31];
                v30[v31] = *v30;
                *v30++ = v32;
                --v29;
              }
              while ( v29 );
            }
          }
          v33 = v7;
          v34 = v9;
          while ( 1 )
          {
            if ( v20 > v33 )
            {
              while ( 1 )
              {
                v33 += SizeOfElements;
                if ( v33 >= v20 )
                  break;
                if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v20) > 0 )
                  goto LABEL_39;
              }
            }
            do
              v33 += SizeOfElements;
            while ( v33 <= v9 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v20) <= 0 );
            do
            {
LABEL_39:
              v35 = v34;
              v34 -= SizeOfElements;
            }
            while ( v34 > v20 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v34, v20) > 0 );
            if ( v34 < v33 )
              break;
            v36 = SizeOfElements;
            v37 = v34;
            if ( v34 != v33 )
            {
              v38 = v33 - v34;
              do
              {
                v39 = v37[v38];
                v37[v38] = *v37;
                *v37++ = v39;
                --v36;
              }
              while ( v36 );
            }
            v40 = v33;
            if ( v20 != v34 )
              v40 = v20;
            v20 = v40;
          }
          if ( v20 < v35 )
          {
            while ( 1 )
            {
              v35 -= SizeOfElements;
              if ( v35 <= v20 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v35, v20) )
              {
                v7 = v42;
                goto LABEL_55;
              }
            }
          }
          v7 = v42;
          do
            v35 -= SizeOfElements;
          while ( v35 > v42 && !((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v35, v20) );
LABEL_55:
          v10 = v41;
          if ( v35 - v7 >= v9 - v33 )
            break;
          if ( v33 < v9 )
          {
            v43[v41] = v33;
            v44[v41] = v9;
            v10 = ++v41;
          }
          if ( v7 >= v35 )
          {
LABEL_18:
            v41 = --v10;
            if ( v10 < 0 )
              return;
            v7 = (char *)v43[v10];
            v9 = (char *)v44[v10];
            v42 = v7;
          }
          else
          {
            v9 = v35;
          }
        }
        if ( v7 < v35 )
        {
          v43[v41] = v7;
          v44[v41] = v35;
          v10 = ++v41;
        }
        if ( v33 >= v9 )
          goto LABEL_18;
        v7 = v33;
        v42 = v33;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
