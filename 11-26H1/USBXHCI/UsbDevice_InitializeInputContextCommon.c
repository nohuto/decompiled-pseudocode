/*
 * XREFs of UsbDevice_InitializeInputContextCommon @ 0x14001D07C
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14001CF0C (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextCommon(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // edx
  void *v6; // rcx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // ecx

  v1 = a1 + 624;
  if ( !*(_BYTE *)(a1 + 665) )
    v1 = a1 + 616;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v4 = *(_QWORD *)(v1 + 32);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 44);
    v6 = *(void **)(v4 + 16);
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  memset(v6, 0, v5);
  v7 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
  if ( v7 )
    v7 = *(_QWORD *)(v7 + 16);
  v8 = -(*(_DWORD *)(v3 + 104) & 4);
  *(_DWORD *)(v7 + 4) |= 1u;
  v9 = v7 + (v8 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 144) )
  {
    v12 = *(_DWORD *)v9 | 0x4000000;
    *(_DWORD *)v9 = v12;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(a1 + 148);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 152) > 1u )
        *(_DWORD *)v9 = v12 | 0x2000000;
      *(_DWORD *)(v9 + 8) ^= (*(_DWORD *)(v9 + 8) ^ (*(_DWORD *)(a1 + 156) << 16)) & 0x30000;
    }
  }
  result = *(_QWORD *)(a1 + 8);
  if ( _bittest64((const signed __int64 *)(result + 736), 0x3Du) )
  {
    if ( !*(_BYTE *)(a1 + 144) )
    {
      v11 = *(_QWORD *)(a1 + 24);
      if ( v11 )
      {
        if ( *(int *)(a1 + 20) < 2 )
        {
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v11,
                     off_14006B128);
          if ( *(_DWORD *)(result + 152) > 1u )
            *(_DWORD *)v9 |= 0x2000000u;
        }
      }
    }
  }
  return result;
}
