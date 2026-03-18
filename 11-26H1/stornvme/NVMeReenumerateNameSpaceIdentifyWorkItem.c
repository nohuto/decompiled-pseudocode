/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeVersionCheck @ 0x1400114D0 (NVMeVersionCheck.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1400254B8 (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x140027F0C (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x140028478 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1400284D8 (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x140028C6C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x140028F38 (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x140029294 (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x140029400 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  char v6; // r14
  __int64 v7; // r9
  __int64 result; // rax
  bool v9; // zf
  void *v10; // rbx
  __int64 i; // rax
  __int64 v12; // r13
  int j; // edx
  __int64 v14; // rax
  bool v15; // al
  __int64 v16; // rdi
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // r9
  void **v23; // [rsp+20h] [rbp-59h]
  const wchar_t *v24; // [rsp+28h] [rbp-51h]
  __int64 v25; // [rsp+30h] [rbp-49h]
  int v26; // [rsp+38h] [rbp-41h]
  int v27; // [rsp+40h] [rbp-39h]
  __int64 v28; // [rsp+48h] [rbp-31h]
  const wchar_t *v29; // [rsp+50h] [rbp-29h]
  __int64 v30; // [rsp+58h] [rbp-21h]
  const wchar_t *v31; // [rsp+60h] [rbp-19h]
  __int64 v32; // [rsp+68h] [rbp-11h]
  void *v33; // [rsp+70h] [rbp-9h] BYREF
  int v34[2]; // [rsp+78h] [rbp-1h]
  int v35[2]; // [rsp+80h] [rbp+7h]
  unsigned int v36; // [rsp+E0h] [rbp+67h] BYREF
  void *v37; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v38; // [rsp+F0h] [rbp+77h]
  _BYTE *v39; // [rsp+F8h] [rbp+7Fh]

  v38 = a3;
  *(_QWORD *)v35 = *(_QWORD *)(a1 + 1560);
  v5 = *(_DWORD *)(*(_QWORD *)v35 + 516LL);
  if ( v5 > 0xFF )
    v5 = 255;
  *(_QWORD *)v34 = *(_QWORD *)(a1 + 3992);
  v6 = 0;
  v37 = 0LL;
  v33 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 0, 1, 0x1000u, (__int64 *)&v37, &v33);
  v39 = v37;
  if ( !v37 )
  {
    result = NVMeFreeNamespaceEnumerationContext(a1, a2, 1, v7);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    v9 = (*(_BYTE *)(a1 + 21) & 2) == 0;
    ++*(_DWORD *)(a1 + 4208);
    if ( !v9 )
      return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    return result;
  }
  v10 = v33;
  for ( i = 0LL; ; i = v36 + 1 )
  {
    v36 = i;
    if ( (unsigned int)i >= 0x400 )
      break;
    v12 = *(unsigned int *)(a2 + 4 * i + 2048);
    if ( !(_DWORD)v12 )
      break;
    if ( (unsigned int)v12 <= v5 )
    {
      LocalCommandReuse(a1, a1 + 1136);
      for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1232) + 4225LL) |= j )
        ++j;
      *(_WORD *)(*(_QWORD *)(a1 + 1232) + 4212LL) = 0;
      memset(v37, 0, 0x1000uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 4160LL) = v37;
      *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 4168LL) = v10;
      *(_DWORD *)(*(_QWORD *)(a1 + 1232) + 4208LL) = 4096;
      v14 = *(_QWORD *)(a1 + 1232);
      *(_BYTE *)(v14 + 4096) = 6;
      *(_DWORD *)(v14 + 4100) = v12;
      *(_QWORD *)(v14 + 4120) = v10;
      *(_BYTE *)(v14 + 4136) = 0;
      ProcessCommand(a1, a1 + 1144);
      WaitForCommandComplete(a1, a1 + 1144, 0);
      if ( *(_BYTE *)(a1 + 1147) == 1 )
      {
        if ( *(_BYTE *)(a1 + 20) || v5 <= 1 )
        {
          v16 = (__int64)v39;
        }
        else
        {
          v15 = NVMeVersionCheck(a1, 1u, 1u);
          v16 = (__int64)v39;
          if ( v15 && !v39[4 * (v39[26] & 0xF) + 130] && !*(_QWORD *)v39 )
            continue;
        }
        v33 = 0LL;
        v23 = &v33;
        StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
        if ( !v33 )
        {
          v17 = *(_DWORD *)(a1 + 4212) + 1;
          v9 = (*(_BYTE *)(a1 + 21) & 2) == 0;
          *(_DWORD *)(a1 + 4212) = v17;
          if ( !v9 )
          {
            v32 = v17;
            v31 = L"Pool Fail Count";
            v30 = v12;
            v29 = L"NSID";
            v28 = 0LL;
            v27 = 0;
            v26 = 2;
            v25 = 8LL;
            v24 = L"Reenumeration Resource Fail";
            LODWORD(v23) = 10;
            StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
          }
          break;
        }
        NVMeParseNameSpaceIdentifyData(a1, v16, *(__int64 *)v35, *(__int64 *)v34, v12, (char *)v33);
        *(_QWORD *)(a2 + 8LL * (unsigned int)(v12 - 1) + 8) = v33;
        ++*(_DWORD *)(a2 + 4);
      }
    }
  }
  if ( v37 )
    NVMeFreeDmaBufferEx(a1, 0, 1, 4096LL, (__int64 *)&v37, (__int64)v10);
  v18 = a1;
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
  {
    v6 = 1;
    v19 = a2 + 2048;
    goto LABEL_29;
  }
  v36 = 0;
  v21 = NVMeReenumerateNameSpaceCompare(a1, a2, v5, &v36);
  if ( v21 )
  {
    if ( !(unsigned __int8)NVMeReenumerateNameSpaceWaitForAllIOComplete(a1) )
    {
      NVMeReenumerateNameSpaceCancelMerge(a1, v5);
      v6 = 1;
      goto LABEL_40;
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
    {
      NVMeReenumerateNameSpaceCancelMerge(a1, v5);
      v19 = a2 + 2048;
      v6 = 1;
LABEL_35:
      v18 = a1;
LABEL_29:
      NVMeReenumerateReissueGetLogNamespaceChangeList(v18, v19);
      goto LABEL_40;
    }
    NVMeReenumerateNameSpaceMerge(a1, a2, v5);
    NVMeReenumerateNameSpaceRescan(a1, v5, v21, v36, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
  }
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
  {
    v19 = 0LL;
    goto LABEL_35;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
LABEL_40:
  NVMeFreeNamespaceEnumerationContext(a1, a2, v6, v20);
  return StorPortExtendedFunction(31LL, a1, v38, v22);
}
