/*
 * XREFs of ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x140220C4C
 * Callers:
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1401C4084 (-CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIR.c)
 *     _lambda_d5bddfc2fe24e4274cd124852b066150_::operator() @ 0x1402206EC (_lambda_d5bddfc2fe24e4274cd124852b066150_--operator().c)
 */

char __fastcall VirtualTouchpadProcessor::FindTouchpadAndContact(
        VirtualTouchpadProcessor **this,
        struct tagHID_POINTER_DEVICE_INFO *const a2,
        const struct CPointerInfoNode *a3,
        struct VPTPTouchpad **a4,
        struct VPTPContact **a5)
{
  VirtualTouchpadProcessor *v5; // rdi
  char *v6; // r15
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *i; // rbx
  __int64 *v18; // rax
  __int64 v19; // xmm0_8
  struct VPTPContact **v20; // rax
  __int64 v21; // r9
  struct VPTPContact **v22; // rax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+74h] [rbp+Ch]
  char v26; // [rsp+80h] [rbp+18h] BYREF

  v5 = *this;
  v6 = (char *)a3 + 168;
  v11 = 0;
  while ( v5 != (VirtualTouchpadProcessor *)this )
  {
    if ( (*((_DWORD *)v6 + 3) & 0x10000) != 0 )
    {
      if ( *((_DWORD *)a3 + 119) == *((_DWORD *)v5 + 52) )
      {
        v13 = Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x70747655u);
        if ( v13 )
        {
          v14 = *((_DWORD *)v5 + 52);
          *(_WORD *)(v13 + 16) = 0;
          *(_QWORD *)(v13 + 20) = 0LL;
          *(_DWORD *)(v13 + 28) = v14;
          *(_QWORD *)(v13 + 32) = (char *)v5 + 16;
          if ( *((VirtualTouchpadProcessor **)v5 + 2) == (VirtualTouchpadProcessor *)((char *)v5 + 16) )
          {
            v24 = v14;
            v25 = 1;
            SendMessageTo(18, (int)&v24, 8);
          }
          v15 = *(__int64 **)(v13 + 32);
          v12 = *v15;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            __fastfail(3u);
          *(_QWORD *)v13 = v12;
          *(_QWORD *)(v13 + 8) = v15;
          *(_QWORD *)(v12 + 8) = v13;
          *v15 = v13;
        }
        else
        {
          v13 = 0LL;
        }
        *(_WORD *)(v13 + 16) = *((_WORD *)a3 + 80);
        *(_QWORD *)(v13 + 20) = *(_QWORD *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                                             v12,
                                             (__int64)&v24,
                                             a2,
                                             (__int64)v6,
                                             (float *)v5 + 15);
        InputTraceLogging::VirtualTouchpad::CaptureContact((__int64)v6, *((_DWORD *)v5 + 52), (_DWORD *)v5 + 10, v21);
        v22 = a5;
        v11 = 1;
        *a4 = v5;
        *v22 = (struct VPTPContact *)v13;
        break;
      }
    }
    else
    {
      v16 = (__int64)v5 + 16;
      for ( i = (__int64 *)*((_QWORD *)v5 + 2); i != (__int64 *)v16; i = (__int64 *)*i )
      {
        if ( *((_WORD *)i + 8) == *((_WORD *)a3 + 80) )
        {
          if ( *((_DWORD *)a3 + 119) != *((_DWORD *)v5 + 52) )
          {
            v24 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 639);
          }
          v18 = (__int64 *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                             v16,
                             (__int64)&v26,
                             a2,
                             (__int64)v6,
                             (float *)v5 + 15);
          *a4 = v5;
          v11 = 1;
          v19 = *v18;
          v20 = a5;
          *(__int64 *)((char *)i + 20) = v19;
          *v20 = (struct VPTPContact *)i;
          break;
        }
      }
    }
    v5 = *(VirtualTouchpadProcessor **)v5;
  }
  if ( v11 != (*((_DWORD *)a3 + 119) != 0) )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 654);
  }
  return v11;
}
