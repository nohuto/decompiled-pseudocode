/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x14003A7D0
 * Callers:
 *     RaUnitRegisterForIdleDetection @ 0x1401B7450 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0quuuqqtt_EtwWriteTransfer @ 0x14007E7F4 (McTemplateK0quuuqqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r9
  _QWORD **v4; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v8; // rbp
  int v9; // r8d
  int v10; // r10d
  int v11; // edx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = (_QWORD **)(a1 + 1872);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 110) & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(v3 + 6088);
    v11 = *((_DWORD *)*v4 + 7);
    if ( v10 != v11 || a3 )
    {
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
        McTemplateK0quuuqqtt_EtwWriteTransfer(
          (*((_DWORD *)*v4 + 8) >> 10) & 1,
          v11,
          a3,
          *(_DWORD *)(v3 + 56),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          v11,
          v10,
          ((*v4)[4] & 0x400) != 0,
          ((*v4)[4] & 0x800) != 0);
      *((_DWORD *)*v4 + 7) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 6088LL);
      return PoFxSetDeviceIdleTimeout(**v4, 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 6088LL));
    }
  }
  else
  {
    if ( a2 == -1 )
    {
      v8 = -1LL;
    }
    else
    {
      if ( a2 < *((_DWORD *)*v4 + 6) )
        v5 = *((_DWORD *)*v4 + 6);
      result = v5;
      v8 = 10000LL * v5;
    }
    v9 = *((_DWORD *)*v4 + 7);
    if ( v5 != v9 )
    {
      if ( StorEtwLoggingEnabled )
      {
        if ( (byte_140173442 & 0x10) != 0 )
          McTemplateK0quuuqqtt_EtwWriteTransfer(
            (*((_DWORD *)*v4 + 8) >> 10) & 1,
            a2,
            (_BYTE)v9,
            *(_DWORD *)(v3 + 56),
            *(_BYTE *)(a1 + 104),
            *(_BYTE *)(a1 + 105),
            *(_BYTE *)(a1 + 106),
            v9,
            v5,
            ((*v4)[4] & 0x400) != 0,
            ((*v4)[4] & 0x800) != 0);
      }
      *((_DWORD *)*v4 + 7) = v5;
      return PoFxSetDeviceIdleTimeout(**v4, v8);
    }
  }
  return result;
}
