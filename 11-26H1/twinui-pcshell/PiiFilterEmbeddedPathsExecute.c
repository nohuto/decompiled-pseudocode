/*
 * XREFs of PiiFilterEmbeddedPathsExecute @ 0x1806765FC
 * Callers:
 *     PiiFilterExecute @ 0x180676A30 (PiiFilterExecute.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     AslFree @ 0x18015C31C (AslFree.c)
 *     RtlStringCopyWorkerW @ 0x1801A5C04 (RtlStringCopyWorkerW.c)
 *     _o_iswspace_0 @ 0x1802C9E48 (_o_iswspace_0.c)
 *     ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z @ 0x1806763E8 (-GetValue@RtlNameValueArray@@QEBAPEBG_K@Z.c)
 *     ?PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z @ 0x18067650C (-PiipIsInvalidEmailCharacter@@YAHGHAEAH@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180676590 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     AslStringUpper @ 0x180676DA4 (AslStringUpper.c)
 */

__int64 __fastcall PiiFilterEmbeddedPathsExecute(unsigned __int16 *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  wchar_t *Heap; // r13
  int v8; // edi
  unsigned __int16 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // ebp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 *v16; // rdx
  RtlNameValueArray *v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  const unsigned __int16 *Value; // r12
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r15
  wchar_t *v25; // rax
  __int64 v26; // rax
  unsigned __int16 *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  const wchar_t *v30; // rcx
  unsigned __int16 *i; // rdx
  wchar_t *v32; // rax
  const wchar_t *j; // rcx
  wchar_t *v34; // rdi
  int v35; // ebp
  wchar_t *v36; // rbx
  int v37; // eax
  char *v38; // rdi
  unsigned __int64 v39; // rcx
  wchar_t *v40; // rax
  unsigned __int64 v42; // [rsp+68h] [rbp+10h] BYREF

  v42 = a2;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  if ( Heap )
  {
    v9 = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    if ( v9 )
    {
      v8 = RtlStringCopyWorkerW(a1, 260LL, v10, a4);
      if ( v8 >= 0 )
      {
        v12 = a3[2];
        v13 = 0;
        if ( v12 + a3[8] )
        {
          while ( 1 )
          {
            v14 = v13;
            if ( v13 >= v12 )
            {
              v17 = (RtlNameValueArray *)(a3 + 6);
              v18 = v13 - v12;
              v16 = 0LL;
              if ( v18 < a3[8] )
              {
                v19 = a3[7];
                v42 = 0LL;
                if ( (int)ULongLongMult(v19, v18, &v42) < 0
                  || (v16 = (__int64 *)(a3[11] + v42), (unsigned __int64)v16 < a3[11]) )
                {
                  v16 = 0LL;
                }
              }
              v14 = v13 - a3[2];
            }
            else
            {
              v15 = a3[1];
              v42 = 0LL;
              if ( (int)ULongLongMult(v15, v13, &v42) < 0
                || (v16 = (__int64 *)(a3[5] + v42), (unsigned __int64)v16 < a3[5]) )
              {
                v16 = 0LL;
              }
              v17 = (RtlNameValueArray *)a3;
            }
            v20 = *v16;
            Value = RtlNameValueArray::GetValue(v17, v14);
            v8 = RtlStringCopyWorkerW(v9, 260LL, v22, (__int64)a1);
            if ( v8 < 0 )
              break;
            AslStringUpper(v9);
            v8 = RtlStringCopyWorkerW(Heap, 260LL, v23, v20);
            if ( v8 < 0 )
              break;
            v24 = -1LL;
            do
              ++v24;
            while ( Heap[v24] );
            if ( v24 && (AslStringUpper(Heap), (v25 = wcsstr(v9, Heap)) != 0LL) )
            {
              v26 = v25 - v9;
              a1[v26] = 0;
              v27 = &a1[v24 + v26];
              if ( v27 >= a1 + 260 )
                break;
              v8 = RtlStringCopyWorkerW(v9, 260LL, v11, (__int64)v27);
              if ( v8 < 0 )
                break;
              v8 = RtlStringCchCatW(a1, v28, Value);
              if ( v8 < 0 )
                break;
              v8 = RtlStringCchCatW(a1, v29, v9);
              if ( v8 < 0 )
                break;
            }
            else
            {
              ++v13;
            }
            v12 = a3[2];
            if ( v13 >= v12 + a3[8] )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          v8 = RtlStringCopyWorkerW(v9, 260LL, v11, (__int64)a1);
          if ( v8 >= 0 )
          {
            AslStringUpper(v9);
            v30 = v9;
            while ( 1 )
            {
              v32 = wcsstr(v30, L"\\USERS\\");
              if ( !v32 )
                break;
              v30 = v32 + 7;
              for ( i = &a1[v32 + 7 - v9]; *v30 && *v30 != 92 && i < a1 + 260; ++i )
              {
                ++v30;
                *i = 120;
              }
            }
            for ( j = a1; ; j = v36 )
            {
              v40 = wcschr(j, 0x40u);
              v36 = v40;
              if ( !v40 || !*v40 )
                break;
              v34 = v40 - 1;
              LODWORD(v42) = 0;
              v35 = 0;
              while ( *++v36 && !(unsigned int)PiipIsInvalidEmailCharacter(*v36, 0, (int *)&v42) )
              {
                if ( *v36 == 46 )
                  v35 = 1;
              }
              if ( (unsigned int)o_iswspace_0(*v36) || !*v36 || (v37 = 0, *v36 == 62) )
                v37 = 1;
              if ( v35 && v37 )
              {
                --v36;
                LODWORD(v42) = 0;
                while ( v34 >= a1 )
                {
                  if ( (unsigned int)PiipIsInvalidEmailCharacter(*v34, 1, (int *)&v42) )
                  {
                    if ( *v34 != 60 && !(unsigned int)o_iswspace_0(*v34) )
                      goto LABEL_63;
                    break;
                  }
                  --v34;
                }
                if ( !(_DWORD)v42 )
                {
                  v38 = (char *)(v34 + 1);
                  v39 = (unsigned __int64)((char *)v36 - v38 + 2) >> 1;
                  if ( v38 > (char *)v36 )
                    v39 = 0LL;
                  if ( v39 )
                  {
                    while ( v39 )
                    {
                      *(_WORD *)v38 = 35;
                      v38 += 2;
                      --v39;
                    }
                  }
                }
              }
LABEL_63:
              ;
            }
            v8 = 0;
          }
        }
      }
    }
    else
    {
      v8 = -1073741801;
    }
    AslFree(NtCurrentPeb()->ProcessHeap, Heap);
    if ( v9 )
      AslFree(NtCurrentPeb()->ProcessHeap, v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
