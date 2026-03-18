/*
 * XREFs of ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x180187FB8
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z @ 0x180188090 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::Create(struct CCpuClipAntialiasSinkContext **a1)
{
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *v3; // rbx
  int v4; // eax
  HANDLE ProcessHeap; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ObjectCache = CThreadContext::GetObjectCache((struct CCpuClipAntialiasSinkContext *)a1);
  v3 = 0LL;
  v4 = *((_DWORD *)ObjectCache + 1);
  if ( v4 )
  {
    v3 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v3;
    *((_DWORD *)ObjectCache + 1) = v4 - 1;
  }
  if ( v3 || (ProcessHeap = GetProcessHeap(), (v3 = HeapAlloc(ProcessHeap, 0, 0x3D0uLL)) != 0LL) )
  {
    memset_0(v3, 0, 0x3D0uLL);
    *v3 = &CCpuClipAntialiasSinkContext::`vftable';
    v3[2] = v3 + 5;
    v3[3] = v3 + 5;
    v3[4] = v3 + 113;
    (*(void (__fastcall **)(_QWORD *))*v3)(v3);
    result = 0LL;
    *a1 = (struct CCpuClipAntialiasSinkContext *)v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
