/*
 * XREFs of ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x14013EA20
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     wcsncmp @ 0x1401C754C (wcsncmp.c)
 */

void __fastcall CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(
        CKeyboardProcessor *this,
        struct DEVICEINFO *a2,
        unsigned int *a3)
{
  const wchar_t *v3; // rcx
  char v6; // al
  unsigned __int16 v7; // si
  __int64 v8; // xmm0_8
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int128 v20; // [rsp+20h] [rbp-18h]

  v3 = (const wchar_t *)*((_QWORD *)a2 + 25);
  if ( !v3 || wcsncmp(v3, L"\\??\\Root#RDP", 0xCuLL) )
  {
    v6 = *((_BYTE *)a2 + 440);
    if ( v6 == 7 || v6 == 8 || v6 == 4 && *((_BYTE *)a2 + 441) != 0xFF )
    {
      v7 = *(_WORD *)(W32GetUserSessionState((_DWORD)v3, (_DWORD)a2, (_DWORD)a3) + 12828);
      v20 = *(_OWORD *)((char *)a2 + 440);
      v8 = *((_QWORD *)a2 + 57);
      v9 = *((_DWORD *)a2 + 116);
      UserSessionState = W32GetUserSessionState(v11, v10, v12);
      *(_OWORD *)(UserSessionState + 12824) = v20;
      *(_QWORD *)(UserSessionState + 12840) = v8;
      *(_DWORD *)(UserSessionState + 12848) = v9;
      if ( v7 > *(_WORD *)(W32GetUserSessionState(v15, v14, v16) + 12828) )
        *(_WORD *)(W32GetUserSessionState(v18, v17, v19) + 12828) = v7;
    }
  }
  ++*a3;
}
