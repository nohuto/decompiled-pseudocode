/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x140205FC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400F8C30 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMConvertPointCoordinates @ 0x1400F8C88 (RIMConvertPointCoordinates.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2295);
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x80u) != 0 && *(_QWORD *)(a1 + 528) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v18,
      (struct RIMLOCK *)(*(_QWORD *)(a1 + 392) + 104LL));
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 224LL);
    if ( v9 == 4 || v9 == 2 )
    {
      if ( !a2 )
      {
        v11 = *(_DWORD *)(a3 + 4);
        *(_DWORD *)(a3 + 4) = *(_DWORD *)a3;
        *(_DWORD *)a3 = v11;
        goto LABEL_13;
      }
      v10 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
      *(_DWORD *)a2 = v10;
    }
    else if ( !a2 )
    {
LABEL_13:
      v12 = *(_QWORD *)(a1 + 528);
      v13 = *(_QWORD *)a3;
      v15 = *(_OWORD *)(v12 + 160);
      v16 = v15;
      v17 = *(_OWORD *)(v12 + 176);
      if ( (unsigned int)RIMConvertPointCoordinates(v13, (int *)&v17, (int *)&v16, (_QWORD *)a4) )
      {
        v4 = *(_DWORD *)(a4 + 4) - DWORD1(v15);
        if ( v4 < 0 )
          v4 = DWORD1(v15) - *(_DWORD *)(a4 + 4);
        v14 = *(_DWORD *)a4 - v15;
        if ( v14 < 0 )
          v14 = v15 - *(_DWORD *)a4;
      }
      else
      {
        v14 = 0;
      }
      *(_DWORD *)a4 = v14;
      *(_DWORD *)(a4 + 4) = v4;
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v18);
      return;
    }
    RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 528), *(_QWORD *)a2, (_QWORD *)a3);
    goto LABEL_13;
  }
}
