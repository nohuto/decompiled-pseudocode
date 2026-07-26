/*
 * XREFs of ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B01B0
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1400A30CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDd @ 0x1400B1378 (WPP_RECORDER_SF_DDDDd.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E0C0C (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisRssV2UpdateIndirectionTable(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _DWORD *InformationBuffer; // rax
  int v3; // r8d
  struct _NDIS_VPORT_BLOCK *v4; // r13
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rdi
  struct _NDIS_VPORT_BLOCK *v6; // r15
  unsigned int v7; // esi
  __int64 v8; // rbx
  _UNKNOWN **v9; // r10
  struct _GUID *v10; // r11
  unsigned int v11; // edx
  int v12; // ebp
  int v13; // r12d
  __int64 v14; // r14
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  char v16; // al
  int v17; // [rsp+20h] [rbp-88h]
  _GROUP_AFFINITY v18; // [rsp+50h] [rbp-58h]
  struct _NDIS_MINIPORT_BLOCK *v19; // [rsp+B0h] [rbp+8h]
  _PROCESSOR_NUMBER v20; // [rsp+B8h] [rbp+10h]
  int v21; // [rsp+C0h] [rbp+18h]
  unsigned int v22; // [rsp+C8h] [rbp+20h]

  v19 = a1;
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v3 = -1;
  v4 = 0LL;
  v21 = -1;
  CombinedNdisRSSParameters = 0LL;
  v6 = 0LL;
  v7 = 0;
  v22 = InformationBuffer[4];
  if ( v22 )
  {
    v8 = (__int64)InformationBuffer + (unsigned int)InformationBuffer[3] + 4;
    v9 = &WPP_RECORDER_INITIALIZED;
    v10 = (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids;
    do
    {
      v11 = *(_DWORD *)v8;
      v12 = *(_DWORD *)(v8 + 4);
      v13 = *(_DWORD *)(v8 + 16);
      v14 = *(unsigned __int16 *)(v8 + 8);
      v20 = *(_PROCESSOR_NUMBER *)(v8 + 10);
      v20.Reserved = 0;
      if ( *(_DWORD *)v8 != v3 )
      {
        if ( v11 )
        {
          v21 = *(_DWORD *)v8;
          VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, v11);
          v4 = VPortByVPortIdInternal;
          if ( VPortByVPortIdInternal )
          {
            CombinedNdisRSSParameters = VPortByVPortIdInternal->CombinedNdisRSSParameters;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v9 )
            {
              WPP_RECORDER_SF_DDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), 2u, 0xBu, 0x10u, v10, v11, v7, v14);
              v9 = &WPP_RECORDER_INITIALIZED;
              v10 = (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids;
            }
            CombinedNdisRSSParameters = 0LL;
          }
        }
        else
        {
          if ( !v6 )
          {
            v6 = ndisIovFindVPortByVPortIdInternal(a1, 0);
            if ( !v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v9 )
            {
              WPP_RECORDER_SF_DDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), 2u, v11 + 11, v11 + 15, v10, v11, v7, v14);
              a1 = v19;
              v9 = &WPP_RECORDER_INITIALIZED;
              v10 = (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids;
            }
          }
          CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        }
      }
      if ( v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v9 )
          WPP_RECORDER_SF_DDDDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v3, 19, v17, *(_DWORD *)v8, v7, v14, v12, v13);
      }
      else
      {
        v16 = v12 & 1;
        if ( CombinedNdisRSSParameters || v16 )
        {
          if ( (v12 & 2) != 0 )
          {
            CombinedNdisRSSParameters->DefaultProcessorNumber = v20;
          }
          else if ( v16 )
          {
            v18 = 0LL;
            v18.Group = v20.Group;
            v18.Mask = 1LL << v20.Number;
            if ( *(_DWORD *)v8 )
            {
              if ( v4 )
                v4->VPortParams.ProcessorAffinity = v18;
            }
            else if ( v6 )
            {
              v6->VPortParams.ProcessorAffinity = v18;
            }
          }
          else if ( (unsigned int)v14 >= CombinedNdisRSSParameters->IndirectionTableSize >> 2 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v9 )
              WPP_RECORDER_SF_DDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), 2u, 0xBu, 0x12u, v10, *(_DWORD *)v8, v7, v14);
            *(_DWORD *)(v8 + 16) = -1073741811;
          }
          else
          {
            *(_PROCESSOR_NUMBER *)((char *)&CombinedNdisRSSParameters->Header
                                 + 4 * v14
                                 + CombinedNdisRSSParameters->IndirectionTableOffset) = v20;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v9 )
        {
          WPP_RECORDER_SF_DDDDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v3, 17, v17, *(_DWORD *)v8, v7, v14, v12, 0);
        }
      }
      a1 = v19;
      v9 = &WPP_RECORDER_INITIALIZED;
      v3 = v21;
      v10 = (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids;
      ++v7;
      v8 += 24LL;
    }
    while ( v7 < v22 );
  }
}
