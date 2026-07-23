/*
 * XREFs of LdrpRedirectDelayloadFailure @ 0x1800C3F70
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C3A0 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpGetDelayloadAPIInfo @ 0x1800C9110 (LdrpGetDelayloadAPIInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpRedirectDelayloadFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _DWORD *),
        __int64 (__fastcall *a5)(__int64, const char *),
        __int64 a6,
        NTSTATUS Status)
{
  __int64 v11; // r12
  __int64 v12; // rsi
  const char *v13; // rdi
  const char *v14; // r9
  const char *v15; // r14
  __int64 v16; // rbx
  char v17; // al
  _DWORD v19[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h]
  __int64 v21; // [rsp+60h] [rbp-31h]
  __int64 v22; // [rsp+68h] [rbp-29h]
  int v23; // [rsp+70h] [rbp-21h]
  const char *v24; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+80h] [rbp-11h]
  ULONG v26; // [rsp+90h] [rbp-1h]
  unsigned int v27; // [rsp+E0h] [rbp+4Fh] BYREF
  const char *v28; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v29; // [rsp+F0h] [rbp+5Fh]

  v29 = a3;
  v28 = 0LL;
  v27 = 0;
  v19[1] = 0;
  memset_thunk_772440563353939046(v19, 0, 0x44uLL);
  v11 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a3 + 4);
  v12 = 0LL;
  LdrpGetDelayloadAPIInfo(a1, a3, a6, (unsigned int)&v28, (__int64)&v27);
  v13 = v28;
  v14 = "Unknown";
  v15 = (const char *)v27;
  if ( v28 )
    v14 = v28;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrdload.c",
    548,
    (__int64)"LdrpRedirectDelayloadFailure",
    0,
    "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
    v11,
    v14,
    v27,
    a1 + 88,
    Status);
  if ( !a2 )
  {
    v16 = 0LL;
LABEL_8:
    v17 = 1;
    goto LABEL_9;
  }
  v16 = *(_QWORD *)(a2 + 48);
  if ( (LdrpPolicyBits & 0x10) != 0 || (*(_DWORD *)(a2 + 104) & 1) != 0 )
    goto LABEL_8;
  v17 = 0;
LABEL_9:
  if ( !a4 || !v17 )
    goto LABEL_15;
  memset_thunk_772440563353939046(v19, 0, 0x48uLL);
  v20 = v29;
  v21 = a6;
  v19[0] = 72;
  v22 = v11;
  v25 = v16;
  v26 = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v13 )
  {
    v23 = 1;
    v24 = v13;
  }
  else
  {
    v23 = 0;
    LODWORD(v24) = (_DWORD)v15;
  }
  v12 = a4(4LL, v19);
  if ( !v12 )
  {
LABEL_15:
    if ( a5 )
    {
      if ( !v13 )
        v13 = v15;
      return a5(v11, v13);
    }
  }
  return v12;
}
