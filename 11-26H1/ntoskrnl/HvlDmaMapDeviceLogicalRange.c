/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x1402F4990
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  _BYTE *v17; // rcx
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
  __int64 v30; // [rsp+30h] [rbp-F8h]
  __int64 v31; // [rsp+38h] [rbp-F0h]
  __int64 v32; // [rsp+40h] [rbp-E8h]
  __int128 v35; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+68h] [rbp-C0h]
  _BYTE v37[112]; // [rsp+80h] [rbp-A8h] BYREF

  v6 = *(_BYTE *)(a1 + 4) == 0;
  v7 = a3;
  v31 = a3;
  v35 = 0LL;
  v9 = (_DWORD *)a1;
  v36 = 0LL;
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
      v17 = (_BYTE *)HvlpAcquireHypercallPage(&v35, 1LL, 0LL, 0LL);
      v16 = 507;
      if ( *a5 < 0x1FB )
        v16 = *a5;
      v18 = 0;
      v13 &= ~0x10000u;
    }
    else
    {
      v16 = 9;
      v17 = v37;
      if ( v15 < 9 )
        v16 = *a5;
      v18 = 1;
      v13 |= 0x10000u;
    }
    *((_QWORD *)v17 + 1) = 0LL;
    *((_QWORD *)v17 + 2) = 0LL;
    *((_QWORD *)v17 + 3) = 0LL;
    *((_QWORD *)v17 + 4) = 0LL;
    *((_DWORD *)v17 + 4) &= 0xFFFFFFF0;
    *(_QWORD *)v17 = -1LL;
    LODWORD(v30) = v13;
    *((_DWORD *)v17 + 5) = *v9;
    *((_QWORD *)v17 + 4) = v7;
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
      v22 = (unsigned __int64 *)(v17 + 40);
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
    HIDWORD(v30) = v11;
    if ( v18 )
    {
      v27 = HvcallFastExtended(v13, (unsigned int)v37, 8 * v16 + 40, 0, 0);
      v28 = v27;
      WORD2(v32) = WORD2(v27);
    }
    else
    {
      v32 = HvcallInitiateHypercall(v30, *((_QWORD *)&v36 + 1), 0LL);
      v28 = v32;
      HvlpReleaseHypercallPage(&v35);
    }
    v29 = WORD2(v32) & 0xFFF;
    *a5 -= v29;
    v14 += v29;
    v31 += (unsigned __int16)(WORD2(v32) & 0xFFF) << 12;
    if ( (unsigned __int8)HvlpHvStatusIsInsufficientMemory(v28) )
    {
      result = HvlpHandleInsufficientMemory(v28);
      v7 = v31;
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
      v7 = v31;
    }
  }
  *a5 = v14;
  return result;
}
