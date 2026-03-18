/*
 * XREFs of ?VidSchiUpdateHwQueueInteractiveState@@YAXPEAUVIDSCH_HW_CONTEXT@@W4_DXGK_SCHEDULING_PRIORITY_BAND@@1@Z @ 0x140057700
 * Callers:
 *     VidSchiUpdateDdiHwContextPriority @ 0x14011C670 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiUpdateHwQueueInteractiveState(
        struct VIDSCH_HW_CONTEXT *a1,
        enum _DXGK_SCHEDULING_PRIORITY_BAND a2,
        enum _DXGK_SCHEDULING_PRIORITY_BAND a3)
{
  __int64 v3; // rbx
  __int64 *i; // rcx
  char v7; // al
  bool v8; // zf
  int v9; // edx
  _BYTE v10[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  if ( a2 )
  {
    if ( a3 )
      return;
  }
  else if ( a3 == DXGK_SCHEDULING_PRIORITY_BAND_IDLE )
  {
    return;
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v10, (unsigned __int64 *)(*(_QWORD *)(v3 + 24) + 2016LL), 1, 0);
  for ( i = (__int64 *)*((_QWORD *)a1 + 37); i != (__int64 *)((char *)a1 + 296); i = (__int64 *)*i )
  {
    v7 = !*((_BYTE *)i + 136) && a3;
    if ( *((_BYTE *)i + 137) != v7 )
    {
      v8 = *((_DWORD *)i + 29) == 1;
      *((_BYTE *)i + 137) = v7;
      if ( v8 && !*((_BYTE *)a1 + 152) )
      {
        v9 = *(_DWORD *)(v3 + 1732);
        if ( v7 )
        {
          if ( !v9 )
            _InterlockedExchange((volatile __int32 *)(v3 + 504), 1);
          ++*(_DWORD *)(v3 + 1732);
        }
        else
        {
          *(_DWORD *)(v3 + 1732) = v9 - 1;
        }
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
}
