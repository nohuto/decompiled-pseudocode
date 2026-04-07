/*
 * XREFs of ?GetOutputInfo@CDWMDXGIAdapter@@QEBAAEAUDXGIOutputInfo@@I@Z @ 0x180075C80
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct DXGIOutputInfo *__fastcall CDWMDXGIAdapter::GetOutputInfo(CDWMDXGIAdapter *this, unsigned int a2)
{
  return (struct DXGIOutputInfo *)(*((_QWORD *)this + 44) + 312LL * a2);
}
