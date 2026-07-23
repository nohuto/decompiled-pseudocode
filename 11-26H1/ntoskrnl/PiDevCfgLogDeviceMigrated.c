/*
 * XREFs of PiDevCfgLogDeviceMigrated @ 0x140A46A3C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x140498708 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 */

void __fastcall PiDevCfgLogDeviceMigrated(__int64 a1, __int64 a2, int a3)
{
  const wchar_t *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( (byte_140EF412A & 0x10) != 0 && (byte_140EF412A & 0x40) != 0 && (byte_140EF412A & 0x20) != 0 )
  {
    v5 = (const wchar_t *)&dword_140BE88B4;
    v6 = a2 + 80;
    if ( a3 < 0 )
    {
      v7 = *(_QWORD *)(a2 + 152);
      if ( (*(_DWORD *)(a2 + 16) & 3) != 0 )
      {
        if ( v7 )
          v5 = *(const wchar_t **)(a2 + 152);
        McTemplateK0zzjzitd_EtwWriteTransfer(
          v6,
          (__int64)KMPnPEvt_DeviceMigrate_Warning,
          (__int64)v5,
          *(const wchar_t **)(a1 + 8),
          *(const wchar_t **)(a2 + 32),
          v6,
          v5,
          *(_QWORD *)(a2 + 184),
          *(_DWORD *)(a2 + 176),
          a3);
      }
      else
      {
        if ( v7 )
          v5 = *(const wchar_t **)(a2 + 152);
        McTemplateK0zzjzitd_EtwWriteTransfer(
          v6,
          (__int64)KMPnPEvt_DeviceMigrate_Failure,
          (__int64)v5,
          *(const wchar_t **)(a1 + 8),
          *(const wchar_t **)(a2 + 32),
          v6,
          v5,
          *(_QWORD *)(a2 + 184),
          *(_DWORD *)(a2 + 176),
          a3);
      }
    }
    else
    {
      if ( *(_QWORD *)(a2 + 152) )
        v5 = *(const wchar_t **)(a2 + 152);
      McTemplateK0zzjzitd_EtwWriteTransfer(
        v6,
        (__int64)KMPnPEvt_DeviceMigrate_Success,
        (__int64)v5,
        *(const wchar_t **)(a1 + 8),
        *(const wchar_t **)(a2 + 32),
        v6,
        v5,
        *(_QWORD *)(a2 + 184),
        *(_DWORD *)(a2 + 176),
        a3);
    }
  }
}
