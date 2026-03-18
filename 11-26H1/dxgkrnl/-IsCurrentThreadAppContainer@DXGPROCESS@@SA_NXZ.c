/*
 * XREFs of ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x14018D674
 * Callers:
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14040977C (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     ?OpenCurrentThreadToken@DXGPROCESS@@SAJPEAPEAX@Z @ 0x14018D708 (-OpenCurrentThreadToken@DXGPROCESS@@SAJPEAPEAX@Z.c)
 */

bool DXGPROCESS::IsCurrentThreadAppContainer(void)
{
  int v0; // edi
  bool v1; // di
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  v0 = 1;
  TokenHandle = 0LL;
  TokenInformation = 1;
  if ( (int)DXGPROCESS::OpenCurrentThreadToken(&TokenHandle) < 0
    || (ReturnLength = 0,
        ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) >= 0) )
  {
    v0 = TokenInformation;
  }
  else
  {
    TokenInformation = 1;
  }
  v1 = v0 != 0;
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return v1;
}
