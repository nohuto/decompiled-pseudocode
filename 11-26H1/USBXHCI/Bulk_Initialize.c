/*
 * XREFs of Bulk_Initialize @ 0x140081F60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Bulk_Initialize(__int64 a1)
{
  char v1; // bp
  int v3; // r14d
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int16 v6; // ax
  __int64 v7; // rax

  v1 = 0;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  *(_QWORD *)(a1 + 400) = a1 + 392;
  *(_QWORD *)(a1 + 392) = a1 + 392;
  v3 = 5;
  *(_QWORD *)(a1 + 416) = a1 + 408;
  *(_QWORD *)(a1 + 408) = a1 + 408;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x20000LL) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && !*(_WORD *)(v4 + 100)
      && *(_BYTE *)(v4 + 39)
      && ((v5 = *(_DWORD *)(v4 + 128), v5 == 5) || v5 == 1) )
    {
      v6 = *(_WORD *)(v4 + 105);
    }
    else
    {
      v6 = *(_WORD *)(v4 + 100) & 0x7FF;
    }
    if ( v6 >= 8u && *(char *)(*(_QWORD *)(a1 + 56) + 98LL) >= 0 )
      v1 = 1;
  }
  *(_BYTE *)(a1 + 328) = v1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL);
  if ( (v7 & 0x8000000000LL) != 0 || (v7 & 8) != 0 )
    v3 = 1;
  *(_DWORD *)(a1 + 352) = v3;
  return 0LL;
}
