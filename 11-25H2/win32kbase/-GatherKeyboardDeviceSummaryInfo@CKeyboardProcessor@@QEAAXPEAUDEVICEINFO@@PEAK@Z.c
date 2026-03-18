/*
 * XREFs of ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x140106E00
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x140106ACC (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     wcsncmp @ 0x1401A33BC (wcsncmp.c)
 */

void __fastcall CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(
        CKeyboardProcessor *this,
        struct DEVICEINFO *a2,
        unsigned int *a3)
{
  const wchar_t *v3; // rcx
  unsigned __int16 v6; // si
  __int64 v7; // xmm0_8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-18h]

  v3 = (const wchar_t *)*((_QWORD *)a2 + 25);
  if ( !v3 || wcsncmp(v3, L"\\??\\Root#RDP", 0xCuLL) )
  {
    LOBYTE(v3) = *((_BYTE *)a2 + 440);
    if ( (unsigned __int8)((_BYTE)v3 - 7) <= 1u || (_BYTE)v3 == 4 && *((_BYTE *)a2 + 441) != 0xFF )
    {
      v6 = *(_WORD *)(W32GetUserSessionState(v3, a2) + 12828);
      v16 = *(_OWORD *)((char *)a2 + 440);
      v7 = *((_QWORD *)a2 + 57);
      v8 = *((_DWORD *)a2 + 116);
      UserSessionState = W32GetUserSessionState(v10, v9);
      *(_OWORD *)(UserSessionState + 12824) = v16;
      *(_QWORD *)(UserSessionState + 12840) = v7;
      *(_DWORD *)(UserSessionState + 12848) = v8;
      if ( v6 > *(_WORD *)(W32GetUserSessionState(v13, v12) + 12828) )
        *(_WORD *)(W32GetUserSessionState(v15, v14) + 12828) = v6;
    }
  }
  ++*a3;
}
