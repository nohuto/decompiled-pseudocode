/*
 * XREFs of UsbhGetMsOs20DescriptorSet @ 0x14004285C
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetMsOs20DescriptorSet(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 Pool2; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // esi
  void *v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h]
  char v13[2]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+42h] [rbp-26h]
  __int16 v15; // [rsp+46h] [rbp-22h]
  __int16 v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(a3 + 4), 1112885333LL);
  *((_QWORD *)v6 + 355) = Pool2;
  if ( Pool2 )
  {
    v9 = *((_QWORD *)v6 + 148);
    v13[1] = *(_BYTE *)(a3 + 6);
    v15 = *(_WORD *)(a3 + 4);
    v16 = v15;
    v13[0] = -64;
    v14 = 458752;
    v10 = UsbhSyncSendCommandToDevice(v9, a2, v13, Pool2, &v16, v12, &v17);
    if ( v10 >= 0 )
    {
      *((_WORD *)v6 + 1414) = v16;
    }
    else
    {
      Log(a1, 4, 1297297969, 0LL, 0LL);
      v11 = (void *)*((_QWORD *)v6 + 355);
      *((_WORD *)v6 + 1414) = 0;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        *((_QWORD *)v6 + 355) = 0LL;
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    Log(a1, 4, 1297297968, 0LL, 0LL);
    result = 3221225626LL;
    *((_WORD *)v6 + 1414) = 0;
  }
  return result;
}
