/*
 * XREFs of ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x140159478
 * Callers:
 *     NtMITConfigureVirtualTouchpad @ 0x1401E0B60 (NtMITConfigureVirtualTouchpad.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct VirtualTouchpadProcessor *__fastcall VirtualTouchpadProcessor::GetInstance(int a1, int a2, int a3)
{
  char v3; // di
  __int64 UserSessionState; // rbx
  struct VirtualTouchpadProcessor *result; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  result = *(struct VirtualTouchpadProcessor **)(UserSessionState + 19312);
  if ( !result && v3 )
  {
    result = (struct VirtualTouchpadProcessor *)Win32AllocPoolZInitImpl(256LL, 0x58uLL, 0x70747655u);
    if ( result )
    {
      *((_DWORD *)result + 4) = 0;
      *((_DWORD *)result + 21) = 1000;
      *((_QWORD *)result + 1) = result;
      *(_QWORD *)result = result;
      *((_BYTE *)result + 20) = 1;
    }
    *(_QWORD *)(UserSessionState + 19312) = result;
  }
  return result;
}
