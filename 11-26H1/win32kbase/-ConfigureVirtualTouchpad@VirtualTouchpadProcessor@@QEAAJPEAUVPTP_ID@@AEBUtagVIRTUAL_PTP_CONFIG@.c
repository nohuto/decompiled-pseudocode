/*
 * XREFs of ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402207D0
 * Callers:
 *     NtMITConfigureVirtualTouchpad @ 0x1401E0B60 (NtMITConfigureVirtualTouchpad.c)
 * Callees:
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x14005A104 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x140220A7C (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 *     ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x140220E68 (-FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PE.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x140221270 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
        VirtualTouchpadProcessor *this,
        struct VPTP_ID *a2,
        const struct tagVIRTUAL_PTP_CONFIG *a3)
{
  __int64 result; // rax
  struct VPTPTouchpad *v7; // rdi
  int RimDevice; // esi
  __int128 v9; // xmm1
  _OWORD *v10; // r14
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int v28; // eax
  char v29; // dl
  VirtualTouchpadProcessor *v30; // rcx
  struct RawInputManagerDeviceObject *v31; // rbx
  _OWORD v32[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 Buf2; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v34[80]; // [rsp+78h] [rbp-90h]
  __int128 v35; // [rsp+C8h] [rbp-40h]
  __int128 v36; // [rsp+D8h] [rbp-30h]
  __int128 v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F8h] [rbp-10h]
  __int128 Buf1; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v40[80]; // [rsp+118h] [rbp+10h]
  __int128 v41; // [rsp+168h] [rbp+60h]
  __int128 v42; // [rsp+178h] [rbp+70h]
  __int128 v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+198h] [rbp+90h]
  struct VPTPTouchpad *v45; // [rsp+1F0h] [rbp+E8h] BYREF

  if ( !IsInputThread((int)this, (int)a2, (int)a3) )
  {
    LODWORD(v45) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 202);
  }
  v45 = 0LL;
  result = VirtualTouchpadProcessor::FindTouchpadForConfig(this, a2, a3, &v45);
  v7 = v45;
  RimDevice = result;
  if ( v45 )
  {
    v9 = *((_OWORD *)a3 + 1);
    v10 = (_OWORD *)((char *)v45 + 40);
    Buf1 = *(_OWORD *)a3;
    v11 = *((_QWORD *)a3 + 18);
    v12 = *((_OWORD *)a3 + 2);
    *(_OWORD *)v40 = v9;
    v13 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v40[16] = v12;
    v14 = *((_OWORD *)a3 + 4);
    *(_OWORD *)&v40[32] = v13;
    v15 = *((_OWORD *)a3 + 5);
    *(_OWORD *)&v40[48] = v14;
    v16 = *((_OWORD *)a3 + 6);
    *(_OWORD *)&v40[64] = v15;
    v17 = *((_OWORD *)a3 + 8);
    v41 = v16;
    v42 = *((_OWORD *)a3 + 7);
    v18 = *(_OWORD *)((char *)v45 + 40);
    v43 = v17;
    v44 = v11;
    v19 = *(_OWORD *)((char *)v45 + 56);
    v20 = *((_QWORD *)v45 + 23);
    Buf2 = v18;
    v21 = *(_OWORD *)((char *)v45 + 72);
    *(_OWORD *)v34 = v19;
    v22 = *(_OWORD *)((char *)v45 + 88);
    *(_OWORD *)&v34[16] = v21;
    v23 = *(_OWORD *)((char *)v45 + 104);
    *(_OWORD *)&v34[32] = v22;
    v24 = *(_OWORD *)((char *)v45 + 120);
    *(_OWORD *)&v34[48] = v23;
    v25 = *(_OWORD *)((char *)v45 + 136);
    *(_OWORD *)&v34[64] = v24;
    v26 = *(_OWORD *)((char *)v45 + 152);
    v35 = v25;
    v27 = *(_OWORD *)((char *)v45 + 168);
    v36 = v26;
    v37 = v27;
    v38 = v20;
    memset(v32, 0, sizeof(v32));
    *(_OWORD *)&v40[4] = v32[0];
    *(_OWORD *)&v40[20] = v32[1];
    *(_OWORD *)&v40[36] = v32[2];
    *(_OWORD *)&v40[52] = v32[3];
    memset(v32, 0, sizeof(v32));
    *(_OWORD *)&v34[4] = v32[0];
    *(_OWORD *)&v34[20] = v32[1];
    *(_OWORD *)&v34[36] = v32[2];
    *(_OWORD *)&v34[52] = v32[3];
    if ( !*(_DWORD *)a3 || !*((_QWORD *)v45 + 4) || (v28 = memcmp(&Buf1, &Buf2, 0x98uLL), v29 = 1, v28) )
      v29 = 0;
    v30 = (struct VPTPTouchpad *)((char *)v7 + 168);
    *v10 = *(_OWORD *)a3;
    *(_OWORD *)((char *)v7 + 56) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)v7 + 72) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)v7 + 88) = *((_OWORD *)a3 + 3);
    *(_OWORD *)((char *)v7 + 104) = *((_OWORD *)a3 + 4);
    *(_OWORD *)((char *)v7 + 120) = *((_OWORD *)a3 + 5);
    *(_OWORD *)((char *)v7 + 136) = *((_OWORD *)a3 + 6);
    *(_OWORD *)((char *)v7 + 152) = *((_OWORD *)a3 + 7);
    *(_OWORD *)((char *)v7 + 168) = *((_OWORD *)a3 + 8);
    *((_QWORD *)v7 + 23) = *((_QWORD *)a3 + 18);
    if ( !v29 )
    {
      v31 = (struct RawInputManagerDeviceObject *)*((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = 0LL;
      if ( !*(_DWORD *)v10 )
        goto LABEL_14;
      RimDevice = VirtualTouchpadProcessor::CreateRimDevice(this, v7);
      if ( RimDevice < 0 )
        *(_DWORD *)v10 = 0;
      if ( !*(_DWORD *)v10 )
      {
LABEL_14:
        VirtualTouchpadProcessor::RemoveTouchpad(v30, v7);
        *(_DWORD *)a2 = 0;
      }
      if ( v31 )
        VirtualTouchpadProcessor::RemoveRimDevice(v30, v31);
    }
    return (unsigned int)RimDevice;
  }
  else
  {
    *(_DWORD *)a2 = 0;
  }
  return result;
}
