/*
 * XREFs of _PnpCtxOpenMachine @ 0x140AE5860
 * Callers:
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     _PnpCtxDestroyNode @ 0x14089C0B4 (_PnpCtxDestroyNode.c)
 *     _PnpCtxCreateNode @ 0x140AE59C4 (_PnpCtxCreateNode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxOpenMachine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  NTSTATUS Node; // edi
  __int64 v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // edx
  unsigned __int64 *v14; // rcx
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __m128i v17; // xmm2
  unsigned __int64 v18; // xmm0_8
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  struct _ERESOURCE *v21; // rax
  struct _ERESOURCE *v22; // rbp

  *a7 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 167772160;
    v11 = Pool2 + 8;
    *(_BYTE *)(Pool2 + 4) = 0;
    v12 = Pool2 + 40;
    v13 = 0;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    v14 = (unsigned __int64 *)(Pool2 + 40);
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(Pool2 + 24), (__m128i)(unsigned __int64)(Pool2 + 24));
    do
    {
      v16 = _mm_cvtsi32_si128(v13);
      v13 += 2;
      v17 = _mm_add_epi64(
              _mm_slli_epi64(
                _mm_unpacklo_epi32(
                  _mm_add_epi32(_mm_shuffle_epi32(v16, 0), _mm_loadl_epi64((const __m128i *)&_xmm)),
                  (__m128i)0LL),
                4u),
              v15);
      *(v14 - 1) = v17.m128i_i64[0];
      v18 = _mm_srli_si128(v17, 8).m128i_u64[0];
      v14[1] = v18;
      *v14 = v18;
      *(v14 - 2) = v17.m128i_i64[0];
      v14 += 4;
    }
    while ( v13 < 4 );
    Node = PnpCtxCreateNode(Pool2, L"SYSTEM", 1LL);
    if ( Node >= 0 )
    {
      v19 = *(_QWORD **)(v11 + 8);
      if ( *v19 != v11
        || (MEMORY[8] = *(_QWORD *)(v11 + 8),
            MEMORY[0] = v11,
            *v19 = 0LL,
            *(_QWORD *)(v11 + 8) = 0LL,
            v20 = (_QWORD *)v8[6],
            *v20 != v12) )
      {
        __fastfail(3u);
      }
      MEMORY[0x18] = v8[6];
      MEMORY[0x10] = v12;
      *v20 = 16LL;
      v8[6] = 16LL;
      v8[11] = 0LL;
      v8[28] = MEMORY[0x38];
      v21 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
      v22 = v21;
      if ( v21 )
      {
        Node = ExInitializeResourceLite(v21);
        if ( Node < 0 )
        {
          ExFreePoolWithTag(v22, 0);
        }
        else
        {
          v8[30] = v22;
          v8[38] = PnpDispatchDevice;
          v8[39] = PnpDispatchInstallerClass;
          v8[40] = PnpDispatchDeviceInterface;
          v8[41] = PnpDispatchInterfaceClass;
          v8[42] = PnpDispatchDeviceContainer;
          v8[43] = PnpDispatchDevicePanel;
          v8[29] = 0LL;
          v8[61] = 0LL;
          v8[62] = 0LL;
          v8[63] = 0LL;
          v8[64] = 0LL;
          v8[65] = 0LL;
          *a7 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        Node = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Node;
}
