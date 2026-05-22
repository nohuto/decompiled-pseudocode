/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B2240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18002A150 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIMagnifierControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMagnifierControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003EB50 (--$As@UIMagnifierControllerProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18007D750 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801B1F08 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x1801B20A8 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z @ 0x1801B21D0 (-HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801B2C80 (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801B2FAC (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801B3008 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 *DeviceState; // rax
  __int64 v16; // r15
  unsigned __int8 GesturesEnabled; // al
  _QWORD *v18; // rax
  bool v19; // cc
  char v20; // al
  char v21; // al
  __int64 (__fastcall *v22)(__int64, GUID *, char *); // rsi
  int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF

  *(_DWORD *)a4 = 0;
  if ( (*(_DWORD *)a2 & 0x88) == 8 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      *(_DWORD *)a4 = 1;
    }
    else
    {
      v6 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v7 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
      v8 = *(_QWORD **)(v7 - 24);
      v9 = *(_QWORD *)(v7 - 16);
      v27[0] = v9;
      while ( v8 != (_QWORD *)v9 )
      {
        v10 = 0LL;
        v30 = 0LL;
        v11 = *(_QWORD *)(*v8 + 488LL);
        v12 = *(_QWORD *)(*v8 + 496LL);
        if ( v11 != v12 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMagnifierControllerProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 8),
                        &v30) >= 0 )
              break;
            v11 += 16LL;
          }
          while ( v11 != v12 );
          v10 = v30;
        }
        v13 = (v10 - 8) & -(__int64)(v10 != 0);
        v26 = v13;
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        v14 = v6;
        v6 = v13;
        v30 = v13;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 8LL))(v14 + 16);
        if ( v13 )
        {
          Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(&v31, v8);
          v26 = 0LL;
          DeviceState = MagnifierProcessor::GetDeviceState((__int64)this, v27, (__int64)a2);
          v16 = 0LL;
          if ( &v25 != DeviceState )
          {
            v16 = *DeviceState;
            *DeviceState = 0LL;
          }
          v25 = 0LL;
          v26 = v16;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v27);
          *(_BYTE *)(v16 + 16) = BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(v13 + 8));
          GesturesEnabled = BamoMagnifierControllerProxy::GetGesturesEnabled((BamoMagnifierControllerProxy *)(v13 + 8));
          *(_BYTE *)(v16 + 17) = GesturesEnabled;
          InputTraceLogging::Magnifier::HitTestClient(*(_BYTE *)(v16 + 16), GesturesEnabled);
          v18 = (_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v16 + 32, v27, *((_QWORD *)a2 + 2));
          if ( !*(_BYTE *)(v16 + 33)
            || (v19 = 1000000LL * *(_QWORD *)(v16 + 64) < *v18 - *(_QWORD *)(v16 + 24), v20 = 1, v19) )
          {
            v20 = 0;
          }
          *(_BYTE *)(v16 + 18) = v20;
          MagnifierRecognizer::Reset((MagnifierRecognizer *)(v16 + 32), (MagnifierProcessor *)((char *)this + 80));
          if ( *(_BYTE *)(v16 + 16) || (v21 = 0, *(_BYTE *)(v16 + 17)) )
            v21 = 1;
          *(_BYTE *)(v16 + 32) = v21;
          *(_BYTE *)(v16 + 35) = *(_BYTE *)(v16 + 17);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v16 + 112));
          Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(v16 + 120), &v30);
          Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v16 + 128), &v31);
          if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v16 + 32)) )
          {
            v22 = **(__int64 (__fastcall ***)(__int64, GUID *, char *))v16;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a4 + 1);
            v23 = v22(v16, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
            if ( v23 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x63,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\m"
                     "agnifierprocessor.cpp",
                (const char *)(unsigned int)v23,
                v25);
            *(_DWORD *)a4 = 1;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 8LL))(v6 + 16);
          return 0LL;
        }
        ++v8;
        v9 = v27[0];
      }
    }
  }
  return 0LL;
}
