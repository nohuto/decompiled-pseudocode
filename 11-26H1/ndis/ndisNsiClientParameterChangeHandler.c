/*
 * XREFs of ndisNsiClientParameterChangeHandler @ 0x140163420
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qx_EtwWriteTransfer @ 0x1400074C0 (McTemplateK0qx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x140060390 (WPP_RECORDER_SF_dd_ea_140060390.c)
 *     WPP_RECORDER_SF_ddLLL @ 0x14006A4C0 (WPP_RECORDER_SF_ddLLL.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14006D960 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qxqqq_EtwWriteTransfer @ 0x14006E5C0 (McTemplateK0qxqqq_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1400710B0 (McTemplateK0x_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1400C4598 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1400D473C (McTemplateK0j_EtwWriteTransfer.c)
 */

int __fastcall ndisNsiClientParameterChangeHandler(__int64 a1, int **a2, _DWORD *a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  int v5; // edi
  int *v9; // r15
  int v11; // [rsp+20h] [rbp-88h]
  __int64 v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+30h] [rbp-78h]
  __int64 v14; // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  int v17; // [rsp+C8h] [rbp+20h]

  v4 = &retaddr;
  v17 = a4;
  v5 = a4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LODWORD(v4) = WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)a2,
                    0x16u,
                    0xAu,
                    (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
                    a1,
                    (char)a2,
                    (char)a3,
                    a4);
  v9 = *a2;
  if ( *a2 )
  {
    if ( a1 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = (*(_QWORD *)v9 >> 24) & 0xFFFFFF;
        LODWORD(v4) = WPP_RECORDER_SF_dd(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        (int)a2,
                        0x16u,
                        0xCu,
                        (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
                        BYTE6(*(_QWORD *)v9),
                        v13);
      }
      if ( (byte_14011D041 & 0x20) != 0 )
        LODWORD(v4) = McTemplateK0qx_EtwWriteTransfer(
                        a1,
                        (__int64)a2,
                        (__int64)a3,
                        HIWORD(*(_QWORD *)*a2),
                        (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
    }
    else
    {
      LODWORD(v4) = a1;
      if ( a1 )
      {
        LODWORD(v4) = a1 - 6;
        if ( a1 == 6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v4) = WPP_RECORDER_SF_DDDDDDDDDDD(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0xDu,
                            (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
                            *v9,
                            *((_WORD *)v9 + 2),
                            *((_WORD *)v9 + 3),
                            *((_BYTE *)v9 + 8),
                            *((_BYTE *)v9 + 9),
                            *((_BYTE *)v9 + 10),
                            *((_BYTE *)v9 + 11),
                            *((_BYTE *)v9 + 12),
                            *((_BYTE *)v9 + 13),
                            *((_BYTE *)v9 + 14),
                            *((unsigned __int8 *)v9 + 15));
            v5 = v17;
          }
          if ( (byte_14011D041 & 0x20) != 0 )
            LODWORD(v4) = McTemplateK0j_EtwWriteTransfer(a1, (__int64)a2, (__int64)a3, (__int64)v9);
        }
        else
        {
          LODWORD(v4) = a1 - 7;
          if ( a1 == 7 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v12) = *v9;
              LODWORD(v4) = WPP_RECORDER_SF_d(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              4u,
                              0x16u,
                              0xEu,
                              (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
                              v12);
            }
            if ( (byte_14011D041 & 0x20) != 0 )
              LODWORD(v4) = McTemplateK0q_EtwWriteTransfer(
                              a1,
                              &ChangeNotificationCompartment,
                              (const GUID *)&NDIS_PROVIDER_ID,
                              **a2);
          }
          else if ( a1 == 17 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v13) = (*(_QWORD *)v9 >> 24) & 0xFFFFFF;
              LODWORD(v4) = WPP_RECORDER_SF_dd(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              (int)a2,
                              0x16u,
                              0xFu,
                              (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
                              BYTE6(*(_QWORD *)v9),
                              v13);
            }
            if ( (byte_14011D041 & 0x20) != 0 )
              LODWORD(v4) = McTemplateK0x_EtwWriteTransfer(
                              a1,
                              &ChangeNotificationTimestamping,
                              (const GUID *)&NDIS_PROVIDER_ID,
                              *(_QWORD *)*a2);
          }
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          LODWORD(v4) = WPP_RECORDER_SF_ddLLL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          HIWORD(*(_QWORD *)v9),
                          (__int64)a3,
                          a4,
                          v11);
        if ( (byte_14011D041 & 0x20) != 0 )
        {
          LODWORD(v14) = a3[5];
          LODWORD(v13) = a3[4];
          LODWORD(v12) = *a3;
          LODWORD(v4) = McTemplateK0qxqqq_EtwWriteTransfer(
                          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
                          (__int64)a2,
                          (__int64)a3,
                          HIWORD(*(_QWORD *)*a2),
                          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
                          v12,
                          v13,
                          v14);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v5;
    LODWORD(v4) = WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)a2,
                    0x16u,
                    0x10u,
                    (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
                    a1,
                    (char)a2,
                    (char)a3,
                    v15);
  }
  return (int)v4;
}
