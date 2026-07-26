/*
 * XREFs of ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x14006C7B0
 * Callers:
 *     ?ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140091000 (-ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B68A0 (-ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 */

__int64 __fastcall ndisOidPrePMCapabilities(struct _NDIS_REQ_TRACKER *a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  unsigned __int8 v6; // di
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax

  v2 = *(_QWORD *)a1;
  v4 = *((_QWORD *)a1 + 4);
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v2,
      v4);
  v7 = *((_QWORD *)a1 + 3);
  if ( !v7
    || (v8 = *(_QWORD *)(v7 + 24), *(_BYTE *)(v8 + 56) > 6u)
    || *(_BYTE *)(v8 + 56) == 6 && *(_BYTE *)(v8 + 57) >= 0x14u )
  {
    v10 = *(_DWORD *)(v4 + 4);
    if ( !v10 || v10 == 2 )
    {
      v9 = 0;
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v4 + 48) >= 0x34u )
      {
        if ( !*(_QWORD *)a1 )
        {
          v6 = 0;
          goto LABEL_24;
        }
        v11 = 1000LL;
        v12 = *(_QWORD *)(v4 + 40);
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          if ( !a2 )
            v11 = 1060LL;
          *(_OWORD *)v12 = *(_OWORD *)(v11 + v2);
          *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + v2 + 16);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + v2 + 32);
          *(_QWORD *)(v12 + 48) = *(_QWORD *)(v11 + v2 + 48);
          *(_DWORD *)(v12 + 56) = *(_DWORD *)(v11 + v2 + 56);
          v13 = 60;
        }
        else
        {
          if ( !a2 )
            v11 = 1060LL;
          *(_OWORD *)v12 = *(_OWORD *)(v11 + v2);
          *(_OWORD *)(v12 + 16) = *(_OWORD *)(v11 + v2 + 16);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v11 + v2 + 32);
          *(_DWORD *)(v12 + 48) = *(_DWORD *)(v11 + v2 + 48);
          v13 = 52;
          *(_WORD *)(v12 + 2) = 52;
          *(_BYTE *)(v12 + 1) = 1;
        }
        *(_DWORD *)(v4 + 52) = v13;
        *(_DWORD *)(v4 + 56) = 0;
      }
      else
      {
        *(_DWORD *)(v4 + 56) = 52;
        v9 = -1073676268;
      }
    }
    else
    {
      v9 = -1073741637;
    }
  }
  else
  {
    v9 = -1073741637;
  }
  *((_DWORD *)a1 + 10) = v9;
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v2,
      v9,
      v6);
  return v6;
}
