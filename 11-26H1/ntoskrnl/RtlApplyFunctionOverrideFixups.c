/*
 * XREFs of RtlApplyFunctionOverrideFixups @ 0x1409A02CC
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x14080F814 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 * Callees:
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409A05D4 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

__int64 __fastcall RtlApplyFunctionOverrideFixups(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        char a5)
{
  char v5; // di
  __int64 result; // rax
  __int64 v10; // r12
  _DWORD *v11; // r8
  unsigned int v12; // r14d
  unsigned __int16 v13; // cx
  __int64 v14; // r11
  unsigned __int16 v15; // bx
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // bp
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  unsigned int v21; // edi
  int v22; // r14d
  __int64 v23; // r9
  unsigned __int16 v24; // r8
  bool v25; // r11
  unsigned int v26; // r9d
  __int64 v27; // rcx
  int v28; // ecx
  unsigned __int16 v29; // cx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // edi
  __int64 v34; // rax
  unsigned __int16 v35; // [rsp+20h] [rbp-48h]
  _DWORD *v36; // [rsp+28h] [rbp-40h]
  unsigned int v37; // [rsp+78h] [rbp+10h]

  v5 = a4;
  result = (__int64)RtlpGetFunctionOverrideIndex(a1, a2);
  v10 = 0LL;
  v36 = (_DWORD *)result;
  v11 = (_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    v12 = a2 << 12;
    v37 = v12;
    while ( 1 )
    {
      v13 = v11[2 * v10 + 1];
      v14 = *(_QWORD *)((char *)a1 + (a5 != 0 ? 8 : 0) + 8);
      v15 = v13 & 0xFFF;
      v35 = v13 >> 12;
      v16 = HIWORD(v11[2 * v10 + 1]) & 7;
      v17 = (HIWORD(v11[2 * v10 + 1]) >> 3) & 7;
      v18 = *((_DWORD *)a1 + 4 * (unsigned int)v11[2 * v10 + 2] + 10);
      if ( a5 )
      {
        v19 = *((_DWORD *)a1 + 4 * (unsigned int)v11[2 * v10 + 2] + 12);
        v20 = (*((_DWORD *)a1 + 4 * (unsigned int)v11[2 * v10 + 2] + 13) >> 1) & 1;
      }
      else
      {
        v19 = *((_DWORD *)a1 + 4 * (unsigned int)v11[2 * v10 + 2] + 11);
        v28 = *((_DWORD *)a1 + 4 * (unsigned int)v11[2 * v10 + 2] + 13);
        v20 = v28 & 1;
        v14 &= -(__int64)((v28 & 4) != 0);
      }
      result = 0LL;
      if ( !v5 )
      {
        v18 = v19;
        result = v20;
      }
      v21 = v12 + v15;
      v22 = v16;
      if ( !v16 )
        v22 = 4;
      LODWORD(v23) = v18;
      if ( !(_DWORD)result )
        goto LABEL_10;
      v24 = v35;
      if ( v35 != 1 )
        break;
      v27 = v22 + v21;
      v23 = v14 + v18;
      result = v23 - v27;
      if ( v23 < v27 )
      {
        if ( result < (__int64)0xFFFFFFFF80000000uLL )
          LODWORD(v23) = v18;
      }
      else
      {
        if ( result <= 0x7FFFFFFF )
          v18 = v23;
        LODWORD(v23) = v18;
      }
LABEL_11:
      v25 = v16 || v17;
      if ( v24 != 1 )
      {
        if ( v24 == 2 )
        {
          result = *(_DWORD *)(v15 + a3) ^ (*(_DWORD *)(v15 + a3) ^ ((int)(v23 - v21) / 4)) & 0x3FFFFFFu;
          *(_DWORD *)(v15 + a3) = result;
        }
        else if ( v24 == 3 )
        {
          if ( (!v25 || v17)
            && (v32 = v15,
                v33 = v21 & 0xFFFFF000,
                v15 += 4,
                result = ((int)(v23 - v33) >> 12) & 0x1FFFFC,
                *(_DWORD *)(v32 + a3) = *(_DWORD *)(v32 + a3) & 0x9F00001F | (8
                                                                            * (result | ((((int)(v23 - v33) >> 12) & 3) << 26))),
                !v25)
            || v16 )
          {
            result = *(unsigned int *)(v15 + a3);
            *(_DWORD *)(v15 + a3) = result ^ (result ^ ((_DWORD)v23 << 10)) & 0x3FFC00;
          }
        }
        goto LABEL_17;
      }
      v26 = v23 - v22 - v21;
      if ( v16 )
      {
        v26 >>= 8 * (4 - v16);
      }
      else
      {
        if ( !v17 )
          goto LABEL_16;
        v16 = v17;
      }
      if ( v16 != 4 )
      {
        v29 = 0;
        do
        {
          v34 = v29++;
          result = v15 + v34;
          *(_BYTE *)(result + a3) = v26;
          v26 >>= 8;
        }
        while ( v29 < v16 );
        goto LABEL_17;
      }
LABEL_16:
      result = v15;
      *(_DWORD *)(v15 + a3) = v26;
LABEL_17:
      v12 = v37;
      v10 = (unsigned int)(v10 + 1);
      v11 = v36;
      v5 = a4;
      if ( (unsigned int)v10 >= *v36 )
        return result;
    }
    if ( (unsigned int)v35 - 2 > 1 )
      goto LABEL_11;
    result = v21;
    v30 = v14 + v18;
    v31 = v30 - v21;
    if ( v30 >= v21 )
    {
      if ( v31 <= 134217724 )
        LODWORD(v23) = v30;
    }
    else
    {
      LODWORD(v23) = v30;
      if ( v31 < -134217728 )
        LODWORD(v23) = v18;
    }
LABEL_10:
    v24 = v35;
    goto LABEL_11;
  }
  return result;
}
