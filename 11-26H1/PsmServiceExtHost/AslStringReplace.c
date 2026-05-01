/*
 * XREFs of AslStringReplace @ 0x180099B6C
 * Callers:
 *     AslStringReplaceArray @ 0x180099DCC (AslStringReplaceArray.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x18008D2FC (RtlStringCchLengthW.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall AslStringReplace(_QWORD *a1, __int64 a2, const wchar_t *a3, const void *a4)
{
  const wchar_t *v6; // rdi
  int v8; // ebx
  char *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r11
  __int64 v12; // r15
  __int64 v13; // rbx
  wchar_t *v14; // rax
  unsigned __int64 v15; // r8
  char *Heap; // rax
  PVOID v17; // r12
  char *v18; // rbx
  wchar_t *v19; // rax
  size_t v20; // r15
  wchar_t *v21; // r12
  char *v22; // rsi
  char *v23; // rbx
  char *v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h] BYREF
  PVOID v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+88h] [rbp+10h] BYREF

  v28 = a2;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v6 = (const wchar_t *)a2;
  if ( !a2 )
  {
    v8 = 0;
LABEL_22:
    AslFree(NtCurrentPeb()->ProcessHeap, 0LL);
    return (unsigned int)v8;
  }
  if ( a3 && a4 )
  {
    v8 = RtlStringCchLengthW(a2, 0x7FFFLL, &v30);
    if ( v8 < 0 )
      goto LABEL_22;
    if ( (int)RtlStringCchLengthW((__int64)a3, 0x7FFFLL, &v25) >= 0 )
    {
      v9 = v25;
      if ( v25 )
      {
        v10 = v30;
        if ( (unsigned __int64)v25 <= v30 && (int)RtlStringCchLengthW((__int64)a4, 0x7FFFLL, &v26) >= 0 )
        {
          v12 = v26;
          if ( v26 )
          {
            v13 = v11;
            v14 = wcsstr(v6, a3);
            if ( v14 )
            {
              do
              {
                ++v13;
                v14 = wcsstr(&v14[(_QWORD)v9], a3);
              }
              while ( v14 );
              if ( v13 )
              {
                v15 = v10 + v13 * (v12 - (_QWORD)v9);
                if ( v15 )
                {
                  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v15 + 2);
                  v27 = Heap;
                  v17 = Heap;
                  if ( Heap )
                  {
                    v18 = Heap;
                    v19 = wcsstr(v6, a3);
                    if ( v19 )
                    {
                      v20 = 2 * v12;
                      v21 = v19;
                      v22 = v18;
                      do
                      {
                        memcpy_0(v22, v6, 2 * (v21 - v6));
                        v23 = &v22[2 * (v21 - v6)];
                        memcpy_0(v23, a4, v20);
                        v6 = &v21[(_QWORD)v9];
                        v22 = &v23[v20];
                        v21 = wcsstr(v6, a3);
                      }
                      while ( v21 );
                      v17 = v27;
                      v25 = &v23[v20];
                      v10 = v30;
                      v18 = &v23[v20];
                    }
                    memcpy_0(v18, v6, 2 * (v10 - (((__int64)v6 - v28) >> 1)));
                    v8 = 0;
                    *a1 = v17;
                  }
                  else
                  {
                    v8 = -1073741801;
                  }
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
  }
  return AslStringDuplicate(a1, (__int64)v6);
}
