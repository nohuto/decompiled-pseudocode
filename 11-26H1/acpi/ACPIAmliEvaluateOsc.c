/*
 * XREFs of ACPIAmliEvaluateOsc @ 0x1400CD900
 * Callers:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x140048A6C (AcpiEvaluateOscMethodOnPciRootBus.c)
 *     ACPIIoctlEvaluateUsb4Osc @ 0x140062A9C (ACPIIoctlEvaluateUsb4Osc.c)
 *     AcpiEvaluateOscMethodOnCxlBus @ 0x140065908 (AcpiEvaluateOscMethodOnCxlBus.c)
 *     ACPIEvaluateOscMethodOnRootBus @ 0x1400AA558 (ACPIEvaluateOscMethodOnRootBus.c)
 *     AcpiEvaluateOscVsmMethodOnRootBus @ 0x1400AAEA0 (AcpiEvaluateOscVsmMethodOnRootBus.c)
 *     ACPIPccLegacyInitialize @ 0x1400B2490 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1400B9984 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     ACPIVerifyUSB4Presence @ 0x1400BA408 (ACPIVerifyUSB4Presence.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIAmliEvaluateOsc(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 *v7; // rbp
  __int64 Pool2; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // ebx
  size_t v13; // r8
  const void *v14; // rdx

  v6 = a4;
  v7 = AMLIGetNamedChild(a1, 1129533279);
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    if ( Pool2 )
    {
      v9 = ExAllocatePool2(64LL, 40LL, 1383097153LL);
      v10 = v9;
      if ( v9 )
      {
        *(_QWORD *)(Pool2 + 32) = a2;
        *(_WORD *)(Pool2 + 2) = 3;
        *(_WORD *)(Pool2 + 122) = 3;
        *(_DWORD *)(Pool2 + 24) = 16;
        v11 = (unsigned int)v6;
        *(_QWORD *)(Pool2 + 96) = v6;
        *(_WORD *)(Pool2 + 42) = 1;
        *(_QWORD *)(Pool2 + 56) = 1LL;
        *(_WORD *)(Pool2 + 82) = 1;
        *(_DWORD *)(Pool2 + 144) = 4 * v6;
        *(_QWORD *)(Pool2 + 152) = a5;
        v12 = AMLIEvalNameSpaceObject(v7, v9, 4, Pool2);
        if ( v12 >= 0 )
        {
          if ( *(_WORD *)(v10 + 2) == 3
            && (v13 = *(unsigned int *)(v10 + 24), v13 >= 4 * v11)
            && (v14 = *(const void **)(v10 + 32)) != 0LL
            && (memmove(a5, v14, v13), (*a5 & 0xE) == 0) )
          {
            AMLIFreeDataBuffs(v10);
            v12 = 0;
          }
          else
          {
            v12 = -1073741823;
          }
        }
      }
      else
      {
        v12 = -1073741670;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0x41706341u);
      if ( v10 )
        ExFreePoolWithTag((PVOID)v10, 0x52706341u);
    }
    else
    {
      v12 = -1073741670;
    }
    AMLIDereferenceHandleEx((__int64)v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v12;
}
