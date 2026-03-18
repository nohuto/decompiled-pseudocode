/*
 * XREFs of ?Initialize@CTouchProcessor@@SAJXZ @ 0x14018A808
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1401B5BE4 (--0CTouchProcessor@@QEAA@XZ.c)
 */

__int64 CTouchProcessor::Initialize(void)
{
  CTouchProcessor *v0; // rax
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  CTouchProcessor *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v0 = (CTouchProcessor *)Win32AllocPoolZInitImpl(256LL, 0xA8uLL, 0x43547072u);
  v4 = 0LL;
  if ( v0 )
    v4 = CTouchProcessor::CTouchProcessor(v0);
  *(_QWORD *)(W32GetUserSessionState(v2, v1, v3) + 3256) = v4;
  return *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 3256) == 0LL ? 0xC0000017 : 0;
}
