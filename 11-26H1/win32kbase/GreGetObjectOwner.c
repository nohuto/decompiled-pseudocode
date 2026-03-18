/*
 * XREFs of GreGetObjectOwner @ 0x1400C5980
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1400C57B0 (NtGdiDeleteObjectApp.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1400D02B8 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetObjectOwner(__int64 a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 SessionState; // rax
  __int64 v6; // rax

  v3 = a1;
  v4 = -2147483614;
  SessionState = W32GetSessionState(a1);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 16LL))(
         *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
         (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  if ( v6 && *(unsigned __int8 *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == HIWORD(v3) )
    return *(_DWORD *)(v6 + 8) & 0xFFFFFFFE;
  return v4;
}
