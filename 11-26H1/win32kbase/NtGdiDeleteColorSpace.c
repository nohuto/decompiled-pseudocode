/*
 * XREFs of NtGdiDeleteColorSpace @ 0x1401F2770
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C (-bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall NtGdiDeleteColorSpace(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return bDeleteColorSpace(*(_QWORD *)(SessionState + 88), a1, 0);
}
