/*
 * XREFs of ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140005C68
 * Callers:
 *     VidSchTerminateHwQueue @ 0x140005B00 (VidSchTerminateHwQueue.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 */

void __fastcall VidSchiRemoveHwQueueFromSyncPoints(struct VIDSCH_HW_QUEUE *a1)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 *v4; // rcx
  __int64 i; // rdx
  __int64 v6; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL);
  v7[0] = *(_QWORD *)(v3 + 40) + 2016LL;
  v8 = 0;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v7);
  v4 = *(__int64 **)(v3 + 1872);
  if ( v4 != (__int64 *)(v3 + 1872) )
  {
    do
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 32); i = (unsigned int)(i + 1) )
      {
        v6 = v4[9];
        if ( *(struct VIDSCH_HW_QUEUE **)(v6 + 24 * i) == a1 )
        {
          *(_QWORD *)(v6 + 24 * i) = 0LL;
          v2 = 1;
          break;
        }
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 != (__int64 *)(v3 + 1872) );
    if ( v2 )
      VidSchiCheckPendingDeviceCommand(v3);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
