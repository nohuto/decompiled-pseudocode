/*
 * XREFs of ExRaiseHardError @ 0x140B08E60
 * Callers:
 *     IopHardErrorThread @ 0x140797730 (IopHardErrorThread.c)
 *     ExpExpirationThread @ 0x14083BDD0 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x140846660 (NtRaiseHardError.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpQuotaWarningWorker @ 0x140857730 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x14085AE70 (CmpDiskFullWarningWorker.c)
 *     IopRaiseHardError @ 0x140B08B60 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140B358F0 (IopRaiseInformationalHardError.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 */

__int64 __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, char *a4, int a5, int *a6)
{
  int v7; // esi
  __int64 v8; // r14
  int *v9; // r13
  int v10; // r15d
  ULONG_PTR v11; // rdi
  NTSTATUS v12; // ebx
  unsigned int v13; // edx
  char *v14; // r8
  char *v15; // r13
  char *v16; // r15
  __int64 i; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  int v23; // [rsp+4Ch] [rbp-17Ch] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-178h] BYREF
  PVOID BaseAddress[2]; // [rsp+58h] [rbp-170h] BYREF
  int v26; // [rsp+68h] [rbp-160h]
  unsigned int v27; // [rsp+70h] [rbp-158h]
  int v28; // [rsp+78h] [rbp-150h]
  char *v29; // [rsp+80h] [rbp-148h]
  int *v30; // [rsp+88h] [rbp-140h]
  __m128i v31; // [rsp+90h] [rbp-138h]
  PVOID v32; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-120h]
  const void *v34; // [rsp+B0h] [rbp-118h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-110h]
  __int64 v36; // [rsp+C0h] [rbp-108h]
  _OWORD *v37; // [rsp+C8h] [rbp-100h]
  __m128i v38; // [rsp+D0h] [rbp-F8h]
  _OWORD v39[2]; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+100h] [rbp-C8h]
  _OWORD v41[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+128h] [rbp-A0h]
  _BYTE v43[8]; // [rsp+130h] [rbp-98h] BYREF
  void *Src[9]; // [rsp+138h] [rbp-90h]

  v7 = a3;
  v8 = a2;
  v26 = a1;
  v27 = a2;
  v28 = a3;
  v34 = a4;
  v9 = a6;
  v30 = a6;
  RegionSize = 0LL;
  v10 = 0;
  v23 = 0;
  BaseAddress[0] = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v11 = 80LL;
  memset_0(v43, 0, 0x50uLL);
  if ( ExpTooLateForErrors )
  {
    v12 = 0;
    v10 = 1;
    goto LABEL_20;
  }
  if ( (unsigned int)v8 > 5 )
  {
    v12 = -1073741584;
    goto LABEL_20;
  }
  if ( !a4 )
    goto LABEL_19;
  memmove(v41, a4, 8 * v8);
  memmove(v39, a4, 8 * v8);
  if ( !v7 )
    goto LABEL_19;
  RegionSize = 80LL;
  v13 = 0;
  if ( (_DWORD)v8 )
  {
    v14 = a4;
    do
    {
      if ( _bittest(&v7, v13) )
      {
        v11 += *(unsigned __int16 *)(*(_QWORD *)v14 + 2LL);
        RegionSize = v11;
      }
      ++v13;
      v14 += 8;
    }
    while ( v13 < (unsigned int)v8 );
  }
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v12 >= 0 )
  {
    v15 = (char *)BaseAddress[0];
    v32 = BaseAddress[0];
    v16 = (char *)BaseAddress[0] + 80;
    v29 = (char *)BaseAddress[0] + 80;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
    {
      if ( _bittest(&v7, i) )
      {
        v36 = 8 * i;
        v18 = 16LL * (unsigned int)i;
        v33 = v18;
        v35 = v18;
        v37 = &v43[v18];
        *v37 = *(_OWORD *)*(_QWORD *)&a4[8 * i];
        v31.m128i_i64[0] = 0LL;
        v31.m128i_i64[1] = (__int64)v16;
        v31.m128i_i16[1] = *(_WORD *)&v43[v18 + 2];
        v31.m128i_i16[0] = *(_WORD *)&v43[v18];
        v38 = v31;
        RtlWriteULongToUser(&v15[v18], _mm_cvtsi128_si32(v31));
        RtlWriteULong64ToUser(&v15[v18 + 8], (__int64)v16);
        RtlCopyToUser(v16, Src[v18 / 8], *(unsigned __int16 *)&v43[v18 + 2]);
        Src[v18 / 8] = v16;
        v16 += *(unsigned __int16 *)&v43[v18 + 2];
        v29 = v16;
        v19 = v36;
        *(_QWORD *)((char *)v41 + v36) = &v15[v35];
        *(_QWORD *)((char *)v39 + v19) = v37;
        v7 = a3;
      }
    }
    v9 = v30;
LABEL_19:
    v12 = ExpRaiseHardError(a1, v8, v7, (unsigned int)v41, (__int64)v39, a5, (__int64)&v23);
    v10 = v23;
  }
LABEL_20:
  *v9 = v10;
  if ( BaseAddress[0] )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v12;
}
