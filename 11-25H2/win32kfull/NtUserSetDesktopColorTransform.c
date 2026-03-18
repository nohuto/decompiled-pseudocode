/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x14029ED30
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x140324F80 (DwmAsyncSetDesktopColorTransform.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int64 __fastcall NtUserSetDesktopColorTransform(void *Src)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  void *v6; // rax
  _OWORD v8[6]; // [rsp+28h] [rbp-E0h] BYREF
  int v9; // [rsp+88h] [rbp-80h]
  __int128 v10; // [rsp+90h] [rbp-78h]
  __int128 v11; // [rsp+A0h] [rbp-68h]
  __int128 v12; // [rsp+B0h] [rbp-58h]
  __int128 v13; // [rsp+C0h] [rbp-48h]
  __int128 v14; // [rsp+D0h] [rbp-38h]
  __int128 v15; // [rsp+E0h] [rbp-28h]
  int v16; // [rsp+F0h] [rbp-18h]

  memset_0(v8, 0, 0x64uLL);
  RtlCopyFromUser(v8, Src, 0x64uLL);
  v10 = v8[0];
  v11 = v8[1];
  v12 = v8[2];
  v13 = v8[3];
  v14 = v8[4];
  v15 = v8[5];
  v16 = v9;
  v4 = PtiCurrent(v3, v2);
  v6 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*((_QWORD *)v4 + 62) + 8LL), v5);
  return (unsigned __int64)(unsigned int)~DwmAsyncSetDesktopColorTransform(v6) >> 31;
}
