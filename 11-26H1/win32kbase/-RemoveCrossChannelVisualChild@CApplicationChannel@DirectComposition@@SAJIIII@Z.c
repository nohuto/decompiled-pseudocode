/*
 * XREFs of ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x140054718
 * Callers:
 *     NtDCompositionRemoveCrossDeviceVisualChild @ 0x140054700 (NtDCompositionRemoveCrossDeviceVisualChild.c)
 * Callees:
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14005494C (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1400A625C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1400B4390 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1401A5D48 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveCrossChannelVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int SystemVisualFromCrossChannelVisualChild; // edi
  struct DirectComposition::CApplicationChannel *v11; // rbx
  struct DirectComposition::CApplicationChannel *v12; // rsi
  struct DirectComposition::CApplicationChannel *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0LL;
  v14 = 0;
  if ( a3 == a1 )
    goto LABEL_8;
  v13[0] = 0LL;
  SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, v13);
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
  {
    v11 = v13[0];
    v5 = *((_QWORD *)v13[0] + 5);
    SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
                                                v13[0],
                                                a4,
                                                (struct ResourceHandle *)&v14);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v11)(v11);
    v4 = v14;
  }
  a4 = 0;
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
  {
LABEL_8:
    v13[0] = 0LL;
    SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, v13);
    if ( SystemVisualFromCrossChannelVisualChild >= 0 )
    {
      v12 = v13[0];
      if ( !v5 || *((_QWORD *)v13[0] + 5) == v5 )
      {
        v5 = *((_QWORD *)v13[0] + 5);
        SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
                                                    v13[0],
                                                    a2,
                                                    a4,
                                                    v4);
      }
      else
      {
        SystemVisualFromCrossChannelVisualChild = -1073741811;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v12)(v12);
    }
  }
  if ( v4 )
    DirectComposition::CConnection::ReleaseSystemResource(v5, v4);
  return (unsigned int)SystemVisualFromCrossChannelVisualChild;
}
