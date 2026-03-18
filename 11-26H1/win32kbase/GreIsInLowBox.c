/*
 * XREFs of GreIsInLowBox @ 0x1401FAE70
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     GreOpenThreadToken @ 0x1401FAEFC (GreOpenThreadToken.c)
 */

__int64 GreIsInLowBox()
{
  int v0; // edi
  unsigned int v1; // ebx
  NTSTATUS v2; // ebp
  int TokenInformation; // [rsp+50h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+60h] [rbp+18h] BYREF

  v0 = 1;
  v1 = 0;
  TokenInformation = 1;
  TokenHandle = 0LL;
  v2 = GreOpenThreadToken(&TokenHandle);
  if ( v2 >= 0 )
  {
    ReturnLength = 0;
    v2 = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v2 >= 0 )
    v0 = TokenInformation;
  LOBYTE(v1) = v0 != 0;
  return v1;
}
