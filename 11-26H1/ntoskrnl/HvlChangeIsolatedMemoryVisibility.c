/*
 * XREFs of HvlChangeIsolatedMemoryVisibility @ 0x1405C1420
 * Callers:
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlChangeIsolatedMemoryVisibility(__int64 a1, unsigned __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r14
  int v13; // eax
  char v14; // cl
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+78h] [rbp+10h]

  v22 = 0LL;
  v23 = 0LL;
  v8 = 0;
  LODWORD(v24) = 0;
  *a4 = 0LL;
  v12 = HvlpAcquireHypercallPage((__int64)&v22, 1, 0LL, 0LL);
  LODWORD(v25) = 219;
  v12[1] = 0LL;
  *v12 = -1LL;
  v13 = *((_DWORD *)v12 + 2);
  v14 = a3 ^ v13;
  v15 = 0;
  *((_DWORD *)v12 + 2) = v13 ^ v14 & 3;
  while ( a2 )
  {
    if ( a2 <= 0x1FE )
      v15 = v15 & 0xFFFFF000 | a2 & 0xFFF;
    else
      v15 = v15 & 0xFFFFF000 | 0x1FE;
    HIDWORD(v25) = v15;
    if ( (v15 & 0xFFF) != 0 )
    {
      v16 = a1;
      v17 = v15 & 0xFFF;
      v18 = v12 + 2;
      do
      {
        *v18++ = v16++;
        --v17;
      }
      while ( v17 );
    }
    v19 = HvcallInitiateHypercall(v25, v24);
    *a4 += HIDWORD(v19) & 0xFFF;
    if ( (_WORD)v19 )
    {
      v8 = HvlpHvToNtStatus(v19);
      break;
    }
    v20 = v15 & 0xFFF;
    a1 += v20;
    a2 -= v20;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v22, v9, v10, v11);
  return v8;
}
