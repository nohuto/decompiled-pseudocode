/*
 * XREFs of CompatCacheLookupPackage @ 0x180058EBC
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     CompatCachepGetPackageAlias @ 0x180059220 (CompatCachepGetPackageAlias.c)
 *     RtlAllocateHeap_0 @ 0x180070300 (RtlAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18007030C (RtlFreeHeap_0.c)
 *     RtlInitUnicodeStringEx_0 @ 0x180070330 (RtlInitUnicodeStringEx_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CompatCacheLookupPackage(_QWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  size_t v6; // r14
  char *v7; // rsi
  PVOID ProcessHeap; // r12
  _OWORD *v9; // r13
  NTSTATUS PackageAlias; // ebx
  unsigned int i; // r15d
  char *v13; // rax
  char *Heap; // rbx
  char *v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // r15
  char *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  char *v24; // rbx
  _OWORD *Heap_0; // rax
  _OWORD *v26; // rcx
  __int64 v27; // rax
  __int128 v28; // xmm1
  WCHAR *v29; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v30[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v32; // [rsp+60h] [rbp-A8h]
  char *v33; // [rsp+1B0h] [rbp+A8h]
  unsigned int v34; // [rsp+1B8h] [rbp+B0h]

  v6 = 0LL;
  v7 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  memset_0(v30, 0, 0x188uLL);
  v29 = 0LL;
  v9 = 0LL;
  PackageAlias = CompatCachepGetPackageAlias(&v29, a3, a4);
  if ( PackageAlias >= 0 )
  {
    v30[0] = 1;
    PackageAlias = RtlInitUnicodeStringEx_0(&DestinationString, v29);
    if ( PackageAlias >= 0 )
    {
      v30[1] = 0;
      v32 = -31132;
      for ( i = 4096; ; i = v34 )
      {
        if ( i > v6 )
        {
          if ( (unsigned __int64)i + 4095 < i )
            goto LABEL_6;
          v6 = (i + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
          if ( v7 )
          {
            Heap = (char *)RtlReAllocateHeap(ProcessHeap, 0, v7, (i + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            v13 = (char *)RtlAllocateHeap(ProcessHeap, 0, (i + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
            Heap = v13;
            if ( v13 )
              memset_0(v13, 0, v6);
          }
          if ( !Heap )
            goto LABEL_41;
          v7 = Heap;
        }
        v33 = v7;
        v15 = v7;
        v34 = i;
        v16 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))g_CompatCacheServiceApi)(0LL, v30);
        PackageAlias = v16;
        if ( v16 != -1073741789 )
          break;
      }
      if ( v16 >= 0 )
      {
        v17 = v34;
        if ( v34 <= v6 )
          goto LABEL_25;
        if ( (unsigned __int64)v34 + 4095 < v34 )
        {
LABEL_6:
          PackageAlias = -1073741675;
          goto LABEL_7;
        }
        if ( v7 )
        {
          v7 = (char *)RtlReAllocateHeap(ProcessHeap, 0, v7, (v34 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          v18 = (char *)RtlAllocateHeap(ProcessHeap, 0, (v34 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
          v7 = v18;
          if ( v18 )
            memset_0(v18, 0, (v17 + 4095) & 0xFFFFFFFFFFFFF000uLL);
        }
        if ( v7 )
        {
LABEL_25:
          v19 = 0LL;
          do
          {
            if ( v19 <= v17 )
            {
              v20 = v19 + 8;
              if ( v19 + 8 >= v19 && v20 <= v17 )
              {
                v22 = *(_QWORD *)&v7[v19];
                v23 = v20 + HIDWORD(v22);
                if ( v23 >= v20 && v23 + 3 >= v23 )
                {
                  v19 = (v23 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v19 <= v17 )
                    continue;
                }
              }
            }
            goto LABEL_28;
          }
          while ( (_DWORD)v22 != 1 );
          v24 = &v7[v20];
          if ( HIDWORD(v22) != 456 )
          {
LABEL_28:
            v21 = 0;
LABEL_29:
            PackageAlias = 0;
            *a1 = v9;
            *a2 = v21;
            goto LABEL_7;
          }
          Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x1C8uLL);
          v9 = Heap_0;
          if ( Heap_0 )
          {
            v26 = Heap_0;
            v27 = 3LL;
            do
            {
              *v26 = *(_OWORD *)v24;
              v26[1] = *((_OWORD *)v24 + 1);
              v26[2] = *((_OWORD *)v24 + 2);
              v26[3] = *((_OWORD *)v24 + 3);
              v26[4] = *((_OWORD *)v24 + 4);
              v26[5] = *((_OWORD *)v24 + 5);
              v26[6] = *((_OWORD *)v24 + 6);
              v26 += 8;
              v28 = *((_OWORD *)v24 + 7);
              v24 += 128;
              *(v26 - 1) = v28;
              --v27;
            }
            while ( v27 );
            *v26 = *(_OWORD *)v24;
            v26[1] = *((_OWORD *)v24 + 1);
            v26[2] = *((_OWORD *)v24 + 2);
            v26[3] = *((_OWORD *)v24 + 3);
            *((_QWORD *)v26 + 8) = *((_QWORD *)v24 + 8);
            v21 = 456;
            goto LABEL_29;
          }
LABEL_41:
          PackageAlias = -1073741801;
        }
        else
        {
          PackageAlias = -1073741801;
          v7 = v15;
        }
      }
    }
  }
LABEL_7:
  if ( v29 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v29);
  if ( v7 )
    RtlFreeHeap(ProcessHeap, 0, v7);
  return (unsigned int)PackageAlias;
}
