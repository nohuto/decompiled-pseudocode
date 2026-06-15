/*
 * XREFs of sub_1400A89D0 @ 0x1400A89D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140002894 @ 0x140002894 (sub_140002894.c)
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_140033304 @ 0x140033304 (sub_140033304.c)
 *     sub_140034248 @ 0x140034248 (sub_140034248.c)
 *     sub_1400AC448 @ 0x1400AC448 (sub_1400AC448.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A89D0(__int64 a1, __int64 a2)
{
  char v3; // r14
  __int64 v4; // rdi
  bool v5; // bp
  __int32 v6; // eax
  bool v7; // bl
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  bool v18; // [rsp+70h] [rbp+8h] BYREF
  bool v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(
      a1,
      a2,
      *(_QWORD *)(a1 + 88),
      7,
      a2,
      *(_BYTE *)(*(_QWORD *)(a1 + 88) + 1568LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 1560LL));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1368) + 1344LL) + 68LL), 0) != 0;
  v6 = _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1368) + 1344LL) + 72LL), 0);
  v7 = v6 != 0;
  if ( (v5 || v6) && (unsigned int)dword_1400E7460 > 5 && sub_14002813C((__int64)&dword_1400E7460, 1LL) )
  {
    v10 = *(_QWORD *)(v4 + 1368);
    v18 = v7;
    v19 = v5;
    v17 = v10 + 832;
    sub_140002894(v8, (__int64)&unk_1400D4063, v10 + 832, v9, &v17, (__int64)&v19, (__int64)&v18);
  }
  sub_140034248(*(_QWORD *)(v4 + 1368) + 824LL, v5, v7);
  v12 = *(_QWORD *)(a1 + 88);
  v13 = 0;
  if ( *(_BYTE *)(v12 + 1568) )
  {
    sub_1400B6010(v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 88) + 1568LL) = 0;
    v14 = *(_QWORD *)(a1 + 88);
    if ( *(_DWORD *)(v14 + 1560) <= 1u )
    {
      v15 = *(_QWORD *)(v14 + 1368);
      if ( *(_DWORD *)(v15 + 4LL * (unsigned int)sub_140033304(v15 + 616) + 616) != 3 )
        goto LABEL_14;
      sub_1400AC448(*(_QWORD *)(v14 + 1368) + 824LL, 0LL);
      v13 = -2005139387;
    }
    else
    {
      v13 = -2147024809;
    }
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpointRT<class CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V1,struc"
      "t SpatialVolatileControlData_V0,struct SpatialControlData_V1> >::CommitRead",
      146LL);
LABEL_14:
    if ( v13 < 0 )
      sub_1400AC500(
        "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticCont"
        "rolData_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1>,struct CpuAudioEngine_typetraits>:"
        ":ReleaseInputDataPointer",
        169LL);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 1572LL) = -2147418113;
  result = *(_QWORD *)(a1 + 88);
  *(_BYTE *)(result + 1400) = 0;
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000F5B0(v12, v11, *(_QWORD *)(a1 + 88), 8, v3, v13, 0);
  return result;
}
