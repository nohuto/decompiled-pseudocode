/*
 * XREFs of ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C3C84
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BF030 (-ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_DDD @ 0x140064A90 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400A30CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1400C4598 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_LLL @ 0x1400C48E4 (WPP_RECORDER_SF_LLL_ea_1400C48E4.c)
 *     WPP_RECORDER_SF_LLLL @ 0x1400C49C4 (WPP_RECORDER_SF_LLLL.c)
 *     WPP_RECORDER_SF_LLLLLLq @ 0x1400C4AC4 (WPP_RECORDER_SF_LLLLLLq.c)
 *     WPP_RECORDER_SF_qDqLq @ 0x1400C4C3C (WPP_RECORDER_SF_qDqLq.c)
 *     WPP_RECORDER_SF_qDqLqD @ 0x1400C4D6C (WPP_RECORDER_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        struct _NDIS_QOS_PARAMETERS *a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _NDIS_QOS_PARAMETERS *v7; // rbx
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rdx
  unsigned int NumTrafficClasses; // esi
  int v12; // r12d
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  int v15; // ebp
  __int64 v16; // r9
  unsigned int i; // ecx
  char v18; // al
  int v19; // eax
  __int64 FirstClassificationElementOffset; // rdx
  __int64 NumClassificationElements; // r11
  __int64 ClassificationElementSize; // r9
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // r10d
  unsigned int Flags; // esi
  unsigned __int16 v27; // ax
  int v28; // edx
  char v29[8]; // [rsp+28h] [rbp-80h]
  struct _NDIS_QOS_PARAMETERS *v30; // [rsp+38h] [rbp-70h]
  char v31[4]; // [rsp+40h] [rbp-68h]
  unsigned int *v32; // [rsp+48h] [rbp-60h]

  v7 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v32 = a5;
    *(_DWORD *)v31 = a4;
    v30 = a3;
    *(_DWORD *)&v29[4] = HIDWORD(a1);
    WPP_RECORDER_SF_qDqLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (_DWORD)a3, 0);
  }
  if ( a5 )
    *a5 = 52;
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( !QosCurrentCapabilities )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(QosCurrentCapabilities) = 5;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)QosCurrentCapabilities,
          11,
          94,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids);
      }
    }
    return 3221225659LL;
  }
  if ( (v7->Flags & 2) != 0 )
  {
    NumTrafficClasses = v7->NumTrafficClasses;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( NumTrafficClasses )
    {
      if ( !a2 || NumTrafficClasses <= QosCurrentCapabilities->MaxNumTrafficClasses )
      {
        LODWORD(a3) = 0;
        while ( (unsigned int)a3 < 8 )
        {
          v16 = v7->PriorityAssignmentTable[(unsigned int)a3];
          if ( (unsigned __int8)v16 >= 8u )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              LODWORD(v30) = 8;
              WPP_RECORDER_SF_DDD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0xBu,
                0x61u,
                (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                (char)a3,
                v16,
                v30,
                *(_DWORD *)v31,
                v32);
            }
            return 3221291029LL;
          }
          if ( !_bittest(&v12, v16) )
          {
            v12 |= 1 << v16;
            ++v13;
            if ( v7->TsaAssignmentTable[v16] == 2 )
              ++v14;
          }
          LODWORD(a3) = (_DWORD)a3 + 1;
        }
        if ( v13 > NumTrafficClasses )
        {
          if ( !a2 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0xBu,
                0x63u,
                (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                v13,
                v7->NumTrafficClasses,
                v30,
                *(_DWORD *)v31,
                v32);
            }
            return 3221291029LL;
          }
        }
        else if ( !a2 || v14 <= QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= 8 )
            {
              if ( !v15 || v15 == 100 )
                goto LABEL_71;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                *(_DWORD *)v29 = v15;
                WPP_RECORDER_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0xBu,
                  0x68u,
                  (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                  *(_QWORD *)v29);
              }
              return 3221291029LL;
            }
            if ( _bittest(&v12, i) )
            {
              LODWORD(a3) = i;
              v18 = v7->TsaAssignmentTable[i];
              if ( v18 )
              {
                if ( v18 != 2 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    WPP_RECORDER_SF_DDDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x67u,
                      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                      i,
                      v18,
                      0,
                      2,
                      v32);
                  }
                  return 3221291029LL;
                }
                v19 = v7->TcBandwidthAssignmentTable[i];
                if ( !(_BYTE)v19 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    WPP_RECORDER_SF_Ld(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x66u,
                      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                      i,
                      i);
                  }
                  return 3221291029LL;
                }
                v15 += v19;
              }
              else
              {
                if ( a2 && (QosCurrentCapabilities->Flags & 1) == 0 )
                  goto LABEL_36;
                if ( v7->TcBandwidthAssignmentTable[i] )
                {
                  if ( a2 )
                  {
LABEL_36:
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && *((_WORD *)WPP_GLOBAL_Control + 36) )
                    {
                      WPP_RECORDER_SF_DDDD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        5u,
                        0xBu,
                        0x64u,
                        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                        i,
                        QosCurrentCapabilities->Flags,
                        i,
                        v7->TcBandwidthAssignmentTable[i],
                        v32);
                    }
                    return 3221291029LL;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    LODWORD(v30) = v7->TcBandwidthAssignmentTable[i];
                    WPP_RECORDER_SF_DDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x65u,
                      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
                      i,
                      i,
                      v30,
                      *(_DWORD *)v31,
                      v32);
                  }
                  return 3221291029LL;
                }
              }
            }
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          WPP_RECORDER_SF_LLLL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)QosCurrentCapabilities, (_DWORD)a3, 0);
        return 3221291029LL;
      }
    }
    else if ( !a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(QosCurrentCapabilities) = 5;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)QosCurrentCapabilities,
          11,
          96,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids);
      }
      return 3221291029LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0xBu,
        0x5Fu,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        NumTrafficClasses,
        QosCurrentCapabilities->MaxNumTrafficClasses,
        v30,
        *(_DWORD *)v31,
        v32);
    return 3221291029LL;
  }
LABEL_71:
  if ( (v7->Flags & 0x20000) != 0 )
  {
    FirstClassificationElementOffset = v7->FirstClassificationElementOffset;
    NumClassificationElements = v7->NumClassificationElements;
    ClassificationElementSize = v7->ClassificationElementSize;
    a3 = (struct _NDIS_QOS_PARAMETERS *)((char *)v7 + FirstClassificationElementOffset);
    if ( (_DWORD)NumClassificationElements
      && ((unsigned int)ClassificationElementSize < 0x10
       || (ClassificationElementSize & 3) != 0
       || (unsigned int)FirstClassificationElementOffset < 0x34
       || (unsigned int)FirstClassificationElementOffset > a4
       || ((unsigned __int8)a3 & 3) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLLLLLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FirstClassificationElementOffset,
          (_DWORD)a3,
          ClassificationElementSize);
      return 3221291029LL;
    }
    v23 = NumClassificationElements * ClassificationElementSize;
    if ( (unsigned __int64)(NumClassificationElements * ClassificationElementSize) > 0xFFFFFFFF
      || (v24 = v23 + FirstClassificationElementOffset,
          v23 + (int)FirstClassificationElementOffset < (unsigned int)FirstClassificationElementOffset) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FirstClassificationElementOffset,
          (_DWORD)a3,
          ClassificationElementSize);
      return 3221291029LL;
    }
    if ( a4 < v24 )
    {
      if ( a5 )
        *a5 = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Bu,
          (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
          a4,
          v23 + FirstClassificationElementOffset);
      return 3221291028LL;
    }
    v25 = 0;
    LODWORD(QosCurrentCapabilities) = 1;
    while ( v25 < (unsigned int)NumClassificationElements )
    {
      if ( a3->Header.Type != 0xB7 || !a3->Header.Revision || a3->Header.Size < 0x10u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v29 = v25;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x6Cu,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            *(_QWORD *)v29);
        }
        return 3221291029LL;
      }
      Flags = a3->Flags;
      if ( (Flags & 0xFF000000) != 0
        || (v27 = a3->NumTrafficClasses) == 0
        || v27 >= 7u
        || *(_WORD *)a3->PriorityAssignmentTable
        || *(_WORD *)&a3->PriorityAssignmentTable[2] >= 8u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v28 = *(unsigned __int16 *)a3->PriorityAssignmentTable;
          LOBYTE(v28) = 5;
          WPP_RECORDER_SF_DDDDDDDDDDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v28,
            11,
            109,
            (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
            v25,
            Flags,
            0,
            0,
            a3->NumTrafficClasses,
            7,
            *(_WORD *)a3->PriorityAssignmentTable,
            1,
            0,
            *(_WORD *)&a3->PriorityAssignmentTable[2],
            8);
        }
        return 3221291029LL;
      }
      a3 = (struct _NDIS_QOS_PARAMETERS *)((char *)a3 + v7->ClassificationElementSize);
      ++v25;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)QosCurrentCapabilities, (_DWORD)a3, 0);
  return 0LL;
}
