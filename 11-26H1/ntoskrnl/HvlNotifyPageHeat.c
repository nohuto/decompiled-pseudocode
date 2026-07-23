/*
 * XREFs of HvlNotifyPageHeat @ 0x140511814
 * Callers:
 *     MiNotifyPageHeat @ 0x140531990 (MiNotifyPageHeat.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     KeWaitPhysicalFaultCompletion @ 0x1405F96E4 (KeWaitPhysicalFaultCompletion.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, char a2, int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned int v15; // r10d
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int16 v25; // bx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // edi
  _QWORD *v32; // rbx
  __int64 v33; // [rsp+20h] [rbp-60h]
  __int64 v34; // [rsp+28h] [rbp-58h]
  __int16 v35; // [rsp+34h] [rbp-4Ch]
  _QWORD *v36; // [rsp+38h] [rbp-48h]
  __int128 v37; // [rsp+40h] [rbp-40h] BYREF
  __int128 v38; // [rsp+50h] [rbp-30h]
  __int128 v39; // [rsp+60h] [rbp-20h] BYREF
  __int64 v40; // [rsp+70h] [rbp-10h]
  unsigned __int64 v41; // [rsp+78h] [rbp-8h]

  v4 = 0;
  v40 = 0LL;
  LODWORD(v41) = 0;
  *(_QWORD *)&v38 = 0LL;
  DWORD2(v38) = 0;
  v39 = 0LL;
  v37 = 0LL;
  if ( !a1 )
  {
    if ( (HvlEnlightenments & 0x400000) != 0 )
    {
      v7 = 0LL;
      goto LABEL_9;
    }
    return 3221225659LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
  if ( !_bittest(&HvlEnlightenments, 0x15u) )
    return 3221225659LL;
  v7 = 1LL;
LABEL_9:
  v8 = 0;
  if ( a2 && _bittest((const signed __int32 *)&HvlpFlags, 0x15u) )
  {
    v33 = a4;
    v9 = a4;
    v10 = HvlpAcquireHypercallPage((__int64)&v37, 2, 0LL, 0LL);
    v11 = 32774LL;
  }
  else
  {
    v9 = 0LL;
    v33 = 0LL;
    v10 = 0LL;
    v11 = 32771LL;
    v37 = 0LL;
    v38 = 0LL;
  }
  v12 = HvlpAcquireHypercallPage((__int64)&v39, 1, 0LL, 0LL);
  LODWORD(v13) = a3;
  v14 = v12;
  v36 = v12;
  LODWORD(v34) = v11;
  *v12 = v7;
  do
  {
    v15 = 0;
    if ( (unsigned int)v13 >= 0x1FF )
      LODWORD(v13) = 511;
    HIDWORD(v34) = HIDWORD(v11) ^ ((unsigned __int16)v13 ^ WORD2(v11)) & 0xFFF;
    if ( (_DWORD)v13 )
    {
      v16 = v14 + 1;
      do
      {
        v17 = v15 + v4;
        *v16 = 0LL;
        v18 = *(_QWORD *)(a4 + 8 * v17) & 0x3FFLL;
        v19 = (unsigned int)v17;
        *v16 = v18;
        v20 = *(_QWORD *)(a4 + 8 * v17);
        if ( (v20 & 0xC00) != 0 )
        {
          v21 = v18 | 0x800;
          *v16 = v21;
          v22 = v21 | *(_QWORD *)(a4 + 8 * v19) & 0xFFFFFFFFFFE00000uLL;
          *v16 = v22;
          if ( (*(_DWORD *)(a4 + 8 * v19) & 0xC00) == 0x800LL )
            *v16 = v22 | 0x1000;
        }
        else
        {
          *v16 = v18 | v20 & 0xFFFFFFFFFFFFF000uLL;
        }
        ++v15;
        ++v16;
      }
      while ( v15 < (unsigned int)v13 );
      v9 = v33;
    }
    HIDWORD(v11) ^= ((unsigned __int16)v13 ^ WORD2(v11)) & 0xFFF;
    v23 = HvcallInitiateHypercall(v34, v41);
    v35 = WORD2(v23);
    v25 = v23;
    if ( (_WORD)v23 )
      break;
    if ( v10 && (v23 & 0xFFF00000000LL) != 0 )
    {
      v26 = v10;
      v24 = WORD2(v23) & 0xFFF;
      do
      {
        if ( *v26 )
        {
          v27 = v8++;
          *(_QWORD *)(v9 + 8 * v27) = *v26;
        }
        ++v26;
        --v24;
      }
      while ( v24 );
    }
    v14 = v36;
    v4 += v35 & 0xFFF;
    v13 = (unsigned int)(a3 - v4);
  }
  while ( a3 != v4 );
  HvlpReleaseHypercallPage((unsigned int *)&v39, v13, v24, 0LL);
  if ( v10 )
    HvlpReleaseHypercallPage((unsigned int *)&v37, v28, v29, v30);
  if ( v25 )
    v31 = HvlpHvToNtStatus(v25);
  else
    v31 = 0;
  if ( v8 )
  {
    v32 = (_QWORD *)(v9 + 8LL * v8);
    do
    {
      KeWaitPhysicalFaultCompletion(*--v32);
      --v8;
    }
    while ( v8 );
  }
  return v31;
}
