/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x140970C4C (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14048D77C (PnpDiagnosticTraceDeviceOperation.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407A7DE0 (PnpCheckPossibleBootStartDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1409713C8 (IopReferenceDriverObjectByName.c)
 *     PnpIsLegacyDriver @ 0x1409714A0 (PnpIsLegacyDriver.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PnpGetServiceStartType @ 0x1409717BC (PnpGetServiceStartType.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A39684 (IopCallDriverReinitializationRoutines.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     PpInitGetGroupOrderIndex @ 0x140D10DDC (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140D11544 (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const WCHAR *v6; // r14
  _DWORD *v8; // rsi
  int DriverNameFromKeyNode; // ebx
  unsigned int v10; // r13d
  char v11; // r12
  HANDLE v12; // r15
  int i; // ecx
  char v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdi
  _QWORD *Pool2; // rax
  int ServiceStartType; // eax
  unsigned int v21; // r14d
  __int64 v22; // rax
  int Driver; // eax
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rbx
  void *v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // [rsp+34h] [rbp-2Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  char v38; // [rsp+90h] [rbp+30h]

  result = 0LL;
  v6 = L"\\Driver\\";
  v34 = 0;
  v38 = 0;
  KeyHandle = 0LL;
  v8 = 0LL;
  DriverNameFromKeyNode = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  Destination = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    for ( i = 0; ; ++i )
    {
      if ( !*v6 )
      {
        RtlInitUnicodeString(&Destination, DestinationString.Buffer);
        v14 = 1;
        goto LABEL_6;
      }
      if ( DestinationString.Buffer[i] != *v6 )
        break;
      ++v6;
    }
    if ( !*(_WORD *)(*a4 + 56) )
    {
      *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
      v26 = *a4;
      *(_QWORD *)(v26 + 64) = ExAllocatePool2(0x100uLL);
      v27 = *(void **)(*a4 + 64);
      if ( !v27 )
      {
        *(_WORD *)(*a4 + 58) = 0;
        DriverNameFromKeyNode = -1073741823;
        *(_WORD *)(*a4 + 56) = 0;
        *(_QWORD *)(*a4 + 64) = 0LL;
        return (unsigned int)DriverNameFromKeyNode;
      }
      memmove(v27, DestinationString.Buffer, DestinationString.MaximumLength);
    }
    v15 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &KeyHandle, 0LL, 0);
    DriverNameFromKeyNode = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741772 || a5 )
        PipSetDevNodeProblem(*a4, 19LL, (unsigned int)v15);
      else
        DriverNameFromKeyNode = 0;
      v12 = KeyHandle;
    }
    else
    {
      v12 = KeyHandle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v38 = 1;
        v14 = 0;
LABEL_6:
        v8 = (_DWORD *)IopReferenceDriverObjectByName(&Destination);
        KeyHandle = v8;
        if ( !v8 )
        {
          if ( v14 )
          {
LABEL_8:
            DriverNameFromKeyNode = -1073741823;
LABEL_9:
            v11 = v38;
            goto LABEL_10;
          }
          ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v12, &v34);
          v21 = v34;
          if ( ServiceStartType < 0 )
            v21 = 4;
          if ( a5 == 3 || PnPBootDriversInitialized )
          {
            v22 = a4[1];
            if ( v21 > *(_DWORD *)v22 )
            {
              if ( v21 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
                PipSetDevNodeProblem(*a4, 32LL, 0LL);
              goto LABEL_8;
            }
            if ( !*(_BYTE *)(v22 + 4) )
            {
              if ( v21 && !PnpCheckPossibleBootStartDriver(v12) )
                *(_BYTE *)(*a4 + 688) = 1;
              goto LABEL_8;
            }
            Driver = IopLoadDriver(v12);
            DriverNameFromKeyNode = Driver;
            v12 = 0LL;
            v10 = Driver;
            if ( Driver < 0 && Driver != -1073740955 )
            {
              v28 = (unsigned int)(Driver + 1073740961);
              if ( (unsigned int)v28 > 0x2F || (v29 = 0x800000003001LL, !_bittest64(&v29, v28)) )
              {
                if ( DriverNameFromKeyNode != -1073741218
                  && DriverNameFromKeyNode != -1073741670
                  && DriverNameFromKeyNode != -1073740760 )
                {
                  DriverNameFromKeyNode = -1073741204;
                }
              }
            }
            if ( PnPInitialized )
              IopCallDriverReinitializationRoutines(0LL);
            v8 = (_DWORD *)IopReferenceDriverObjectByName(&Destination);
            if ( !v8 )
            {
              if ( PnpBootMode )
              {
                if ( (unsigned int)(DriverNameFromKeyNode + 1073740961) > 0xD
                  || (v24 = 12353, !_bittest(&v24, DriverNameFromKeyNode + 1073740961)) )
                {
                  if ( DriverNameFromKeyNode != -1073740760 )
                    DriverNameFromKeyNode = -1073741204;
                }
              }
            }
          }
          else
          {
            PpInitGetGroupOrderIndex(v12);
            v25 = PnpLoadBootFilterDriver(v12, &Destination);
            DriverNameFromKeyNode = v25;
            if ( v25 < 0 )
            {
              if ( (unsigned int)(v25 + 1073740949) > 1 )
              {
                if ( v21 && !*(_BYTE *)(a4[1] + 4) && !PnpCheckPossibleBootStartDriver(v12) )
                  *(_BYTE *)(*a4 + 688) = 1;
                v8 = KeyHandle;
                goto LABEL_9;
              }
              v8 = KeyHandle;
            }
            else
            {
              v8 = KeyHandle;
              if ( !KeyHandle )
                goto LABEL_91;
              PsReferenceSiloContext(KeyHandle);
            }
          }
        }
        if ( v8 )
        {
          if ( (v8[4] & 0x10) == 0 )
            goto LABEL_8;
          if ( !(unsigned int)PnpIsLegacyDriver(v8) )
          {
            v17 = *(_DWORD *)(*a4 + 300);
            if ( v17 == 772 || ((v17 - 771) & 0xFFFFFFFD) == 0 )
            {
              DriverNameFromKeyNode = 0;
              v18 = (__int64 *)((char *)&a4[a5] + v16);
              Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
              if ( Pool2 )
              {
                *Pool2 = v8;
                v8 = 0LL;
                Pool2[1] = 0LL;
                while ( *v18 )
                  v18 = (_QWORD *)(*v18 + 8LL);
                *v18 = Pool2;
              }
              else
              {
                DriverNameFromKeyNode = -1073741670;
              }
              goto LABEL_9;
            }
            goto LABEL_8;
          }
          if ( a5 == 3 )
          {
            PipSetDevNodeFlags(*a4, 4096LL);
            PipSetDevNodeState(*a4, 778);
            goto LABEL_8;
          }
          goto LABEL_115;
        }
LABEL_91:
        PnpDiagnosticTraceDeviceOperation(
          &KMPnPEvt_DriverLoad_Fail,
          (unsigned __int16 *)(*a4 + 40),
          DriverNameFromKeyNode,
          (__int64)&Destination,
          0);
        v30 = *a4;
        if ( (*(_DWORD *)(*a4 + 396) & 0x6000) != 0 )
          goto LABEL_9;
        if ( DriverNameFromKeyNode <= -1073740961 )
        {
          if ( DriverNameFromKeyNode == -1073740961 )
            goto LABEL_112;
          v31 = -1073741670;
          if ( DriverNameFromKeyNode == -1073741670 )
          {
            v33 = 3LL;
          }
          else
          {
            v32 = 3221225824LL;
            if ( DriverNameFromKeyNode == -1073741472 )
            {
              v33 = 40LL;
              goto LABEL_104;
            }
            if ( DriverNameFromKeyNode == -1073741411 )
              goto LABEL_99;
            v31 = -1073741218;
            if ( DriverNameFromKeyNode != -1073741218 )
            {
              if ( DriverNameFromKeyNode == -1073741204 )
              {
LABEL_99:
                v32 = v10;
                v33 = 39LL;
LABEL_104:
                PipSetDevNodeProblem(v30, v33, v32);
                goto LABEL_9;
              }
LABEL_112:
              v32 = (unsigned int)DriverNameFromKeyNode;
              v33 = 31LL;
              goto LABEL_104;
            }
            v33 = 41LL;
          }
LABEL_102:
          v32 = v31;
          goto LABEL_104;
        }
        if ( DriverNameFromKeyNode == -1073740955 )
        {
          v32 = 0LL;
          v33 = 37LL;
          goto LABEL_104;
        }
        if ( DriverNameFromKeyNode == -1073740949 )
        {
          PipSetDevNodeProblem(v30, 48LL, 3221226347LL);
          PipSetDevNodeFlags(*a4, 0x100000LL);
          goto LABEL_9;
        }
        if ( DriverNameFromKeyNode != -1073740948 )
        {
          v32 = 3221226382LL;
          if ( DriverNameFromKeyNode == -1073740914 )
          {
            v33 = 38LL;
            goto LABEL_104;
          }
          v31 = -1073740760;
          if ( DriverNameFromKeyNode != -1073740760 )
            goto LABEL_112;
          v33 = 52LL;
          goto LABEL_102;
        }
        PipSetDevNodeFlags(v30, 0x100000LL);
LABEL_115:
        DriverNameFromKeyNode = 0;
        goto LABEL_9;
      }
      PipSetDevNodeProblem(*a4, 19LL, (unsigned int)DriverNameFromKeyNode);
    }
LABEL_10:
    if ( v12 )
      ZwClose(v12);
    if ( v11 && Destination.Buffer )
    {
      ExFreePool(Destination.Buffer);
      Destination = 0LL;
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    return (unsigned int)DriverNameFromKeyNode;
  }
  return result;
}
