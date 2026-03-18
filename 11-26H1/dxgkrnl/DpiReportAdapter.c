/*
 * XREFs of DpiReportAdapter @ 0x1403BC628
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403BBFC8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer @ 0x140069E70 (McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer.c)
 *     __chkstk_0 @ 0x1400A5964 (__chkstk_0.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rsi
  _QWORD *Pool2; // rbx
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 (__fastcall *v18)(_QWORD, _QWORD, char *); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _DWORD v31[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = *(_DWORD *)(v3 + 2840);
    v5 = 1LL;
    if ( v4 )
      v5 = v4;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)v5, 1953656900LL);
    if ( Pool2 )
    {
      v7 = *(_DWORD *)(v3 + 2840);
      if ( v7 )
      {
        v8 = Pool2;
        v9 = *(_QWORD *)(v3 + 2832) - (_QWORD)Pool2;
        v10 = v7;
        do
        {
          *v8 = *(_QWORD *)(*(_QWORD *)((char *)v8 + v9) + 64LL);
          ++v8;
          --v10;
        }
        while ( v10 );
      }
      else
      {
        *Pool2 = v3;
      }
    }
    else
    {
      v5 = 0LL;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 3583;
    }
    if ( (_DWORD)v5 )
    {
      v11 = Pool2;
      do
      {
        memset(v31, 0, sizeof(v31));
        v13 = *v11;
        v14 = *v11 + 1112LL;
        v31[1025] = *(_DWORD *)(*v11 + 500LL);
        v31[1026] = *(_DWORD *)(v13 + 504);
        LOBYTE(v31[1027]) = *(_BYTE *)(v13 + 508);
        v15 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 )
        {
          v12 = 2LL;
          v16 = v31;
          do
          {
            *v16 = *(_OWORD *)v14;
            v16[1] = *(_OWORD *)(v14 + 16);
            v16[2] = *(_OWORD *)(v14 + 32);
            v16[3] = *(_OWORD *)(v14 + 48);
            v16[4] = *(_OWORD *)(v14 + 64);
            v16[5] = *(_OWORD *)(v14 + 80);
            v16[6] = *(_OWORD *)(v14 + 96);
            v16 += 8;
            v17 = *(_OWORD *)(v14 + 112);
            v14 += 128LL;
            *(v16 - 1) = v17;
            --v12;
          }
          while ( v12 );
          v31[1024] = 256;
        }
        v18 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v13 + 616);
        if ( v18 )
        {
          v19 = v18(*(_QWORD *)(v13 + 568), 0LL, (char *)v31 + (v15 != 0 ? 0x100 : 0));
          v20 = (unsigned int)(v19 + v31[1024]);
        }
        else
        {
          v20 = 0LL;
        }
        v31[1024] = v20;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          LODWORD(v30) = *(_DWORD *)(v13 + 1140);
          LODWORD(v29) = *(_DWORD *)(v13 + 1136);
          LODWORD(v28) = *(_DWORD *)(v13 + 1132);
          LODWORD(v27) = *(_DWORD *)(v13 + 1128);
          LODWORD(v26) = *(_DWORD *)(v13 + 1124);
          LODWORD(v25) = *(_DWORD *)(v13 + 1120);
          LODWORD(v24) = LOBYTE(v31[1027]);
          LODWORD(v23) = v31[1026];
          LODWORD(v22) = v31[1025];
          LODWORD(v21) = v20;
          McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer(
            LOBYTE(v31[1027]),
            v20,
            v12,
            a2,
            v21,
            v31,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            *(_QWORD *)(a2 + 412));
        }
        ++v11;
        --v5;
      }
      while ( v5 );
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
