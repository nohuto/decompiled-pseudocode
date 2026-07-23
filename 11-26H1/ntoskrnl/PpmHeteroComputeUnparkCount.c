/*
 * XREFs of PpmHeteroComputeUnparkCount @ 0x14041552C
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x1404163FC (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 */

__int64 __fastcall PpmHeteroComputeUnparkCount(
        unsigned int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        _DWORD *a10)
{
  unsigned int v10; // edi
  int v11; // esi
  __int64 v12; // rax
  unsigned int v14; // r10d
  int v15; // r11d
  int *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbx
  int *v20; // rbp
  unsigned __int64 v21; // r14
  __int64 *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // r9d
  unsigned int v27; // ebp
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r9d
  int v32; // eax
  __int64 result; // rax
  __int64 v34; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+90h] [rbp+8h]
  __int64 v36; // [rsp+98h] [rbp+10h]

  v36 = a2;
  v10 = 0;
  v11 = a7;
  v12 = a4;
  v14 = 2;
  v15 = a3;
  if ( a1 < 3 )
    v14 = a1;
  v35 = v14;
  if ( a8 )
  {
    v16 = a6;
    v17 = a8;
    do
    {
      v18 = *v16++;
      v11 -= v18;
      --v17;
    }
    while ( v17 );
    v12 = a4;
    a2 = v36;
  }
  LODWORD(v19) = a8;
  if ( a8 < a9 )
  {
    v20 = &a6[a8];
    v21 = (unsigned __int64)v14 << 6;
    v22 = (__int64 *)(a5 + 8LL * a8);
    v23 = v12 - (_QWORD)a6;
    v34 = v12 - (_QWORD)a6;
    do
    {
      LODWORD(v24) = 0;
      if ( a5 )
        v24 = *v22;
      v25 = 63LL;
      if ( (unsigned int)v19 < 0x3F )
        v25 = (unsigned int)v19;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v15,
                            *(int *)((char *)v20 + v23),
                            v24,
                            *(unsigned __int8 *)(v21 + v25 + a2 + 456),
                            a1) )
        break;
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, v11, 0, v26, a1) )
        break;
      LODWORD(v19) = v19 + 1;
      v23 = v34;
      v11 -= *v20;
      v15 = a3;
      ++v22;
      a2 = v36;
      ++v20;
    }
    while ( (unsigned int)v19 < a9 );
    if ( (unsigned int)v19 > a8 )
    {
      v10 = 2;
      goto LABEL_28;
    }
    v15 = a3;
  }
  while ( 1 )
  {
    v27 = v19;
    if ( !(_DWORD)v19 )
      break;
    v19 = (unsigned int)(v19 - 1);
    LODWORD(v28) = 0;
    v11 += a6[v19];
    if ( a5 )
      v28 = *(_QWORD *)(a5 + 8 * v19);
    v29 = 63LL;
    if ( (unsigned int)v19 < 0x3F )
      v29 = (unsigned int)v19;
    v30 = PpmHeteroUtilityGreaterThanOrEqualThreshold(
            v15,
            *(_DWORD *)(a4 + 4 * v19),
            v28,
            *(unsigned __int8 *)(v29 + v36 + ((unsigned __int64)v35 << 6) + 264),
            a1);
    v15 = a3;
    if ( v30 )
    {
      v32 = PpmHeteroUtilityGreaterThanOrEqualThreshold(a3, v11, 0, v31, a1);
      v15 = a3;
      if ( v32 )
        break;
    }
  }
  LODWORD(v19) = v27;
  if ( v27 < a8 )
    v10 = 1;
LABEL_28:
  result = v10;
  *a10 = v19;
  return result;
}
