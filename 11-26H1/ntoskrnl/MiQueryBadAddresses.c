/*
 * XREFs of MiQueryBadAddresses @ 0x140870320
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F6DF4 (MiUpdateBadPfnIdentity.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiDeleteTrimViewInfoList @ 0x140A8954C (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryBadAddresses(__int64 a1, int a2, char *a3, unsigned __int64 a4, char a5, __int64 *a6)
{
  char *v6; // r15
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdi
  signed int ListOfPendingBadPages; // ebx
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  int CurrentProcessorColor; // eax
  __int64 v13; // rdx
  __int64 PoolMm; // rax
  unsigned __int64 *v15; // r13
  _QWORD *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rdi
  unsigned int v19; // r12d
  unsigned __int64 v20; // r15
  int updated; // eax
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rcx
  int v24; // r11d
  int v25; // eax
  int v26; // r10d
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  ULONG_PTR v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  void *v33; // rcx
  _QWORD *i; // r13
  PVOID v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v38; // [rsp+30h] [rbp-A8h]
  __int128 Src; // [rsp+40h] [rbp-98h] BYREF
  char *v40; // [rsp+50h] [rbp-88h]
  unsigned __int64 v41; // [rsp+58h] [rbp-80h]
  PVOID P[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v43; // [rsp+70h] [rbp-68h]
  unsigned __int64 v44; // [rsp+78h] [rbp-60h]
  unsigned __int64 v45; // [rsp+80h] [rbp-58h]
  __int128 v46; // [rsp+88h] [rbp-50h] BYREF
  PVOID v47; // [rsp+98h] [rbp-40h]
  unsigned __int64 v51; // [rsp+F8h] [rbp+20h]
  int v52; // [rsp+F8h] [rbp+20h]

  v6 = a3;
  v43 = 0LL;
  v44 = 0LL;
  P[1] = P;
  P[0] = P;
  v7 = 0LL;
  v8 = 0LL;
  ListOfPendingBadPages = 0;
  v10 = a4 >> 4;
  v51 = a4 >> 4;
  v45 = a4 >> 4;
  if ( !qword_140E2EC88 )
  {
LABEL_4:
    if ( ListOfPendingBadPages < 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  ListOfPendingBadPages = MiGetListOfPendingBadPages((__int64)P);
  if ( (int)v43 < 0 )
  {
    ListOfPendingBadPages = v43;
    goto LABEL_4;
  }
  if ( !v44 )
  {
LABEL_5:
    ListOfPendingBadPages = v10 < v8 ? 0xC0000023 : 0;
    goto LABEL_6;
  }
  if ( v44 <= 0xAAAAAAAAAAAAAAALL )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 24 * v13, 1816291661, CurrentProcessorColor | 0x80000000);
    v7 = (_QWORD *)PoolMm;
    if ( PoolMm )
    {
      v15 = (unsigned __int64 *)PoolMm;
      v38 = 0LL;
      while ( 1 )
      {
        v16 = P[0];
        if ( P[0] == P )
          break;
        v17 = *(_QWORD *)P[0];
        if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v17 + 8) != P[0] )
LABEL_63:
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v17 + 8) = P;
        if ( v16[2] )
        {
          v18 = (_QWORD *)v16[3];
          v19 = 0;
          v20 = v38;
          do
          {
            updated = MiUpdateBadPfnIdentity(*v18 & 0xFFFFFFFFFFFFFLL, v15);
            v22 = v15 + 3;
            if ( !updated )
              v22 = v15;
            v15 = v22;
            v23 = v20 + 1;
            if ( !updated )
              v23 = v20;
            v20 = v23;
            ++v18;
            ++v19;
          }
          while ( (unsigned __int64)v19 < v16[2] );
          v38 = v23;
          v8 = 0LL;
          v6 = a3;
          v10 = v51;
        }
        ExFreePoolWithTag(v16, 0);
      }
      v40 = v6;
      v46 = 0LL;
      v47 = 0LL;
      v24 = *(_DWORD *)(a1 + 464);
      v52 = v24;
      v25 = _mm_cvtsi128_si32((__m128i)0LL);
      v26 = a2;
      if ( a2 != 13 )
        v25 = *(_DWORD *)(a1 + 464);
      LODWORD(v46) = v25;
      v27 = 0LL;
      v28 = v38;
      while ( 1 )
      {
        v41 = v27;
        if ( v27 >= v28 )
          goto LABEL_4;
        Src = 0LL;
        v29 = 3 * v27;
        v30 = v7[v29 + 1];
        if ( v30 != -1LL && (v26 == 13 || (v7[v29] & 0xF) != 0xE) )
        {
          v31 = v7[v29];
          *((_QWORD *)&Src + 1) = (v31 >> 7) & 1;
          *(_QWORD *)&Src = v30;
          v32 = v31 & 0xF;
          if ( v32 == 14 )
          {
            if ( v8 >= v10 )
              goto LABEL_39;
            *((_QWORD *)&Src + 1) = (v31 >> 7) & 1 | 2;
            v33 = v6;
            if ( !a5 )
              goto LABEL_37;
            goto LABEL_36;
          }
          if ( (unsigned __int64)(v32 - 1) <= 1 || v32 == 8 )
          {
            if ( (int)MiLocateSharedPageViews(v30, (__int64)&v46, a1) < 0 )
              break;
            for ( i = v47; i; i = (_QWORD *)*i )
            {
              if ( v8 < v10 )
              {
                *(_QWORD *)&Src = i[2];
                if ( a5 )
                  RtlCopyToUser(v6, &Src, 0x10uLL);
                else
                  RtlCopyVolatileMemory(v6, &Src, 0x10uLL);
                v6 += 16;
                v40 = v6;
              }
              ++v8;
            }
            MiDeleteTrimViewInfoList(v47);
            v28 = v38;
          }
          else if ( v24 == ((v31 >> 9) & 0xFFFFFFFFFFFFLL) || v26 == 13 )
          {
            if ( v8 >= v10 )
              goto LABEL_39;
            *(_QWORD *)&Src = v7[v29 + 2];
            v33 = v6;
            if ( !a5 )
            {
LABEL_37:
              RtlCopyVolatileMemory(v6, &Src, 0x10uLL);
LABEL_38:
              v6 += 16;
              v40 = v6;
LABEL_39:
              ++v8;
              goto LABEL_57;
            }
LABEL_36:
            RtlCopyToUser(v33, &Src, 0x10uLL);
            goto LABEL_38;
          }
        }
LABEL_57:
        v27 = v41 + 1;
        v26 = a2;
        v24 = v52;
      }
    }
  }
  ListOfPendingBadPages = -1073741670;
LABEL_6:
  if ( a6 )
  {
    v11 = 16 * v8;
    if ( a5 )
      RtlWriteULong64ToUser(a6, v11);
    else
      *a6 = v11;
  }
  while ( 1 )
  {
    v35 = P[0];
    if ( P[0] == P )
      break;
    v36 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v36 + 8) != P[0] )
      goto LABEL_63;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v36 + 8) = P;
    ExFreePoolWithTag(v35, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)ListOfPendingBadPages;
}
