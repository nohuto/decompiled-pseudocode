/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x1403E7AB0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x140531314 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaMapDeviceLogicalRange(
        __int64 a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        char a6)
{
  bool v6; // zf
  __int64 v7; // rbx
  _DWORD *v9; // r13
  __int64 result; // rax
  unsigned int v11; // ebp
  unsigned int v12; // esi
  int v13; // r15d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  _QWORD *v17; // rcx
  char v18; // r11
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  unsigned __int64 *v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rcx
  char *v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // bx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // [rsp+30h] [rbp-F8h]
  __int64 v34; // [rsp+38h] [rbp-F0h]
  __int64 v35; // [rsp+40h] [rbp-E8h]
  __int128 v38; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v39; // [rsp+68h] [rbp-C0h]
  _BYTE v40[112]; // [rsp+80h] [rbp-A8h] BYREF

  v6 = *(_BYTE *)(a1 + 4) == 0;
  v7 = a3;
  v34 = a3;
  v38 = 0LL;
  v9 = (_DWORD *)a1;
  v39 = 0LL;
  if ( !v6 )
    return 3221225659LL;
  result = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 179;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *a5;
    if ( !*a5 )
      break;
    if ( v15 > 9 )
    {
      v17 = HvlpAcquireHypercallPage((__int64)&v38, 1, 0LL, 0LL);
      v16 = 507;
      if ( *a5 < 0x1FB )
        v16 = *a5;
      v18 = 0;
      v13 &= ~0x10000u;
    }
    else
    {
      v16 = 9;
      v17 = v40;
      if ( v15 < 9 )
        v16 = *a5;
      v18 = 1;
      v13 |= 0x10000u;
    }
    v17[1] = 0LL;
    v17[2] = 0LL;
    v17[3] = 0LL;
    v17[4] = 0LL;
    *((_DWORD *)v17 + 4) &= 0xFFFFFFF0;
    *v17 = -1LL;
    LODWORD(v33) = v13;
    *((_DWORD *)v17 + 5) = *v9;
    v17[4] = v7;
    if ( a2 )
    {
      v19 = (a2 & 1) != 0;
      if ( (a2 & 2) != 0 )
        v19 |= 2u;
      v20 = v12 | v19;
    }
    else
    {
      v20 = 0x10000;
    }
    *((_DWORD *)v17 + 7) = v20;
    if ( v16 )
    {
      v21 = 8 * v14 - 40 - (_QWORD)v17;
      v22 = v17 + 5;
      v23 = 0LL;
      v24 = v16;
      v25 = (char *)a4 + v21;
      do
      {
        if ( a2 )
        {
          if ( a6 )
            v26 = v14 + v23 + *a4;
          else
            v26 = *(_QWORD *)&v25[(_QWORD)v22];
        }
        else
        {
          v26 = 0LL;
        }
        *v22 = v26;
        ++v23;
        ++v22;
        --v24;
      }
      while ( v24 );
      v9 = (_DWORD *)a1;
    }
    v11 = v16 & 0xFFF | v11 & 0xFFFFF000;
    HIDWORD(v33) = v11;
    if ( v18 )
    {
      v27 = HvcallFastExtended(v33, (unsigned __int64)v40, 8 * v16 + 40, 0LL, 0);
      v28 = v27;
      WORD2(v35) = WORD2(v27);
    }
    else
    {
      v35 = HvcallInitiateHypercall(v33, *((unsigned __int64 *)&v39 + 1));
      v28 = v35;
      HvlpReleaseHypercallPage((unsigned int *)&v38, v30, v31, v32);
    }
    v29 = WORD2(v35) & 0xFFF;
    *a5 -= v29;
    v14 += v29;
    v34 += (unsigned __int16)(WORD2(v35) & 0xFFF) << 12;
    if ( (unsigned __int8)HvlpHvStatusIsInsufficientMemory(v28) )
    {
      result = HvlpHandleInsufficientMemory(v28);
      v7 = v34;
      if ( (int)result < 0 )
      {
        if ( v12 == 0x80000000 )
          break;
        v12 = 0x80000000;
        result = 0LL;
      }
    }
    else
    {
      result = HvlpHvToNtStatus(v28);
      if ( (int)result < 0 )
        break;
      v7 = v34;
    }
  }
  *a5 = v14;
  return result;
}
