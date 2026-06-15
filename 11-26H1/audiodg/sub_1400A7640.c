/*
 * XREFs of sub_1400A7640 @ 0x1400A7640
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140032F2C @ 0x140032F2C (sub_140032F2C.c)
 *     sub_140033304 @ 0x140033304 (sub_140033304.c)
 *     sub_14003FD7C @ 0x14003FD7C (sub_14003FD7C.c)
 *     sub_1400AC448 @ 0x1400AC448 (sub_1400AC448.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A7640(__int64 a1, __int64 a2)
{
  __int32 v4; // r14d
  __int64 v5; // rcx
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // r8d
  __int64 result; // rax
  __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned __int32 v19; // eax
  __int64 v20; // rsi
  int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned int v25; // r9d
  unsigned __int32 v26; // eax
  __int64 v27; // rax

  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(a1, a2, *(_QWORD *)(a1 + 88), 5, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 0);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1368LL) + 1344LL) + 44LL),
      v4);
  *(_BYTE *)(*(_QWORD *)(a1 + 88) + 1569LL) = (_InterlockedCompareExchange(
                                                 (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1368LL)
                                                                                       + 1344LL)
                                                                           + 64LL),
                                                 0,
                                                 0) & 0x10) != 0;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(unsigned __int16 *)(v5 + 320);
  sub_1400B6010(v5);
  if ( v4 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1368LL) + 1344LL);
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 64), 0, 0);
    if ( (v9 & 0xFFFFFF81) == 1 && (v9 & 2) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 1576LL) = 2;
      *(_DWORD *)(a2 + 12) = 1;
      v10 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(v10 + 1560) = 0LL;
      v11 = sub_140032F2C(*(_QWORD *)(*(_QWORD *)(v10 + 1368) + 1352LL));
      if ( v11 == -2005139387 )
      {
        sub_1400AC448(*(_QWORD *)(v10 + 1368) + 824LL, 1LL);
        goto LABEL_17;
      }
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(v10 + 1368);
        v7 = *(unsigned int *)(v12 + 4LL * (unsigned int)sub_140033304(v12 + 616) + 616);
        if ( (_DWORD)v7 == 3 )
        {
          sub_1400AC448(*(_QWORD *)(v10 + 1368) + 824LL, 0LL);
          v11 = -2005139387;
          sub_140033304(*(_QWORD *)(v10 + 1368) + 616LL);
        }
        else
        {
          if ( (_DWORD)v7 != 2 )
          {
            *(_DWORD *)(v10 + 1560) = v7;
            v17 = *(_QWORD *)(v10 + 1368);
            v11 = 0;
            v18 = *(_DWORD *)(*(_QWORD *)(v17 + 608) + 136LL) + *(_DWORD *)(*(_QWORD *)(v17 + 608) + 140LL);
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v17 + 1344) + 4 * v7 + 24), 0, 0);
            if ( v19 <= v18 )
            {
              *(_DWORD *)(v10 + 1564) = v19;
LABEL_18:
              *(_DWORD *)(*(_QWORD *)(a1 + 88) + 1572LL) = v11;
              v14 = *(_QWORD *)(a1 + 88);
              v15 = *(_DWORD *)(v14 + 1572);
              if ( v15 < 0 )
              {
                if ( v15 != -2005139358 )
                  sub_1400AC500(
                    "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct Spati"
                    "alStaticControlData_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1>,struct Cpu"
                    "AudioEngine_typetraits>::GetInputDataPointer",
                    123LL);
              }
              else
              {
                *(_BYTE *)(v14 + 1568) = 1;
              }
              goto LABEL_20;
            }
            v11 = -2147418113;
LABEL_17:
            sub_1400AC500(
              "CSpatialCrossProcessBaseEndpointRT<class CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_"
              "V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1> >::GetObjectsAvailableForProcessing",
              227LL);
            goto LABEL_18;
          }
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v10 + 1368) + 1344LL) + 68LL));
          v11 = -2005139358;
        }
        sub_14003FD7C(
          (int *)(*(_QWORD *)(v10 + 1368) + 1360LL),
          (__int64)"CSpatialCrossProcessBaseEndpointRT<class CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControl"
                   "Data_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1> >::GetPingPongReadIndex",
          v13,
          v11);
      }
      if ( v11 == -2005139358 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(a1 + 88);
    *(_DWORD *)(v8 + 1576) = *(_DWORD *)(v8 + 1576) == 2;
    v20 = *(_QWORD *)(a1 + 88);
    if ( *(_DWORD *)(v20 + 1576) == 1 )
    {
      *(_QWORD *)(v20 + 1560) = 0LL;
      v21 = sub_140032F2C(*(_QWORD *)(*(_QWORD *)(v20 + 1368) + 1352LL));
      if ( v21 == -2005139387 )
      {
        sub_1400AC448(*(_QWORD *)(v20 + 1368) + 824LL, 1LL);
        goto LABEL_38;
      }
      if ( v21 >= 0 )
      {
        v22 = *(_QWORD *)(v20 + 1368);
        v7 = *(unsigned int *)(v22 + 4LL * (unsigned int)sub_140033304(v22 + 616) + 616);
        if ( (_DWORD)v7 == 3 )
        {
          sub_1400AC448(*(_QWORD *)(v20 + 1368) + 824LL, 0LL);
          v21 = -2005139387;
          sub_140033304(*(_QWORD *)(v20 + 1368) + 616LL);
        }
        else
        {
          if ( (_DWORD)v7 != 2 )
          {
            *(_DWORD *)(v20 + 1560) = v7;
            v24 = *(_QWORD *)(v20 + 1368);
            v21 = 0;
            v8 = *(_QWORD *)(v24 + 1344);
            v25 = *(_DWORD *)(*(_QWORD *)(v24 + 608) + 136LL) + *(_DWORD *)(*(_QWORD *)(v24 + 608) + 140LL);
            v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 4 * v7 + 24), 0, 0);
            if ( v26 <= v25 )
            {
              *(_DWORD *)(v20 + 1564) = v26;
LABEL_42:
              *(_DWORD *)(*(_QWORD *)(a1 + 88) + 1572LL) = v21;
              v27 = *(_QWORD *)(a1 + 88);
              if ( *(int *)(v27 + 1572) >= 0 )
                *(_BYTE *)(v27 + 1568) = 1;
              goto LABEL_44;
            }
            v21 = -2147418113;
LABEL_38:
            sub_1400AC500(
              "CSpatialCrossProcessBaseEndpointRT<class CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_"
              "V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1> >::GetObjectsAvailableForProcessing",
              227LL);
            goto LABEL_42;
          }
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v20 + 1368) + 1344LL) + 68LL));
          v21 = -2005139358;
        }
        sub_14003FD7C(
          (int *)(*(_QWORD *)(v20 + 1368) + 1360LL),
          (__int64)"CSpatialCrossProcessBaseEndpointRT<class CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControl"
                   "Data_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1> >::GetPingPongReadIndex",
          v23,
          v21);
      }
      if ( v21 == -2005139358 )
        goto LABEL_42;
      goto LABEL_38;
    }
  }
LABEL_44:
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v8, v7, *(_QWORD *)(a1 + 88), 23, 0, v4, 101);
  *(_DWORD *)(a2 + 12) = 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 1572LL) = 0;
LABEL_20:
  result = *(_QWORD *)(a1 + 88);
  *(_QWORD *)a2 = *(_QWORD *)(result + 104);
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000F5B0(
             (unsigned int)(v4 * v6),
             v7,
             *(_QWORD *)(a1 + 88),
             6,
             (unsigned __int8)v4 * (unsigned __int8)v6,
             (unsigned __int8)v4 * (unsigned __int8)v6,
             0);
  return result;
}
