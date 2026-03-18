/*
 * XREFs of WmipPrepareWnodeSI @ 0x1409B6860
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x1409B5720 (WmipQuerySetExecuteSI.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     _wtoi @ 0x1404FBF90 (_wtoi.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B6D18 (WmipReferenceEntry.c)
 *     WmipAddProviderIdToPIList @ 0x1409B6D5C (WmipAddProviderIdToPIList.c)
 *     WmipCountedToSz @ 0x1409B733C (WmipCountedToSz.c)
 *     WmipIsNumber @ 0x1409B73AC (WmipIsNumber.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipPrepareWnodeSI(__int64 a1, __int64 a2, int *a3, void **a4, _BYTE *a5, _BYTE *a6)
{
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rdi
  volatile signed __int64 **v9; // r13
  __int64 v10; // rsi
  int v11; // r14d
  wchar_t *v12; // r12
  __int64 v13; // rax
  ULONG_PTR v14; // rsi
  int v15; // eax
  _DWORD *v16; // rax
  size_t v17; // rbx
  unsigned int v18; // r12d
  const wchar_t *v19; // rdx
  unsigned __int64 v20; // rax
  const wchar_t *v22; // rdi
  unsigned int v23; // ebx
  _BYTE *v24; // rax
  __int64 v25; // rdi
  unsigned int i; // ebx
  volatile signed __int64 **v27; // rsi
  _BYTE *v28; // rax
  wchar_t *Str1; // [rsp+30h] [rbp-59h]
  unsigned int v30; // [rsp+38h] [rbp-51h] BYREF
  volatile signed __int64 **v31; // [rsp+40h] [rbp-49h]
  int v32; // [rsp+48h] [rbp-41h] BYREF
  volatile signed __int64 **v33; // [rsp+50h] [rbp-39h] BYREF
  _BYTE *v34; // [rsp+58h] [rbp-31h]
  int *v35; // [rsp+60h] [rbp-29h]
  void **v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+70h] [rbp-19h]
  wchar_t pszDest[8]; // [rsp+78h] [rbp-11h] BYREF

  v35 = a3;
  v36 = a4;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v34 = a5;
  v31 = 0LL;
  *a5 = 1;
  v10 = *(_QWORD *)(a1 + 56);
  v30 = 0;
  if ( v10 && *(_DWORD *)(v10 + 36) )
  {
    v11 = 0;
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(v10 + 72);
    if ( (*(_DWORD *)(v10 + 16) & 1) != 0 )
    {
      *a6 = 1;
    }
    else
    {
      *a6 = 0;
      Str1 = (wchar_t *)WmipCountedToSz(a2 + *(unsigned int *)(a2 + 48));
      v12 = Str1;
      if ( Str1 )
      {
        v31 = (volatile signed __int64 **)*v36;
        v7 = v31;
        v33 = v31;
        v32 = *v35;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *(_DWORD *)(v10 + 36) )
        {
          v13 = v10 + 56;
          v14 = *(_QWORD *)(v10 + 56);
          v37 = v13;
          if ( v14 != v13 )
          {
            do
            {
              if ( (_BYTE)v9 )
                break;
              v15 = *(_DWORD *)(v14 + 16);
              if ( (v15 & 0x89000) == 0 )
              {
                if ( (v15 & 1) != 0 )
                {
                  v16 = *(_DWORD **)(v14 + 88);
                  v17 = -1LL;
                  v18 = *v16;
                  v19 = (const wchar_t *)(v16 + 1);
                  do
                    ++v17;
                  while ( v19[v17] );
                  v20 = -1LL;
                  do
                    ++v20;
                  while ( Str1[v20] );
                  if ( v20 <= v17 || wcsnicmp(Str1, v19, v17) )
                  {
                    v12 = Str1;
                  }
                  else
                  {
                    v22 = &Str1[v17];
                    v23 = wtoi(v22);
                    if ( (unsigned __int8)WmipIsNumber(v22) )
                    {
                      if ( v23 >= v18 && v23 < 0xF423F && v23 < v18 + *(_DWORD *)(v14 + 72) )
                      {
                        RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v23);
                        if ( !wcsicmp(pszDest, v22) )
                        {
                          *(_DWORD *)(a2 + 44) |= 0x80u;
                          LOBYTE(v9) = 1;
                          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                          v24 = v34;
                          *(_DWORD *)(a2 + 52) = v23 - v18;
                          *v24 = 0;
                        }
                      }
                    }
                    v12 = Str1;
                  }
                }
                else if ( (v15 & 2) != 0 )
                {
                  v25 = *(_QWORD *)(v14 + 88);
                  for ( i = 0; i < *(_DWORD *)(v14 + 72); ++i )
                  {
                    if ( !wcsicmp(*(const wchar_t **)(v25 + 8LL * i), v12) )
                    {
                      *(_DWORD *)(a2 + 44) |= 0x80u;
                      LOBYTE(v9) = 1;
                      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                      v28 = v34;
                      *(_DWORD *)(a2 + 52) = i;
                      *v28 = 0;
                      break;
                    }
                  }
                }
                else
                {
                  WmipReferenceEntry(v14);
                  v11 = WmipAddProviderIdToPIList(
                          (unsigned int)&v33,
                          (unsigned int)&v30,
                          (unsigned int)&v32,
                          (_DWORD)v31,
                          v14);
                  LOBYTE(v9) = v11 < 0;
                }
              }
              v14 = *(_QWORD *)v14;
            }
            while ( v14 != v37 );
            v7 = v33;
            v8 = v30;
          }
        }
        else
        {
          v11 = -1073741055;
        }
        ExFreePoolWithTag(v12, 0);
        KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
        v9 = v31;
      }
      else
      {
        v11 = -1073741670;
      }
      if ( *v34 )
      {
        *v35 = v8;
        *v36 = v7;
      }
      else if ( v7 )
      {
        if ( (_DWORD)v8 )
        {
          v27 = v7;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v27++);
            --v8;
          }
          while ( v8 );
          v9 = v31;
        }
        if ( v7 != v9 )
          ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741055;
  }
  return (unsigned int)v11;
}
