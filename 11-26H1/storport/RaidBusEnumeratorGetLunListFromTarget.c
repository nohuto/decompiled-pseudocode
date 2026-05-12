/*
 * XREFs of RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 * Callees:
 *     RaidBusEnumeratorIssueReportLuns @ 0x14000D450 (RaidBusEnumeratorIssueReportLuns.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     WPP_SF_qddd @ 0x140070344 (WPP_SF_qddd.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunListFromTarget(_QWORD *a1, int a2, int a3, _BYTE *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned int v12; // ecx
  unsigned __int8 *v13; // rdi
  unsigned __int16 v14; // bx
  unsigned __int16 i; // bx
  int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 *v17; // [rsp+48h] [rbp-30h] BYREF

  v16 = 16;
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qddd(
      WPP_GLOBAL_Control->AttachedDevice,
      15LL,
      &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids,
      *a1,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
  }
  v8 = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v16, (__int64)&v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LOWORD(v11) = 0;
    goto LABEL_17;
  }
  if ( v8 == -1073741789 )
  {
    result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v16, (__int64)&v17);
    if ( (_DWORD)result == v9 )
    {
      v16 = 8 * *(unsigned __int8 *)(*a1 + 530LL) + 8;
      result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v16, (__int64)&v17);
    }
    LOWORD(v11) = 0;
    if ( (int)result < 0 )
      return result;
LABEL_17:
    memset_0(a4, 0, 0xFFuLL);
    v12 = (unsigned int)(v17[3] | ((v17[2] | ((v17[1] | (*v17 << 8)) << 8)) << 8)) >> 3;
    if ( v12 )
    {
      v13 = v17 + 9;
      v11 = v12;
      do
      {
        v14 = _byteswap_ushort(*(_WORD *)(v13 - 1)) & 0x3FFF;
        if ( v14 < 0xFFu )
        {
          a4[v14] = 1;
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              17LL,
              &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids,
              *a1,
              v14);
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids, v14);
          }
        }
        v13 += 8;
        --v11;
      }
      while ( v11 );
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids, *a1);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids);
      }
    }
    for ( i = v11; i < 0xFFu; ++i )
    {
      if ( *a4 != (_BYTE)v11
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids, i);
      }
      ++a4;
    }
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      16LL,
      &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids,
      (unsigned int)v8);
  }
  return v9;
}
