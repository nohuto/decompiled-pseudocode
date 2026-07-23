/*
 * XREFs of WmipInsertStaticNames @ 0x140A0E4A4
 * Callers:
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipQueryAllData @ 0x140A0DCD8 (WmipQueryAllData.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WmipStaticInstanceNameSize @ 0x140A0E768 (WmipStaticInstanceNameSize.c)
 */

unsigned __int64 __fastcall WmipInsertStaticNames(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rbx
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  _DWORD *v12; // rdx
  _WORD *v13; // r9
  unsigned int v14; // r10d
  _DWORD *v15; // rbp
  unsigned int v16; // r15d
  _WORD *v17; // rdi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  _WORD *v20; // rcx
  __int64 v21; // r8
  __int16 v22; // ax
  _WORD *v23; // rax
  unsigned __int64 v24; // rcx
  _WORD *v25; // rax
  unsigned __int64 v26; // rax
  char *v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  signed __int64 v30; // r9
  __int16 v31; // ax
  char *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rbx
  const wchar_t *v38; // r8
  _WORD *v39; // rdi
  unsigned int v40; // r15d
  unsigned int v41; // ebx
  __int64 v42; // [rsp+20h] [rbp-78h]
  unsigned int v43; // [rsp+28h] [rbp-70h]
  _DWORD *v44; // [rsp+30h] [rbp-68h]
  _WORD *v45; // [rsp+38h] [rbp-60h]
  wchar_t pszDest[8]; // [rsp+40h] [rbp-58h] BYREF

  result = *(unsigned int *)(a3 + 16);
  if ( (result & 3) != 0 )
  {
    result = *a1;
    v7 = *(unsigned int *)(a3 + 72);
    if ( (int)result + 3 >= (unsigned int)result )
    {
      v8 = (result + 3) & 0xFFFFFFFC;
      v9 = v8;
      result = WmipStaticInstanceNameSize(a3);
      v10 = result;
      if ( (unsigned int)result <= ~v8 )
      {
        v11 = result + v8;
        LODWORD(v42) = v11;
        if ( v11 > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = v11;
          return result;
        }
        v12 = (unsigned int *)((char *)a1 + v9);
        a1[14] = v9;
        result = *(unsigned int *)(a3 + 16);
        v13 = (_WORD *)((char *)&a1[v7] + v9);
        v45 = v13;
        if ( (result & 1) != 0 )
        {
          if ( (result & 0x20000) != 0 )
            a1[11] |= 0x10000u;
          v43 = 0;
          v14 = 0;
          if ( !(_DWORD)v7 )
            goto LABEL_7;
          v15 = (unsigned int *)((char *)a1 + v9);
          do
          {
            v16 = v10 - 2;
            v17 = v13 + 1;
            *v15++ = (_DWORD)v13 - (_DWORD)a1;
            v18 = (unsigned __int64)v16 >> 1;
            if ( v18 )
            {
              v19 = (unsigned __int64)v16 >> 1;
              v20 = v13 + 1;
              v21 = *(_QWORD *)(a3 + 88) + 4LL - (_QWORD)v17;
              do
              {
                if ( !(2147483646 - v18 + v19) )
                  break;
                v22 = *(_WORD *)((char *)v20 + v21);
                if ( !v22 )
                  break;
                *v20++ = v22;
                --v19;
              }
              while ( v19 );
              v23 = v20 - 1;
              if ( v19 )
                v23 = v20;
              *v23 = 0;
            }
            RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v14 + **(_DWORD **)(a3 + 88), v42);
            if ( v18 )
            {
              v24 = (unsigned __int64)v16 >> 1;
              v25 = v17;
              do
              {
                if ( !*v25 )
                  break;
                ++v25;
                --v24;
              }
              while ( v24 );
              v26 = v24 ? v18 - v24 : 0LL;
              if ( v24 )
              {
                v27 = (char *)&v17[v26];
                v28 = v18 - v26;
                if ( v18 != v26 )
                {
                  v29 = 2147483646LL;
                  v30 = (char *)pszDest - v27;
                  do
                  {
                    if ( !v29 )
                      break;
                    v31 = *(_WORD *)&v27[v30];
                    if ( !v31 )
                      break;
                    *(_WORD *)v27 = v31;
                    --v29;
                    v27 += 2;
                    --v28;
                  }
                  while ( v28 );
                }
                v32 = v27 - 2;
                if ( v28 )
                  v32 = v27;
                *(_WORD *)v32 = 0;
              }
            }
            v33 = -1LL;
            do
              ++v33;
            while ( v17[v33] );
            v34 = 2 * v33 + 2;
            v10 = v16 - v34;
            v14 = v43 + 1;
            result = (unsigned __int64)v34 >> 1;
            *v45 = v34;
            v43 = v14;
            v13 = &v45[result + 1];
            v45 = v13;
          }
          while ( v14 < (unsigned int)v7 );
        }
        else
        {
          if ( (result & 2) == 0 || !(_DWORD)v7 )
            goto LABEL_7;
          v35 = v7;
          v36 = 0LL;
          do
          {
            *v12 = (_DWORD)v13 - (_DWORD)a1;
            v37 = -1LL;
            v44 = v12 + 1;
            v38 = *(const wchar_t **)(v36 + *(_QWORD *)(a3 + 88));
            do
              ++v37;
            while ( v38[v37] );
            v39 = v13 + 1;
            v40 = v10 - 2;
            v41 = 2 * v37 + 2;
            *v13 = v41;
            RtlStringCbCopyW(v13 + 1, v40, v38);
            v12 = v44;
            v10 = v40 - v41;
            v36 += 8LL;
            result = (unsigned __int64)v41 >> 1;
            v13 = &v39[result];
            --v35;
          }
          while ( v35 );
        }
        v11 = v42;
LABEL_7:
        *a1 = v11;
      }
    }
  }
  return result;
}
