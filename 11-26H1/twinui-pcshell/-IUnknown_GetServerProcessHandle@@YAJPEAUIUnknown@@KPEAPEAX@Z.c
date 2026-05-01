/*
 * XREFs of ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x1801B840C
 * Callers:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x18021402C (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180227FB4 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?IUnknown_GetServerProcessId@@YAJPEAUIUnknown@@PEAK@Z @ 0x1801B8470 (-IUnknown_GetServerProcessId@@YAJPEAUIUnknown@@PEAK@Z.c)
 */

int __fastcall IUnknown_GetServerProcessHandle(struct IUnknown *a1, DWORD a2, void **a3)
{
  int result; // eax
  HANDLE v6; // rax
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  dwProcessId = 0;
  result = IUnknown_GetServerProcessId(a1, &dwProcessId);
  if ( result >= 0 )
  {
    v6 = OpenProcess(a2, 0, dwProcessId);
    *a3 = v6;
    if ( v6 )
      return 0;
    else
      return ResultFromKnownLastError();
  }
  return result;
}
