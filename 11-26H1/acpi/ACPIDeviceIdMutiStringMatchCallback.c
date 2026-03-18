/*
 * XREFs of ACPIDeviceIdMutiStringMatchCallback @ 0x140061920
 * Callers:
 *     <none>
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     ACPIConvertWideStringToUpperCaseHelper @ 0x14006AB4C (ACPIConvertWideStringToUpperCaseHelper.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIDeviceIdMutiStringMatchCallback(
        __int64 **a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rbp
  wchar_t *v10; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  __int64 *v13; // rsi
  __int64 v14; // rsi
  int v15; // edx
  unsigned int i; // r12d
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbx
  size_t v20; // r8
  __int64 v21; // rcx
  wchar_t *v22; // rax
  const wchar_t *v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rbx
  unsigned int v26; // esi
  PVOID *v27; // rbx
  __int64 v28; // rsi
  int v30; // [rsp+20h] [rbp-168h]
  unsigned __int64 v32; // [rsp+30h] [rbp-158h]
  wchar_t *Pool2; // [rsp+38h] [rbp-150h]
  wchar_t *v34[32]; // [rsp+40h] [rbp-148h] BYREF

  v6 = a3;
  v10 = 0LL;
  memset(v34, 0, sizeof(v34));
  v11 = 1;
  v12 = 0;
  if ( a2 == 1 )
  {
    v13 = *a1;
    if ( *((_DWORD *)v13 + 2) >= 0x18u )
    {
      v14 = *v13;
      if ( v14 )
      {
        if ( a6 == a4 && *(_QWORD *)(v14 + 8) >= 4uLL )
        {
          if ( *(_QWORD *)(v14 + 8) == 4LL )
          {
            return 0;
          }
          else if ( a4 <= 0x10 )
          {
            v15 = *(_DWORD *)(v14 + 16);
            v30 = v15;
            for ( i = 0; i < a4; ++i )
            {
              v17 = *(_QWORD *)(v6 + 8LL * i);
              if ( v17 && *(_DWORD *)(a5 + 4LL * i) == v15 )
              {
                v18 = -1LL;
                do
                  ++v18;
                while ( *(_BYTE *)(v17 + v18) );
                if ( (unsigned int)v18 > 0x7FFE )
                  goto LABEL_32;
                v19 = 2LL * v12;
                LOWORD(v34[v19]) = 2 * v18;
                v32 = (unsigned __int16)(2 * v18 + 2);
                WORD1(v34[v19]) = v32;
                Pool2 = (wchar_t *)ExAllocatePool2(256LL, v32, 1399874369LL);
                v34[2 * v12 + 1] = Pool2;
                if ( !Pool2 )
                  goto LABEL_32;
                v20 = (unsigned int)(v18 + 1);
                v6 = a3;
                memmove(Pool2, *(const void **)(a3 + 8LL * i), v20);
                ACPIAnsiStringToWideHelper(Pool2, v32);
                ACPIConvertWideStringToUpperCaseHelper(v21, v32);
                v15 = v30;
                ++v12;
              }
            }
            if ( !v12 )
              return 0;
            v22 = (wchar_t *)ExAllocatePool2(256LL, *(_QWORD *)(v14 + 8), 1399874369LL);
            v10 = v22;
            if ( v22 )
            {
              memmove(v22, *(const void **)v14, *(_QWORD *)(v14 + 8));
              ACPIConvertWideStringToUpperCaseHelper(v10, *(_QWORD *)(v14 + 8) - 4LL);
              v23 = v10;
              v11 = 0;
              LODWORD(v24) = 0;
LABEL_22:
              if ( *v23 )
              {
                v25 = -1LL;
                do
                  ++v25;
                while ( v23[v25] );
                v26 = 0;
                v24 = (unsigned int)(v25 + v24 + 1);
                while ( 1 )
                {
                  if ( v26 >= v12 )
                  {
                    v23 = &v10[v24];
                    goto LABEL_22;
                  }
                  if ( 2 * (unsigned __int64)(unsigned int)v25 >= LOWORD(v34[2 * v26]) && wcsstr(v23, v34[2 * v26 + 1]) )
                    break;
                  ++v26;
                }
                v11 = 2;
              }
            }
LABEL_32:
            if ( v12 )
            {
              v27 = (PVOID *)&v34[1];
              v28 = v12;
              do
              {
                if ( *v27 )
                  ExFreePoolWithTag(*v27, 0x53706341u);
                v27 += 2;
                --v28;
              }
              while ( v28 );
            }
            if ( v10 )
              ExFreePoolWithTag(v10, 0x53706341u);
          }
        }
      }
    }
  }
  return v11;
}
