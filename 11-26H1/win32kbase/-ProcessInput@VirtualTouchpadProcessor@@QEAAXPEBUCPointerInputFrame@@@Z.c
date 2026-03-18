/*
 * XREFs of ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140064808 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETE.c)
 * Callees:
 *     RIMIDE_InjectGenericHidInput @ 0x14005FCEC (RIMIDE_InjectGenericHidInput.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1401C5C70 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1402207A8 (--_GVPTPContact@@QEAAPEAXI@Z.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x140220C4C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x140221270 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 */

void __fastcall VirtualTouchpadProcessor::ProcessInput(
        VirtualTouchpadProcessor *this,
        const struct CPointerInputFrame *a2,
        int a3)
{
  VPTPTouchpad *v5; // rbx
  unsigned __int16 v6; // r15
  unsigned int v7; // r14d
  struct tagHID_POINTER_DEVICE_INFO *v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // edx
  struct VPTPTouchpad *v11; // rsi
  PVOID v12; // r10
  int v13; // r9d
  float v14; // xmm0_4
  int v15; // edx
  int v16; // r8d
  char v17; // r11
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r9
  char v23; // cl
  VirtualTouchpadProcessor *v24; // rcx
  unsigned __int64 v25; // rax
  PVOID Buffer; // [rsp+80h] [rbp+18h] BYREF
  VPTPTouchpad *v27; // [rsp+88h] [rbp+20h] BYREF

  if ( *(VirtualTouchpadProcessor **)this == this )
    return;
  if ( !IsInputThread((int)this, (int)a2, a3) )
    return;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    v8 = (struct tagHID_POINTER_DEVICE_INFO *)*((_QWORD *)a2 + 32);
    v27 = 0LL;
    v9 = *((_QWORD *)a2 + 30) + 480LL * v7;
    Buffer = 0LL;
    if ( !VirtualTouchpadProcessor::FindTouchpadAndContact(
            this,
            v8,
            (const struct CPointerInfoNode *)v9,
            &v27,
            (struct VPTPContact **)&Buffer) )
      goto LABEL_38;
    v11 = v27;
    v12 = Buffer;
    if ( *((_QWORD *)v27 + 4) )
    {
      if ( !v5 )
      {
        v5 = v27;
LABEL_9:
        v13 = *((_DWORD *)v5 + 48);
        v14 = (float)*((int *)this + 21);
        v15 = (int)(float)(v14 * *((float *)Buffer + 6));
        v16 = (int)(float)(v14 * *((float *)Buffer + 5));
        if ( v16 < v13 || v16 > *((_DWORD *)v5 + 50) || v15 < *((_DWORD *)v5 + 49) || v15 > *((_DWORD *)v5 + 51) )
        {
          v18 = *((_DWORD *)v5 + 50);
          v17 = 0;
          v19 = v18;
          if ( v18 >= v16 )
            v19 = (int)(float)(v14 * *((float *)Buffer + 5));
          if ( v13 <= v19 )
          {
            if ( v18 < v16 )
              v16 = *((_DWORD *)v5 + 50);
          }
          else
          {
            v16 = *((_DWORD *)v5 + 48);
          }
          v20 = *((_DWORD *)v5 + 51);
          v21 = v20;
          if ( v20 >= v15 )
            v21 = (int)(float)(v14 * *((float *)Buffer + 6));
          if ( *((_DWORD *)v5 + 49) <= v21 )
          {
            if ( v20 < v15 )
              v15 = *((_DWORD *)v5 + 51);
          }
          else
          {
            v15 = *((_DWORD *)v5 + 49);
          }
        }
        else
        {
          v17 = 1;
        }
        v22 = 11LL * v6;
        *(_WORD *)((char *)this + v22 + 27) = *(_WORD *)(v9 + 160);
        *(_DWORD *)((char *)this + v22 + 29) = v16;
        *(_DWORD *)((char *)this + 11 * v6 + 33) = v15;
        v10 = 1;
        if ( v17 && (*(_DWORD *)(v9 + 180) & 0x4000) != 0 )
          v23 = 2;
        else
          v23 = 0;
        *((_BYTE *)this + v22 + 26) = v23 | ((*(_DWORD *)(v9 + 180) & 4) != 0);
        ++v6;
        goto LABEL_31;
      }
      if ( v27 == v5 )
        goto LABEL_9;
    }
LABEL_31:
    if ( (*(_DWORD *)(v9 + 180) & 0x40000) != 0 )
    {
      if ( v12 )
        VPTPContact::`scalar deleting destructor'(v12, v10);
      if ( !VPTPTouchpad::IsActive(v11) )
      {
        if ( v11 == v5 )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 364);
        VirtualTouchpadProcessor::RemoveTouchpad(v24, v11);
      }
    }
LABEL_38:
    ++v7;
  }
  while ( v7 < *((_DWORD *)a2 + 12) );
  if ( v6 )
  {
    if ( !v5 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 378);
    v25 = (unsigned __int64)(10000LL * *((_QWORD *)a2 + 27)) / gliQpcFreq.QuadPart;
    *(_WORD *)((char *)this + 23) = v6;
    *(_WORD *)((char *)this + 21) = v25;
    if ( (int)RIMIDE_InjectGenericHidInput(*((_QWORD *)v5 + 4), 0, (char *)this + 20, 0x3Du) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 390);
  }
}
