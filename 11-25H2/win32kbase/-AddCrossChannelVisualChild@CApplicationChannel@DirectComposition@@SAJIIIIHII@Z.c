/*
 * XREFs of ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x140054714
 * Callers:
 *     NtDCompositionAddCrossDeviceVisualChild @ 0x140054C80 (NtDCompositionAddCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004F7D0 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14005426C (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x140054914 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140058E14 (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 *     ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14015336C (-ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddCrossChannelVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int SystemVisualFromCrossChannelVisualChild; // esi
  __int64 v11; // r14
  struct DirectComposition::CApplicationChannel *v13; // r15
  int SystemVisualForCrossChannelVisualChild; // eax
  struct DirectComposition::CApplicationChannel *v16; // r15
  struct DirectComposition::CApplicationChannel *v17; // rdi
  struct DirectComposition::CApplicationChannel *v18; // rdi
  unsigned int v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-Ch] BYREF
  struct DirectComposition::CApplicationChannel *v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+68h]

  v7 = 0;
  v8 = 0;
  v19 = 0;
  SystemVisualFromCrossChannelVisualChild = 0;
  v11 = 0LL;
  v20 = 0;
  if ( !a6 || a6 == a1 )
  {
    v24 = a7;
LABEL_3:
    if ( a3 != a1 )
    {
      v21 = 0LL;
      SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v21);
      if ( SystemVisualFromCrossChannelVisualChild >= 0 )
      {
        v13 = v21;
        if ( !v11 || *((_QWORD *)v21 + 5) == v11 )
        {
          v11 = *((_QWORD *)v21 + 5);
          SystemVisualForCrossChannelVisualChild = DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
                                                     (DirectComposition::CConnection **)v21,
                                                     a4,
                                                     (struct ResourceHandle *)&v20);
          v8 = v20;
          SystemVisualFromCrossChannelVisualChild = SystemVisualForCrossChannelVisualChild;
        }
        else
        {
          SystemVisualFromCrossChannelVisualChild = -1073741811;
        }
        (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v13)(v13);
      }
      a4 = 0;
    }
    if ( SystemVisualFromCrossChannelVisualChild >= 0 )
    {
      v21 = 0LL;
      SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v21);
      if ( SystemVisualFromCrossChannelVisualChild >= 0 )
      {
        v16 = v21;
        if ( !v11 || *((_QWORD *)v21 + 5) == v11 )
        {
          v11 = *((_QWORD *)v21 + 5);
          SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
                                                      v21,
                                                      a2,
                                                      a3,
                                                      a4,
                                                      v8,
                                                      a5,
                                                      v24,
                                                      v7);
        }
        else
        {
          SystemVisualFromCrossChannelVisualChild = -1073741811;
        }
        (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v16)(v16);
      }
    }
    goto LABEL_10;
  }
  v21 = 0LL;
  SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a6, &v21);
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
  {
    v17 = v21;
    v11 = *((_QWORD *)v21 + 5);
    SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
                                                v21,
                                                a7,
                                                (struct ResourceHandle *)&v19);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v17)(v17);
    v7 = v19;
  }
  v24 = 0;
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
    goto LABEL_3;
LABEL_10:
  if ( v7 )
    DirectComposition::CConnection::ReleaseSystemResource(v11, v7);
  if ( v8 )
  {
    if ( SystemVisualFromCrossChannelVisualChild < 0 )
    {
      v21 = 0LL;
      if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, &v21) >= 0 )
      {
        v18 = v21;
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(v21, v8);
        (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v18)(v18);
      }
    }
    DirectComposition::CConnection::ReleaseSystemResource(v11, v8);
  }
  return (unsigned int)SystemVisualFromCrossChannelVisualChild;
}
