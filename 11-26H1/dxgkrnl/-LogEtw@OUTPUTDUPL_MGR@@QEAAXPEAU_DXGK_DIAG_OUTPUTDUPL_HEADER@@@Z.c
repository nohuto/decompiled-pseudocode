/*
 * XREFs of ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4
 * Callers:
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x14029C5C0 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x14029C7F8 (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0D0C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402B0E60 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B1274 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402B1A60 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x14036B558 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1403AB8B0 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x14040F02C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012A50 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqtqtq_EtwWriteTransfer @ 0x140057FD8 (McTemplateK0qqqqqtqtq_EtwWriteTransfer.c)
 *     McTemplateK0qqqiiqttddtqq_EtwWriteTransfer @ 0x140058E48 (McTemplateK0qqqiiqttddtqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqddt_EtwWriteTransfer @ 0x140059084 (McTemplateK0qqqddt_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14005A918 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqDR6qDR8_EtwWriteTransfer @ 0x14005AE04 (McTemplateK0qqqqqqqDR6qDR8_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14005CCBC (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer @ 0x14005D010 (McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqdd_EtwWriteTransfer @ 0x14007F9C0 (McTemplateK0qqqqqqqdd_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqddqq_EtwWriteTransfer @ 0x14007FAB4 (McTemplateK0qqqqqqqddqq_EtwWriteTransfer.c)
 */

void __fastcall OUTPUTDUPL_MGR::LogEtw(OUTPUTDUPL_MGR *this, struct _DXGK_DIAG_OUTPUTDUPL_HEADER *a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // r9d
  unsigned __int64 v12; // r8
  char *v13; // [rsp+60h] [rbp-28h]

  v3 = *((unsigned int *)a2 + 12);
  if ( (int)v3 <= 5 )
  {
    if ( (_DWORD)v3 == 5 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          v3,
          &Dxgk_Diag_OutputDupl_High_Level_Update_Start,
          a3,
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13));
    }
    else if ( (_DWORD)v3 )
    {
      v8 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = (unsigned int)(v9 - 1);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqqddt_EtwWriteTransfer(
                v10,
                (__int64)a2,
                a3,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                *((_DWORD *)a2 + 14),
                *((_DWORD *)a2 + 15),
                *((_DWORD *)a2 + 16));
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0qqqqqqqdd_EtwWriteTransfer(
              v10,
              (__int64)a2,
              a3,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15),
              *((_DWORD *)a2 + 16),
              *((_DWORD *)a2 + 17),
              *((_DWORD *)a2 + 18),
              *((_DWORD *)a2 + 19));
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v13 = (char *)a2 + 16 * *((unsigned int *)a2 + 15) + 72;
          McTemplateK0qqqqqqqDR6qDR8_EtwWriteTransfer(
            (unsigned int)(4 * *((_DWORD *)a2 + 15)),
            (__int64)v13,
            (unsigned int)(6 * *((_DWORD *)a2 + 16)),
            *((_DWORD *)a2 + 10),
            *((_DWORD *)a2 + 11),
            *((_DWORD *)a2 + 13),
            *((_DWORD *)a2 + 14),
            *((_DWORD *)a2 + 15),
            *((_DWORD *)a2 + 16),
            4 * *((_DWORD *)a2 + 15),
            (__int64)a2 + 72,
            6 * *((_DWORD *)a2 + 16),
            (__int64)v13);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        McTemplateK0qqqqq_EtwWriteTransfer(
          v8,
          &Dxgk_Diag_OutputDupl_Destroy,
          a3,
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13),
          *((_DWORD *)a2 + 14),
          *((_DWORD *)a2 + 15));
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqq_EtwWriteTransfer(
        v3,
        &Dxgk_Diag_OutputDupl_Connect,
        a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15));
    }
  }
  else
  {
    v4 = (unsigned int)(v3 - 6);
    if ( (_DWORD)v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = (unsigned int)(v6 - 1);
          if ( (_DWORD)v7 )
          {
            if ( (_DWORD)v7 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqqq_EtwWriteTransfer(
                v7,
                (__int64)a2,
                a3,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                *((_DWORD *)a2 + 14));
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0qqqqqqqddqq_EtwWriteTransfer(
              v7,
              (__int64)a2,
              a3,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15),
              *((_DWORD *)a2 + 16),
              *((_DWORD *)a2 + 17),
              *((_DWORD *)a2 + 18),
              *((_DWORD *)a2 + 19),
              *((_DWORD *)a2 + 21),
              *((_DWORD *)a2 + 20));
          }
        }
        else
        {
          v11 = *((_DWORD *)a2 + 14);
          v12 = *((unsigned int *)a2 + 16);
          if ( v11 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer(
                (__int64)a2 + 72,
                &Dxgk_Diag_OutputDupl_Get_Meta_Data_Move,
                v12,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                v11,
                *((_DWORD *)a2 + 15),
                v12,
                *((_DWORD *)a2 + 17),
                v12 / 0x18,
                6 * (v12 / 0x18),
                (__int64)a2 + 72);
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer(
              4 * ((unsigned int)v12 >> 4),
              &Dxgk_Diag_OutputDupl_Get_Meta_Data_Dirty,
              v12,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              0,
              *((_DWORD *)a2 + 15),
              v12,
              *((_DWORD *)a2 + 17),
              (unsigned int)v12 >> 4,
              4 * ((unsigned int)v12 >> 4),
              (__int64)a2 + 72);
          }
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        McTemplateK0qqqiiqttddtqq_EtwWriteTransfer(
          v5,
          (__int64)a2,
          a3,
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13),
          *((_QWORD *)a2 + 7),
          *((_QWORD *)a2 + 8),
          *((_DWORD *)a2 + 18),
          *((_DWORD *)a2 + 19),
          *((_DWORD *)a2 + 20),
          *((_DWORD *)a2 + 21),
          *((_DWORD *)a2 + 22),
          *((_DWORD *)a2 + 23),
          *((_DWORD *)a2 + 24),
          *((_DWORD *)a2 + 25));
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqqtqtq_EtwWriteTransfer(
        v4,
        (__int64)a2,
        a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15),
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        *((_DWORD *)a2 + 19));
    }
  }
}
