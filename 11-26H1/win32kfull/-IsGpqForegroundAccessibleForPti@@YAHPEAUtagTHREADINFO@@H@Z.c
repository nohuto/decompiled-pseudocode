/*
 * XREFs of ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140294BF0
 * Callers:
 *     CheckCursorClipAccess @ 0x1400293B0 (CheckCursorClipAccess.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1401DDAB0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140173750 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleForPti(struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // xmm0_8
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)a1 + 57);
  v3 = *(_QWORD *)(v2 + 864);
  v4 = *(_DWORD *)(v2 + 872);
  LODWORD(v2) = *(_DWORD *)(v2 + 12) & 0x80000000;
  v6 = v3;
  v7 = v4;
  return IsGpqForegroundAccessibleExplicit(a2, (__int64)a1, (UIPrivilegeIsolation *)&v6, v2);
}
