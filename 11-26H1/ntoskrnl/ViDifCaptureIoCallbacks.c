/*
 * XREFs of ViDifCaptureIoCallbacks @ 0x140C2672C
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 * Callees:
 *     ViDifFindIoCallbackContext @ 0x140C2E4E0 (ViDifFindIoCallbackContext.c)
 */

void __fastcall ViDifCaptureIoCallbacks(__int64 a1)
{
  __int64 IoCallbackContext; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 (__fastcall *v4)(__int64, IRP *); // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 **v18; // r10
  __int64 v19; // rcx

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) )
  {
    IoCallbackContext = ViDifFindIoCallbackContext(1342177309LL, a1);
    if ( IoCallbackContext )
    {
      if ( (*(_DWORD *)(IoCallbackContext + 8) & 1) != 0 )
      {
        v4 = *(__int64 (__fastcall **)(__int64, IRP *))(v2 + 96);
        if ( v4 )
        {
          if ( v4 != IopInvalidDeviceRequest )
          {
            *(_QWORD *)(v3 + 8) = v4;
            *(_QWORD *)(v2 + 96) = pXdvDriverStartIo;
          }
        }
      }
    }
    v5 = ViDifFindIoCallbackContext(1342177311LL, v2);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 8) & 1) != 0 )
      {
        v8 = *(_QWORD *)(v6 + 104);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 16) = v8;
          *(_QWORD *)(v6 + 104) = pXdvDriverUnload;
        }
      }
    }
    v9 = ViDifFindIoCallbackContext(1342177310LL, v6);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 8) & 1) != 0 )
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( v14 )
        {
          *(_QWORD *)(v11 + 24) = v14;
          *(_QWORD *)(v12 + 8) = pXdvAddDevice;
        }
      }
    }
    v15 = (__int64 *)(v10 + 112);
    v16 = v11 - v10;
    v17 = 28LL;
    v18 = (__int64 **)&off_140FE5190;
    do
    {
      v19 = *v15;
      if ( *v15 && v19 != v13 && (*(_DWORD *)(v18 - 1) & 1) != 0 )
      {
        *(__int64 *)((char *)v15 + v16 - 80) = v19;
        *v15 = **v18;
      }
      ++v15;
      v18 += 4;
      --v17;
    }
    while ( v17 );
  }
}
