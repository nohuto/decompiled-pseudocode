/*
 * XREFs of ?SetChromeOptions@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x180228080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetChromeOptions(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 108) = a2;
  result = 0LL;
  *(_DWORD *)(a1 + 112) = a3;
  return result;
}
