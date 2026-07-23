/*
 * XREFs of ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x140A6B17C
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x140A6B6C0 (-RtlpParseFunctionOverrideRelocations@@YAJKV-$span@$$CBE$0-0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_P.c)
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x140A6BBBC (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 *     ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C248 (-RtlpAllocateFunctionOverrideInfo@@YAJV-$span@$$CBK$0-0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFO.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C470 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCreateFunctionOverrideFixupInfo(
        __int128 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct _RTL_FUNCTION_OVERRIDE_INFORMATION **a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v7; // r12
  __int64 v8; // r10
  int v9; // ebx
  unsigned int *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v14; // r14
  int *v15; // r15
  __int128 v16; // rax
  __int128 v17; // xmm6
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r13
  __int128 v21; // rdi
  __int64 v22; // r8
  int v23; // eax
  __int128 v24; // rdi
  __int128 v25; // xmm6
  int *v26; // r13
  int v27; // eax
  int v28; // r14d
  _DWORD *v29; // rcx
  _QWORD v30[3]; // [rsp+40h] [rbp-91h] BYREF
  __int128 v31; // [rsp+58h] [rbp-79h] BYREF
  struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v32; // [rsp+68h] [rbp-69h] BYREF
  PVOID P; // [rsp+70h] [rbp-61h]
  __int128 v34; // [rsp+78h] [rbp-59h]
  __int128 v35; // [rsp+88h] [rbp-49h]
  __int64 v36; // [rsp+98h] [rbp-39h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-31h]
  __int128 v38; // [rsp+B0h] [rbp-21h]
  __int128 v39; // [rsp+C0h] [rbp-11h]
  int v40; // [rsp+128h] [rbp+57h]

  v6 = *a1;
  v7 = 0LL;
  v8 = a2 >> 12;
  v36 = 0LL;
  P = 0LL;
  *(_OWORD *)&v30[1] = v6;
  v32 = 0LL;
  v38 = 0LL;
  *a5 = 0LL;
  if ( (unsigned __int64)v6 >= 4 )
  {
    v11 = (unsigned int *)v30[2];
    v30[1] = v6 - 4;
    v30[2] += 4LL;
    if ( v11 )
    {
      v12 = *v11;
      if ( (_DWORD)v12 )
      {
        i = v30[1];
        v14 = (unsigned int)v12;
        if ( v12 < v30[1] )
        {
          v15 = (int *)v30[2];
          *((_QWORD *)&v16 + 1) = v30[2] + v12;
          *(_QWORD *)&v16 = v30[1] - (unsigned int)v12;
          if ( v30[1] - v14 == -1LL )
            goto LABEL_53;
          v35 = v16;
          if ( v14 > v30[1] )
            goto LABEL_53;
          v30[1] = v14;
          if ( !v30[2] )
            goto LABEL_53;
          v17 = *(_OWORD *)&v30[1];
          if ( (_QWORD)v16 )
          {
            v18 = 2 * v8;
            v19 = (unsigned int)v8;
            *(_QWORD *)&v39 = (unsigned int)v8;
            *(_QWORD *)&v16 = ExAllocatePool2(0x100uLL);
            P = (PVOID)v16;
            if ( !(_QWORD)v16 )
              return (unsigned int)-1073741801;
            if ( v19 <= v18 )
            {
              i = 0LL;
              *((_QWORD *)&v31 + 1) = v16;
              *(_QWORD *)&v31 = v19;
              *(_QWORD *)&v34 = v19;
              *((_QWORD *)&v34 + 1) = v16 + 4 * v19;
              v40 = 0;
              LODWORD(v36) = 0;
              v37 = v31;
              if ( v14 >= 0x10 )
              {
                *(_QWORD *)&v21 = v14 - 16;
                *((_QWORD *)&v21 + 1) = v30[2] + 16LL;
                v20 = v30[2];
              }
              else
              {
                v20 = 0LL;
                v21 = *(_OWORD *)&v30[1];
              }
              while ( v20 )
              {
                for ( i = v20; i != v20 + 4; i += 4LL )
                {
                  *((_QWORD *)&v16 + 1) = *(unsigned int *)i;
                  if ( *((_QWORD *)&v16 + 1) >= (unsigned __int64)a2 - 4 || DWORD2(v16) < a3 )
                    goto LABEL_2;
                }
                *(_QWORD *)&v16 = *(unsigned int *)(v20 + 8);
                if ( !(_DWORD)v16 || (v16 & 3) != 0 || (unsigned __int64)v16 > (unsigned __int64)v21 )
                  goto LABEL_2;
                if ( !*((_QWORD *)&v21 + 1) )
                  goto LABEL_53;
                if ( (v16 & 3) != 0 )
                  goto LABEL_53;
                i = (unsigned __int64)(unsigned int)v16 >> 2;
                if ( (unsigned __int64)v21 < (unsigned __int64)v16 )
                  goto LABEL_53;
                *(_QWORD *)&v21 = v21 - v16;
                *((_QWORD *)&v16 + 1) = *((_QWORD *)&v21 + 1) + v16;
                if ( (_QWORD)v21 == -1LL )
                  goto LABEL_53;
                v22 = *((_QWORD *)&v21 + 1) + 4 * i;
                while ( *((_QWORD *)&v21 + 1) != v22 )
                {
                  i = (unsigned int)**((_DWORD **)&v21 + 1);
                  if ( i >= (unsigned __int64)a2 - 4 || (unsigned int)i < a3 )
                    goto LABEL_2;
                  *((_QWORD *)&v21 + 1) += 4LL;
                }
                *(_QWORD *)&v16 = *(unsigned int *)(v20 + 12);
                if ( !(_DWORD)v16 || (v16 & 3) != 0 || (unsigned __int64)v16 > (unsigned __int64)v21 )
                  goto LABEL_2;
                v31 = v16;
                if ( !*((_QWORD *)&v16 + 1) )
                  goto LABEL_53;
                *(_QWORD *)&v21 = v21 - v16;
                *((_QWORD *)&v21 + 1) = *((_QWORD *)&v16 + 1) + v16;
                if ( (_QWORD)v21 == -1LL )
                  goto LABEL_53;
                *(_OWORD *)&v30[1] = v31;
                v20 = *((_QWORD *)&v16 + 1) + v16;
                v9 = RtlpParseFunctionOverrideRelocations(a2, &v30[1], a3, &v36);
                if ( v9 < 0 )
                  goto LABEL_3;
                if ( (unsigned __int64)v21 >= 0x10 )
                {
                  *((_QWORD *)&v21 + 1) += 16LL;
                  *(_QWORD *)&v21 = v21 - 16;
                  if ( (_QWORD)v21 == -1LL )
                    goto LABEL_53;
                }
                else
                {
                  v20 = 0LL;
                }
                i = (unsigned int)++v40;
              }
              if ( (_QWORD)v39 != -1LL )
              {
                *(_QWORD *)&v31 = v39;
                *((_QWORD *)&v31 + 1) = P;
                v23 = RtlpAllocateFunctionOverrideInfo(&v31, (unsigned int)i, &v32);
                v7 = v32;
                v9 = v23;
                if ( v23 >= 0 )
                {
                  LODWORD(v36) = 1;
                  *(_QWORD *)&v38 = v32;
                  DWORD2(v38) = 0;
                  *(_OWORD *)&v30[1] = v17;
                  v37 = v34;
                  if ( v14 >= 0x10 )
                  {
                    *(_QWORD *)&v24 = v14 - 16;
                    *((_QWORD *)&v24 + 1) = v15 + 4;
                  }
                  else
                  {
                    v15 = 0LL;
                    v24 = *(_OWORD *)&v30[1];
                  }
                  v25 = v35;
                  while ( v15 )
                  {
                    i = (unsigned int)v15[2];
                    *((_QWORD *)&v16 + 1) = (unsigned int)v15[3];
                    if ( (unsigned __int64)v24 < i )
                      goto LABEL_53;
                    if ( (unsigned __int64)v24 - i < *((_QWORD *)&v16 + 1) )
                      goto LABEL_53;
                    *(_QWORD *)&v35 = (unsigned int)v15[3];
                    *((_QWORD *)&v35 + 1) = *((_QWORD *)&v24 + 1) + i;
                    if ( i > (unsigned __int64)v24 || !*((_QWORD *)&v24 + 1) && i )
                      goto LABEL_53;
                    if ( (i & 3) != 0 )
                      goto LABEL_53;
                    *((_QWORD *)&v34 + 1) = *((_QWORD *)&v24 + 1);
                    *(_QWORD *)&v34 = i >> 2;
                    if ( !*((_QWORD *)&v24 + 1) && i >= 4 )
                      goto LABEL_53;
                    i = (unsigned int)(DWORD2(v16) + i);
                    if ( (unsigned __int64)v24 < i )
                      goto LABEL_53;
                    *((_QWORD *)&v24 + 1) += i;
                    *(_QWORD *)&v24 = v24 - i;
                    if ( (_QWORD)v24 == -1LL )
                      goto LABEL_53;
                    v26 = (int *)*((_QWORD *)&v24 + 1);
                    v31 = v35;
                    v9 = RtlpParseFunctionOverrideRelocations(a2, &v31, a3, &v36);
                    if ( v9 < 0 )
                      goto LABEL_3;
                    v27 = *v15;
                    v28 = DWORD2(v38);
                    v31 = v34;
                    v29 = (_DWORD *)((char *)v7 + 16 * DWORD2(v38) + 40);
                    *(_OWORD *)&v30[1] = v25;
                    *v29 = v27;
                    v9 = RtlpParseBinaryDecisionDiagram(&v30[1], &v31, (unsigned int)v15[1], a4, v29, a6);
                    if ( v9 < 0 )
                      goto LABEL_3;
                    if ( (unsigned __int64)v24 >= 0x10 )
                    {
                      *((_QWORD *)&v24 + 1) += 16LL;
                      *(_QWORD *)&v24 = v24 - 16;
                      if ( (_QWORD)v24 == -1LL )
                        goto LABEL_53;
                      v15 = v26;
                    }
                    else
                    {
                      v15 = 0LL;
                    }
                    DWORD2(v38) = v28 + 1;
                  }
                  v9 = RtlpSortAndValidateRelocations(v7);
                  if ( v9 >= 0 )
                    *a5 = v7;
                }
                goto LABEL_3;
              }
            }
LABEL_53:
            gsl::details::terminate((gsl::details *)i, *((__int64 *)&v16 + 1));
            __debugbreak();
          }
        }
      }
    }
  }
LABEL_2:
  v9 = -1073741701;
LABEL_3:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 < 0 && v7 )
    SddlpFree(v7);
  return (unsigned int)v9;
}
