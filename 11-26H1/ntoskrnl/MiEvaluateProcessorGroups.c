/*
 * XREFs of MiEvaluateProcessorGroups @ 0x1402F6AC4
 * Callers:
 *     MiGetNextAffinityWalker @ 0x1402F68CC (MiGetNextAffinityWalker.c)
 * Callees:
 *     MiEvaluateProcessor @ 0x1402F6CF4 (MiEvaluateProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiEvaluateProcessorGroups(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // esi
  bool v8; // zf
  __int128 v9; // xmm6
  __int64 v10; // rbx
  int v11; // edx
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // r8d
  __int128 v19; // [rsp+28h] [rbp-39h] BYREF
  __int128 v20; // [rsp+38h] [rbp-29h]
  __int128 v21; // [rsp+48h] [rbp-19h] BYREF
  __int128 v22; // [rsp+58h] [rbp-9h]
  __int128 v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+17h]

  result = 0LL;
  v4 = 0;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( *(_DWORD *)(a3 + 12) )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(a3 + 16);
      v8 = *(_DWORD *)(a3 + 28) == -1;
      v9 = *(_OWORD *)(result + 16LL * v4);
      v19 = v9;
      if ( v8 )
        goto LABEL_3;
      v15 = v9;
      if ( !(_QWORD)v9 )
        goto LABEL_7;
      v20 = v9;
      v16 = v9;
      do
      {
        v17 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity(&v19)];
        v18 = *(_DWORD *)(v17 + 47412);
        if ( *(_BYTE *)(a2 + 8) )
          v18 += *(_DWORD *)(*(_QWORD *)(384LL * *(unsigned int *)(v17 + 34644) + qword_140E2D838 + 376) + 12LL);
        if ( v18 != *(_DWORD *)(a3 + 24) )
        {
          v16 &= ~*(_QWORD *)(v17 + 200);
          *(_QWORD *)&v20 = v16;
          v9 = v20;
        }
        result = ~*(_QWORD *)(v17 + 200);
        v15 &= result;
        *(_QWORD *)&v19 = v15;
      }
      while ( v15 );
      v19 = v9;
      v10 = v9;
LABEL_4:
      if ( v10 )
        break;
LABEL_7:
      if ( ++v4 >= *(_DWORD *)(a3 + 12) )
        return result;
    }
    MiEvaluateProcessor(&v21, a2, &v19);
    v11 = DWORD2(v23);
    v12 = v22;
    HIDWORD(v23) = *(_DWORD *)(a3 + 24);
    result = WORD4(v19);
    v13 = 56LL * SDWORD2(v23);
    LODWORD(v21) = WORD4(v19);
    LODWORD(v24) = v4;
    *(_OWORD *)(v13 + a1) = v21;
    v14 = v23;
    *(_OWORD *)(v13 + a1 + 16) = v12;
    *(_QWORD *)&v12 = v24;
    *(_OWORD *)(v13 + a1 + 32) = v14;
    *(_QWORD *)(v13 + a1 + 48) = v12;
    if ( !v11 )
      return result;
LABEL_3:
    v10 = v19;
    goto LABEL_4;
  }
  return result;
}
