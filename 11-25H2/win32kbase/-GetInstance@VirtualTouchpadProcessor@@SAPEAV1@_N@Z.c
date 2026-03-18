/*
 * XREFs of ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x1401184C4
 * Callers:
 *     NtMITConfigureVirtualTouchpad @ 0x1401BA4F0 (NtMITConfigureVirtualTouchpad.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140206828 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct VirtualTouchpadProcessor *__fastcall VirtualTouchpadProcessor::GetInstance(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 UserSessionState; // rbx
  struct VirtualTouchpadProcessor *result; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = *(struct VirtualTouchpadProcessor **)(UserSessionState + 19280);
  if ( !result && v2 )
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
    *(_QWORD *)(UserSessionState + 19280) = result;
  }
  return result;
}
