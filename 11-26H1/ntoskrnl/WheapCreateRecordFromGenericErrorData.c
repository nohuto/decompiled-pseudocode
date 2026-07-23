/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x1406DA99C
 * Callers:
 *     WheapDeviceDriverCreateRecord @ 0x1406D96A0 (WheapDeviceDriverCreateRecord.c)
 *     WheapDefaultErrSrcCreateRecord @ 0x1406DAD00 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     WheaInitializeRecordHeader @ 0x140449D50 (WheaInitializeRecordHeader.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     WheapAddRecoveryPacketToErrorRecord @ 0x1406DA64C (WheapAddRecoveryPacketToErrorRecord.c)
 *     WheapAddSectionFromGenericErrorData @ 0x1406DA768 (WheapAddSectionFromGenericErrorData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall WheapCreateRecordFromGenericErrorData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v6; // r13
  unsigned int v7; // ecx
  _DWORD *v8; // r14
  unsigned int v9; // r15d
  const char *v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  bool v23; // cf
  unsigned int v24; // eax
  char v25; // al
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r9
  _DWORD *v29; // r14
  unsigned int v30; // ebx
  int v31; // r10d
  size_t Size; // [rsp+20h] [rbp-81h]
  char v34; // [rsp+30h] [rbp-71h]
  int v35; // [rsp+34h] [rbp-6Dh]
  _DWORD Src[2]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v39; // [rsp+58h] [rbp-49h]
  int v40; // [rsp+60h] [rbp-41h]
  int v41; // [rsp+64h] [rbp-3Dh]
  int v42; // [rsp+68h] [rbp-39h]
  int v43; // [rsp+6Ch] [rbp-35h]
  char pszDest[32]; // [rsp+70h] [rbp-31h] BYREF
  int v45; // [rsp+90h] [rbp-11h]
  unsigned int v46; // [rsp+94h] [rbp-Dh]

  v6 = a4;
  memset_0(Src, 0, 0x48uLL);
  v7 = *(_DWORD *)(a2 + 68);
  v8 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  v34 = 0;
  v9 = 20;
  if ( v7 < 0x14 )
  {
    v10 = "Error_Packet_Lenth_Too_Small";
LABEL_49:
    v30 = -1073741811;
    RtlStringCchCopyA(pszDest, 0x20uLL, v10);
    goto LABEL_50;
  }
  v11 = v8[3] + 20;
  if ( v11 < 0x14 )
  {
    v10 = "Overflow_Finding_Structured_Len";
    goto LABEL_49;
  }
  v12 = v8[1];
  if ( v12 && (v13 = v8[2]) != 0 )
  {
    if ( v11 > v12 )
    {
      v10 = "Unstructered_Data_Too_Soon";
      goto LABEL_49;
    }
    v14 = v12 + v13;
    if ( v14 < v12 )
    {
      v10 = "Overflow_Unstructured_End";
      goto LABEL_49;
    }
    if ( v14 > v7 )
    {
      v10 = "Unstructured_Overruns_Buffer";
      goto LABEL_49;
    }
  }
  else if ( v11 > v7 )
  {
    v10 = "Error_Overruns_Buffer";
    goto LABEL_49;
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v10 = "Header_Overruns_Buffer";
    goto LABEL_49;
  }
  memset_0((void *)a3, 0, v6);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v15 = *(_DWORD *)(a3 + 104);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v16;
  LOBYTE(v15) = v16 ^ (*(_DWORD *)(a2 + 12) >> 1);
  *(_DWORD *)(a3 + 20) = v6;
  *(_DWORD *)(a3 + 104) = v16 ^ v15 & 4;
  v17 = (*v8 >> 4) & 0x3FF;
  v18 = 0;
  while ( 1 )
  {
    v35 = v17;
    if ( !v17 )
      break;
    if ( v9 + 64 < v9 )
    {
      v10 = "Overflow_Entry_Header_Offset";
      goto LABEL_49;
    }
    if ( v9 + 64 > v11 )
    {
      v10 = "Entry_Header_Overruns_Structure";
      goto LABEL_49;
    }
    v19 = (__int64)v8 + v9;
    v20 = *(_DWORD *)(v19 + 24);
    if ( *(_WORD *)(v19 + 20) == 768 )
    {
      v21 = v20 + 72;
      v22 = -1;
      v23 = v21 < 0x48;
    }
    else
    {
      v21 = v20 + 64;
      v22 = -1;
      v23 = v21 < 0x40;
    }
    if ( !v23 )
      v22 = v21;
    if ( v23 )
    {
      v10 = "Overflow_Entry_Length";
      goto LABEL_49;
    }
    v24 = v9 + v22;
    if ( v9 + v22 < v9 )
    {
      v10 = "Overflow_Next_Entry_Offset";
      goto LABEL_49;
    }
    v9 += v22;
    if ( v24 > v11 )
    {
      v10 = "Next_Entry_Overruns_Structure";
      goto LABEL_49;
    }
    v25 = v34;
    if ( (*(_BYTE *)(v19 + 23) & 1) != 0 )
      v25 = 1;
    LODWORD(Size) = v22;
    v34 = v25;
    v18 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v19, Size, 1);
    if ( v18 < 0 )
    {
      RtlStringCchCopyA(pszDest, 0x20uLL, "Failed_Add_Section");
      *(_DWORD *)(a3 + 104) |= 0x40u;
      if ( v34 == 1 )
        break;
    }
    v17 = v35 - 1;
    ++v45;
  }
  v26 = (unsigned int)v8[1];
  if ( (_DWORD)v26 && (v27 = v8[2]) != 0 )
  {
    v28 = (__int64)v8 + v26;
    v29 = (_DWORD *)a1;
    LODWORD(Size) = v27;
    v18 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v28, Size, 0);
    if ( v18 < 0 )
    {
      RtlStringCchCopyA(pszDest, 0x20uLL, "Failed_Add_Unstructured");
      *(_DWORD *)(a3 + 104) |= 0x40u;
    }
  }
  else
  {
    v29 = (_DWORD *)a1;
  }
  if ( !*(_DWORD *)(a2 + 20) )
    WheapAddRecoveryPacketToErrorRecord(v29, a3, v6);
  v30 = 0;
  if ( v18 < 0 )
  {
    v31 = 1;
LABEL_50:
    Src[0] = 1733060695;
    Src[1] = v31;
    v39 = 72LL;
    v41 = -2147483627;
    v40 = 1280201291;
    v42 = 2;
    v43 = 40;
    v46 = v30;
    WheaLogInternalEvent(Src);
  }
  return v30;
}
