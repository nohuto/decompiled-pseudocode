/*
 * XREFs of HalpInitializeGenericErrorSource @ 0x140BF23F8
 * Callers:
 *     HalpInitializeErrSrc @ 0x140BEFE50 (HalpInitializeErrSrc.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpCheckAndReportGhes @ 0x1404D5CCC (HalpCheckAndReportGhes.c)
 *     HalpFindGhesEntry @ 0x140590AE8 (HalpFindGhesEntry.c)
 *     HalpRegisterPeiErrorSource @ 0x140590B38 (HalpRegisterPeiErrorSource.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BF1DF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BF205C (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BF2328 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpInitializeGenericErrorSource(int a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  _QWORD *v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  int inited; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  bool v22; // zf
  int v23; // ecx
  __int64 ***v24; // r9
  __int64 *GhesEntry; // rax
  int v26; // r8d
  __int64 v27; // r9
  _QWORD v28[6]; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+90h] [rbp+40h] BYREF

  P = 0LL;
  if ( !a1 )
    return 0LL;
  if ( !HalpGenericInitDone )
  {
    qword_140FBAA08 = (__int64)&HalpGenericPeiErrorSourceListHead;
    HalpGenericPeiErrorSourceListHead = (__int64)&HalpGenericPeiErrorSourceListHead;
    qword_140FBAB58 = (__int64)&HalpGenericAssistErrorSourceListHead;
    HalpGenericAssistErrorSourceListHead = (__int64)&HalpGenericAssistErrorSourceListHead;
    HalpGenericInitDone = 1;
    qword_140FBAB48 = (__int64)&HalpGenericPolledErrorSourceListHead;
    HalpGenericPolledErrorSourceListHead = (__int64)&HalpGenericPolledErrorSourceListHead;
    qword_140FBAB68 = (__int64)&HalpGenericNmiErrorSourceListHead;
    HalpGenericNmiErrorSourceListHead = (__int64)&HalpGenericNmiErrorSourceListHead;
    qword_140FBAA28 = (__int64)&HalpGenericSeaErrorSourceListHead;
    HalpGenericSeaErrorSourceListHead = (__int64)&HalpGenericSeaErrorSourceListHead;
    qword_140FBAA38 = (__int64)&HalpGenericSdeiErrorSourceListHead;
    HalpGenericSdeiErrorSourceListHead = (__int64)&HalpGenericSdeiErrorSourceListHead;
    qword_140FBAA18 = (__int64)&HalpGenericSeiErrorSourceListHead;
    HalpGenericSeiErrorSourceListHead = (__int64)&HalpGenericSeiErrorSourceListHead;
  }
  switch ( *(_BYTE *)(a2 + 64) )
  {
    case 0:
      if ( *(_DWORD *)(a2 + 8) == 12 )
        inited = HalpInitGenericErrorSourceEntryV2(a2, (__int64 *)&P);
      else
        inited = HalpInitGenericErrorSourceEntry(a2, (__int64 *)&P);
      v20 = P;
      v5 = inited;
      *((_QWORD *)P + 2) = MEMORY[0xFFFFF78000000320];
      if ( inited < 0 )
        return v5;
      v21 = (_QWORD *)qword_140FBAB48;
      if ( *(__int64 **)qword_140FBAB48 != &HalpGenericPolledErrorSourceListHead )
        goto LABEL_56;
      v22 = HalpGenericPollingInitDone == 0;
      *v20 = &HalpGenericPolledErrorSourceListHead;
      v20[1] = v21;
      *v21 = v20;
      qword_140FBAB48 = (__int64)v20;
      if ( v22 )
      {
        HalpGenericPollingInitDone = 1;
        HalpInitGenericErrorSourcePollingRoutine();
      }
      goto LABEL_59;
    case 1:
    case 2:
      return (unsigned int)-1073741637;
    case 4:
      if ( *(_DWORD *)(a2 + 8) == 12 )
        v14 = HalpInitGenericErrorSourceEntryV2(a2, (__int64 *)&P);
      else
        v14 = HalpInitGenericErrorSourceEntry(a2, (__int64 *)&P);
      v5 = v14;
      if ( v14 >= 0 )
      {
        v15 = P;
        v16 = (__int64 *)*((_QWORD *)P + 5);
        if ( *v16 == -1 || (v17 = MmMapIoSpaceEx(*v16, *((unsigned int *)P + 12), 0x204u), (v15[7] = v17) == 0LL) )
        {
          ExFreePoolWithTag(v15, 0x576C6148u);
          return 3221225473LL;
        }
        v18 = (_QWORD *)qword_140FBAB68;
        if ( *(__int64 **)qword_140FBAB68 != &HalpGenericNmiErrorSourceListHead )
          goto LABEL_56;
        *v15 = &HalpGenericNmiErrorSourceListHead;
        v15[1] = v18;
        *v18 = v15;
        qword_140FBAB68 = (__int64)v15;
      }
      if ( !HalpGenericNmiInitDone )
        HalpGenericNmiInitDone = 1;
LABEL_48:
      if ( (v5 & 0x80000000) != 0 )
        return v5;
LABEL_59:
      v28[0] = &HalpGenericPeiErrorSourceListHead;
      v23 = *(_DWORD *)(a2 + 28);
      v24 = (__int64 ***)v28;
      v28[3] = &HalpGenericSdeiErrorSourceListHead;
      v28[1] = &HalpGenericNmiErrorSourceListHead;
      v28[2] = &HalpGenericSeaErrorSourceListHead;
      v28[4] = &HalpGenericSeiErrorSourceListHead;
      while ( 1 )
      {
        GhesEntry = HalpFindGhesEntry(v23, *v24);
        if ( GhesEntry )
          break;
        v24 = (__int64 ***)(v27 + 8);
        if ( (unsigned int)(v26 + 1) >= 5 )
          return v5;
      }
      HalpCheckAndReportGhes((__int64)GhesEntry);
      return v5;
    case 8:
      if ( *(_DWORD *)(a2 + 8) == 12 )
        v11 = HalpInitGenericErrorSourceEntryV2(a2, (__int64 *)&P);
      else
        v11 = HalpInitGenericErrorSourceEntry(a2, (__int64 *)&P);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v12 = (_QWORD *)qword_140FBAA28;
        if ( *(__int64 **)qword_140FBAA28 != &HalpGenericSeaErrorSourceListHead )
          goto LABEL_56;
        v13 = P;
        *(_QWORD *)P = &HalpGenericSeaErrorSourceListHead;
        v13[1] = v12;
        *v12 = v13;
        qword_140FBAA28 = (__int64)v13;
      }
      if ( !HalpGenericSeaInitDone )
        HalpGenericSeaInitDone = 1;
      goto LABEL_48;
    case 9:
      if ( *(_DWORD *)(a2 + 8) == 12 )
        v8 = HalpInitGenericErrorSourceEntryV2(a2, (__int64 *)&P);
      else
        v8 = HalpInitGenericErrorSourceEntry(a2, (__int64 *)&P);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v9 = (_QWORD *)qword_140FBAA18;
        if ( *(__int64 **)qword_140FBAA18 != &HalpGenericSeiErrorSourceListHead )
          goto LABEL_56;
        v10 = P;
        *(_QWORD *)P = &HalpGenericSeiErrorSourceListHead;
        v10[1] = v9;
        *v9 = v10;
        qword_140FBAA18 = (__int64)v10;
      }
      if ( !HalpGenericSeiInitDone )
        HalpGenericSeiInitDone = 1;
      goto LABEL_48;
  }
  if ( *(_BYTE *)(a2 + 64) != 10 )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)(a2 + 8) == 12 )
    v4 = HalpInitGenericErrorSourceEntryV2(a2, (__int64 *)&P);
  else
    v4 = HalpInitGenericErrorSourceEntry(a2, (__int64 *)&P);
  v5 = v4;
  if ( !HalpGenericPeiInitDone )
    HalpGenericPeiInitDone = 1;
  if ( v4 >= 0 )
  {
    v6 = P;
    v5 = HalpRegisterPeiErrorSource((unsigned __int64)P);
    if ( (v5 & 0x80000000) == 0 )
    {
      v7 = (_QWORD *)qword_140FBAA08;
      if ( *(__int64 **)qword_140FBAA08 == &HalpGenericPeiErrorSourceListHead )
      {
        *v6 = &HalpGenericPeiErrorSourceListHead;
        v6[1] = v7;
        *v7 = v6;
        qword_140FBAA08 = (__int64)v6;
        goto LABEL_59;
      }
LABEL_56:
      __fastfail(3u);
    }
  }
  return v5;
}
