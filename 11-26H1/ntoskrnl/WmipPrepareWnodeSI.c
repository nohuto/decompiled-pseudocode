/*
 * XREFs of WmipPrepareWnodeSI @ 0x140A0E7D4
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     _wtoi @ 0x140538D50 (_wtoi.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipCountedToSz @ 0x140A0D210 (WmipCountedToSz.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     WmipIsNumber @ 0x140AFA4F4 (WmipIsNumber.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipPrepareWnodeSI(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        volatile signed __int64 ***a4,
        _BYTE *a5,
        _BYTE *a6)
{
  unsigned int *v7; // rbp
  volatile signed __int64 **v8; // rbx
  volatile signed __int64 **v9; // r13
  __int64 v10; // rsi
  unsigned int v11; // r14d
  int v12; // edi
  wchar_t *v13; // r12
  unsigned int v14; // ebp
  __int64 v15; // rax
  ULONG_PTR v16; // rsi
  int v17; // eax
  _DWORD *v18; // rax
  size_t v19; // rbp
  unsigned int v20; // r13d
  const wchar_t *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v24; // rax
  const wchar_t *v25; // r12
  unsigned int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int i; // ebp
  __int64 v31; // rdi
  unsigned __int64 v32; // rbp
  volatile signed __int64 **Pool2; // rax
  volatile signed __int64 **v34; // r12
  volatile signed __int64 **v35; // r13
  __int64 v36; // r12
  volatile signed __int64 **v37; // rsi
  __int64 v38; // rbp
  char v39; // [rsp+30h] [rbp-A8h]
  unsigned int v40; // [rsp+34h] [rbp-A4h]
  wchar_t *Str2; // [rsp+38h] [rbp-A0h]
  volatile signed __int64 **v42; // [rsp+48h] [rbp-90h]
  volatile signed __int64 **v43; // [rsp+50h] [rbp-88h]
  __int64 v45; // [rsp+60h] [rbp-78h]
  wchar_t pszDest[8]; // [rsp+70h] [rbp-68h] BYREF

  v7 = a3;
  v8 = 0LL;
  *a5 = 1;
  v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = 0;
  if ( v10 && *(_DWORD *)(v10 + 36) )
  {
    v12 = 0;
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(v10 + 72);
    if ( (*(_DWORD *)(v10 + 16) & 1) != 0 )
    {
      *a6 = 1;
    }
    else
    {
      *a6 = 0;
      Str2 = WmipCountedToSz((unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 48)));
      v13 = Str2;
      if ( Str2 )
      {
        v14 = *v7;
        v39 = 0;
        v40 = v14;
        v43 = *a4;
        v8 = *a4;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *(_DWORD *)(v10 + 36) )
        {
          v15 = v10 + 56;
          v16 = *(_QWORD *)(v10 + 56);
          v45 = v15;
          while ( v16 != v45 )
          {
            if ( (_BYTE)v9 )
              break;
            v17 = *(_DWORD *)(v16 + 16);
            if ( (v17 & 0x89000) == 0 )
            {
              if ( (v17 & 1) != 0 )
              {
                v18 = *(_DWORD **)(v16 + 88);
                v19 = -1LL;
                v20 = *v18;
                v21 = (const wchar_t *)(v18 + 1);
                do
                  ++v19;
                while ( v21[v19] );
                v22 = -1LL;
                do
                  ++v22;
                while ( v13[v22] );
                if ( v22 > v19 && !wcsnicmp(v13, v21, v19) )
                {
                  v25 = &v13[v19];
                  v26 = wtoi(v25);
                  if ( (unsigned __int8)WmipIsNumber(v25, v27, v28, v29) )
                  {
                    if ( v26 >= v20 && v26 < v20 + *(_DWORD *)(v16 + 72) )
                    {
                      if ( v26 >= 0xF423F )
                      {
                        LOBYTE(v9) = v39;
                        goto LABEL_16;
                      }
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v26);
                      if ( !wcsicmp(pszDest, v25) )
                      {
                        *(_DWORD *)(a2 + 44) |= 0x80u;
                        i = v26 - v20;
LABEL_32:
                        LOBYTE(v9) = 1;
                        *(_DWORD *)(a2 + 4) = *(_DWORD *)(v16 + 80);
                        *(_DWORD *)(a2 + 52) = i;
                        v39 = 1;
                        *a5 = 0;
                        goto LABEL_16;
                      }
                    }
                  }
                }
              }
              else
              {
                if ( (v17 & 2) == 0 )
                {
                  WmipReferenceEntry(v16);
                  v12 = 0;
                  v42 = v8;
                  if ( v11 != v14 )
                  {
LABEL_23:
                    v24 = v11++;
                    v42[v24] = (volatile signed __int64 *)v16;
                    goto LABEL_16;
                  }
                  v31 = v14;
                  v32 = 2LL * v14;
                  if ( v32 > 0xFFFFFFFF )
                  {
                    v35 = v8;
                  }
                  else
                  {
                    Pool2 = (volatile signed __int64 **)ExAllocatePool2(0x100uLL);
                    v34 = Pool2;
                    v35 = v8;
                    if ( Pool2 )
                    {
                      memmove(Pool2, v8, 8 * v31);
                      v12 = 0;
                      v42 = v34;
                      v8 = v34;
                      v40 = v32;
LABEL_43:
                      if ( v35 != v43 )
                        ExFreePoolWithTag(v35, 0);
                      if ( v12 < 0 )
                      {
                        LOBYTE(v9) = 1;
                        v40 = v32;
                        v39 = 1;
                        goto LABEL_16;
                      }
                      LOBYTE(v9) = v39;
                      goto LABEL_23;
                    }
                  }
                  LODWORD(v32) = v40;
                  if ( v40 )
                  {
                    do
                    {
                      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v8++);
                      --v31;
                    }
                    while ( v31 );
                  }
                  WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v16);
                  v8 = 0LL;
                  v12 = -1073741670;
                  goto LABEL_43;
                }
                v36 = *(_QWORD *)(v16 + 88);
                for ( i = 0; i < *(_DWORD *)(v16 + 72); ++i )
                {
                  if ( !wcsicmp(*(const wchar_t **)(v36 + 8LL * i), Str2) )
                  {
                    *(_DWORD *)(a2 + 44) |= 0x80u;
                    goto LABEL_32;
                  }
                }
              }
              LOBYTE(v9) = v39;
            }
LABEL_16:
            v16 = *(_QWORD *)v16;
            v14 = v40;
            v13 = Str2;
          }
        }
        else
        {
          v12 = -1073741055;
        }
        ExFreePoolWithTag(v13, 0);
        KeReleaseMutex(&WmipSMMutex, 0);
        v9 = v43;
        v7 = a3;
      }
      else
      {
        v12 = -1073741670;
      }
      if ( *a5 )
      {
        *v7 = v11;
        *a4 = v8;
      }
      else if ( v8 )
      {
        if ( v11 )
        {
          v37 = v8;
          v38 = v11;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v37++);
            --v38;
          }
          while ( v38 );
        }
        if ( v8 != v9 )
          ExFreePoolWithTag(v8, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741055;
  }
  return (unsigned int)v12;
}
