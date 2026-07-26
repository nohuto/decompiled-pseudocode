/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015F2A0
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015DE10 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x140070010 (WPP_RECORDER_SF_Sd.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400CED8C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x14014C408 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1401601E0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        struct KRegKey *this,
        struct KRegKey *a2,
        struct KRegKey *a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 result; // rax
  unsigned int v8; // r14d
  int Uint64; // r15d
  unsigned __int16 v10; // r9
  __int64 v11; // r12
  const char *v12; // rax
  __int64 v13; // rcx
  NTSTATUS v14; // edi
  NTSTATUS v15; // r15d
  __int16 v16; // cx
  const char *v17; // rax
  __int16 v18; // r12
  int Uint32; // eax
  _UNICODE_STRING v20; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+28h] BYREF
  struct KRegKey *v22; // [rsp+A0h] [rbp+38h] BYREF

  v22 = this;
  result = NetSetupPropertyBag::ReadString(&v22, &NETSETUPPKEY_Interface_IfAlias, a3);
  if ( (int)result >= 0 )
  {
    result = NetSetupPropertyBag::ReadString(&v22, &NETSETUPPKEY_Interface_IfDescr, &a3[1]);
    if ( (int)result >= 0 )
    {
      v8 = 0;
      v21 = 0;
      Uint64 = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v22,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IfType,
                 &v21);
      if ( Uint64 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 19;
LABEL_9:
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x16u,
            v10,
            (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
            Uint64);
          return (unsigned int)Uint64;
        }
        return (unsigned int)Uint64;
      }
      LOWORD(a3[2].m_ptr) = v21;
      Uint64 = NetSetupPropertyBag::ReadUint64(
                 (NetSetupPropertyBag *)&v22,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_NetLuid,
                 (unsigned __int64 *)&a3[3]);
      if ( Uint64 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 20;
          goto LABEL_9;
        }
        return (unsigned int)Uint64;
      }
      if ( (int)NetSetupPropertyBag::ReadUint32(
                  (NetSetupPropertyBag *)&v22,
                  (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_MediaType,
                  (unsigned int *)&a3[7]) < 0 )
        LODWORD(a3[7].m_ptr) = 0;
      if ( (int)NetSetupPropertyBag::ReadUint32(
                  (NetSetupPropertyBag *)&v22,
                  (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PhysicalMediaType,
                  (unsigned int *)&a3[7].m_ptr + 1) < 0 )
        HIDWORD(a3[7].m_ptr) = 0;
      result = NetSetupPropertyBag::ReadBoolean(
                 (NetSetupPropertyBag *)&v22,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsPhysical,
                 (bool *)&a3[16].m_ptr + 5);
      if ( (int)result >= 0 )
      {
        result = NetSetupPropertyBag::ReadBoolean(
                   (NetSetupPropertyBag *)&v22,
                   (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi,
                   (bool *)&a3[16].m_ptr + 4);
        if ( (int)result >= 0 )
        {
          result = NetSetupPropertyBag::ReadUint32(
                     (NetSetupPropertyBag *)&v22,
                     (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_SuggestedIfIndex,
                     (unsigned int *)&a3[4]);
          if ( (_DWORD)result == -1073741772 )
          {
            LODWORD(a3[4].m_ptr) = 0;
          }
          else if ( (_DWORD)result )
          {
            return result;
          }
          LOWORD(a3[2].m_ptr) = v21;
          HIDWORD(a3[6].m_ptr) = 0;
          result = ndisIfReadNetworkGuidFromKey(this, (struct _GUID *)((char *)&a3[4].m_ptr + 4));
          if ( (int)result >= 0 )
          {
            if ( !a2->m_ptr )
              goto LABEL_46;
            LOWORD(a3[8].m_ptr) = 0;
            v11 = 0x7FFFLL;
            v12 = L"CurrentAddress";
            v20 = 0LL;
            v13 = 0x7FFFLL;
            do
            {
              if ( !*(_WORD *)v12 )
                break;
              v12 += 2;
              --v13;
            }
            while ( v13 );
            v14 = -1073741811;
            v15 = -1073741811;
            if ( v13 )
            {
              v15 = 0;
              v16 = 2 * v13;
              v20.Buffer = (wchar_t *)L"CurrentAddress";
              v20.Length = -2 - v16;
              v20.MaximumLength = -v16;
            }
            if ( v15 >= 0 )
              v15 = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(&a2->m_ptr, &v20, &a3[8]);
            if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741772 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Sd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0x16u,
                  0x12u,
                  (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
                  (const wchar_t *)L"CurrentAddress",
                  v15);
              return (unsigned int)v15;
            }
            WORD1(a3[12].m_ptr) = 0;
            v20 = 0LL;
            v17 = L"PermanentAddress";
            do
            {
              if ( !*(_WORD *)v17 )
                break;
              v17 += 2;
              --v11;
            }
            while ( v11 );
            if ( v11 )
            {
              v14 = 0;
              v18 = 2 * v11;
              v20.Buffer = (wchar_t *)L"PermanentAddress";
              v20.Length = -2 - v18;
              v20.MaximumLength = -v18;
            }
            if ( v14 >= 0 )
              v14 = KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(
                      &a2->m_ptr,
                      &v20,
                      (_WORD *)&a3[12].m_ptr + 1);
            if ( ((v14 + 0x80000000) & 0x80000000) != 0 || v14 == -1073741772 )
            {
LABEL_46:
              BYTE6(a3[16].m_ptr) = 1;
              result = NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v22,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IfConnectorPresent,
                         (bool *)&a3[16].m_ptr + 7);
              if ( (_DWORD)result == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
              }
              else if ( (int)result < 0 )
              {
                return result;
              }
              result = NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v22,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_AccessType,
                         (unsigned int *)&a3[17]);
              if ( (_DWORD)result == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
              }
              else if ( (int)result < 0 )
              {
                return result;
              }
              result = NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v22,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_ConnectionType,
                         (unsigned int *)&a3[17].m_ptr + 1);
              if ( (_DWORD)result == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
              }
              else if ( (int)result < 0 )
              {
                return result;
              }
              Uint32 = NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v22,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_DirectionType,
                         (unsigned int *)&a3[18]);
              if ( Uint32 == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
                return 0LL;
              }
              else
              {
                if ( Uint32 < 0 )
                  return (unsigned int)Uint32;
                return v8;
              }
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Sd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  0x16u,
                  0x12u,
                  (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
                  (const wchar_t *)L"PermanentAddress",
                  v14);
              return (unsigned int)v14;
            }
          }
        }
      }
    }
  }
  return result;
}
