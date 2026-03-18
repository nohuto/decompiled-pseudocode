/*
 * XREFs of WmipInsertStaticNames @ 0x140A0F2C8
 * Callers:
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipQueryAllData @ 0x140A0EAFC (WmipQueryAllData.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     WmipStaticInstanceNameSize @ 0x140A0F578 (WmipStaticInstanceNameSize.c)
 */

unsigned __int64 __fastcall WmipInsertStaticNames(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int64 v9; // rbx
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  _DWORD *v12; // rdx
  wchar_t *v13; // rdi
  unsigned int v14; // r10d
  _DWORD *v15; // rbp
  unsigned int v16; // r12d
  _WORD *v17; // rdx
  unsigned __int64 v18; // rbx
  _WORD *v19; // rcx
  unsigned __int64 v20; // r8
  _WORD *v21; // rax
  _WORD *v22; // r10
  unsigned __int64 v23; // rcx
  _WORD *v24; // rax
  unsigned __int64 v25; // rax
  char *v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  signed __int64 v29; // r9
  __int16 v30; // ax
  char *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rbp
  __int64 v35; // r15
  __int64 v36; // rbx
  const wchar_t *v37; // r8
  unsigned int v38; // ebx
  unsigned int v39; // r12d
  wchar_t *v40; // rdi
  __int64 v41; // [rsp+20h] [rbp-68h]
  unsigned int v42; // [rsp+28h] [rbp-60h]
  _DWORD *v43; // [rsp+30h] [rbp-58h]
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

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
        LODWORD(v41) = v11;
        if ( v11 > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = v11;
          return result;
        }
        a1[14] = v9;
        v12 = (unsigned int *)((char *)a1 + v9);
        result = *(unsigned int *)(a3 + 16);
        v13 = (wchar_t *)((char *)&a1[v7] + v9);
        if ( (result & 1) != 0 )
        {
          if ( (result & 0x20000) != 0 )
            a1[11] |= 0x10000u;
          v42 = 0;
          v14 = 0;
          if ( !(_DWORD)v7 )
            goto LABEL_7;
          v15 = (unsigned int *)((char *)a1 + v9);
          do
          {
            v16 = v10 - 2;
            *v15++ = (_DWORD)v13 - (_DWORD)a1;
            v17 = (_WORD *)(*(_QWORD *)(a3 + 88) + 4LL);
            v18 = (unsigned __int64)v16 >> 1;
            if ( v18 )
            {
              v19 = v13 + 1;
              v20 = (unsigned __int64)v16 >> 1;
              do
              {
                if ( !(2147483646 - v18 + v20) )
                  break;
                if ( !*v17 )
                  break;
                *v19++ = *v17++;
                --v20;
              }
              while ( v20 );
              v21 = v19 - 1;
              if ( v20 )
                v21 = v19;
              *v21 = 0;
            }
            RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v14 + **(_DWORD **)(a3 + 88), v41);
            v22 = v13 + 1;
            if ( v18 )
            {
              v23 = (unsigned __int64)v16 >> 1;
              v24 = v13 + 1;
              do
              {
                if ( !*v24 )
                  break;
                ++v24;
                --v23;
              }
              while ( v23 );
              v25 = v23 ? v18 - v23 : 0LL;
              if ( v23 )
              {
                v26 = (char *)&v22[v25];
                v27 = v18 - v25;
                if ( v18 != v25 )
                {
                  v28 = 2147483646LL;
                  v29 = (char *)pszDest - v26;
                  do
                  {
                    if ( !v28 )
                      break;
                    v30 = *(_WORD *)&v26[v29];
                    if ( !v30 )
                      break;
                    *(_WORD *)v26 = v30;
                    --v28;
                    v26 += 2;
                    --v27;
                  }
                  while ( v27 );
                }
                v31 = v26 - 2;
                if ( v27 )
                  v31 = v26;
                *(_WORD *)v31 = 0;
              }
            }
            v32 = -1LL;
            do
              ++v32;
            while ( v22[v32] );
            v33 = 2 * v32 + 2;
            *v13 = v33;
            v14 = v42 + 1;
            v10 = v16 - v33;
            result = (unsigned __int64)v33 >> 1;
            v42 = v14;
            v13 += result + 1;
          }
          while ( v14 < (unsigned int)v7 );
        }
        else
        {
          if ( (result & 2) == 0 || !(_DWORD)v7 )
            goto LABEL_7;
          v34 = v7;
          v35 = 0LL;
          do
          {
            *v12 = (_DWORD)v13 - (_DWORD)a1;
            v36 = -1LL;
            v43 = v12 + 1;
            v37 = *(const wchar_t **)(v35 + *(_QWORD *)(a3 + 88));
            do
              ++v36;
            while ( v37[v36] );
            v38 = 2 * v36 + 2;
            v39 = v10 - 2;
            *v13 = v38;
            v40 = v13 + 1;
            RtlStringCbCopyW(v40, v39, v37);
            v12 = v43;
            v10 = v39 - v38;
            v35 += 8LL;
            result = (unsigned __int64)v38 >> 1;
            v13 = &v40[result];
            --v34;
          }
          while ( v34 );
        }
        v11 = v41;
LABEL_7:
        *a1 = v11;
      }
    }
  }
  return result;
}
