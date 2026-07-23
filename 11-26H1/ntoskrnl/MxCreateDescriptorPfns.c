/*
 * XREFs of MxCreateDescriptorPfns @ 0x140CFBB94
 * Callers:
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 * Callees:
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MxClearStaleSecurePageMapping @ 0x140CFB550 (MxClearStaleSecurePageMapping.c)
 *     MxInsertPagesInFreeList @ 0x140CFDB00 (MxInsertPagesInFreeList.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
 */

char __fastcall MxCreateDescriptorPfns(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  ULONG_PTR v3; // rdi
  __int64 v6; // rax
  int v7; // esi
  int v8; // r15d
  __int64 v9; // rbx
  ULONG_PTR v10; // r8
  __int64 *v11; // rcx
  _QWORD *v12; // rcx
  ULONG_PTR v13; // rbp
  ULONG_PTR v14; // r14
  unsigned int v15; // eax
  const __m128i *v16; // r8
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h]
  __int128 v20; // [rsp+60h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 40);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
LABEL_4:
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(_DWORD *)(a1 + 28) & 1;
    v9 = 48 * v6;
    v6 = 0xFFFFDE0000000000uLL;
LABEL_5:
    for ( v9 += v6; ; v9 += 48LL )
    {
      if ( !v3 )
        return v6;
      if ( !v8 )
      {
        v10 = v3;
LABEL_25:
        v13 = (v9 + 0x220000000000LL) / 48;
        v14 = MiRestrictRangeToNode(v13, v10);
        if ( ((v7 - 9) & 0xFFFFFFDD) != 0 || v7 == 43 )
        {
          if ( ((v7 - 33) & 0xFFFFFFFD) != 0 )
          {
            if ( v7 == 29 || v7 == 36 )
            {
              v15 = 8388736;
              v16 = a3;
            }
            else
            {
              v15 = 64;
              v16 = a2;
            }
            MiInitializeNewPfns((__m128i *)v9, v14, v16, (__int64)&MiSystemPartition, v15, 0LL, 0LL);
          }
          else
          {
            MxInsertEnclaveBootPages(v13);
          }
        }
        else
        {
          DWORD2(v19) = 2;
          *(_QWORD *)&v20 = (v9 + 0x220000000000LL) / 48;
          *((_QWORD *)&v20 + 1) = v14;
          MxInsertPagesInFreeList(&v18);
        }
        v3 -= v14;
        v6 = 48 * v14;
        goto LABEL_5;
      }
      v10 = 0LL;
      v11 = (__int64 *)(v9 + 8);
      do
      {
        if ( (*((_BYTE *)v11 + 26) & 7) != 0 )
          break;
        v6 = *v11;
        if ( *v11 )
          break;
        ++v10;
        v11 += 6;
      }
      while ( v10 < v3 );
      if ( v10 )
        goto LABEL_25;
      if ( v7 == 29 || v7 == 36 )
      {
        v12 = *(_QWORD **)(v9 + 8);
        if ( !v12 )
          goto LABEL_21;
        if ( v7 == 29 )
        {
          MxClearStaleSecurePageMapping(v12);
LABEL_21:
          LOBYTE(v6) = MiInitializeNewPfns((__m128i *)v9, 1uLL, a3, (__int64)&MiSystemPartition, 0x800080u, 0LL, 0LL);
          goto LABEL_22;
        }
        LOBYTE(v6) = MiMarkPfnVerified(v9, 0);
      }
      else if ( v7 == 48 )
      {
        KeBugCheckEx(0x1Au, 0x303031DuLL, (v9 + 0x220000000000LL) / 48, *(_QWORD *)(v9 + 8), *(_BYTE *)(v9 + 34) & 7);
      }
LABEL_22:
      --v3;
    }
  }
  if ( --v3 )
  {
    v6 = 1LL;
    goto LABEL_4;
  }
  return v6;
}
