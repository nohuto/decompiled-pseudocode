/*
 * XREFs of LinkNodeCrackPrt @ 0x140045E80
 * Callers:
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1400CFE80 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400D2AC8 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     RtlStringCchPrintfW @ 0x14003E918 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_s @ 0x14003EBCC (WPP_RECORDER_SF_s.c)
 *     LinkNodepGetFilter @ 0x1400467BC (LinkNodepGetFilter.c)
 *     ACPIWriteEventLogEntry @ 0x1400535C0 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_i @ 0x14005D6F0 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 *     PcisuppGetParentPdo @ 0x1400A93C8 (PcisuppGetParentPdo.c)
 *     PcisuppGetProgConfigHeader @ 0x1400AAB64 (PcisuppGetProgConfigHeader.c)
 *     LinkNodeFindByNsObj @ 0x1400BC260 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1400BC3F8 (LinkNodepAddAttachedDevice.c)
 *     PcisuppSetRoutingInfo @ 0x1400C4A80 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetRoutingInfo @ 0x1400C5414 (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1400D214C (PcisuppGetBusSlotNumber.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  __int64 *v4; // r15
  PVOID v8; // rax
  __int64 result; // rax
  int v10; // r12d
  int v11; // ebx
  KIRQL v12; // di
  __int64 v13; // r13
  _QWORD *Filter; // rax
  _QWORD *v15; // rsi
  __int64 *v16; // rdi
  __int64 *v17; // rax
  char v18; // r12
  int ProgConfigHeader; // edi
  char v20; // r13
  unsigned int v21; // edx
  unsigned __int64 v22; // rdx
  char v23; // di
  _QWORD *v24; // r12
  __int64 Pool2; // rsi
  KIRQL v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  _DWORD *v29; // rcx
  _QWORD *v30; // r12
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-C4h]
  int v35; // [rsp+40h] [rbp-C0h]
  __int128 v36; // [rsp+48h] [rbp-B8h] BYREF
  struct _STRING v37; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v41[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h]
  _OWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  PCSZ v44; // [rsp+E0h] [rbp-20h]
  __int128 v45; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-8h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int128 v48; // [rsp+110h] [rbp+10h] BYREF
  __int128 v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+138h] [rbp+38h] BYREF
  __int128 v52; // [rsp+148h] [rbp+48h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  _OWORD v54[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v55; // [rsp+180h] [rbp+80h]
  _DWORD v56[16]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v57[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  wchar_t *Buffer; // [rsp+1E8h] [rbp+E8h]
  WCHAR SourceString[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v60; // [rsp+200h] [rbp+100h]
  WCHAR v61[8]; // [rsp+208h] [rbp+108h] BYREF
  int v62; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *(_QWORD *)&UnicodeString.Length = a3;
  *(_QWORD *)&DestinationString.Length = a2;
  v4 = 0LL;
  v47 = 0LL;
  LOBYTE(v35) = 0;
  v50 = 0LL;
  v44 = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  *(_QWORD *)&v37.Length = 0LL;
  v33 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v56, 0, sizeof(v56));
  *a2 = 0LL;
  v53 = 0LL;
  v42 = 0LL;
  v55 = 0LL;
  v8 = AcpiDriverObject;
  *a3 = 0;
  v32 = 0;
  v51 = 0LL;
  v34 = 0;
  v52 = 0LL;
  memset(v41, 0, sizeof(v41));
  memset(v54, 0, sizeof(v54));
  v36 = 0LL;
  if ( *(PVOID *)(a1 + 8) == v8 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v36) >= 0 )
  {
    *a2 = v36;
    *a3 = DWORD2(v36);
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v56) < 0 )
    return 3221226021LL;
  LOBYTE(v10) = BYTE1(v56[15]);
  result = PcisuppGetParentPdo(a1, &v37);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v32, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v11 = v32;
      while ( 1 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v13 = *(_QWORD *)&v37.Length;
        Filter = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 768), *(_QWORD *)&v37.Length);
        v15 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v12);
        if ( v15 )
        {
          v16 = *(__int64 **)(v15[8] + 760LL);
          ObfDereferenceObject(v15);
          v17 = AMLIGetNamedChild(v16, 1414680671);
          v4 = v17;
          if ( v17 )
            break;
        }
        result = PcisuppGetProgConfigHeader(v13, v56);
        if ( (int)result < 0 )
          return result;
        if ( BYTE2(v56[2]) == 4 )
        {
          v10 = ((v11 & 0x1F) + (unsigned __int8)v10 - 1) % 4 + 1;
        }
        else
        {
          if ( BYTE2(v56[2]) != 7 )
            return 3221225473LL;
          LOBYTE(v10) = BYTE1(v56[15]);
        }
        result = PcisuppGetBusSlotNumber(v13, 0, (unsigned int)&v33, 0, (__int64)v4);
        if ( (int)result >= 0 )
        {
          v11 = v33;
          result = PcisuppGetParentPdo(v13, &v37);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v18 = v10 - 1;
      if ( (int)AMLIEvalNameSpaceObject(v17, (__int64)v54, 0, 0LL) < 0 )
      {
        ProgConfigHeader = -1073741275;
LABEL_64:
        AMLIDereferenceHandleEx((__int64)v4);
        if ( a4 )
        {
          Buffer = 0LL;
          v62 = 0;
          v60 = 0;
          v37 = 0LL;
          *(_OWORD *)v61 = 0LL;
          String = 0LL;
          *(_OWORD *)SourceString = 0LL;
          DestinationString = 0LL;
          UnicodeString = 0LL;
          RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlInitUnicodeString(&String, v61);
          if ( RtlIntegerToUnicodeString(v11 & 0x1F, 0, &DestinationString) >= 0
            && RtlIntegerToUnicodeString((unsigned __int8)v11 >> 5, 0, &String) >= 0 )
          {
            v57[0] = pszDest;
            v57[1] = SourceString;
            v57[2] = v61;
            if ( ProgConfigHeader == -1073741811 )
            {
              ACPIWriteEventLogEntry(3221553161LL, v57, 3LL);
            }
            else if ( ProgConfigHeader == -1073741772 )
            {
              RtlInitAnsiString(&v37, v44);
              RtlAnsiStringToUnicodeString(&UnicodeString, &v37, 1u);
              Buffer = UnicodeString.Buffer;
              ACPIWriteEventLogEntry(3221553160LL, v57, 4LL);
              RtlFreeUnicodeString(&UnicodeString);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_s(
                  WPP_GLOBAL_Control->DeviceExtension,
                  2,
                  20,
                  11,
                  (__int64)&WPP_27c747d966ad35cece80159593e08d4b_Traceguids,
                  (__int64)v44);
            }
            else
            {
              ACPIWriteEventLogEntry(3221553158LL, v57, 3LL);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  2,
                  20,
                  12,
                  (__int64)&WPP_27c747d966ad35cece80159593e08d4b_Traceguids,
                  v11);
            }
          }
        }
        return (unsigned int)ProgConfigHeader;
      }
      v20 = v35;
      do
      {
        v21 = v34++;
        if ( (int)AMLIEvalPkgDataElement((__int64)v54, v21, (__int64)v41) < 0 )
          break;
        if ( (int)AMLIEvalPkgDataElement((__int64)v41, 0, (__int64)&v45) >= 0 )
        {
          v22 = v46;
          if ( (v11 & 0x1F) == WORD1(v46) )
          {
            if ( (_WORD)v46 != 0xFFFF )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v22) = 2;
                WPP_RECORDER_SF_i(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v22,
                  20,
                  10,
                  (__int64)&WPP_27c747d966ad35cece80159593e08d4b_Traceguids,
                  v46);
                v22 = v46;
              }
              dword_14008ED38 = 0;
              ::pszDest = 0;
              v11 = v11 & 0xFFFFFF00 | (32 * (v22 & 7)) | (v22 >> 16) & 0x1F;
              ProgConfigHeader = -1073741811;
              FreeDataBuffs((__int64)&v45, 1u);
              dword_14008ED38 = 0;
              ::pszDest = 0;
              FreeDataBuffs((__int64)v41, 1u);
              goto LABEL_64;
            }
            if ( (int)AMLIEvalPkgDataElement((__int64)v41, 1u, (__int64)&v51) >= 0 )
            {
              if ( (_BYTE)v52 == v18 )
              {
                v23 = v20;
                if ( (int)AMLIEvalPkgDataElement((__int64)v41, 2u, (__int64)v43) >= 0 )
                  v23 = 1;
                v20 = v23;
                if ( (int)AMLIEvalPkgDataElement((__int64)v41, 3u, (__int64)&v48) >= 0 )
                  v20 = 1;
              }
              dword_14008ED38 = 0;
              ::pszDest = 0;
              FreeDataBuffs((__int64)&v51, 1u);
            }
          }
          dword_14008ED38 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)&v45, 1u);
        }
        dword_14008ED38 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v41, 1u);
      }
      while ( !v20 );
      dword_14008ED38 = 0;
      ::pszDest = 0;
      FreeDataBuffs((__int64)v54, 1u);
      ProgConfigHeader = -1073741275;
      if ( !v20 )
        goto LABEL_64;
      if ( WORD1(v43[0]) == 2 && v44 )
      {
        if ( (int)AMLIGetNameSpaceObject(v44, v4, &String, 0) < 0 )
        {
          ProgConfigHeader = -1073741772;
          goto LABEL_64;
        }
        v24 = *(_QWORD **)&DestinationString.Length;
        ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&String.Length, *(_QWORD *)&DestinationString.Length);
        if ( ProgConfigHeader >= 0 )
        {
          *(_QWORD *)&v36 = *v24;
          DWORD2(v36) = 0;
          BYTE12(v36) = 0;
          PcisuppSetRoutingInfo(a1, &v36);
          Pool2 = ExAllocatePool2(256LL, 56LL, 1232102209LL);
          if ( Pool2 )
          {
            v26 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
            v27 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 768), a1);
            v28 = v27;
            if ( v27 )
              ObfReferenceObject(v27);
            KeReleaseSpinLock(&AcpiDeviceTreeLock, v26);
            if ( v28 )
            {
              *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(v28[8] + 760LL);
              ObfDereferenceObject(v28);
            }
            else
            {
              *(_QWORD *)(Pool2 + 16) = 0LL;
            }
            *(_QWORD *)(Pool2 + 24) = v4;
            *(_QWORD *)(Pool2 + 48) = a1;
            v4 = 0LL;
            *(_DWORD *)(Pool2 + 32) = v11;
            ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v56);
            if ( ProgConfigHeader >= 0 )
            {
              *(_DWORD *)(Pool2 + 36) = v56[0];
              *(_DWORD *)(Pool2 + 40) = v56[11];
            }
            LinkNodepAddAttachedDevice(*v24, Pool2);
          }
          if ( !v4 )
            goto LABEL_62;
        }
      }
      else if ( WORD1(v48) == 1 )
      {
        v29 = *(_DWORD **)&UnicodeString.Length;
        ProgConfigHeader = 0;
        v30 = *(_QWORD **)&DestinationString.Length;
        BYTE12(v36) = 2;
        **(_DWORD **)&UnicodeString.Length = v49;
        *(_QWORD *)&v36 = 0LL;
        *v30 = 0LL;
        DWORD2(v36) = *v29;
        PcisuppSetRoutingInfo(a1, &v36);
      }
      else
      {
        ProgConfigHeader = -1073741701;
      }
      AMLIDereferenceHandleEx((__int64)v4);
LABEL_62:
      dword_14008ED38 = 0;
      ::pszDest = 0;
      FreeDataBuffs((__int64)v43, 1u);
      dword_14008ED38 = 0;
      ::pszDest = 0;
      FreeDataBuffs((__int64)&v48, 1u);
      return (unsigned int)ProgConfigHeader;
    }
  }
  return result;
}
