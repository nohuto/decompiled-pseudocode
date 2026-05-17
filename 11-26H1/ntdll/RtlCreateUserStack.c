/*
 * XREFs of RtlCreateUserStack @ 0x1801100D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlCreateUserStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  struct _PEB *v11; // r13
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 result; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // edi
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 MinimumStackCommit; // [rsp+50h] [rbp-68h]
  int v27; // [rsp+58h] [rbp-60h] BYREF
  __int64 v28; // [rsp+5Ch] [rbp-5Ch]
  int v29; // [rsp+64h] [rbp-54h]
  unsigned __int64 v30; // [rsp+68h] [rbp-50h]
  __int64 v31; // [rsp+70h] [rbp-48h]
  __int64 v32; // [rsp+78h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v34; // [rsp+D8h] [rbp+20h] BYREF

  v33 = a3;
  v6 = a2;
  v7 = a1;
  v23 = 0LL;
  v32 = 0LL;
  v8 = HIBYTE(a4);
  v9 = a4 & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(a4) > 0x40u )
    return 3221225485LL;
  if ( !v9 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || a5 < v9 )
    return 3221225485LL;
  v25 = 3 * v9;
  v11 = NtCurrentPeb();
  if ( !a1 || !a2 )
  {
    v22 = 0LL;
    RtlImageNtHeaderEx(1, (unsigned __int64)v11->ImageBaseAddress, 0LL, &v22);
    if ( !v22 )
      return 3221225595LL;
    if ( !v7 )
      v7 = *(_QWORD *)(v22 + 104);
    if ( !v6 )
      v6 = *(_QWORD *)(v22 + 96);
    a3 = v33;
  }
  if ( !v7 )
    v7 = 0x4000LL;
  if ( v7 >= v6 )
    v6 = (v7 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v12 = ~(v9 - 1);
  v13 = v12 & (v7 + v9 - 1);
  v14 = ~(v10 - 1);
  v15 = v14 & (v6 + v10 - 1);
  MinimumStackCommit = v11->MinimumStackCommit;
  if ( MinimumStackCommit && v13 < MinimumStackCommit )
  {
    v13 = v12 & (v9 + MinimumStackCommit - 1);
    if ( v13 >= v15 )
      v15 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v15 = v14 & (v10 + v15 - 1);
  }
  v27 = v8;
  v28 = 0LL;
  v29 = 0;
  v30 = v15;
  v31 = a3;
  result = NtSetInformationProcess(-1LL, 41LL, &v27, 40LL);
  if ( (int)result >= 0 )
  {
    v17 = a6;
    *a6 = 0LL;
    v17[1] = 0LL;
    v18 = v32;
    v17[4] = v32;
    v17[2] = v18 + v15;
    v34 = v15 + v18 - v13;
    v19 = v15 - v13;
    v24 = v13;
    v20 = ZwAllocateVirtualMemory(-1LL, &v34, 0LL, &v24, 4096, 4);
    if ( v20 < 0
      || (v21 = v34, v17[3] = v34, v19 >= v25)
      && (v34 = v21 - v25, v23 = v25, v20 = ZwAllocateVirtualMemory(-1LL, &v34, 0LL, &v23, 4096, 260), v20 < 0) )
    {
      v22 = v17[4];
      v25 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v22, &v25, 0x8000LL);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
