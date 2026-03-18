/*
 * XREFs of ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140122544
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400E8494 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x14003B338 (VidSchIsDeviceBusy.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::WaitOnAllDMAReferencesExceptThis(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rcx
  DXGFASTMUTEX *v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // r10
  _QWORD *i; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = **a2;
  v4 = (DXGFASTMUTEX *)(v3 + 136);
  v5 = (_QWORD **)(v3 + 112);
  while ( 1 )
  {
    DXGFASTMUTEX::Acquire(v4);
    v6 = *v5;
    v7 = 0LL;
LABEL_3:
    if ( v6 != v5 )
    {
      v8 = v6 - 2;
      for ( i = (_QWORD *)*(v6 - 2); ; i = (_QWORD *)*i )
      {
        if ( i == v8 )
        {
          v6 = (_QWORD *)*v6;
          goto LABEL_3;
        }
        if ( i - 5 != a2 )
        {
          v10 = *(i - 4);
          v11 = *(_QWORD *)(v10 + 24);
          if ( v11 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 408LL) & 4) == 0 && VidSchIsDeviceBusy(*(_QWORD *)(v10 + 32)) )
              break;
          }
        }
      }
      v7 = v12;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)v4);
    if ( !v7 )
      break;
    v13[0] = 5LL;
    v13[1] = 0LL;
    VidSchFlushDevice(v7, (int *)v13, 0xFFFFFFFD, 0LL);
  }
}
