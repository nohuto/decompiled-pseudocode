/*
 * XREFs of PortMiniportRegistryRead @ 0x140037EB0
 * Callers:
 *     StorPortRegistryRead @ 0x140037CD0 (StorPortRegistryRead.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall PortMiniportRegistryRead(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _BYTE *v8; // r14
  int v9; // eax
  int *v10; // rcx
  __int64 v11; // rbx
  PVOID SystemRoutineAddress; // rax
  unsigned int v13; // r12d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  _WORD *v17; // rcx
  __int64 v18; // rbx
  int v19; // edx
  unsigned int i; // r8d
  int v21; // eax
  PVOID P[2]; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  void *v25; // [rsp+50h] [rbp-39h] BYREF
  int v26; // [rsp+58h] [rbp-31h]
  __int64 v27; // [rsp+60h] [rbp-29h]
  PVOID *v28; // [rsp+68h] [rbp-21h]
  int v29; // [rsp+70h] [rbp-19h]
  int *v30; // [rsp+78h] [rbp-11h]
  int v31; // [rsp+80h] [rbp-9h]
  int v32; // [rsp+F0h] [rbp+67h] BYREF
  int v33; // [rsp+100h] [rbp+77h] BYREF

  v32 = 0;
  v33 = -1;
  *(_OWORD *)P = 0LL;
  memset_0(&v25, 0, 0x70uLL);
  v8 = (_BYTE *)(*(_QWORD *)(a4 + 32) + *(unsigned int *)(a4 + 52));
  v27 = *(_QWORD *)(a2 + 8);
  v9 = 20;
  v26 = 20;
  v29 = 0;
  if ( a3 == 1 )
  {
    v9 = 52;
    v28 = P;
    v10 = &v32;
    v26 = 52;
  }
  else
  {
    if ( a3 == 4 )
    {
      v9 = 52;
      v28 = (PVOID *)v8;
      v26 = 52;
    }
    else
    {
      v28 = (PVOID *)a4;
      v25 = &PortpBinaryReadCallBack;
    }
    v10 = &v33;
  }
  v30 = v10;
  v31 = 4;
  if ( (v9 & 0x20) != 0 )
  {
    v26 = v9 | 0x100;
    v29 = a3 << 24;
  }
  v11 = *(_QWORD *)(a1 + 8);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v13 = ((__int64 (__fastcall *)(_QWORD, __int64, void **, _QWORD, _QWORD))SystemRoutineAddress)(
          0LL,
          v11,
          &v25,
          0LL,
          0LL);
  if ( (v13 & 0x80000000) != 0 )
    goto LABEL_30;
  if ( a3 != 1 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(a4 + 44) = 4;
      return v13;
    }
    if ( *(_DWORD *)(a4 + 60) != -1073741789 )
      return v13;
    v13 = -1073741789;
LABEL_30:
    v21 = *(_DWORD *)(a4 + 44);
    *(_DWORD *)(a4 + 44) = 0;
    *(_DWORD *)(a4 + 48) = v21;
    return v13;
  }
  if ( LOWORD(P[0]) && (v14 = *(_DWORD *)(a4 + 44), LOWORD(P[0]) >> 1 < v14) )
  {
    v15 = LOWORD(P[0]) >> 1;
    v16 = v15 + 1;
    if ( WORD1(P[0]) - (unsigned __int64)LOWORD(P[0]) >= 2 && *((_WORD *)P[1] + v15) && v16 < v14 )
      v16 = v15 + 2;
    memset_0(v8, 0, *(unsigned int *)(a4 + 44));
    v17 = P[1];
    v18 = v16 - 1;
    v19 = 0;
    v8[v18] = 0;
    if ( v17 )
    {
      for ( i = 0; i < (unsigned int)v18; ++v19 )
      {
        if ( !*v17 )
          break;
        ++i;
        *v8++ = *(_BYTE *)v17++;
      }
    }
  }
  else
  {
    v13 = -1073741789;
    v19 = 0;
    *(_DWORD *)(a4 + 48) = ((unsigned int)LOWORD(P[0]) + 1) >> 1;
  }
  *(_DWORD *)(a4 + 44) = v19;
  ExFreePoolWithTag(P[1], 0);
  return v13;
}
