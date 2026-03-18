/*
 * XREFs of DxgkOpenBundleObjectNtHandleFromName @ 0x1401EB850
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall DxgkOpenBundleObjectNtHandleFromName(char *Src)
{
  __int64 v2; // r8
  int v3; // edi
  __int64 v4; // rcx
  int v6; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  char v8; // [rsp+50h] [rbp-28h]
  __int128 v9; // [rsp+58h] [rbp-20h] BYREF
  __int64 v10; // [rsp+68h] [rbp-10h]
  __int64 Srca; // [rsp+88h] [rbp+10h] BYREF

  v6 = -1;
  v7 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v8 = 1;
    v6 = 2205;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v6, 2205);
  v9 = 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v9, Src, 0x18uLL);
  Srca = 0LL;
  LOBYTE(v2) = 1;
  v3 = ObOpenObjectByName(*((_QWORD *)&v9 + 1), g_pDxgkSharedBundleObjectType, v2, 0LL, v9, 0LL, &Srca);
  if ( v3 >= 0 )
    RtlCopyToUser(Src + 16, &Srca, 8uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
  return (unsigned int)v3;
}
