/*
 * XREFs of ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401D034C
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1402728F8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 */

void __fastcall RefreshMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 1512) + 8LL);
  if ( *(_QWORD *)a1 != v4 )
  {
    v6 = ValidateHwnd(v4);
    if ( v6 )
      FindTimer(v6, 65523LL, 2u, 1, 0LL);
    *(_QWORD *)(*(_QWORD *)(v1 + 1512) + 8LL) = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)(v1 + 1512) + 16LL) = v3 - 101;
  }
  v5 = *(_QWORD *)(v1 + 1512);
  if ( (unsigned int)(v3 - *(_DWORD *)(v5 + 16)) > 0x64 )
  {
    *(_DWORD *)(v5 + 16) = v3;
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
      InternalSetTimer((__int64)a1, 65523LL, 0x47Eu, (__int64)MiPIdleTimerFunc, 0, 66);
  }
}
