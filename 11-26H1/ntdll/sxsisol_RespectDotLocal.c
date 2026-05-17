/*
 * XREFs of sxsisol_RespectDotLocal @ 0x180099B50
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlComputePrivatizedDllName_U @ 0x180099CD0 (RtlComputePrivatizedDllName_U.c)
 *     RtlpEnsureBufferSize @ 0x18009AB80 (RtlpEnsureBufferSize.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A5FB0 (RtlDoesFileExists_UstrEx.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  unsigned __int16 v8; // ax
  __int128 *v9; // rbx
  unsigned __int64 v10; // r8
  __int64 *v11; // r14
  __int64 v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  if ( !a2 )
  {
    v6 = -1073741811;
    goto LABEL_7;
  }
  v6 = RtlComputePrivatizedDllName_U(a1, &v17, &v18);
  if ( v6 < 0 )
    goto LABEL_7;
  if ( *((_QWORD *)&v18 + 1) && (LOBYTE(v5) = 1, (unsigned __int8)RtlDoesFileExists_UstrEx(&v18, v5)) )
  {
    v8 = v18;
    v9 = &v18;
  }
  else
  {
    if ( !*((_QWORD *)&v17 + 1) )
      goto LABEL_5;
    LOBYTE(v5) = 1;
    if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&v17, v5) )
      goto LABEL_5;
    v8 = v17;
    v9 = &v17;
  }
  v10 = v8 + 2LL;
  *a2 = 0;
  if ( v10 <= 0xFFFE )
  {
    v11 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v10 > *((_QWORD *)a2 + 4)) && (int)RtlpEnsureBufferSize(0LL, a2 + 8) < 0 )
    {
      v6 = -1073741801;
      goto LABEL_7;
    }
    v12 = *v11;
    v13 = *(unsigned __int16 *)v9;
    v14 = (const void *)*((_QWORD *)v9 + 1);
    v15 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v11;
    memmove((void *)(v12 + 2 * v15), v14, v13);
    v16 = (unsigned __int16)(*a2 + *(_WORD *)v9);
    *a2 = v16;
    a2[1] = v16 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v16 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_5:
    v6 = 0;
    goto LABEL_7;
  }
  v6 = -1073741562;
LABEL_7:
  if ( *((_QWORD *)&v17 + 1) )
  {
    RtlpSysVolFree(*((__int64 *)&v17 + 1));
    v17 = 0LL;
  }
  if ( *((_QWORD *)&v18 + 1) )
    RtlpSysVolFree(*((__int64 *)&v18 + 1));
  return (unsigned int)v6;
}
