/*
 * XREFs of PspCaptureUserProcessParameters @ 0x140A72430
 * Callers:
 *     PsCaptureUserProcessParameters @ 0x140A72380 (PsCaptureUserProcessParameters.c)
 *     PspCaptureProcessParameters @ 0x140A723C0 (PspCaptureProcessParameters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     PspCaptureAndValidateUnicodeString @ 0x140A72CEC (PspCaptureAndValidateUnicodeString.c)
 *     PspCopyUnicodeString @ 0x140A72D84 (PspCopyUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x140A72E10 (PspValidateEnvironmentBlock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, unsigned int *a2, __int64 a3, char a4, __int64 a5)
{
  int v8; // r12d
  void *ULong64FromUser; // r14
  size_t v10; // rax
  char *ServerSiloGlobals; // rax
  __int128 v12; // xmm6
  unsigned __int16 epi16; // r13
  void *v14; // xmm0_8
  __int64 result; // rax
  _DWORD *v16; // rbx
  unsigned __int64 v17; // r13
  signed int v18; // r14d
  _QWORD *Pool2; // rax
  _QWORD *v20; // rbx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  void *v30; // rax
  char *v31; // rsi
  size_t v32; // r13
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // [rsp+20h] [rbp-168h]
  char v36; // [rsp+21h] [rbp-167h]
  void *v37; // [rsp+28h] [rbp-160h] BYREF
  int v38; // [rsp+30h] [rbp-158h]
  volatile void *Address[2]; // [rsp+40h] [rbp-148h]
  int v40; // [rsp+50h] [rbp-138h]
  void *v41; // [rsp+58h] [rbp-130h]
  size_t Size; // [rsp+60h] [rbp-128h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-120h]
  __int128 v44; // [rsp+70h] [rbp-118h]
  void *Src; // [rsp+80h] [rbp-108h]
  __int128 v46; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-C8h]
  __int128 v49; // [rsp+C8h] [rbp-C0h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+E8h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v53; // [rsp+108h] [rbp-80h] BYREF
  __int128 v54; // [rsp+118h] [rbp-70h] BYREF
  __int128 v55; // [rsp+128h] [rbp-60h] BYREF

  v43 = (_QWORD *)a3;
  v51 = 0LL;
  v46 = 0LL;
  v53 = 0LL;
  v49 = 0LL;
  Src = 0LL;
  v50 = 0LL;
  v47 = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  v35 = 1;
  v36 = 1;
  v48 = 1LL;
  ProbeForRead(a2, 1uLL, 4u);
  v8 = RtlReadULongFromUser(a2 + 2) & 0xFFFFBFFF;
  v40 = v8;
  if ( ((v8 ^ 1) & 0xF4010E11) != 0 )
    return 3221225485LL;
  if ( (v8 & ((v8 & 0xFF000060) - 1) & 0x1000060) != 0 )
    return 3221225485LL;
  ULong64FromUser = (void *)RtlReadULong64FromUser(a2 + 32);
  Src = ULong64FromUser;
  v10 = RtlReadULong64FromUser(a2 + 252);
  Size = v10;
  if ( !v10 || (v10 & 1) != 0 )
    return 3221225485LL;
  ProbeForRead(ULong64FromUser, v10, 1u);
  if ( (a4 & 1) != 0 )
  {
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a5);
    v46 = *(_OWORD *)(ServerSiloGlobals + 968);
    v12 = PspProtectedRuntimeData;
    *(_OWORD *)Address = PspProtectedRuntimeData;
    v35 = 0;
    epi16 = _mm_extract_epi16((__m128i)PspProtectedRuntimeData, 1);
    v14 = (void *)_mm_srli_si128((__m128i)PspProtectedRuntimeData, 8).m128i_u64[0];
    if ( (a4 & 2) != 0 )
    {
      v41 = v14;
      LOWORD(v38) = _mm_cvtsi128_si32((__m128i)PspProtectedRuntimeData);
    }
    else
    {
      Src = (void *)*((_QWORD *)ServerSiloGlobals + 124);
      Size = *((unsigned __int16 *)ServerSiloGlobals + 493);
      v36 = 0;
      v41 = v14;
      v38 = _mm_cvtsi128_si32((__m128i)PspProtectedRuntimeData);
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 14, &v46);
    v18 = result;
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v46 >= 0x208u )
      return 3221225485LL;
    WORD1(v46) = 520;
    DWORD1(v44) = 0;
    LODWORD(v44) = RtlReadULongFromUser(a2 + 56);
    *((_QWORD *)&v44 + 1) = RtlReadULong64FromUser(a2 + 58);
    *(_OWORD *)Address = v44;
    if ( *((_QWORD *)&v44 + 1) )
    {
      LODWORD(v37) = (unsigned __int16)v44;
      WORD1(Address[0]) = v44;
      v38 = LOWORD(Address[0]);
      v41 = (void *)Address[1];
      ProbeForRead(Address[1], LOWORD(Address[0]), 1u);
      epi16 = v44;
      if ( v18 < 0 )
        return (unsigned int)v18;
    }
    else
    {
      if ( (_WORD)v44 )
        return 3221225485LL;
      epi16 = 0;
      WORD1(Address[0]) = 0;
      v41 = (void *)Address[1];
      v38 = LOWORD(Address[0]);
    }
    v12 = *(_OWORD *)Address;
  }
  result = PspCaptureAndValidateUnicodeString(a2 + 20, &v49);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(a2 + 24, &v50);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(a2 + 28, &v51);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(a2 + 44, &v52);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(a2 + 48, &v53);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(a2 + 52, &v54);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    v16 = (_DWORD *)(a3 + 4);
    if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    {
      v47 = *(_OWORD *)(a3 + 8);
      goto LABEL_17;
    }
  }
  else
  {
    v16 = (_DWORD *)v43 + 1;
  }
  result = PspCaptureAndValidateUnicodeString(a2 + 260, &v47);
  if ( (int)result < 0 )
    return result;
LABEL_17:
  if ( a3 && (*v16 & 4) != 0 )
    v55 = *(_OWORD *)(a3 + 24);
  else
    v55 = 0LL;
  v17 = (epi16
       + WORD1(v49)
       + WORD1(v50)
       + WORD1(v51)
       + WORD1(v52)
       + WORD1(v53)
       + WORD1(v54)
       + WORD1(v47)
       + (unsigned __int64)WORD1(v55)
       + WORD1(v46)
       + 1097LL) & 0xFFFFFFFFFFFFFFFEuLL;
  *(_QWORD *)&v44 = v17;
  if ( a3 && (*v16 & 1) != 0 )
  {
    v33 = (v17 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v34 = *(unsigned int *)(a3 + 48);
    v17 = v33 + 8 * v34;
    if ( v17 < v33 )
      return 3221225485LL;
    *(_QWORD *)&v44 = v33 + 8 * v34;
  }
  v18 = v17 + Size < v17 ? 0xC0000095 : 0;
  if ( v17 + Size < v17 )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x41uLL);
  v20 = Pool2;
  v43 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopyFromUser(Pool2, a2, 0x448uLL);
  if ( v17 + Size < v17 )
    goto LABEL_41;
  *((_DWORD *)v20 + 2) = v8;
  *((_DWORD *)v20 + 1) = v17;
  *(_DWORD *)v20 = v17;
  v37 = v20 + 137;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 8) != 0 )
    *((_DWORD *)v20 + 271) = *(_DWORD *)(a3 + 52);
  LOBYTE(v21) = v35;
  v18 = PspCopyUnicodeString(&v46, v20 + 7, &v37, v21);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v22) = 1;
  v18 = PspCopyUnicodeString(&v49, v20 + 10, &v37, v22);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v23) = 1;
  v18 = PspCopyUnicodeString(&v50, v20 + 12, &v37, v23);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v24) = 1;
  v18 = PspCopyUnicodeString(&v51, v20 + 14, &v37, v24);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v25) = 1;
  v18 = PspCopyUnicodeString(&v52, v20 + 22, &v37, v25);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v26) = 1;
  v18 = PspCopyUnicodeString(&v53, v20 + 24, &v37, v26);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v27) = 1;
  v18 = PspCopyUnicodeString(&v54, v20 + 26, &v37, v27);
  if ( v18 < 0 )
    goto LABEL_41;
  LOBYTE(v28) = 1;
  PspCopyUnicodeString(&v47, v20 + 130, &v37, v28);
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
  {
    LOBYTE(v29) = 1;
    PspCopyUnicodeString(&v55, v20 + 132, &v37, v29);
    *((_DWORD *)v20 + 272) = *(_DWORD *)(a3 + 56);
  }
  else
  {
    *((_OWORD *)v20 + 66) = 0LL;
  }
  *((_OWORD *)v20 + 14) = v12;
  v30 = v41;
  v31 = (char *)v37;
  if ( v41 )
  {
    v20[29] = v37;
    if ( v35 )
      RtlCopyFromUser(v31, v30, (unsigned __int16)v38);
    else
      RtlCopyVolatileMemory(v31, v30, (unsigned __int16)v38);
    if ( v31 )
    {
      v31 += (unsigned __int16)v38;
      v37 = v31;
    }
  }
  v20[134] = 0LL;
  *((_DWORD *)v20 + 270) = 0;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
    {
      v31 = (char *)((unsigned __int64)(v31 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v37 = v31;
      v20[134] = v31;
      *((_DWORD *)v20 + 270) = *(_DWORD *)(a3 + 48);
      memmove(v31, *(const void **)(a3 + 40), 8LL * *(unsigned int *)(a3 + 48));
      if ( v31 )
      {
        v31 += 8 * *(unsigned int *)(a3 + 48);
        v37 = v31;
      }
    }
  }
  v32 = (char *)v20 - v31 + v17;
  if ( v32 )
  {
    memset_0(v31, 0, v32);
    if ( v31 )
    {
      v31 += v32;
      v37 = v31;
    }
  }
  if ( v36 )
    RtlCopyFromUser(v31, Src, Size);
  else
    RtlCopyVolatileMemory(v31, Src, Size);
  if ( (a4 & 3) != 1 )
  {
    v18 = PspValidateEnvironmentBlock(v31, &Size);
    if ( v18 < 0 )
    {
LABEL_41:
      ExFreePoolWithTag(v20, 0);
      return (unsigned int)v18;
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v20[2] = 0LL;
    v20[4] = 0LL;
    v20[5] = 0LL;
    v20[6] = 0LL;
  }
  v20[16] = v31;
  v20[126] = Size;
  v20[127] = 0LL;
  *a1 = v20;
  return 0LL;
}
