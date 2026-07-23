/*
 * XREFs of WmipIncludeStaticNames @ 0x140A0C8EC
 * Callers:
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlStringCbCatW @ 0x14041D8F0 (RtlStringCbCatW.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     WmipAlign @ 0x14049DCA4 (WmipAlign.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipInsertStaticNames @ 0x140A0E4A4 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x140A0E768 (WmipStaticInstanceNameSize.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

unsigned int *__fastcall WmipIncludeStaticNames(unsigned int *Src, unsigned int a2)
{
  unsigned int *v3; // rbx
  ULONG_PTR v4; // rbp
  __int64 GEByGuid; // rdi
  unsigned int v6; // esi
  ULONG_PTR i; // rcx
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r12
  const wchar_t *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r13d
  __int64 v17; // r14
  unsigned int *v18; // rax
  unsigned int *v19; // rsi
  int v20; // eax
  _WORD *v21; // r14
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edi
  unsigned int *Pool2; // rax
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

  v3 = Src;
  v4 = 0LL;
  if ( (Src[11] & 7) != 0 )
  {
    GEByGuid = WmipFindGEByGuid(Src + 6, 0LL);
    if ( GEByGuid )
    {
      v6 = v3[1];
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      for ( i = *(_QWORD *)(GEByGuid + 56); i != GEByGuid + 56; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 80) == v6 )
        {
          v4 = i;
          WmipReferenceEntry(i);
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
      if ( v4 )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( (v8 & 3) != 0 )
        {
          v9 = *(_DWORD *)(v4 + 72);
          if ( (v3[11] & 1) != 0 )
          {
            v28 = a2;
            if ( WmipAlign(4, &v28) )
            {
              v25 = WmipStaticInstanceNameSize(v4);
              if ( v25 <= -1 - v28 )
              {
                v26 = v25 + v28;
                Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
                v19 = Pool2;
                if ( Pool2 )
                {
                  memmove(Pool2, v3, *v3);
                  WmipInsertStaticNames(v19, v26, v4);
LABEL_24:
                  v3 = v19;
LABEL_26:
                  WmipUnreferenceEntry(&WmipISChunkInfo, v4);
                  return v3;
                }
              }
            }
          }
          else
          {
            v10 = v3[13];
            v28 = v10;
            if ( (unsigned int)v10 < v9 )
            {
              v11 = *(_QWORD *)(v4 + 88);
              if ( (v8 & 2) != 0 )
              {
                v12 = *(const wchar_t **)(v11 + 8 * v10);
                v13 = -1LL;
                v23 = -1LL;
                do
                  ++v23;
                while ( v12[v23] );
                v15 = v23 + 2;
              }
              else
              {
                v12 = (const wchar_t *)(v11 + 4);
                v13 = -1LL;
                v14 = -1LL;
                do
                  ++v14;
                while ( v12[v14] );
                v15 = v14 + 8;
              }
              v16 = 2 * v15;
              if ( a2 + 1 >= a2 )
              {
                v17 = (a2 + 1) & 0xFFFFFFFE;
                if ( v16 <= ~(_DWORD)v17 )
                {
                  v18 = (unsigned int *)ExAllocatePool2(0x100uLL);
                  v19 = v18;
                  if ( v18 )
                  {
                    memmove(v18, v3, *v3);
                    v19[12] = v17;
                    *v19 = v17 + v16;
                    v20 = *(_DWORD *)(v4 + 16);
                    v21 = (_WORD *)((char *)v19 + v17);
                    if ( (v20 & 2) != 0 )
                    {
                      *v21 = v16 - 2;
                      RtlStringCbCopyW(v21 + 1, v16 - 2, v12);
                    }
                    else
                    {
                      if ( (v20 & 0x20000) != 0 )
                        v19[11] |= 0x10000u;
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", **(_DWORD **)(v4 + 88) + v28);
                      RtlStringCbCopyW(v21 + 1, v16 - 2, v12);
                      RtlStringCbCatW(v21 + 1, v16 - 2, pszDest);
                      do
                        ++v13;
                      while ( v21[v13 + 1] );
                      *v21 = 2 * (v13 + 1);
                    }
                    goto LABEL_24;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v24 = v3[11];
  if ( (v24 & 1) != 0 && a2 >= 0x3C )
  {
    v3[14] = 0;
  }
  else if ( (v24 & 6) != 0 && a2 >= 0x34 )
  {
    v3[12] = 0;
  }
  if ( v4 )
    goto LABEL_26;
  return v3;
}
