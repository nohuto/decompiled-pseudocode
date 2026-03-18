/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1401104F0
 * Callers:
 *     DCompositionSessionInitialize @ 0x1401104D0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z @ 0x14011058C (-AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x140110614 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x140110818 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(__int64 a1)
{
  int v1; // esi
  __int64 DCompSessionState; // rdi
  struct DirectComposition::CCriticalSection **v3; // rdx
  int v4; // ebx
  DirectComposition::CConnection *v5; // rax

  v1 = a1;
  DCompSessionState = W32GetDCompSessionState(a1);
  v4 = DirectComposition::AllocateAndInitializeCriticalSection((DirectComposition *)(DCompSessionState + 32), v3);
  if ( v4 >= 0 && (v1 || (unsigned int)PsGetCurrentProcessSessionId()) )
  {
    v5 = (DirectComposition::CConnection *)Win32AllocPoolZInitImpl(256LL, 0x26CC0uLL, 0x63634344u);
    if ( v5 )
      v5 = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection(v5);
    *(_QWORD *)(DCompSessionState + 16) = v5;
    if ( v5 )
      return (unsigned int)DirectComposition::CConnection::Initialize(v5);
    else
      return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
