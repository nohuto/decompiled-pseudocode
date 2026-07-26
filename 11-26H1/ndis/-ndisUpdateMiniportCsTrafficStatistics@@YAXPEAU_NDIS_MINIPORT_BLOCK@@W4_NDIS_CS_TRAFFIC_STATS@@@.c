/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140046D40
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400463F0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140046620 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140079CC0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401645B0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     McTemplateK0qxzzxxxxxx_EtwWriteTransfer @ 0x1400480A0 (McTemplateK0qxzzxxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KSPIN_LOCK *AoAc; // rdi
  __int64 v3; // rsi
  KSPIN_LOCK v5; // r14
  KSPIN_LOCK v6; // r15
  KSPIN_LOCK v7; // r12
  KSPIN_LOCK v8; // r13
  KIRQL v9; // al
  KSPIN_LOCK v10; // r10
  __int64 v11; // rdx
  KIRQL v12; // r11
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // r9
  KSPIN_LOCK v15; // r8
  KSPIN_LOCK v16; // r15
  KSPIN_LOCK v17; // rax
  KSPIN_LOCK v18; // rcx
  const wchar_t *v19; // rax
  const wchar_t *v20; // rcx
  KSPIN_LOCK v21; // r8
  KSPIN_LOCK v22; // [rsp+70h] [rbp-90h]
  KSPIN_LOCK v23; // [rsp+78h] [rbp-88h]
  KSPIN_LOCK v24; // [rsp+78h] [rbp-88h]
  char v25; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  KSPIN_LOCK v28; // [rsp+88h] [rbp-78h]
  KSPIN_LOCK v29; // [rsp+90h] [rbp-70h]
  KSPIN_LOCK v30; // [rsp+98h] [rbp-68h]
  __int128 v31; // [rsp+A0h] [rbp-60h]
  KSPIN_LOCK v32; // [rsp+B0h] [rbp-50h]
  struct _NDIS_OID_REQUEST v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+1E0h] [rbp+E0h]
  _BYTE v35[145]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v36; // [rsp+281h] [rbp+181h]
  __int16 v37; // [rsp+285h] [rbp+185h]
  char v38; // [rsp+287h] [rbp+187h]

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v3 = a2;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v34 = 0LL;
  *(_QWORD *)&v33.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v33, 0, 32);
  *(&v33.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v33.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  memset(&v35[1], 0, 144);
  *(_QWORD *)v35 = 9961856LL;
  memset(&v33.NdisReserved[40], 0, 128);
  *(_DWORD *)&v33.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v33.NdisReserved[96]);
  v33.Header = (NDIS_OBJECT_HEADER)15466902;
  v33.DATA.QUERY_INFORMATION.InformationBuffer = v35;
  v33.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&v33.RequestType = 2LL;
  v33.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
      (char)&v33,
      a1);
  if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, &v33, 0, 0LL) )
  {
    v5 = *(_QWORD *)&v35[32];
    v6 = *(_QWORD *)&v35[48];
    v7 = *(_QWORD *)&v35[40];
    v8 = *(_QWORD *)&v35[72];
    v23 = *(_QWORD *)&v35[64];
    v22 = *(_QWORD *)&v35[80];
    v31 = *(_OWORD *)&v35[32];
    v32 = *(_QWORD *)&v35[72];
    v29 = *(_QWORD *)&v35[48];
    v9 = KeAcquireSpinLockRaiseToDpc(AoAc);
    v10 = v23;
    v11 = 6 * v3;
    v12 = v9;
    if ( !(_DWORD)v3 )
    {
      LOBYTE(v8) = 0;
      LOBYTE(v7) = 0;
      LOBYTE(v16) = 0;
      LOBYTE(v5) = 0;
      v15 = v29;
      v14 = v22;
      v25 = 0;
      LODWORD(v17) = 0;
      goto LABEL_9;
    }
    v13 = AoAc[107];
    if ( v5 < v13 || (v28 = AoAc[108], v23 < v28) || (v26 = AoAc[109], v7 < v26) || (v21 = AoAc[110], v8 < v21) )
    {
      v14 = v22;
    }
    else
    {
      v14 = v22;
      v24 = AoAc[111];
      if ( v6 >= v24 )
      {
        v30 = AoAc[112];
        if ( v22 >= v30 )
        {
          v7 -= v26;
          v8 -= v21;
          v15 = v29;
          v5 -= v13;
          v17 = v29 - v24;
          v16 = v10 - v28;
          v18 = v22 - v30;
          goto LABEL_8;
        }
      }
    }
    v15 = v29;
    v16 = v10;
    v17 = v29;
    v18 = v14;
LABEL_8:
    AoAc[v11 + 107] += v5;
    AoAc[v11 + 108] += v16;
    AoAc[v11 + 109] += v7;
    AoAc[v11 + 110] += v8;
    AoAc[v11 + 111] += v17;
    AoAc[v11 + 112] += v18;
    v25 = v18;
LABEL_9:
    v27 = v17;
    AoAc[107] = v31;
    AoAc[108] = v10;
    AoAc[109] = *((_QWORD *)&v31 + 1);
    AoAc[110] = v32;
    AoAc[111] = v15;
    AoAc[112] = v14;
    KeReleaseSpinLock(AoAc, v12);
    if ( (_DWORD)v3 && (byte_14011D043 & 4) != 0 )
    {
      v19 = L"DX";
      v20 = L"D0";
      if ( (_DWORD)v3 != 1 )
      {
        v19 = L"D0";
        v20 = L"DX";
      }
      McTemplateK0qxzzxxxxxx_EtwWriteTransfer(
        (_DWORD)v20,
        v27,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (__int64)v20,
        (__int64)v19,
        v5,
        v16,
        v7,
        v8,
        v27,
        v25);
    }
  }
}
