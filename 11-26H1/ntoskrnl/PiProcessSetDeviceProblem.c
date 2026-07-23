/*
 * XREFs of PiProcessSetDeviceProblem @ 0x140B336EC
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpLogDeviceRequiresReboot @ 0x1407A728C (PnpLogDeviceRequiresReboot.c)
 *     PipIsProblemReadonly @ 0x1407A7F2C (PipIsProblemReadonly.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessSetDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // ebp
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD **)(a1 + 40);
  P = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  v5 = *(_DWORD *)(v4 + 300);
  if ( v5 == 789 || v5 == 790 )
  {
    v6 = -1073741738;
  }
  else
  {
    v6 = 0;
    PiPnpRtlBeginOperation(&P);
    v7 = v3[5];
    v8 = (v7 >> 18) & 1 | 4;
    if ( (v7 & 0x100) == 0 )
      v8 = (v3[5] >> 18) & 1;
    v9 = (v3[5] >> 1) & 0x4000 | 0x2000;
    if ( (v7 & 0x400) == 0 )
      v9 = (v3[5] >> 1) & 0x4000;
    v10 = v9;
    if ( v3[6] == 14 )
    {
      v14 = *(_DWORD *)(v4 + 300);
      if ( v14 != 772 && v14 != 771 && v14 != 788 )
      {
        v10 = v9 & 0xFFFFDFFF;
        PnpLogDeviceRequiresReboot(v4);
      }
      v8 |= 4u;
    }
    if ( v10 )
    {
      v11 = *(_DWORD *)(v4 + 300);
      if ( v11 != 772 && v11 != 771 && v11 != 788
        || (v10 & 0x4000) == 0 && ((v15 = v3[6], v15 >= 0x3A) || PipIsProblemReadonly(v4, v15)) )
      {
        v6 = -1073741584;
        goto LABEL_13;
      }
      PipSetDevNodeProblem(v4, v3[6], v3[8]);
      v13 = v10;
    }
    else
    {
      v13 = 0;
    }
    PipSetDevNodeFlags(v4, v13);
    PipSetDevNodeUserFlags(v4, v8);
  }
LABEL_13:
  if ( (v3[7] & 1) != 0 )
  {
    ExFreePoolWithTag(v3, 0x55706E50u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v6;
}
