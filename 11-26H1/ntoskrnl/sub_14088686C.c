/*
 * XREFs of sub_14088686C @ 0x14088686C
 * Callers:
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_140A89B4C @ 0x140A89B4C (sub_140A89B4C.c)
 *     WbHeapExecutionUnloadModule @ 0x140AF0A5C (WbHeapExecutionUnloadModule.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B14A0C (WbInPlaceEncryptionUnloadModule.c)
 */

__int64 __fastcall sub_14088686C(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  _QWORD *v6; // rbx
  void *v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( a3 >= 0x10 && *(_QWORD *)a2 == 9LL )
  {
    v5 = sub_140A89B4C(16LL, &v8);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
      {
        RtlCopyFromUser(v8, *(void **)(a2 + 8), 0x10uLL);
      }
      else
      {
        ProbeForRead(*(volatile void **)(a2 + 8), 0x10uLL, 1u);
        *(_OWORD *)v8 = *(_OWORD *)*(_QWORD *)(a2 + 8);
      }
      if ( *(_DWORD *)v8 )
      {
        v5 = -1073741811;
      }
      else
      {
        v6 = v8;
        WbHeapExecutionUnloadModule(a1, *((_QWORD *)v8 + 1));
        WbInPlaceEncryptionUnloadModule(a1, v6[1]);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  SddlpFree(v8);
  return (unsigned int)v5;
}
