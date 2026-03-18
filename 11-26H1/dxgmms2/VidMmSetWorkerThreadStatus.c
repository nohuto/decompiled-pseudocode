/*
 * XREFs of VidMmSetWorkerThreadStatus @ 0x14011CE30
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 */

LONG __fastcall VidMmSetWorkerThreadStatus(__int64 *a1, char a2)
{
  struct _KEVENT *v4; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx

  if ( a2 == 6 )
  {
    v6 = *a1;
    *(_QWORD *)(v6 + 40184) = VidMmiQuerySystemTime();
    *(_QWORD *)(v6 + 40192) = 0LL;
    v7 = *a1;
    *(_QWORD *)(v7 + 40224) = VidMmiQuerySystemTime();
    *(_QWORD *)(v7 + 40232) = 0LL;
  }
  v4 = (struct _KEVENT *)(a1[3] + 48);
  *((_BYTE *)a1 + 212) = a2;
  return KeSetEvent(v4, 0, 0);
}
