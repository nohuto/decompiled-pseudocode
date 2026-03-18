/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x1401E5700
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400792B4 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMConvertPointCoordinates @ 0x140079358 (RIMConvertPointCoordinates.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v18 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2295);
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x80u) != 0 && *(_QWORD *)(a1 + 528) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v18,
      (struct RIMLOCK *)(*(_QWORD *)(a1 + 392) + 104LL));
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 528) + 224LL) - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( a2 )
        goto LABEL_10;
    }
    else
    {
      if ( a2 )
      {
        v8 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a2 + 4) = *(_DWORD *)a2;
        *(_DWORD *)a2 = v8;
LABEL_10:
        RIMTransformPointerDevicePointToPhysical(*(__m128i **)(a1 + 528), *(_QWORD *)a2, (__int64)a3);
        goto LABEL_11;
      }
      v9 = a3[1];
      a3[1] = *a3;
      *a3 = v9;
    }
LABEL_11:
    v10 = *(_QWORD *)(a1 + 528);
    v11 = *(_QWORD *)a3;
    v15 = *(_OWORD *)(v10 + 160);
    v16 = v15;
    v17 = *(_OWORD *)(v10 + 176);
    if ( (unsigned int)RIMConvertPointCoordinates(v11, (int *)&v17, (int *)&v16, (_QWORD *)a4) )
    {
      v12 = *(_DWORD *)a4 - v15;
      if ( v12 < 0 )
        v12 = v15 - *(_DWORD *)a4;
      v13 = DWORD1(v15) - *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = v12;
      v14 = -v13;
      if ( v13 > 0 )
        v14 = v13;
      *(_DWORD *)(a4 + 4) = v14;
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v18);
  }
}
