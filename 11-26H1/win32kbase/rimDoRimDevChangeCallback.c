/*
 * XREFs of rimDoRimDevChangeCallback @ 0x1400960B4
 * Callers:
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall rimDoRimDevChangeCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // r11
  int v8; // r8d
  void (__fastcall *v9)(_DWORD *); // r10
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 824) )
  {
    v10[0] = a3;
    v4 = *(unsigned int *)(a2 + 48);
    v10[3] = 0;
    v5 = RimDeviceTypeToRimInputType(a2, v4);
    v11 = *(_QWORD *)(v6 + 400);
    v12 = *(_QWORD *)(v7 + 32);
    v10[2] = v5;
    v10[1] = v8;
    v9(v10);
  }
}
