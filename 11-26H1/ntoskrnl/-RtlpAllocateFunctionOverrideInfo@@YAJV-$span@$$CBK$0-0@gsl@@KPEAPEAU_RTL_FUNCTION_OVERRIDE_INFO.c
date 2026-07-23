/*
 * XREFs of ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C248
 * Callers:
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x140A6B17C (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpAllocateFunctionOverrideInfo(unsigned __int64 *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // rcx
  unsigned int v6; // r14d
  int v7; // r11d
  char v8; // r10
  _DWORD *v9; // r8
  unsigned int v10; // esi
  int v11; // edi
  int v12; // r9d
  char v13; // bl
  __int64 v14; // r13
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // kr00_8
  __int64 v17; // rbp
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r12
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned int v22; // r11d
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 Pool2; // rax
  __int64 v27; // rdx
  gsl::details *v28; // rcx
  unsigned __int64 v29; // rbx
  gsl::details *v30; // r11
  _DWORD *v31; // r10
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  char v34; // al
  int v35; // eax
  _DWORD *v37; // r9
  int v38; // [rsp+78h] [rbp+10h]
  _DWORD *v39; // [rsp+80h] [rbp+18h]
  unsigned __int64 v40; // [rsp+88h] [rbp+20h]

  *a3 = 0LL;
  if ( !a2 )
    return 3221225595LL;
  v4 = *a1;
  v5 = (_DWORD *)a1[1];
  v39 = v5;
  v6 = 0;
  v7 = 0;
  v38 = 0;
  v8 = 0;
  v40 = v4;
  v9 = &v5[v4];
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( v5 != v9 )
  {
    do
    {
      v13 = v8;
      if ( *v5 )
      {
        v7 += *v5;
        ++v6;
        v34 = v8;
        v11 = v12;
        if ( !v8 )
          v34 = 1;
        v8 = v34;
        v35 = v12;
        if ( v13 )
          v35 = v10;
        v10 = v35;
      }
      ++v12;
      ++v5;
    }
    while ( v5 != v9 );
    v38 = v11;
  }
  v14 = a2;
  v16 = a2;
  v15 = a2 * (unsigned __int128)0x10uLL;
  if ( !is_mul_ok(v16, 0x10uLL) )
    return 3221225595LL;
  v17 = v15 + 40;
  if ( (__int64)v15 + 40 < (unsigned __int64)v15 )
    return 3221225595LL;
  v18 = (unsigned int)(DWORD2(v15) + 8);
  v19 = v11 - v10 + 1;
  v20 = (v11 - v10 + 1) * (unsigned __int128)(unsigned int)(DWORD2(v15) + 8);
  if ( !is_mul_ok(v19, v18) )
    return 3221225595LL;
  v21 = v20 + v17;
  if ( (__int64)v20 + v17 < (unsigned __int64)v20 )
    return 3221225595LL;
  *(_QWORD *)&v20 = (unsigned int)(DWORD2(v20) + 12) * (unsigned __int64)v6;
  v22 = v7 - v6;
  if ( !is_mul_ok((unsigned int)(DWORD2(v20) + 12), v6) )
    return 3221225595LL;
  v23 = v20 + v21;
  if ( (unsigned __int64)v20 + v21 < (unsigned __int64)v20 )
    return 3221225595LL;
  v24 = v18 * v22;
  if ( !is_mul_ok(v18, v22) )
    return 3221225595LL;
  v25 = v24 + v23;
  if ( v24 + v23 < v24 )
    return 3221225595LL;
  if ( v25 > 0xFFFFFFFF )
    return 3221225495LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v27 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v28 = (gsl::details *)(Pool2 + v17);
  *(_QWORD *)Pool2 = v14;
  *(_QWORD *)(Pool2 + 24) = Pool2 + v17;
  *(_DWORD *)(Pool2 + 32) = v10;
  *(_DWORD *)(Pool2 + 36) = v38;
  if ( !(Pool2 + v17) && v19 )
    goto LABEL_23;
  if ( v25 < v21 )
    goto LABEL_23;
  v29 = v25 - v21;
  if ( v29 == -1LL )
    goto LABEL_23;
  v30 = (gsl::details *)((char *)v28 + 8 * v19);
  v31 = (_DWORD *)(v21 + Pool2);
  if ( v28 != v30 )
  {
    while ( v10 < v40 )
    {
      v32 = (unsigned int)v39[v10];
      if ( (_DWORD)v32 )
      {
        v33 = 8 * v32 + 4;
        if ( v29 < v33 )
          break;
        v29 -= v33;
        v37 = v31;
        if ( v29 == -1LL )
          break;
        *(_QWORD *)v28 = v31;
        v31 = (_DWORD *)((char *)v31 + v33);
        *v37 = v32;
      }
      ++v10;
      v28 = (gsl::details *)((char *)v28 + 8);
      if ( v28 == v30 )
        goto LABEL_33;
    }
LABEL_23:
    gsl::details::terminate(v28, v27);
    __debugbreak();
  }
LABEL_33:
  *a3 = v27;
  return 0LL;
}
