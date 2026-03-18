/*
 * XREFs of NVMeBuildDevicePollingConfiguration @ 0x1400240C0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14002308C (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall NVMeBuildDevicePollingConfiguration(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned __int16 v8; // cx
  bool v9; // zf
  int v10; // eax
  int v11; // eax

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( v4 )
  {
    LOBYTE(SrbExtension) = *(_BYTE *)(v5 + 3);
    if ( (_BYTE)SrbExtension == 1 )
    {
      v7 = *(_QWORD *)(a1 + 1656);
      if ( *v4 == 1313882949 )
      {
        *(_WORD *)(a1 + 3772) = *(_WORD *)v7;
        LODWORD(SrbExtension) = Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline();
        v8 = *(_WORD *)(a1 + 3772);
        v9 = (_DWORD)SrbExtension == 0;
        LOBYTE(SrbExtension) = 0;
        if ( v9 )
        {
          if ( v8 == 256 )
          {
            v10 = *(unsigned __int16 *)(v7 + 2);
            *(_DWORD *)(a1 + 3776) = v10;
            if ( v10 )
              *(_BYTE *)(a1 + 3752) = 1;
            *(_DWORD *)(a1 + 3780) = *(_DWORD *)(v7 + 4);
            LODWORD(SrbExtension) = *(_DWORD *)(v7 + 8);
            *(_DWORD *)(a1 + 3784) = SrbExtension;
          }
        }
        else if ( v8 >= 0x100u )
        {
          v11 = *(unsigned __int16 *)(v7 + 2);
          *(_DWORD *)(a1 + 3776) = v11;
          if ( v11 )
            *(_BYTE *)(a1 + 3752) = 1;
          *(_DWORD *)(a1 + 3780) = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(a1 + 3784) = *(_DWORD *)(v7 + 8);
          LOBYTE(SrbExtension) = 1;
          if ( v8 >= 0x101u )
          {
            *(_WORD *)(a1 + 3788) = *(_WORD *)(v7 + 12);
            LOWORD(SrbExtension) = *(_WORD *)(v7 + 14);
            *(_WORD *)(a1 + 3790) = SrbExtension;
          }
        }
      }
    }
  }
  *(_BYTE *)(v6 + 4225) |= 8u;
  return SrbExtension;
}
