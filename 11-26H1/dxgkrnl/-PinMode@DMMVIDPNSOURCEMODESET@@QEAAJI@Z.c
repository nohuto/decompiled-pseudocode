/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DCAB8
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002D9FC (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x14025A284 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14025CABC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x140266AB0 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DC840 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002C9E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x140037850 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 Container; // r13
  unsigned __int64 i; // r15
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rcx
  DMMVIDPNPRESENTPATH *v14; // rsi
  __int64 result; // rax
  __int64 v16; // rax
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
    v5 = v4;
    if ( v4 )
    {
      v6 = *((_QWORD *)this + 14);
      v7 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v6 )
      {
        if ( !*(_QWORD *)(v6 + 40) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 68;
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v6 + 40) + 64LL);
        for ( i = 0LL; ; ++i )
        {
          v10 = *(_DWORD *)(v6 + 24);
          v17 = -1;
          v11 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v10, i, &v17);
          v12 = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry4(2LL, i, v2, this, v11);
            result = v12;
            WdLogGlobalForLineNumber = 242;
            return result;
          }
          if ( v17 == -1 )
            return 0LL;
          v13 = *(_QWORD *)(Container + 120);
          v14 = 0LL;
          if ( v13 != Container + 120 )
            v14 = (DMMVIDPNPRESENTPATH *)(v13 - 8);
          while ( v14
               && (*(_DWORD *)(*((_QWORD *)v14 + 11) + 24LL) != *(_DWORD *)(v6 + 24)
                || *(_DWORD *)(*((_QWORD *)v14 + 12) + 24LL) != v17) )
          {
            v16 = *((_QWORD *)v14 + 1);
            v14 = (DMMVIDPNPRESENTPATH *)(v16 - 8);
            if ( v16 == Container + 120 )
              v14 = 0LL;
          }
          if ( !v14 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 262;
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(v14) )
            break;
        }
        WdLogSingleEntry4(
          2LL,
          *(unsigned int *)(v5 + 76),
          *(unsigned int *)(v5 + 80),
          *(int *)(v5 + 96),
          *(unsigned int *)(v6 + 24));
        result = 3223192389LL;
        WdLogGlobalForLineNumber = 273;
        *((_QWORD *)this + 18) = v7;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        result = 3223192328LL;
        WdLogGlobalForLineNumber = 217;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v2, this);
      result = 3223192394LL;
      WdLogGlobalForLineNumber = 195;
    }
  }
  else
  {
    WdLogSingleEntry2(7LL, a2, this);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 182;
  }
  return result;
}
